/*
 * XREFs of MiLogMdlRangeEvent @ 0x140666300
 * Callers:
 *     MiFreePagesFromMdl @ 0x14038CC40 (MiFreePagesFromMdl.c)
 *     MiAllocatePagesForMdl @ 0x1404157CC (MiAllocatePagesForMdl.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiGetPfnPidSafe @ 0x140437E8C (MiGetPfnPidSafe.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogMdlRangeEvent(_KPROCESS *Process, _QWORD *a2, __int16 a3, __int64 a4, __int64 a5)
{
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

  v7 = a2;
  v8 = 48LL * *a2 - 0x220000000000LL;
  if ( ((*(_QWORD *)(v8 + 40) >> 60) & 7) == 1 )
  {
    if ( !Process )
    {
      MiLockPageInline(48LL * *a2 - 0x220000000000LL);
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
  if ( a4 )
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
        --a4;
      }
      while ( a4 && *v7 == a5 + *v14 );
      v18 = 0;
      v17 = 24;
      v15[2] = v7 - v13;
      v16 = v15;
      result = EtwTraceKernelEvent((int)&v16, 1, 0x20000001u, a3, 290462468);
    }
    while ( a4 );
  }
  return result;
}
