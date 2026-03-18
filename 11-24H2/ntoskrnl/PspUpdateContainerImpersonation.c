/*
 * XREFs of PspUpdateContainerImpersonation @ 0x1402A11C4
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x140492240 (PsImpersonateContainerOfThread.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402A0C10 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x1402A1AC0 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     KeAdjustWobPriority @ 0x1402A2074 (KeAdjustWobPriority.c)
 *     KeApplyWobBamQos @ 0x1402A2218 (KeApplyWobBamQos.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1403B6408 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall PspUpdateContainerImpersonation(ULONG_PTR BugCheckParameter1, PVOID Object)
{
  ULONG_PTR v2; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rdx
  ULONG_PTR v9; // rbx
  signed __int64 v10; // rax
  bool v11; // cc
  signed __int64 BugCheckParameter4; // rax
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(BugCheckParameter1 + 1616);
  if ( v2 )
  {
    if ( !Object )
    {
LABEL_22:
      _m_prefetchw((const void *)(BugCheckParameter1 + 1440));
      v14 = *(_DWORD *)(BugCheckParameter1 + 1440);
      do
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter1 + 1440), v14 & 0xFEFFFFFF, v14);
      }
      while ( v15 != v14 );
      if ( (v14 & 0x1000000) != 0 )
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
    goto LABEL_22;
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
        if ( KeSetThreadChargeOnlySchedulingGroup(BugCheckParameter1, v8) )
          _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 1440), 0x1000000u);
      }
    }
  }
  EtwTraceThreadWorkOnBehalfUpdate(v2, Object);
  if ( v2 )
  {
    v9 = v2 - 48;
    if ( ObpTraceFlags )
      ObpPushStackInfo(v2 - 48);
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL);
    v11 = v10 <= 1;
    BugCheckParameter4 = v10 - 1;
    if ( v11 )
    {
      if ( *(_QWORD *)(v9 + 8) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v9 + 24) ^ (unsigned __int64)BYTE1(v9)],
          v2,
          3uLL,
          *(_QWORD *)(v9 + 8));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, v2, 4uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v2 - 48);
    }
  }
  return 0LL;
}
