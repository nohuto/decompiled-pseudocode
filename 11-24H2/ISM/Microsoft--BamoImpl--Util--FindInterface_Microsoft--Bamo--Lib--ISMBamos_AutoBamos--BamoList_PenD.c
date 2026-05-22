/*
 * XREFs of Microsoft::BamoImpl::Util::FindInterface_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_PenDevicePrincipal_Principal_ @ 0x180189028
 * Callers:
 *     ?QueryInterface@BamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018C3D0 (-QueryInterface@BamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::Util::FindInterface_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_PenDevicePrincipal_Principal_(
        __int64 a1,
        _QWORD *a2)
{
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && a2[1] == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *a2 == *(_QWORD *)&GUID_8d120ff1_ff5b_4989_cb11_2e324a91274a.Data1
    && a2[1] == *(_QWORD *)GUID_8d120ff1_ff5b_4989_cb11_2e324a91274a.Data4 )
  {
    return (a1 + 8) & -(__int64)(a1 != 0);
  }
  else
  {
    return 0LL;
  }
}
