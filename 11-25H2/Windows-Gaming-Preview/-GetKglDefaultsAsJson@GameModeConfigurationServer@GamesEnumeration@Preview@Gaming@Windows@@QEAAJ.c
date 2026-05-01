/*
 * XREFs of ?GetKglDefaultsAsJson@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180036C8C
 * Callers:
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180032370 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001077C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180036B30 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     ?CheckKGLForGameFromGameConfig@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUGameConfig@ExecutionModel@@KPEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18003AA78 (-CheckKGLForGameFromGameConfig@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUGam.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetKglDefaultsAsJson(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this,
        HSTRING *a2)
{
  __int64 FirstGameConfig; // rbp
  Windows::Gaming::Preview::GamesEnumeration::KglDefaults *v5; // rdi
  int v6; // esi
  unsigned int v7; // r8d
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // esi
  Windows::Gaming::Preview::GamesEnumeration::KglDefaults *v12[2]; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  WindowsDeleteString(*a2);
  *a2 = 0LL;
  FirstGameConfig = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                      (__int64)this,
                      0);
  *(_OWORD *)v12 = 0LL;
  EnterCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock);
  v5 = Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance;
  if ( Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance )
  {
    v8 = qword_18005A058;
    if ( qword_18005A058 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(qword_18005A058 + 8));
      v8 = qword_18005A058;
      v5 = Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance;
    }
    v12[1] = (Windows::Gaming::Preview::GamesEnumeration::KglDefaults *)v8;
    LeaveCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock);
    v6 = 0;
  }
  else
  {
    v6 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
      (const char *)0x8000FFFFLL);
    LeaveCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock);
    v8 = 0LL;
    v5 = 0LL;
  }
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD2,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)v6);
  if ( v5
    && (v9 = Windows::Gaming::Preview::GamesEnumeration::KglDefaults::CheckKGLForGameFromGameConfig(
               v5,
               *(struct ExecutionModel::GameConfig **)(FirstGameConfig + 16),
               v7,
               (struct Microsoft::WRL::Wrappers::HString *)a2),
        v10 = v9,
        v9 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD5,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)v9);
    if ( v8 && _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(Windows::Gaming::Preview::GamesEnumeration::KglDefaults *))v12[1])(v12[1]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12[1] + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::KglDefaults *))(*(_QWORD *)v12[1] + 8LL))(v12[1]);
    }
    return v10;
  }
  else
  {
    if ( v8 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(Windows::Gaming::Preview::GamesEnumeration::KglDefaults *))v12[1])(v12[1]);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12[1] + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::KglDefaults *))(*(_QWORD *)v12[1] + 8LL))(v12[1]);
      }
    }
    return 0LL;
  }
}
