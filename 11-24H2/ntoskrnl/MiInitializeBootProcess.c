/*
 * XREFs of MiInitializeBootProcess @ 0x140C4E3F8
 * Callers:
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiSetPageTablePfnBuddy @ 0x140498190 (MiSetPageTablePfnBuddy.c)
 *     MiAllocateProcessExtension @ 0x1406FC05C (MiAllocateProcessExtension.c)
 *     MmInitializeProcessAddressSpace @ 0x1408F8590 (MmInitializeProcessAddressSpace.c)
 */

__int64 MiInitializeBootProcess()
{
  _KSCHEDULING_GROUP **p_SchedulingGroup; // rdi
  _KPROCESS *Process; // rbx
  _QWORD *v2; // rcx
  KIRQL v3; // al
  _LIST_ENTRY **v4; // rdx
  _LIST_ENTRY *p_CpuPartitionList; // rcx
  __int64 ProcessExtension; // rax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !qword_140FC4238 )
    qword_140FC4238 = 0x100000LL;
  if ( !qword_140FC4230 )
    qword_140FC4230 = 0x2000LL;
  if ( !qword_140FC4228 )
    qword_140FC4228 = 0x10000LL;
  if ( !qword_140FC4220 )
    qword_140FC4220 = 4096LL;
  p_SchedulingGroup = (_KSCHEDULING_GROUP **)&unk_140E38740;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[2].ContextSwitches & 0xF) != 1 )
    p_SchedulingGroup = &Process[2].SchedulingGroup;
  Process[2].Padding[4] = 50LL;
  Process[2].Padding[5] = 450LL;
  v2 = (_QWORD *)(48 * ((MEMORY[0xFFFFF6FB7DBEDF68] >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  *v2 = 0LL;
  MiSetPageTablePfnBuddy((__int64)v2, 0x10000000001uLL, 0);
  BYTE6(Process[3].PerProcessorCycleTimes) = -1;
  _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x40000u);
  _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x800u);
  v3 = ExAcquireSpinLockExclusive(&dword_140E373C0);
  v4 = (_LIST_ENTRY **)qword_140E2DA60;
  p_CpuPartitionList = &Process[2].CpuPartitionList;
  if ( *(__int64 **)qword_140E2DA60 != &qword_140E2DA58 )
    __fastfail(3u);
  Process[2].CpuPartitionList.Blink = (struct _LIST_ENTRY *)qword_140E2DA60;
  p_CpuPartitionList->Flink = (struct _LIST_ENTRY *)&qword_140E2DA58;
  *v4 = p_CpuPartitionList;
  qword_140E2DA60 = (__int64)&Process[2].CpuPartitionList;
  MiReleaseSpinLockExclusive(&dword_140E373C0, v3);
  ProcessExtension = MiAllocateProcessExtension();
  if ( !ProcessExtension )
    return 3221225626LL;
  v8 = 0;
  *p_SchedulingGroup = (_KSCHEDULING_GROUP *)(ProcessExtension + 256);
  return MmInitializeProcessAddressSpace((ULONG_PTR)Process, 0LL, 0LL, &v8, 0);
}
