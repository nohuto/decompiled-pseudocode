/*
 * XREFs of ?HandlePenButtonAction@CopilotHotkeyManager@@AEAAXW4CopilotInvocationType@@AEBUPropertyDetails@@@Z @ 0x180625C60
 * Callers:
 *     ?OnPenButtonCopilotAction@CopilotHotkeyManager@@QEAAXAEBUPenButtonActionData@@@Z @ 0x180633C80 (-OnPenButtonCopilotAction@CopilotHotkeyManager@@QEAAXAEBUPenButtonActionData@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??$CopilotHotkeyInvoked@AEAW4IMMERSIVE_HOT_KEY_ID@@AEAPEBGIIAEAU_GUID@@@CopilotHotkeyManagerTelemetry@@SAXAEAW4IMMERSIVE_HOT_KEY_ID@@AEAPEBG$$QEAI2AEAU_GUID@@@Z @ 0x18061C8BC (--$CopilotHotkeyInvoked@AEAW4IMMERSIVE_HOT_KEY_ID@@AEAPEBGIIAEAU_GUID@@@CopilotHotkeyManagerTele.c)
 *     ??0LauncherOptions@System@Windows@winrt@@QEAA@XZ @ 0x180621AC4 (--0LauncherOptions@System@Windows@winrt@@QEAA@XZ.c)
 *     ?LaunchCustomUriForResultsAsync@CopilotHotkeyManager@@QEAA?AUfire_and_forget@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@ULauncherOptions@System@Windows@3@@Z @ 0x180632E48 (-LaunchCustomUriForResultsAsync@CopilotHotkeyManager@@QEAA-AUfire_and_forget@winrt@@V-$basic_str.c)
 *     ?SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z @ 0x180634D90 (-SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z.c)
 *     ?TargetApplicationPackageFamilyName@?$consume_Windows_System_ILauncherOptions2@ULauncherOptions@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180635374 (-TargetApplicationPackageFamilyName@-$consume_Windows_System_ILauncherOptions2@ULauncherOptions@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CopilotHotkeyManager::HandlePenButtonAction(__int64 a1, int a2, __int64 a3)
{
  __int128 *v6; // r14
  struct IUnknownVtbl *v7; // rdi
  const unsigned __int16 *v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v12[40]; // [rsp+38h] [rbp-28h] BYREF
  HWND lpVtbl; // [rsp+90h] [rbp+30h] BYREF
  int v14; // [rsp+98h] [rbp+38h] BYREF
  HWND *v15; // [rsp+A0h] [rbp+40h] BYREF
  struct IUnknown v16; // [rsp+A8h] [rbp+48h] BYREF

  v6 = (__int128 *)(a1 + 180);
  CoCreateGuid((GUID *)(a1 + 180));
  *(_DWORD *)(a1 + 628) = a2;
  if ( *(_BYTE *)(a3 + 32)
    && (lpVtbl = 0LL,
        CopilotHotkeyManager::SendWindowMessageOnInvocation((CopilotHotkeyManager *)a1, *(_DWORD *)(a3 + 36), &lpVtbl)) )
  {
    v14 = 1;
    LODWORD(lpVtbl) = *(_DWORD *)(a1 + 628);
    v7 = (struct IUnknownVtbl *)(a1 + 208);
    if ( (char *)v7[1].QueryInterface > (char *)7 )
      v7 = (struct IUnknownVtbl *)v7->QueryInterface;
    v16.lpVtbl = v7;
    LODWORD(v15) = 0;
    CopilotHotkeyManagerTelemetry::CopilotHotkeyInvoked<enum IMMERSIVE_HOT_KEY_ID &,unsigned short const * &,unsigned int,unsigned int,_GUID &>(
      (int *)&v15,
      (__int64 *)&v16,
      (__int64)&lpVtbl,
      (__int64)&v14,
      v6);
  }
  else if ( *(_QWORD *)(a3 + 16) )
  {
    winrt::Windows::System::LauncherOptions::LauncherOptions(&v16);
    v8 = (const unsigned __int16 *)(a1 + 240);
    if ( *(_QWORD *)(a1 + 264) > 7uLL )
      v8 = *(const unsigned __int16 **)v8;
    winrt::param::hstring::hstring((winrt::param::hstring *)v12, v8);
    winrt::impl::consume_Windows_System_ILauncherOptions2<winrt::Windows::System::LauncherOptions>::TargetApplicationPackageFamilyName(
      &v16,
      v12);
    v15 = &lpVtbl;
    lpVtbl = (HWND)v16.lpVtbl;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&lpVtbl);
    v9 = std::wstring::wstring((__int64)v12, a3);
    CopilotHotkeyManager::LaunchCustomUriForResultsAsync(a1, &v14, v9, &lpVtbl);
    v14 = 1;
    LODWORD(lpVtbl) = *(_DWORD *)(a1 + 628);
    v10 = (_QWORD *)(a1 + 208);
    if ( v10[3] > 7uLL )
      v10 = (_QWORD *)*v10;
    v11 = v10;
    LODWORD(v15) = 0;
    CopilotHotkeyManagerTelemetry::CopilotHotkeyInvoked<enum IMMERSIVE_HOT_KEY_ID &,unsigned short const * &,unsigned int,unsigned int,_GUID &>(
      (int *)&v15,
      (__int64 *)&v11,
      (__int64)&lpVtbl,
      (__int64)&v14,
      v6);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  }
}
