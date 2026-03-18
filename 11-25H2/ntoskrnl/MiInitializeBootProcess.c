/*
 * XREFs of MiInitializeBootProcess @ 0x140C3D150
 * Callers:
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiSetPageTablePfnBuddy @ 0x14049D0B8 (MiSetPageTablePfnBuddy.c)
 *     MiAllocateProcessExtension @ 0x1406F0274 (MiAllocateProcessExtension.c)
 *     MmInitializeProcessAddressSpace @ 0x140904AC8 (MmInitializeProcessAddressSpace.c)
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

  if ( !qword_140FC4228 )
    qword_140FC4228 = 0x100000LL;
  if ( !qword_140FC4220 )
    qword_140FC4220 = 0x2000LL;
  if ( !qword_140FC4218 )
    qword_140FC4218 = 0x10000LL;
  if ( !qword_140FC4210 )
    qword_140FC4210 = 4096LL;
  p_SchedulingGroup = (_KSCHEDULING_GROUP **)&unk_140E38500;
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
  v3 = ExAcquireSpinLockExclusive(&dword_140E37180);
  v4 = (_LIST_ENTRY **)qword_140E2D820;
  p_CpuPartitionList = &Process[2].CpuPartitionList;
  if ( *(__int64 **)qword_140E2D820 != &qword_140E2D818 )
    __fastfail(3u);
  Process[2].CpuPartitionList.Blink = (struct _LIST_ENTRY *)qword_140E2D820;
  p_CpuPartitionList->Flink = (struct _LIST_ENTRY *)&qword_140E2D818;
  *v4 = p_CpuPartitionList;
  qword_140E2D820 = (__int64)&Process[2].CpuPartitionList;
  MiReleaseSpinLockExclusive(&dword_140E37180, v3);
  if ( MmNumLockedPagesFixEnabled )
    ProcessExtension = MiAllocateProcessExtension();
  else
    ProcessExtension = MiAllocatePool(0x40uLL, 0x580uLL, 844130637);
  if ( !ProcessExtension )
    return 3221225626LL;
  v8 = 0;
  *p_SchedulingGroup = (_KSCHEDULING_GROUP *)(ProcessExtension + 256);
  return MmInitializeProcessAddressSpace((ULONG_PTR)Process, 0LL, 0LL, &v8, 0);
}
