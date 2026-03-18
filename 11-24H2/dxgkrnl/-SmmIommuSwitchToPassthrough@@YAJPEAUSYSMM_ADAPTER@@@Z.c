/*
 * XREFs of ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x140284A94
 * Callers:
 *     ?SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x140284EFC (-SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140285110 (-SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 * Callees:
 *     SmmAssignDomain @ 0x140094C18 (SmmAssignDomain.c)
 *     SmmClearPageManager @ 0x140094CAC (SmmClearPageManager.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     SmmIommuDeleteDomain @ 0x140284808 (SmmIommuDeleteDomain.c)
 *     SmmSwapDomains @ 0x140284E00 (SmmSwapDomains.c)
 */

__int64 __fastcall SmmIommuSwitchToPassthrough(struct SYSMM_ADAPTER *a1)
{
  int v2; // edi
  __int64 v3; // rsi

  if ( (dword_140161614 & 2) != 0 )
  {
    v2 = -1073741823;
LABEL_4:
    WdLogSingleEntry2(3LL, a1, v2);
    WdLogGlobalForLineNumber = 2651;
    return (unsigned int)v2;
  }
  v2 = SmmSwapDomains(a1, qword_140161608, *((_QWORD *)a1 + 14));
  if ( v2 < 0 )
    goto LABEL_4;
  if ( (dword_140161610 & 0x400) == 0 && *((_QWORD *)a1 + 46) )
    (*((void (__fastcall **)(struct SYSMM_ADAPTER *))a1 + 41))(a1);
  SmmClearPageManager((__int64)a1 + 128);
  v3 = *((_QWORD *)a1 + 14);
  SmmAssignDomain((__int64)a1, qword_140161608, 1);
  if ( v3 )
    SmmIommuDeleteDomain();
  return (unsigned int)v2;
}
