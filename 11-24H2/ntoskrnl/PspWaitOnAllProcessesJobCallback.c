/*
 * XREFs of PspWaitOnAllProcessesJobCallback @ 0x140778990
 * Callers:
 *     <none>
 * Callees:
 *     PspWaitForUsermodeExit @ 0x1407791CC (PspWaitForUsermodeExit.c)
 *     PspGetNextJobProcess @ 0x14085CC88 (PspGetNextJobProcess.c)
 */

__int64 __fastcall PspWaitOnAllProcessesJobCallback(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rsi
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rbx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v5 = 0LL;
  while ( 1 )
  {
    v6 = ((__int64 (__fastcall *)(__int64, struct _KTHREAD *, __int128 *, __int64))PspGetNextJobProcess)(
           a1,
           CurrentThread,
           &v9,
           v5);
    v7 = v6;
    if ( !v6 )
      break;
    if ( (*(_DWORD *)(v6 + 1532) & 0x40) == 0 && (_KPROCESS *)v6 != KeGetCurrentThread()->ApcState.Process )
    {
      *(_BYTE *)(a2 + 4) |= 2u;
      PspWaitForUsermodeExit(v6);
    }
    v5 = v7;
    a1 = v4;
  }
  return 0LL;
}
