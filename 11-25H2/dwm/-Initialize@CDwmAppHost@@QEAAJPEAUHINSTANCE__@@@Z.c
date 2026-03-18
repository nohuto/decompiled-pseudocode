/*
 * XREFs of ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x1400031A0
 * Callers:
 *     wWinMain @ 0x140002790 (wWinMain.c)
 * Callees:
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x1400024B0 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400030AC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x140003D3C (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x14000429C (-ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z.c)
 *     IsRegisterHotKeyPresent @ 0x140005EF8 (IsRegisterHotKeyPresent.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x1400061C0 (IsDWMGhostHandleGhostMsgPresent.c)
 *     ??$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z @ 0x14000CC34 (--$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwner@Text@Internal@UI@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14000DA10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwne.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x14000DB20 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x14000DEE8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 */

__int64 __fastcall CDwmAppHost::Initialize(CDwmAppHost *this, HINSTANCE a2)
{
  CDwmAppHost *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  CDwmAppHost *v5; // rcx
  signed int LastError; // eax
  CDwmAppHost *v7; // rcx
  signed int v8; // eax
  CDwmAppHost *v9; // rcx
  __int64 v10; // rcx
  signed int v11; // eax
  CDwmAppHost *v12; // rcx
  const unsigned __int16 *v14; // [rsp+20h] [rbp-18h]
  unsigned int v15; // [rsp+20h] [rbp-18h]
  CDwmAppHost *v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = this;
  hInstance = a2;
  HIDWORD(qword_14001D5B0) = GetCurrentThreadId();
  CSettingsManager::RefreshPreferencesAndPolicies((CSettingsManager *)qword_14001D5C8);
  v3 = CDwmAppHost::InitializeWindow(v2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v15 = 43;
    goto LABEL_28;
  }
  v3 = DwmInitializePort(&g_dwmAppHost, CDwmAppHost::s_LpcCommandHandler, &hInstance + 1, &dword_14001D5B8);
  v4 = v3;
  if ( v3 < 0 )
  {
    v15 = 46;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140013D58, 2LL, v3, v15, 0LL);
    return v4;
  }
  if ( !dword_14001D5B8 )
  {
    SetLastError(0);
    if ( !(unsigned int)RegisterSessionPort(*(&hInstance + 1)) )
    {
      LastError = GetLastError();
      v4 = LastError;
      if ( LastError > 0 )
        v4 = (unsigned __int16)LastError | 0x80070000;
      if ( (v4 & 0x80000000) == 0 )
        v4 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140013D58, 2LL, v4, 0x36u, 0LL);
      CDwmAppHost::ReportEventWithDword(v7, 1u, 0xC0002344, v4);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140013D58, 2LL, v4, 0x42u, 0LL);
      return v4;
    }
    CDwmAppHost::ReportEventW(v5, 4u, 0x40002343u, 0LL, v14);
  }
  if ( (unsigned __int8)IsDWMGhostHandleGhostMsgPresent() )
  {
    DWMGhostInitialize();
    *(&uExitCode + 1) = 1;
  }
  v4 = 0;
  LODWORD(v16) = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v16, 0LL);
  if ( (unsigned __int8)IsRegisterHotKeyPresent() && (_DWORD)v16 == 3 )
  {
    if ( !RegisterHotKey(hWnd, 0, 0x400Eu, 0x42u) )
    {
      v8 = GetLastError();
      if ( v8 > 0 )
        v8 = (unsigned __int16)v8 | 0x80070000;
      CDwmAppHost::ReportEventWithDword(v9, 2u, 0x8000234B, v8);
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
      RegisterHotKey(hWnd, 3, 0x400Eu, 0x4Du);
  }
  if ( (_DWORD)v16 == 16 )
  {
    v10 = g_spHotkeyCallback;
    g_spHotkeyCallback = 0LL;
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::Text::IHotKeyClientOwner>::Release();
    v11 = Microsoft::WRL::Details::MakeAndInitialize<HotKeyCallback,HotKeyCallback,>(&g_spHotkeyCallback);
    if ( v11 < 0 )
      CDwmAppHost::ReportEventWithDword(v12, 2u, 0x8000234B, v11);
  }
  return v4;
}
