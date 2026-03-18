/*
 * XREFs of IopProcessWorkItem @ 0x140306B80
 * Callers:
 *     ExpWorkerThread @ 0x1403047F0 (ExpWorkerThread.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     IoReleaseRemoveLockEx @ 0x140306440 (IoReleaseRemoveLockEx.c)
 *     KeAdjustWobPriority @ 0x140306698 (KeAdjustWobPriority.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140306840 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     KeApplyWobBamQos @ 0x140306940 (KeApplyWobBamQos.c)
 *     PspRevertContainerImpersonation @ 0x140308400 (PspRevertContainerImpersonation.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x14031A800 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     PnpDeviceCompletionRequestDestroyWorkItem @ 0x1404694D0 (PnpDeviceCompletionRequestDestroyWorkItem.c)
 *     IoFreeWorkItem @ 0x140469520 (IoFreeWorkItem.c)
 *     EtwTraceThreadWorkItem @ 0x1404D5840 (EtwTraceThreadWorkItem.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ObpRemoveObjectRoutine @ 0x14084AB80 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409CF610 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409CF758 (ObpDeregisterObject.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

struct _KTHREAD *__fastcall IopProcessWorkItem(PIO_WORKITEM IoWorkItem, __int64 a2, ULONG a3)
{
  void (__stdcall *Routine)(PVOID, ULONG); // r15
  struct _IO_REMOVE_LOCK *IoObject; // rbp
  int v6; // r12d
  __int64 v7; // rcx
  _ETHREAD *WorkOnBehalfThread; // rdi
  struct _KTHREAD *CurrentThread; // r15
  PVOID Object; // rsi
  KIRQL v11; // r12
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  _ETHREAD *v14; // rsi
  void *Context; // rdx
  struct _IO_REMOVE_LOCK *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  signed __int64 v20; // rax
  bool v21; // cc
  signed __int64 BugCheckParameter4; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  signed __int64 v26; // rbx
  signed __int64 v27; // rbx
  struct _KTHREAD *result; // rax
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  int v31; // [rsp+30h] [rbp-58h]
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-50h]
  _GUID ActivityId; // [rsp+40h] [rbp-48h] BYREF

  Routine = (void (__stdcall *)(PVOID, ULONG))IoWorkItem->Routine;
  IoObject = (struct _IO_REMOVE_LOCK *)IoWorkItem->IoObject;
  v6 = 0;
  v31 = 0;
  ActivityId = 0LL;
  BugCheckParameter1 = (ULONG_PTR)Routine;
  v7 = *(_QWORD *)&CPER_EMPTY_GUID.Data1 - *(_QWORD *)&IoWorkItem->ActivityId.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)CPER_EMPTY_GUID.Data4 - *(_QWORD *)IoWorkItem->ActivityId.Data4;
  if ( v7 )
  {
    v6 = 1;
    v31 = 1;
    ActivityId = IoWorkItem->ActivityId;
    KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&ActivityId;
  }
  WorkOnBehalfThread = IoWorkItem->WorkOnBehalfThread;
  if ( WorkOnBehalfThread )
  {
    CurrentThread = KeGetCurrentThread();
    Object = CurrentThread[1].WaitBlock[1].Object;
    ObfReferenceObjectWithTag(WorkOnBehalfThread, 0x746E6F43u);
    if ( Object )
    {
      _m_prefetchw(&CurrentThread[1].SwapListEntry + 1);
      v29 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 2);
      do
      {
        v30 = v29;
        v29 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2,
                v29 & 0xFEFFFFFF,
                v29);
      }
      while ( v30 != v29 );
      if ( (v29 & 0x1000000) != 0 )
        KeSetThreadChargeOnlySchedulingGroup(CurrentThread, 0LL);
    }
    v11 = ExAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock);
    CurrentThread[1].WaitBlock[1].Object = WorkOnBehalfThread;
    KeAdjustWobPriority((ULONG_PTR)CurrentThread, WorkOnBehalfThread->Tcb.Priority);
    KeApplyWobBamQos(KeGetCurrentPrcb(), (__int64)CurrentThread, (__int64)WorkOnBehalfThread);
    ExReleaseSpinLockExclusiveFromDpcLevel(&PspThreadWorkOnBehalfLock);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    __writecr8(v11);
    v12 = WorkOnBehalfThread->Tcb.Process[1].Padding[3];
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 1248);
      if ( v13 )
      {
        if ( (unsigned __int8)KeSetThreadChargeOnlySchedulingGroup(CurrentThread, v13) )
          _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x1000000u);
      }
    }
    EtwTraceThreadWorkOnBehalfUpdate();
    if ( Object )
      ObDereferenceObjectDeferDeleteWithTag(Object, 0x746E6F43u);
    v14 = IoWorkItem->WorkOnBehalfThread;
    Routine = (void (__stdcall *)(PVOID, ULONG))BugCheckParameter1;
    v6 = v31;
    IoWorkItem->WorkOnBehalfThread = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(Routine, 1344LL);
  Context = IoWorkItem->Context;
  if ( !IoWorkItem->Type )
  {
    if ( *(_WORD *)&IoObject->Common.Removed == 3 )
    {
      v16 = IoObject;
      if ( Routine == ExFreePoolWithTag )
        goto LABEL_19;
      if ( (char *)Routine == (char *)IoReleaseRemoveLockEx )
      {
        IoReleaseRemoveLockEx(IoObject, Context, a3);
        goto LABEL_20;
      }
      if ( (char *)Routine == (char *)IoFreeWorkItem )
      {
        IoFreeWorkItem((PIO_WORKITEM)IoObject);
        goto LABEL_20;
      }
    }
    else
    {
      v16 = 0LL;
    }
LABEL_70:
    guard_dispatch_icall_no_overrides(v16, Context);
    goto LABEL_20;
  }
  v16 = IoObject;
  if ( Routine == ExFreePoolWithTag )
  {
LABEL_19:
    ExFreePoolWithTag(v16, (ULONG)Context);
    goto LABEL_20;
  }
  if ( (char *)Routine != (char *)PnpDeviceCompletionRequestDestroyWorkItem )
    goto LABEL_70;
  PnpDeviceCompletionRequestDestroyWorkItem(IoObject, Context, IoWorkItem);
LABEL_20:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(Routine, 1345LL);
  if ( ObpTraceFlags )
    ObpPushStackInfo((__int64)&IoObject[-2].Common.RemoveEvent.Header.WaitListHead, 0, 1u, 0x746C6644u);
  v20 = _InterlockedExchangeAdd64(
          (volatile signed __int64 *)&IoObject[-2].Common.RemoveEvent.Header.WaitListHead,
          0xFFFFFFFFFFFFFFFFuLL);
  v21 = v20 <= 1;
  BugCheckParameter4 = v20 - 1;
  if ( v21 )
  {
    if ( IoObject[-2].Common.RemoveEvent.Header.WaitListHead.Blink )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ IoObject[-1].Common.RemoveEvent.Header.Type ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)IoObject - 48) >> 8)],
        (ULONG_PTR)IoObject,
        1uLL,
        (ULONG_PTR)IoObject[-2].Common.RemoveEvent.Header.WaitListHead.Blink);
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)IoObject, 2uLL, BugCheckParameter4);
    if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
    {
      ObpDeferObjectDeletion(&IoObject[-2].Common.RemoveEvent.Header.WaitListHead, v17, v18, v19);
    }
    else
    {
      if ( (IoObject[-1].Common.RemoveEvent.Header.Size & 0x40) != 0
        && LOBYTE((*(struct _LIST_ENTRY **)((char *)&IoObject[-2].Common.RemoveEvent.Header.WaitListHead.Flink
                                          - ObpInfoMaskToOffset[IoObject[-1].Common.RemoveEvent.Header.Size & 0x7F]))[1].Blink) )
      {
        ObpHandleRevocationBlockRemoveObject();
      }
      if ( ObpTraceFlags )
        ObpDeregisterObject(&IoObject[-2].Common.RemoveEvent.Header.WaitListHead);
      ObpRemoveObjectRoutine(&IoObject[-2].Common.RemoveEvent.Header.WaitListHead, 0LL);
    }
  }
  if ( v6 )
    KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = 0LL;
  if ( v14 )
  {
    PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
    if ( ObpTraceFlags )
      ObpPushStackInfo((__int64)&v14[-1].UpdateTebApc.SystemArgument2, 0, 1u, 0x746C6644u);
    v26 = _InterlockedExchangeAdd64(
            (volatile signed __int64 *)&v14[-1].UpdateTebApc.SystemArgument2,
            0xFFFFFFFFFFFFFFFFuLL);
    v21 = v26 <= 1;
    v27 = v26 - 1;
    if ( v21 )
    {
      if ( *(_QWORD *)&v14[-1].UpdateTebApcFill5[80] )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v14[-1].ThreadIndex) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v14 - 48) >> 8)],
          (ULONG_PTR)v14,
          1uLL,
          *(_QWORD *)&v14[-1].UpdateTebApcFill5[80]);
      if ( v27 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v14, 2uLL, v27);
      if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
      {
        ObpDeferObjectDeletion(&v14[-1].UpdateTebApcFill5[72], v23, v24, v25);
      }
      else
      {
        if ( (BYTE2(v14[-1].ThreadIndex) & 0x40) != 0
          && *(_BYTE *)(*(unsigned __int64 *)((char *)&v14[-1].RngState.State64[1]
                                            - ObpInfoMaskToOffset[BYTE2(v14[-1].ThreadIndex) & 0x7F])
                      + 24) )
        {
          ObpHandleRevocationBlockRemoveObject();
        }
        if ( ObpTraceFlags )
          ObpDeregisterObject(&v14[-1].UpdateTebApcFill5[72]);
        ObpRemoveObjectRoutine(&v14[-1].UpdateTebApcFill5[72], 0LL);
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
