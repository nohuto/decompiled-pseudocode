/*
 * XREFs of ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x14027CD70
 * Callers:
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x14027EE00 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 * Callees:
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1400511E8 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1400577CC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     ?SmmGetIommuInterfaceVersion@@YAKXZ @ 0x140064D40 (-SmmGetIommuInterfaceVersion@@YAKXZ.c)
 *     SmmClearPageManager @ 0x1400927FC (SmmClearPageManager.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     SmmDetachDomainFromAllDevices @ 0x14027CE34 (SmmDetachDomainFromAllDevices.c)
 *     SmmIommuDeleteDomain @ 0x14027D498 (SmmIommuDeleteDomain.c)
 */

void __fastcall SmmDeinitializeIommu(struct SYSMM_ADAPTER *a1)
{
  struct _MDL *v2; // rcx

  if ( (*((_DWORD *)a1 + 5) & 1) == 0 )
  {
    if ( *((_QWORD *)a1 + 14) )
    {
      SmmDetachDomainFromAllDevices();
      if ( !*((_DWORD *)a1 + 26) )
        SmmIommuDeleteDomain(*((_QWORD *)a1 + 14));
      *((_QWORD *)a1 + 14) = 0LL;
    }
    SmmClearPageManager((__int64)a1 + 128);
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)a1 + 144));
    v2 = (struct _MDL *)*((_QWORD *)a1 + 30);
    if ( v2 != (struct _MDL *)((char *)a1 + 248) )
      IoFreeMdl(v2);
    if ( (unsigned int)SmmGetIommuInterfaceVersion() >= 2
      && (*((_DWORD *)a1 + 5) & 4) != 0
      && (SmmUseIommuV2Interface() || SmmUseIommuV3Interface()) )
    {
      ((void (__fastcall *)(void (__fastcall *)(struct _IOMMU_INTERFACE_STATE_CHANGE *, void *)))qword_14015E598)(SmmDomainTypeStateChangeCallback);
    }
  }
}
