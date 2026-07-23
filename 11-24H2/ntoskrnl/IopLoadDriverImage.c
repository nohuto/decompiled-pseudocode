/*
 * XREFs of IopLoadDriverImage @ 0x1404DD018
 * Callers:
 *     NtLoadDriver @ 0x140A92EB0 (NtLoadDriver.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     IopLoadUnloadDriver @ 0x140A66EE0 (IopLoadUnloadDriver.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLoadDriverImage(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v5; // rax
  int v6; // edx
  void *v7; // rcx
  void *Pool2; // rbx
  struct _KTHREAD *v9; // rax
  struct _LIST_ENTRY *Blink; // rbx
  PVOID P; // [rsp+30h] [rbp-78h]
  void *Src[2]; // [rsp+38h] [rbp-70h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+50h] [rbp-58h] BYREF
  _BYTE Object[4]; // [rsp+70h] [rbp-38h] BYREF
  int v15; // [rsp+74h] [rbp-34h]
  _QWORD v16[4]; // [rsp+78h] [rbp-30h] BYREF
  unsigned int v17; // [rsp+98h] [rbp-10h]

  *(_OWORD *)Src = 0LL;
  P = 0LL;
  memset_0(&WorkItem, 0, 0x50uLL);
  if ( !a1 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
      return 3221225569LL;
    if ( PsIsCurrentThreadInServerSilo() )
      return 0LL;
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v5 = (__int64)a1;
    v6 = *(_DWORD *)v5;
    LODWORD(Src[0]) = v6;
    v7 = *(void **)(v5 + 8);
    Src[1] = v7;
    if ( !(_WORD)v6 )
      return 3221225485LL;
    if ( ((unsigned __int8)v7 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    Pool2 = (void *)ExAllocatePool2(0x121uLL, (unsigned __int16)v6, 0x324E6F49u);
    P = Pool2;
    memmove(Pool2, Src[1], LOWORD(Src[0]));
    Src[1] = Pool2;
  }
  else
  {
    *(_OWORD *)Src = *a1;
    Pool2 = 0LL;
  }
  Object[2] = 6;
  v15 = 0;
  v16[1] = v16;
  v16[0] = v16;
  v16[2] = 0LL;
  v16[3] = Src;
  if ( CurrentThread->ApcState.Process == PsInitialSystemProcess )
  {
    v9 = KeGetCurrentThread();
    Blink = v9[1].WaitBlock[3].WaitListEntry.Blink;
    v9[1].WaitBlock[3].WaitListEntry.Blink = 0LL;
    IopLoadUnloadDriver(&WorkItem);
    KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
    Pool2 = P;
  }
  else
  {
    WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
    WorkItem.Parameter = &WorkItem;
    WorkItem.List.Flink = 0LL;
    ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
    KeWaitForSingleObject(Object, UserRequest, 0, 0, 0LL);
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v17;
}
