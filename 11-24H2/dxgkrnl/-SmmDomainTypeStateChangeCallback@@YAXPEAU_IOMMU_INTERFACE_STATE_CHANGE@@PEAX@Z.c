/*
 * XREFs of ?SmmDomainTypeStateChangeCallback@@YAXPEAU_IOMMU_INTERFACE_STATE_CHANGE@@PEAX@Z @ 0x140284230
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??$SmmAcquirePushLockExclusive@$0EL@@@YAXPEAU?$SYSMM_PUSHLOCK@$0EL@@@@Z @ 0x140094BB8 (--$SmmAcquirePushLockExclusive@$0EL@@@YAXPEAU-$SYSMM_PUSHLOCK@$0EL@@@@Z.c)
 *     ??$SmmReleasePushLockExclusive@$0EL@@@YAXPEAU?$SYSMM_PUSHLOCK@$0EL@@@@Z @ 0x140094BF0 (--$SmmReleasePushLockExclusive@$0EL@@@YAXPEAU-$SYSMM_PUSHLOCK@$0EL@@@@Z.c)
 *     ?SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140285110 (-SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 */

void __fastcall SmmDomainTypeStateChangeCallback(struct _IOMMU_INTERFACE_STATE_CHANGE *a1, _DWORD *a2)
{
  SmmAcquirePushLockExclusive<75>();
  if ( (a2[25] & 2) == 0 && (*((_DWORD *)a1 + 1) & 2) != 0 )
  {
    if ( (a2[24] & 1) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2744;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(pAdapter->Iommu.EnablementBitmask & SYSMM_IOMMU_ENABLEMENT_REASON_DMA_REMAPPING_POLICY) != 0",
        2744LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)SysMmDisableIommu(a2, 1LL) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2752;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(((NTSTATUS)(Status)) >= 0)",
        2752LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  a2[25] = *((_DWORD *)a1 + 1);
  SmmReleasePushLockExclusive<75>();
}
