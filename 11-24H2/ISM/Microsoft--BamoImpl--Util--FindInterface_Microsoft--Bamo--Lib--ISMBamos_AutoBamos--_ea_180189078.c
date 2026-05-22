/*
 * XREFs of Microsoft::BamoImpl::Util::FindInterface_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Stub_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_PenDevicePrincipal_Stub_ @ 0x180189078
 * Callers:
 *     ?QueryInterface@BamoList_PenDevicePrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018C420 (-QueryInterface@BamoList_PenDevicePrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJAEB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::Util::FindInterface_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Stub_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_PenDevicePrincipal_Stub_(
        __int64 a1,
        _QWORD *a2)
{
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && a2[1] == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *a2 == *(_QWORD *)&GUID_57d05da2_750c_fbe5_10fd_756a611570d5.Data1
    && a2[1] == *(_QWORD *)GUID_57d05da2_750c_fbe5_10fd_756a611570d5.Data4 )
  {
    return (a1 + 8) & -(__int64)(a1 != 0);
  }
  else
  {
    return 0LL;
  }
}
