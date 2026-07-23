/*
 * XREFs of PsQueryTotalCycleTimeProcess @ 0x140A150F0
 * Callers:
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 * Callees:
 *     KeUpdateTotalCyclesCurrentThread @ 0x1403693A0 (KeUpdateTotalCyclesCurrentThread.c)
 *     KeFlushProcessWriteBuffers @ 0x14039E2AC (KeFlushProcessWriteBuffers.c)
 *     PspLockProcessThreadListShared @ 0x1403E2A50 (PspLockProcessThreadListShared.c)
 *     PspUnlockProcessThreadListShared @ 0x1403E2AC0 (PspUnlockProcessThreadListShared.c)
 */

__int64 __fastcall PsQueryTotalCycleTimeProcess(__int64 a1, __int64 a2)
{
  _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // r8
  __int64 v7; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  LOBYTE(a1) = 1;
  KeFlushProcessWriteBuffers(a1);
  KeUpdateTotalCyclesCurrentThread(CurrentThread, a2);
  PspLockProcessThreadListShared(v3, (__int64)CurrentThread);
  v5 = *(_QWORD *)(v3 + 288);
  v6 = *(_QWORD **)(v3 + 880);
  while ( v6 != (_QWORD *)(v3 + 880) )
  {
    v7 = *(v6 - 166);
    v6 = (_QWORD *)*v6;
    v5 += v7;
  }
  PspUnlockProcessThreadListShared(v3);
  return v5;
}
