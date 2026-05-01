/*
 * XREFs of ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180036B30
 * Callers:
 *     _lambda_75b78523e3da460933f50e5d76bfa16b_::operator() @ 0x180026138 (_lambda_75b78523e3da460933f50e5d76bfa16b_--operator().c)
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180030B7C (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180031B70 (-_InitializeId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180031DC8 (-_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180032370 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800357E0 (-get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUH.c)
 *     ?get_LaunchableState@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameListEntryLaunchableState@2345@@Z @ 0x180035A00 (-get_LaunchableState@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4Game.c)
 *     ?GetKglDefaultsAsJson@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180036C8C (-GetKglDefaultsAsJson@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJ.c)
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180037464 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001077C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
        __int64 a1,
        char a2)
{
  __int64 *j; // rax
  __int64 **v5; // rcx
  __int64 *i; // rcx
  __int64 *v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 88) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2A8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)0x8000FFFFLL);
  j = **(__int64 ***)(a1 + 80);
  while ( !*((_BYTE *)j + 25) )
  {
    if ( ((*(_DWORD *)(j[6] + 32) & 0x400) != 0) == a2 )
      return (__int64)(j + 4);
    v5 = (__int64 **)j[2];
    if ( *((_BYTE *)v5 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v7 = *v5;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v7 + 25); v7 = (__int64 *)*v7 )
        j = v7;
    }
  }
  return **(_QWORD **)(a1 + 80) + 32LL;
}
