/*
 * XREFs of ??1?$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x18000D360
 * Callers:
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180032520 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     __lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator()_::_1_::dtor$6 @ 0x180043C10 (__lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator()_--_1_--dtor$6.c)
 *     __lambda_c7e28edb760347053732171cef665d5d_::operator()_::_1_::dtor$9 @ 0x180043C8E (__lambda_c7e28edb760347053732171cef665d5d_--operator()_--_1_--dtor$9.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GameModeConfigurationServer_::_1_::dtor$1 @ 0x180043EE2 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--GameModeC_ea_180043EE2.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$15 @ 0x180043FF4 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180043FF4.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetKglDefaultsAsJson_::_1_::dtor$0 @ 0x18004404E (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--GetKglDefaultsAsJson_-.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::GetDefaultGameModeProfile_::_1_::dtor$0 @ 0x18004414A (_Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--GetDefaultGameModeProfile_--_1_--dt.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateValues_::_1_::dtor$0 @ 0x18004415C (_Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--PopulateValues_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>(
        __int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  return result;
}
