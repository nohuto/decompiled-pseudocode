/*
 * XREFs of ??1?$function@$$A6AJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z@std@@QEAA@XZ @ 0x18000D328
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_Start_::_1_::dtor$43 @ 0x18004387D (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_Start_--_1_--dtor$43.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnUtmCollectionChanged_::_1_::dtor$1 @ 0x180043E19 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_OnUtmCollectionChanged_.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnUtmCollectionChanged_::_1_::dtor$3 @ 0x180043E2B (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_OnUtmColle_ea_180043E2B.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnUtmCollectionChanged_::_1_::dtor$9 @ 0x180043E3D (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_OnUtmColle_ea_180043E3D.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_ProcessAddedOrRemovedTiles_::_1_::dtor$0 @ 0x180043E4F (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_ProcessAddedOrRemovedTi.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::function<long (WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *)>::~function<long (WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
