/*
 * XREFs of ??1?$ListPrincipalCommon@VBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@I@Bamo@Microsoft@@UEAA@XZ @ 0x1800FEBB4
 * Callers:
 *     ??_E?$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z @ 0x1800FEC90 (--_E-$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180015AA8 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall Microsoft::Bamo::ListPrincipalCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Principal,dataprovider_AutoBamos::BamoConnection,unsigned int>::~ListPrincipalCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Principal,dataprovider_AutoBamos::BamoConnection,unsigned int>(
        __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9

  std::vector<Windows::UI::Color>::_Tidy(a1 + 56);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)(a1 + 32),
    v2,
    v3,
    v4);
}
