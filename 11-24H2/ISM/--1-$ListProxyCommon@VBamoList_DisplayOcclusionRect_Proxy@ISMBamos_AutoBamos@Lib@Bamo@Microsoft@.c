/*
 * XREFs of ??1?$ListProxyCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UDisplayOcclusionRect@@@Bamo@Microsoft@@UEAA@XZ @ 0x180139FC0
 * Callers:
 *     ??_GOcclusionRectListProxy@@UEAAPEAXI@Z @ 0x180139FF0 (--_GOcclusionRectListProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x18010A5E0 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxyCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy,DisplayOcclusionRect>::~ListProxyCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy,DisplayOcclusionRect>(
        __int64 a1)
{
  std::vector<DisplayOcclusionRect>::_Tidy(a1 + 48);
  return wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a1 + 32));
}
