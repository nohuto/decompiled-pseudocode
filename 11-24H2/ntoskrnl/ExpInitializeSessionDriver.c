/*
 * XREFs of ExpInitializeSessionDriver @ 0x140A8E460
 * Callers:
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     PspUnlockProcessListExclusive @ 0x1403494CC (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x140349ACC (PspLockProcessListExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall ExpInitializeSessionDriver(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ebp
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 CycleTime; // rsi
  _BYTE v10[24]; // [rsp+20h] [rbp-158h] BYREF
  __int64 v11; // [rsp+38h] [rbp-140h]
  __int64 v12; // [rsp+88h] [rbp-F0h]

  memset_0(v10, 0, 0x150uLL);
  v11 = a2;
  v5 = guard_dispatch_icall_no_overrides(v10, 0LL, v3, v4);
  if ( v5 >= 0 )
  {
    v6 = v12;
    CurrentThread = KeGetCurrentThread();
    if ( !v12 )
      v6 = 1LL;
    CycleTime = CurrentThread->ApcState.Process[1].CycleTime;
    PspLockProcessListExclusive((__int64)CurrentThread);
    if ( !*(_QWORD *)(CycleTime + 120) )
      *(_QWORD *)(CycleTime + 120) = v6;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
  }
  return (unsigned int)v5;
}
