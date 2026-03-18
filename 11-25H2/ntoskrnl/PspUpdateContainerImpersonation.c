/*
 * XREFs of PspUpdateContainerImpersonation @ 0x1403061BC
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x1404955A4 (PsImpersonateContainerOfThread.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 * Callees:
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x140204704 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     KeAdjustWobPriority @ 0x140306698 (KeAdjustWobPriority.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140306840 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     KeApplyWobBamQos @ 0x140306940 (KeApplyWobBamQos.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x14031A800 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall PspUpdateContainerImpersonation(ULONG_PTR BugCheckParameter1, PVOID Object)
{
  void *v2; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rdx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(void **)(BugCheckParameter1 + 1616);
  if ( v2 )
  {
    if ( !Object )
    {
LABEL_20:
      _m_prefetchw((const void *)(BugCheckParameter1 + 1440));
      v10 = *(_DWORD *)(BugCheckParameter1 + 1440);
      do
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter1 + 1440), v10 & 0xFEFFFFFF, v10);
      }
      while ( v11 != v10 );
      if ( (v10 & 0x1000000) != 0 )
        KeSetThreadChargeOnlySchedulingGroup(BugCheckParameter1, 0LL);
      goto LABEL_4;
    }
  }
  else if ( !Object )
  {
    return 3221225473LL;
  }
  ObfReferenceObjectWithTag(Object, 0x746E6F43u);
  if ( v2 )
    goto LABEL_20;
LABEL_4:
  v6 = ExAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock);
  *(_QWORD *)(BugCheckParameter1 + 1616) = Object;
  if ( Object )
  {
    KeAdjustWobPriority(BugCheckParameter1);
    KeApplyWobBamQos(KeGetCurrentPrcb(), BugCheckParameter1, Object);
  }
  else if ( (KeGetCurrentThread()->MiscFlags & 4) != 0 )
  {
    *(_DWORD *)(BugCheckParameter1 + 116) |= 0x10000u;
  }
  else
  {
    KiClearSystemPriority(BugCheckParameter1, 0LL);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    PspThreadWorkOnBehalfLock = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, retaddr);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = v6;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  }
  __writecr8(v6);
  if ( Object )
  {
    v7 = *(_QWORD *)(*((_QWORD *)Object + 68) + 672LL);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 1248);
      if ( v8 )
      {
        if ( (unsigned __int8)KeSetThreadChargeOnlySchedulingGroup(BugCheckParameter1, v8) )
          _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 1440), 0x1000000u);
      }
    }
  }
  EtwTraceThreadWorkOnBehalfUpdate(v2, Object);
  if ( v2 )
    ObDereferenceObjectDeferDeleteWithTag(v2, 0x746E6F43u);
  return 0LL;
}
