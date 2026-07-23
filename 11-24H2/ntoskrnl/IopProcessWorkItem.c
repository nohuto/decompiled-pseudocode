/*
 * XREFs of IopProcessWorkItem @ 0x1402D1B40
 * Callers:
 *     ExpWorkerThread @ 0x14032F2A0 (ExpWorkerThread.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x1402D11F0 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     KeAdjustWobPriority @ 0x1402D17A4 (KeAdjustWobPriority.c)
 *     KeApplyWobBamQos @ 0x1402D1948 (KeApplyWobBamQos.c)
 *     PspRevertContainerImpersonation @ 0x1402D21C0 (PspRevertContainerImpersonation.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     EtwTraceThreadWorkItem @ 0x14032F1B0 (EtwTraceThreadWorkItem.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1403B4ED0 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     PnpDeviceCompletionRequestDestroyWorkItem @ 0x140460640 (PnpDeviceCompletionRequestDestroyWorkItem.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ObpRemoveObjectRoutine @ 0x140842AF0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409C2750 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409C2898 (ObpDeregisterObject.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

struct _KTHREAD *__fastcall IopProcessWorkItem(PIO_WORKITEM IoWorkItem)
{
  void (__stdcall *Routine)(PVOID, ULONG); // r12
  _WORD *IoObject; // r15
  int v4; // ebp
  __int64 v5; // rcx
  _ETHREAD *WorkOnBehalfThread; // rsi
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR Object; // rbp
  KIRQL v9; // r12
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  signed __int64 v12; // rax
  bool v13; // cc
  signed __int64 v14; // rax
  void *Context; // rdx
  signed __int64 v16; // rax
  signed __int64 BugCheckParameter4; // rax
  signed __int64 v18; // rdi
  signed __int64 v19; // rdi
  struct _KTHREAD *result; // rax
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  int v23; // [rsp+30h] [rbp-58h]
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-50h]
  _GUID ActivityId; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  Routine = (void (__stdcall *)(PVOID, ULONG))IoWorkItem->Routine;
  IoObject = IoWorkItem->IoObject;
  v4 = 0;
  v23 = 0;
  ActivityId = 0LL;
  BugCheckParameter1 = (ULONG_PTR)Routine;
  v5 = *(_QWORD *)&CPER_EMPTY_GUID.Data1 - *(_QWORD *)&IoWorkItem->ActivityId.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)CPER_EMPTY_GUID.Data4 - *(_QWORD *)IoWorkItem->ActivityId.Data4;
  if ( v5 )
  {
    v4 = 1;
    v23 = 1;
    ActivityId = IoWorkItem->ActivityId;
    KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&ActivityId;
  }
  WorkOnBehalfThread = IoWorkItem->WorkOnBehalfThread;
  if ( WorkOnBehalfThread )
  {
    CurrentThread = KeGetCurrentThread();
    Object = (ULONG_PTR)CurrentThread[1].WaitBlock[1].Object;
    ObfReferenceObjectWithTag(WorkOnBehalfThread, 0x746E6F43u);
    if ( Object )
    {
      _m_prefetchw(&CurrentThread[1].SwapListEntry + 1);
      v21 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 2);
      do
      {
        v22 = v21;
        v21 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2,
                v21 & 0xFEFFFFFF,
                v21);
      }
      while ( v22 != v21 );
      if ( (v21 & 0x1000000) != 0 )
        KeSetThreadChargeOnlySchedulingGroup(CurrentThread, 0LL);
    }
    v9 = ExAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock);
    CurrentThread[1].WaitBlock[1].Object = WorkOnBehalfThread;
    KeAdjustWobPriority((ULONG_PTR)CurrentThread, (unsigned int)WorkOnBehalfThread->Tcb.Priority);
    KeApplyWobBamQos((__int64)KeGetCurrentPrcb(), (__int64)CurrentThread, (__int64)WorkOnBehalfThread);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      PspThreadWorkOnBehalfLock = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
    __writecr8(v9);
    v10 = WorkOnBehalfThread->Tcb.Process[1].Padding[3];
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 1248);
      if ( v11 )
      {
        if ( (unsigned __int8)KeSetThreadChargeOnlySchedulingGroup(CurrentThread, v11) )
          _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x1000000u);
      }
    }
    EtwTraceThreadWorkOnBehalfUpdate(Object, (__int64)WorkOnBehalfThread);
    if ( Object )
    {
      if ( ObpTraceFlags )
        ObpPushStackInfo(Object - 48);
      v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)(Object - 48), 0xFFFFFFFFFFFFFFFFuLL);
      v13 = v12 <= 1;
      v14 = v12 - 1;
      if ( v13 )
      {
        if ( *(_QWORD *)(Object - 40) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(Object - 48) >> 8)],
            Object,
            3uLL,
            *(_QWORD *)(Object - 40));
        if ( v14 < 0 )
          KeBugCheckEx(0x18u, 0LL, Object, 4uLL, v14);
        ObpDeferObjectDeletion(Object - 48);
      }
    }
    WorkOnBehalfThread = IoWorkItem->WorkOnBehalfThread;
    v4 = v23;
    Routine = (void (__stdcall *)(PVOID, ULONG))BugCheckParameter1;
    IoWorkItem->WorkOnBehalfThread = 0LL;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(Routine, 1344LL);
  Context = IoWorkItem->Context;
  if ( !IoWorkItem->Type )
  {
    if ( *IoObject != 3 )
    {
      guard_dispatch_icall_no_overrides(0LL, Context);
      goto LABEL_23;
    }
LABEL_44:
    guard_dispatch_icall_no_overrides(IoObject, Context);
    goto LABEL_23;
  }
  if ( Routine == ExFreePoolWithTag )
  {
    ExFreePoolWithTag(IoObject, (ULONG)Context);
    goto LABEL_23;
  }
  if ( (char *)Routine != (char *)PnpDeviceCompletionRequestDestroyWorkItem )
    goto LABEL_44;
  PnpDeviceCompletionRequestDestroyWorkItem(IoObject, Context, IoWorkItem);
LABEL_23:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(Routine, 1345LL);
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)IoObject - 48);
  v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)IoObject - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v13 = v16 <= 1;
  BugCheckParameter4 = v16 - 1;
  if ( v13 )
  {
    if ( *((_QWORD *)IoObject - 5) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)IoObject - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)IoObject - 48) >> 8)],
        (ULONG_PTR)IoObject,
        1uLL,
        *((_QWORD *)IoObject - 5));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)IoObject, 2uLL, BugCheckParameter4);
    if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
    {
      ObpDeferObjectDeletion(IoObject - 24);
    }
    else
    {
      if ( (*(_BYTE *)(IoObject - 11) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)((char *)IoObject - ObpInfoMaskToOffset[*(_BYTE *)(IoObject - 11) & 0x7F] - 48) + 24LL) )
      {
        ObpHandleRevocationBlockRemoveObject();
      }
      if ( ObpTraceFlags )
        ObpDeregisterObject(IoObject - 24);
      ObpRemoveObjectRoutine(IoObject - 24, 0LL);
    }
  }
  if ( v4 )
    KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = 0LL;
  if ( WorkOnBehalfThread )
  {
    PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)WorkOnBehalfThread - 48);
    v18 = _InterlockedExchangeAdd64(
            (volatile signed __int64 *)&WorkOnBehalfThread[-1].UpdateTebApc.SystemArgument2,
            0xFFFFFFFFFFFFFFFFuLL);
    v13 = v18 <= 1;
    v19 = v18 - 1;
    if ( v13 )
    {
      if ( *(_QWORD *)&WorkOnBehalfThread[-1].UpdateTebApcFill5[80] )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(WorkOnBehalfThread[-1].ThreadIndex) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)WorkOnBehalfThread - 48) >> 8)],
          (ULONG_PTR)WorkOnBehalfThread,
          1uLL,
          *(_QWORD *)&WorkOnBehalfThread[-1].UpdateTebApcFill5[80]);
      if ( v19 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)WorkOnBehalfThread, 2uLL, v19);
      if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
      {
        ObpDeferObjectDeletion(&WorkOnBehalfThread[-1].UpdateTebApcFill5[72]);
      }
      else
      {
        if ( (BYTE2(WorkOnBehalfThread[-1].ThreadIndex) & 0x40) != 0
          && *(_BYTE *)(*(unsigned __int64 *)((char *)&WorkOnBehalfThread[-1].RngState.State64[1]
                                            - ObpInfoMaskToOffset[BYTE2(WorkOnBehalfThread[-1].ThreadIndex) & 0x7F])
                      + 24) )
        {
          ObpHandleRevocationBlockRemoveObject();
        }
        if ( ObpTraceFlags )
          ObpDeregisterObject(&WorkOnBehalfThread[-1].UpdateTebApcFill5[72]);
        ObpRemoveObjectRoutine(&WorkOnBehalfThread[-1].UpdateTebApcFill5[72], 0LL);
      }
    }
  }
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    KeBugCheckEx(
      1u,
      (ULONG_PTR)Routine,
      KeGetCurrentThread()->ApcStateIndex,
      KeGetCurrentThread()->CombinedApcDisable,
      0LL);
  return result;
}
