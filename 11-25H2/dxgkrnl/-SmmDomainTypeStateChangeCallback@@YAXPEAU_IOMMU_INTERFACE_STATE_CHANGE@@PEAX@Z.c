/*
 * XREFs of ?SmmDomainTypeStateChangeCallback@@YAXPEAU_IOMMU_INTERFACE_STATE_CHANGE@@PEAX@Z @ 0x14027CEC0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??$SmmAcquirePushLockExclusive@$0EL@@@YAXPEAU?$SYSMM_PUSHLOCK@$0EL@@@@Z @ 0x140092708 (--$SmmAcquirePushLockExclusive@$0EL@@@YAXPEAU-$SYSMM_PUSHLOCK@$0EL@@@@Z.c)
 *     ??$SmmReleasePushLockExclusive@$0EL@@@YAXPEAU?$SYSMM_PUSHLOCK@$0EL@@@@Z @ 0x140092740 (--$SmmReleasePushLockExclusive@$0EL@@@YAXPEAU-$SYSMM_PUSHLOCK@$0EL@@@@Z.c)
 *     ?SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x14027DDA0 (-SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 */

void __fastcall SmmDomainTypeStateChangeCallback(struct _IOMMU_INTERFACE_STATE_CHANGE *a1, _DWORD *a2)
{
  SmmAcquirePushLockExclusive<75>();
  if ( (a2[25] & 2) == 0 && (*((_DWORD *)a1 + 1) & 2) != 0 )
  {
    if ( (a2[24] & 1) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2736;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(pAdapter->Iommu.EnablementBitmask & SYSMM_IOMMU_ENABLEMENT_REASON_DMA_REMAPPING_POLICY) != 0",
        2736LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)SysMmDisableIommu(a2, 1LL) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2744;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"(((NTSTATUS)(Status)) >= 0)", 2744LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  a2[25] = *((_DWORD *)a1 + 1);
  SmmReleasePushLockExclusive<75>();
}
