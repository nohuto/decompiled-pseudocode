/*
 * XREFs of ?get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180035990
 * Callers:
 *     _lambda_75b78523e3da460933f50e5d76bfa16b_::operator() @ 0x1800262C8 (_lambda_75b78523e3da460933f50e5d76bfa16b_--operator().c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800300E8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180014A98 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180036CE0 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_LaunchParameters(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        HSTRING *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int128 v7; // xmm6
  __int64 *v8; // rcx
  int StringPropertyFromGameConfigStore; // eax
  unsigned int v10; // edi
  HSTRING v12; // rax
  int v13[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING string; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v6 = *((_QWORD *)this + 32);
  if ( v6 && *((_QWORD *)this + 33) )
  {
    LOBYTE(v5) = 1;
    v7 = *(_OWORD *)Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(v6, v5);
    WindowsDeleteString(0LL);
    v8 = (__int64 *)*((_QWORD *)this + 33);
    string = 0LL;
    *(_OWORD *)v13 = v7;
    StringPropertyFromGameConfigStore = GetStringPropertyFromGameConfigStore(v8, (__int128 *)v13, 26LL, &string);
    v10 = StringPropertyFromGameConfigStore;
    if ( StringPropertyFromGameConfigStore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5AD,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)StringPropertyFromGameConfigStore);
      WindowsDeleteString(string);
      string = 0LL;
      if ( v2 )
        LeaveCriticalSection(v2);
      return v10;
    }
    v12 = string;
    string = 0LL;
    *a2 = v12;
    WindowsDeleteString(0LL);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
