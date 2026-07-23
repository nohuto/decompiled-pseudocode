/*
 * XREFs of MiLogMdlRangeEvent @ 0x140672F78
 * Callers:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     MiAllocatePagesForMdl @ 0x14039469C (MiAllocatePagesForMdl.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiGetPfnPidSafe @ 0x140313734 (MiGetPfnPidSafe.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogMdlRangeEvent(_KPROCESS *Process, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int16 v6; // r14
  _QWORD *v7; // rdi
  __int64 v8; // rsi
  __int64 PfnPidSafe; // rbx
  unsigned __int8 v10; // r10
  __int64 result; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  _QWORD v15[3]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v16; // [rsp+48h] [rbp-30h] BYREF
  int v17; // [rsp+50h] [rbp-28h]
  int v18; // [rsp+54h] [rbp-24h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = 48LL * *a2 - 0x220000000000LL;
  if ( ((*(_QWORD *)(v8 + 40) >> 60) & 7) == 1 )
  {
    if ( !Process )
    {
      MiLockPageInline(48LL * *a2 - 0x220000000000LL, (__int64)a2, a3, a4);
      PfnPidSafe = (unsigned int)MiGetPfnPidSafe(v8, 3u);
      MiUnlockPage(v8, v10);
      goto LABEL_9;
    }
    if ( *(_QWORD *)&Process->Header.Lock == 399680LL )
    {
      if ( ((__int64)Process->Header.WaitListHead.Flink & 1) == 0 )
      {
        PfnPidSafe = 0LL;
LABEL_9:
        result = 9LL;
        goto LABEL_11;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
    }
    PfnPidSafe = LODWORD(Process[1].Header.WaitListHead.Flink);
    goto LABEL_9;
  }
  PfnPidSafe = 0LL;
  result = 10LL;
LABEL_11:
  if ( v5 )
  {
    v12 = result | (16 * PfnPidSafe);
    do
    {
      v13 = v7;
      v15[1] = *v7;
      v15[0] = v12;
      do
      {
        v14 = v7++;
        --v5;
      }
      while ( v5 && *v7 == a5 + *v14 );
      v18 = 0;
      v17 = 24;
      v15[2] = v7 - v13;
      v16 = v15;
      result = EtwTraceKernelEvent((int)&v16, 1, 0x20000001u, v6, 290462468);
    }
    while ( v5 );
  }
  return result;
}
