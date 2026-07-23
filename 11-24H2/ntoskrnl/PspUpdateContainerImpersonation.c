/*
 * XREFs of PspUpdateContainerImpersonation @ 0x1403B4C5C
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x1403B4C38 (PsImpersonateContainerOfThread.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1402AE6EC (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x1402D11F0 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     KeAdjustWobPriority @ 0x1402D17A4 (KeAdjustWobPriority.c)
 *     KeApplyWobBamQos @ 0x1402D1948 (KeApplyWobBamQos.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1403B4ED0 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall PspUpdateContainerImpersonation(_KTHREAD *BugCheckParameter1, char *Object)
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
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = (ULONG_PTR)BugCheckParameter1[1].WaitBlock[1].Object;
  if ( v2 )
  {
    if ( !Object )
    {
LABEL_22:
      _m_prefetchw(&BugCheckParameter1[1].SwapListEntry + 1);
      v14 = *((_DWORD *)&BugCheckParameter1[1].SwapListEntry + 2);
      do
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&BugCheckParameter1[1].SwapListEntry + 2,
                v14 & 0xFEFFFFFF,
                v14);
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
  BugCheckParameter1[1].WaitBlock[1].Object = Object;
  if ( Object )
  {
    KeAdjustWobPriority((ULONG_PTR)BugCheckParameter1, (unsigned int)Object[195]);
    KeApplyWobBamQos((__int64)KeGetCurrentPrcb(), (__int64)BugCheckParameter1, (__int64)Object);
  }
  else if ( (KeGetCurrentThread()->MiscFlags & 4) != 0 )
  {
    BugCheckParameter1->MiscFlags |= 0x10000u;
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
          _InterlockedOr((volatile signed __int32 *)&BugCheckParameter1[1].SwapListEntry + 2, 0x1000000u);
      }
    }
  }
  EtwTraceThreadWorkOnBehalfUpdate(v2, (__int64)Object);
  if ( v2 )
  {
    v9 = v2 - 48;
    if ( ObpTraceFlags )
      ObpPushStackInfo(v2 - 48, 0, 1u, 0x746E6F43u);
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
