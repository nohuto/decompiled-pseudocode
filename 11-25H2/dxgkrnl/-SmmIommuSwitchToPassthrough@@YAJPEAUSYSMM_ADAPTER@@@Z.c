/*
 * XREFs of ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x14027D724
 * Callers:
 *     ?SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x14027DB8C (-SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x14027DDA0 (-SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 * Callees:
 *     SmmAssignDomain @ 0x140092768 (SmmAssignDomain.c)
 *     SmmClearPageManager @ 0x1400927FC (SmmClearPageManager.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     SmmIommuDeleteDomain @ 0x14027D498 (SmmIommuDeleteDomain.c)
 *     SmmSwapDomains @ 0x14027DA90 (SmmSwapDomains.c)
 */

__int64 __fastcall SmmIommuSwitchToPassthrough(struct SYSMM_ADAPTER *a1)
{
  int v2; // edi
  __int64 v3; // rsi

  if ( (dword_14015E604 & 2) != 0 )
  {
    v2 = -1073741823;
LABEL_4:
    WdLogSingleEntry2(3LL, a1, v2);
    WdLogGlobalForLineNumber = 2643;
    return (unsigned int)v2;
  }
  v2 = SmmSwapDomains(a1, qword_14015E5F8, *((_QWORD *)a1 + 14));
  if ( v2 < 0 )
    goto LABEL_4;
  if ( (dword_14015E600 & 0x400) == 0 && *((_QWORD *)a1 + 46) )
    (*((void (__fastcall **)(struct SYSMM_ADAPTER *))a1 + 41))(a1);
  SmmClearPageManager((__int64)a1 + 128);
  v3 = *((_QWORD *)a1 + 14);
  SmmAssignDomain((__int64)a1, qword_14015E5F8, 1);
  if ( v3 )
    SmmIommuDeleteDomain();
  return (unsigned int)v2;
}
