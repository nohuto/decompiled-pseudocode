/*
 * XREFs of ExpInitializeSessionDriver @ 0x140A8AA30
 * Callers:
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     PspUnlockProcessListExclusive @ 0x1403C2F0C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403C350C (PspLockProcessListExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall ExpInitializeSessionDriver(__int64 a1, __int64 a2)
{
  int v3; // ebp
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 CycleTime; // rsi
  _BYTE v8[24]; // [rsp+20h] [rbp-158h] BYREF
  __int64 v9; // [rsp+38h] [rbp-140h]
  __int64 v10; // [rsp+88h] [rbp-F0h]

  memset_0(v8, 0, 0x150uLL);
  v9 = a2;
  v3 = guard_dispatch_icall_no_overrides(v8, 0LL);
  if ( v3 >= 0 )
  {
    v4 = v10;
    CurrentThread = KeGetCurrentThread();
    if ( !v10 )
      v4 = 1LL;
    CycleTime = CurrentThread->ApcState.Process[1].CycleTime;
    PspLockProcessListExclusive((__int64)CurrentThread);
    if ( !*(_QWORD *)(CycleTime + 120) )
      *(_QWORD *)(CycleTime + 120) = v4;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
  }
  return (unsigned int)v3;
}
