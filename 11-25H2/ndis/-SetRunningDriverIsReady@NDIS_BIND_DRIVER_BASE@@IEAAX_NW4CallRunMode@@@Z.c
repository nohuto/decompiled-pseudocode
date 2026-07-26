/*
 * XREFs of ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x14015CED0
 * Callers:
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x14014E244 (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z @ 0x14015CE30 (-SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     _lambda_ed8d35aab00ff38f46f7a668e5ef32e9_::operator_void_(__cdecl_)(NDIS_BIND_LINK_BASE__) @ 0x14014E194 (_lambda_ed8d35aab00ff38f46f7a668e5ef32e9_--operator_void_(__cdecl_)(NDIS_BIND_LINK_BASE__).c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x14015DDB0 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x14015E140 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 */

void __fastcall NDIS_BIND_DRIVER_BASE::SetRunningDriverIsReady(
        NDIS_BIND_DRIVER_BASE *this,
        bool a2,
        enum CallRunMode a3)
{
  void (*v5)(struct NDIS_BIND_LINK_BASE *); // rax
  NDIS_BIND_DRIVER_BASE *v6; // rcx
  void (*v7)(struct NDIS_BIND_LINK_BASE *); // rdx

  this->DriverReady = a2;
  _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
  v5 = (void (*)(struct NDIS_BIND_LINK_BASE *))lambda_ed8d35aab00ff38f46f7a668e5ef32e9_::operator_void____cdecl___NDIS_BIND_LINK_BASE___();
  NDIS_BIND_DRIVER_BASE::ForEachLink(v6, v5);
  v7 = (void (*)(struct NDIS_BIND_LINK_BASE *))lambda_b246ce06b62e0fe260ebdade75b833fa_::_lambda_invoker_cdecl_;
  if ( a3 )
    v7 = (void (*)(struct NDIS_BIND_LINK_BASE *))lambda_f04dbbba9fe6a1cf15f4fb42f8ba953a_::_lambda_invoker_cdecl_;
  NDIS_BIND_DRIVER_BASE::ForEachLink(this, v7);
  Ndis::BindEngine::EndBindOperation();
}
