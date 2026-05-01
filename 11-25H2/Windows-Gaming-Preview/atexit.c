/*
 * XREFs of atexit @ 0x1800021B8
 * Callers:
 *     Windows::Internal::Details::_dynamic_initializer_for___git__ @ 0x180001130 (Windows--Internal--Details--_dynamic_initializer_for___git__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001150 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001170 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x1800013A0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x1800013C0 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Details::StaticStorage_Microsoft::WRL::Details::DefaultModule_1__0_int_::instance___ @ 0x1800013E0 (_dynamic_initializer_for__Microsoft--WRL--Details--StaticStorage_Microsoft--WRL--Details--Defaul.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__AumId__ @ 0x180001440 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__AumId_.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__DateInstalled__ @ 0x180001480 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__DateIn.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__DesktopAppPath__ @ 0x1800014C0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__Deskto.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__FullTileId__ @ 0x180001500 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__FullTi.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__GameConfigIds__ @ 0x180001540 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__GameCo.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__GameModeSystemDefaults__ @ 0x180001580 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__GameMo.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__Id__ @ 0x1800015C0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__Id__.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__KglGameModeDefaults__ @ 0x180001600 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__KglGam.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__LastLaunched__ @ 0x180001640 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__LastLa.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__MFURank__ @ 0x180001680 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__MFURan.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__PackageFamilyName__ @ 0x1800016C0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__Packag.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__PhoneProductId__ @ 0x180001700 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__PhoneP.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__ProcessExeFullPaths__ @ 0x180001740 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__Proces.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__TileId__ @ 0x180001780 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__TileId.c)
 *     _dynamic_initializer_for__Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock__ @ 0x1800017C0 (_dynamic_initializer_for__Windows--Gaming--Preview--GamesEnumeration--KglDefaults--_initializeLo.c)
 *     _dynamic_initializer_for__Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_readyEvent__ @ 0x180001800 (_dynamic_initializer_for__Windows--Gaming--Preview--GamesEnumeration--KglDefaults--_readyEvent__.c)
 *     _dynamic_atexit_destructor_for__Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance__ @ 0x180001820 (_dynamic_atexit_destructor_for__Windows--Gaming--Preview--GamesEnumeration--KglDefaults--_instan.c)
 *     _dynamic_initializer_for__Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_initializeLock__ @ 0x180001840 (_dynamic_initializer_for__Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--_initializ.c)
 *     _dynamic_initializer_for__Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_readyEvent__ @ 0x180001880 (_dynamic_initializer_for__Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--_readyEven.c)
 *     _dynamic_atexit_destructor_for__Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance__ @ 0x1800018A0 (_dynamic_atexit_destructor_for__Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--_ins.c)
 *     __scrt_initialize_thread_safe_statics @ 0x180002310 (__scrt_initialize_thread_safe_statics.c)
 *     ?_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180030FC0 (-_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Wind.c)
 * Callees:
 *     _onexit @ 0x180002178 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
