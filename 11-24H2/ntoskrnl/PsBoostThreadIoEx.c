/*
 * XREFs of PsBoostThreadIoEx @ 0x14024DD90
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x14024E520 (KiAbSetMinimumThreadPriority.c)
 *     KiAbIoBoostOwners @ 0x14024EA60 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14024F2F0 (KiAbCpuBoostOwners.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExpBoostIoAfterAcquire @ 0x140278960 (ExpBoostIoAfterAcquire.c)
 *     ExDeleteResourceLite @ 0x1402CD920 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x1402CDC90 (ExReinitializeResourceLite.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1402CEC30 (ExpSetResourceOwnerPointerEx.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x140340980 (KiAbThreadRemoveBoostsSlow.c)
 *     ExpAcquireResourceSharedLite @ 0x140342300 (ExpAcquireResourceSharedLite.c)
 *     FsRtlpWaitForIoAtEof @ 0x14040D308 (FsRtlpWaitForIoAtEof.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047FCA8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpDoBoost @ 0x14047FDA8 (FsRtlpDoBoost.c)
 *     IoBoostThreadIo @ 0x1404B4100 (IoBoostThreadIo.c)
 *     CcApplyLowIoPriorityToThread @ 0x1404DAC78 (CcApplyLowIoPriorityToThread.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404DAE88 (CcBoostLowPriorityWorkerThread.c)
 *     CcAcquireByteRangeForWrite @ 0x1404DC470 (CcAcquireByteRangeForWrite.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x140656DA0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     ExReleaseResourceAndLeavePriorityRegion @ 0x140656E00 (ExReleaseResourceAndLeavePriorityRegion.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KiAbThreadInsertList @ 0x14024E470 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x140253AF0 (KiAbQueueAutoBoostDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlCaptureStackBackTrace @ 0x14027C690 (RtlCaptureStackBackTrace.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PsBoostThreadIoEx(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  signed __int32 v4; // ebx
  KIRQL v5; // r15
  char v7; // bp
  _QWORD *v10; // r13
  volatile signed __int64 *v11; // rsi
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 Pool2; // rax
  _QWORD *v15; // rcx
  __int64 **v16; // rsi
  __int64 *v17; // rcx
  __int64 **v18; // rsi
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  v5 = 0;
  v7 = a3;
  v10 = 0LL;
  if ( PspAlwaysTrackIoBoosting )
  {
    v7 = 1;
  }
  else if ( !(_BYTE)a3 )
  {
    v11 = (volatile signed __int64 *)(a1 + 1552);
    goto LABEL_4;
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  v10 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
    v10[12] = KeGetCurrentThread();
    v10[13] = a4;
  }
  v11 = (volatile signed __int64 *)(a1 + 1552);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1552));
LABEL_4:
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1504) )
    {
      v4 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 1504));
      if ( !v7 )
        goto LABEL_7;
      if ( *(_DWORD *)(a1 + 1504) )
      {
        if ( v10 )
        {
          v15 = *(_QWORD **)(a1 + 1544);
          if ( *v15 != a1 + 1536 )
            goto LABEL_39;
          *v10 = a1 + 1536;
          v10[1] = v15;
          *v15 = v10;
          *(_QWORD *)(a1 + 1544) = v10;
        }
      }
      else
      {
        if ( v10 )
          ExFreePoolWithTag(v10, 0x736F6F42u);
        v16 = (__int64 **)(a1 + 1520);
        while ( 1 )
        {
          v17 = *v16;
          if ( *v16 == (__int64 *)v16 )
            break;
          v21 = *v17;
          if ( (__int64 **)v17[1] != v16 || *(__int64 **)(v21 + 8) != v17 )
            goto LABEL_39;
          *v16 = (__int64 *)v21;
          *(_QWORD *)(v21 + 8) = v16;
          ExFreePoolWithTag(v17, 0x736F6F42u);
        }
        v18 = (__int64 **)(a1 + 1536);
        while ( 1 )
        {
          v19 = *v18;
          if ( *v18 == (__int64 *)v18 )
            break;
          v20 = *v19;
          if ( (__int64 **)v19[1] != v18 || *(__int64 **)(v20 + 8) != v19 )
            goto LABEL_39;
          *v18 = (__int64 *)v20;
          *(_QWORD *)(v20 + 8) = v18;
          ExFreePoolWithTag(v19, 0x736F6F42u);
        }
      }
      v11 = (volatile signed __int64 *)(a1 + 1552);
    }
    goto LABEL_26;
  }
  v4 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 1504));
  if ( !v7 )
    goto LABEL_18;
  if ( !v10 )
  {
LABEL_26:
    if ( !v7 )
      goto LABEL_32;
    goto LABEL_27;
  }
  v22 = *(_QWORD **)(a1 + 1528);
  if ( *v22 != a1 + 1520 )
LABEL_39:
    __fastfail(3u);
  *v10 = a1 + 1520;
  v10[1] = v22;
  *v22 = v10;
  *(_QWORD *)(a1 + 1528) = v10;
LABEL_27:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64(v11, 0LL);
  else
    KiReleaseSpinLockInstrumented(v11, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  __writecr8(v5);
LABEL_32:
  if ( !a2 )
  {
LABEL_18:
    if ( v4 != 1 )
      return;
    goto LABEL_8;
  }
LABEL_7:
  if ( v4 )
    return;
LABEL_8:
  if ( !a2 && *(_BYTE *)(a1 + 792) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, a3);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(a1, &CurrentPrcb->AbPropagateBoostsList, a1 + 808) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}
