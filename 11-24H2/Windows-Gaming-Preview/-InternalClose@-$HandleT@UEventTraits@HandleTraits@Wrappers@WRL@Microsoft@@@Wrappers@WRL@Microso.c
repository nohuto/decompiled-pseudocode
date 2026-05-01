/*
 * XREFs of ?InternalClose@?$HandleT@UEventTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x18003B030
 * Callers:
 *     _dynamic_atexit_destructor_for__Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_readyEvent__ @ 0x180044700 (_dynamic_atexit_destructor_for__Windows--Gaming--Preview--GamesEnumeration--KglDefaults--_readyE.c)
 *     _dynamic_atexit_destructor_for__Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_readyEvent__ @ 0x1800447E0 (_dynamic_atexit_destructor_for__Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--_rea.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::EventTraits>::InternalClose(
        __int64 a1)
{
  return CloseHandle(*(HANDLE *)(a1 + 8));
}
