/*
 * XREFs of MiInitializeBootProcess @ 0x140C50588
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiSetPageTablePfnBuddy @ 0x140492B70 (MiSetPageTablePfnBuddy.c)
 *     MiAllocateProcessExtension @ 0x1406F9C9C (MiAllocateProcessExtension.c)
 *     MmInitializeProcessAddressSpace @ 0x14091A9E8 (MmInitializeProcessAddressSpace.c)
 */

__int64 __fastcall MiInitializeBootProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _KSCHEDULING_GROUP **p_SchedulingGroup; // rdi
  _KPROCESS *Process; // rbx
  _QWORD *v6; // rcx
  KIRQL v7; // al
  _LIST_ENTRY **v8; // rdx
  _LIST_ENTRY *p_CpuPartitionList; // rcx
  __int64 ProcessExtension; // rax
  int v12; // [rsp+40h] [rbp+8h] BYREF

  if ( !qword_140FC5238 )
    qword_140FC5238 = 0x100000LL;
  if ( !qword_140FC5230 )
    qword_140FC5230 = 0x2000LL;
  if ( !qword_140FC5228 )
    qword_140FC5228 = 0x10000LL;
  if ( !qword_140FC5220 )
    qword_140FC5220 = 4096LL;
  p_SchedulingGroup = (_KSCHEDULING_GROUP **)&unk_140E38880;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[2].ContextSwitches & 0xF) != 1 )
    p_SchedulingGroup = &Process[2].SchedulingGroup;
  Process[2].Padding[4] = 50LL;
  Process[2].Padding[5] = 450LL;
  v6 = (_QWORD *)(48 * ((MEMORY[0xFFFFF6FB7DBEDF68] >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  *v6 = 0LL;
  MiSetPageTablePfnBuddy((__int64)v6, 0x10000000001LL, 0LL, a4);
  BYTE6(Process[3].PerProcessorCycleTimes) = -1;
  _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x40000u);
  _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x800u);
  v7 = ExAcquireSpinLockExclusive(&SpinLock);
  v8 = (_LIST_ENTRY **)qword_140E2DBA0;
  p_CpuPartitionList = &Process[2].CpuPartitionList;
  if ( *(__int64 **)qword_140E2DBA0 != &qword_140E2DB98 )
    __fastfail(3u);
  Process[2].CpuPartitionList.Blink = (struct _LIST_ENTRY *)qword_140E2DBA0;
  p_CpuPartitionList->Flink = (struct _LIST_ENTRY *)&qword_140E2DB98;
  *v8 = p_CpuPartitionList;
  qword_140E2DBA0 = (__int64)&Process[2].CpuPartitionList;
  MiReleaseSpinLockExclusive(&SpinLock, v7);
  ProcessExtension = MiAllocateProcessExtension();
  if ( !ProcessExtension )
    return 3221225626LL;
  v12 = 0;
  *p_SchedulingGroup = (_KSCHEDULING_GROUP *)(ProcessExtension + 256);
  return MmInitializeProcessAddressSpace((ULONG_PTR)Process, 0LL, 0LL, &v12, 0);
}
