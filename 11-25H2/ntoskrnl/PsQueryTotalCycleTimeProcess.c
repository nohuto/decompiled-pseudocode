/*
 * XREFs of PsQueryTotalCycleTimeProcess @ 0x140A152C0
 * Callers:
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x14027118C (KeFlushProcessWriteBuffers.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x14028E760 (KeUpdateTotalCyclesCurrentThread.c)
 *     PspLockProcessThreadListShared @ 0x1403E6BB0 (PspLockProcessThreadListShared.c)
 *     PspUnlockProcessThreadListShared @ 0x1403E6C20 (PspUnlockProcessThreadListShared.c)
 */

__int64 __fastcall PsQueryTotalCycleTimeProcess(__int64 a1, unsigned __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // r8
  __int64 v7; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  LOBYTE(a1) = 1;
  KeFlushProcessWriteBuffers(a1);
  KeUpdateTotalCyclesCurrentThread((unsigned __int64)CurrentThread, a2);
  PspLockProcessThreadListShared(v3, (__int64)CurrentThread);
  v5 = *(_QWORD *)(v3 + 288);
  v6 = *(_QWORD **)(v3 + 880);
  while ( v6 != (_QWORD *)(v3 + 880) )
  {
    v7 = *(v6 - 166);
    v6 = (_QWORD *)*v6;
    v5 += v7;
  }
  PspUnlockProcessThreadListShared(v3, (__int64)CurrentThread);
  return v5;
}
