/*
 * XREFs of IopProcessWorkItem @ 0x1402A2410
 * Callers:
 *     ExpWorkerThread @ 0x140207CC0 (ExpWorkerThread.c)
 * Callees:
 *     EtwTraceThreadWorkItem @ 0x140207BD0 (EtwTraceThreadWorkItem.c)
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402A0C10 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x1402A1AC0 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     KeAdjustWobPriority @ 0x1402A2074 (KeAdjustWobPriority.c)
 *     KeApplyWobBamQos @ 0x1402A2218 (KeApplyWobBamQos.c)
 *     PspRevertContainerImpersonation @ 0x1402A2A90 (PspRevertContainerImpersonation.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     PnpDeviceCompletionRequestDestroyWorkItem @ 0x140467C90 (PnpDeviceCompletionRequestDestroyWorkItem.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpRemoveObjectRoutine @ 0x140846830 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409D2920 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409D2A68 (ObpDeregisterObject.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

struct _KTHREAD *__fastcall IopProcessWorkItem(PIO_WORKITEM IoWorkItem, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *Routine)(PIO_WORKITEM); // r12
  _WORD *IoObject; // r15
  int v7; // ebp
  __int64 v8; // rcx
  _ETHREAD *WorkOnBehalfThread; // rsi
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR Object; // rbp
  KIRQL v12; // r12
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  signed __int64 v15; // rax
  bool v16; // cc
  signed __int64 v17; // rax
  void *Context; // rdx
  signed __int64 v19; // rax
  signed __int64 BugCheckParameter4; // rax
  signed __int64 v21; // rdi
  signed __int64 v22; // rdi
  struct _KTHREAD *result; // rax
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  int v26; // [rsp+30h] [rbp-58h]
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-50h]
  _GUID ActivityId; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  Routine = (__int64 (__fastcall *)(PIO_WORKITEM))IoWorkItem->Routine;
  IoObject = IoWorkItem->IoObject;
  v7 = 0;
  v26 = 0;
  ActivityId = 0LL;
  BugCheckParameter1 = (ULONG_PTR)Routine;
  v8 = *(_QWORD *)&CPER_EMPTY_GUID.Data1 - *(_QWORD *)&IoWorkItem->ActivityId.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)CPER_EMPTY_GUID.Data4 - *(_QWORD *)IoWorkItem->ActivityId.Data4;
  if ( v8 )
  {
    v7 = 1;
    v26 = 1;
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
      v24 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 2);
      do
      {
        v25 = v24;
        v24 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2,
                v24 & 0xFEFFFFFF,
                v24);
      }
      while ( v25 != v24 );
      if ( (v24 & 0x1000000) != 0 )
        KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL);
    }
    v12 = ExAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock);
    CurrentThread[1].WaitBlock[1].Object = WorkOnBehalfThread;
    KeAdjustWobPriority((ULONG_PTR)CurrentThread, (unsigned int)WorkOnBehalfThread->Tcb.Priority);
    KeApplyWobBamQos((__int64)KeGetCurrentPrcb(), (__int64)CurrentThread, (__int64)WorkOnBehalfThread);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      PspThreadWorkOnBehalfLock = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
    __writecr8(v12);
    v13 = WorkOnBehalfThread->Tcb.Process[1].Padding[3];
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 1248);
      if ( v14 )
      {
        if ( KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, v14) )
          _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x1000000u);
      }
    }
    EtwTraceThreadWorkOnBehalfUpdate(Object, (__int64)WorkOnBehalfThread);
    if ( Object )
    {
      if ( ObpTraceFlags )
        ObpPushStackInfo(Object - 48);
      v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)(Object - 48), 0xFFFFFFFFFFFFFFFFuLL);
      v16 = v15 <= 1;
      v17 = v15 - 1;
      if ( v16 )
      {
        if ( *(_QWORD *)(Object - 40) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(Object - 48) >> 8)],
            Object,
            3uLL,
            *(_QWORD *)(Object - 40));
        if ( v17 < 0 )
          KeBugCheckEx(0x18u, 0LL, Object, 4uLL, v17);
        ObpDeferObjectDeletion(Object - 48);
      }
    }
    WorkOnBehalfThread = IoWorkItem->WorkOnBehalfThread;
    v7 = v26;
    Routine = (__int64 (__fastcall *)(PIO_WORKITEM))BugCheckParameter1;
    IoWorkItem->WorkOnBehalfThread = 0LL;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(Routine, 0x540u);
  Context = IoWorkItem->Context;
  if ( IoWorkItem->Type )
  {
    if ( (char *)Routine == (char *)ExFreePoolWithTag )
    {
      ExFreePoolWithTag(IoObject, (ULONG)Context);
    }
    else if ( (char *)Routine == (char *)PnpDeviceCompletionRequestDestroyWorkItem )
    {
      PnpDeviceCompletionRequestDestroyWorkItem(IoObject, Context, IoWorkItem);
    }
    else
    {
      guard_dispatch_icall_no_overrides(IoObject, Context, IoWorkItem, a4);
    }
  }
  else if ( *IoObject == 3 )
  {
    guard_dispatch_icall_no_overrides(IoObject, Context, a3, a4);
  }
  else
  {
    guard_dispatch_icall_no_overrides(0LL, Context, a3, a4);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(Routine, 0x541u);
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)IoObject - 48);
  v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)IoObject - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v16 = v19 <= 1;
  BugCheckParameter4 = v19 - 1;
  if ( v16 )
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
  if ( v7 )
    KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = 0LL;
  if ( WorkOnBehalfThread )
  {
    PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)WorkOnBehalfThread - 48);
    v21 = _InterlockedExchangeAdd64(
            (volatile signed __int64 *)&WorkOnBehalfThread[-1].UpdateTebApc.SystemArgument2,
            0xFFFFFFFFFFFFFFFFuLL);
    v16 = v21 <= 1;
    v22 = v21 - 1;
    if ( v16 )
    {
      if ( *(_QWORD *)&WorkOnBehalfThread[-1].UpdateTebApcFill5[80] )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(WorkOnBehalfThread[-1].ThreadIndex) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)WorkOnBehalfThread - 48) >> 8)],
          (ULONG_PTR)WorkOnBehalfThread,
          1uLL,
          *(_QWORD *)&WorkOnBehalfThread[-1].UpdateTebApcFill5[80]);
      if ( v22 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)WorkOnBehalfThread, 2uLL, v22);
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
