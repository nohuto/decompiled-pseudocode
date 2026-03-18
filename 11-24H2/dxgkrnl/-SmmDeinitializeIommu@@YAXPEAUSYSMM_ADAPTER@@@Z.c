/*
 * XREFs of ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1402840E0
 * Callers:
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x140286170 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 * Callees:
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x140050C58 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x140056FDC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     ?SmmGetIommuInterfaceVersion@@YAKXZ @ 0x140064960 (-SmmGetIommuInterfaceVersion@@YAKXZ.c)
 *     SmmClearPageManager @ 0x140094CAC (SmmClearPageManager.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     SmmDetachDomainFromAllDevices @ 0x1402841A4 (SmmDetachDomainFromAllDevices.c)
 *     SmmIommuDeleteDomain @ 0x140284808 (SmmIommuDeleteDomain.c)
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
      ((void (__fastcall *)(void (__fastcall *)(struct _IOMMU_INTERFACE_STATE_CHANGE *, void *)))qword_1401615A8)(SmmDomainTypeStateChangeCallback);
    }
  }
}
