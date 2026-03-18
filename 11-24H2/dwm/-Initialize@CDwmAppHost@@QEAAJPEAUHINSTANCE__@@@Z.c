/*
 * XREFs of ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140002EE0
 * Callers:
 *     wWinMain @ 0x1400029B0 (wWinMain.c)
 * Callees:
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x1400026D0 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x140002E0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x14000396C (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x140003ECC (-ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z.c)
 *     IsRegisterHotKeyPresent @ 0x1400059B8 (IsRegisterHotKeyPresent.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x140005C80 (IsDWMGhostHandleGhostMsgPresent.c)
 *     ??$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z @ 0x14000BF68 (--$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwner@Text@Internal@UI@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14000C5B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwne.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x14000C6C0 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
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
  HIDWORD(qword_14001C4D0) = GetCurrentThreadId();
  CSettingsManager::RefreshPreferencesAndPolicies((CSettingsManager *)qword_14001C4E8);
  v3 = CDwmAppHost::InitializeWindow(v2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v15 = 43;
    goto LABEL_26;
  }
  v3 = DwmInitializePort(&g_dwmAppHost, CDwmAppHost::s_LpcCommandHandler, &hInstance + 1, &dword_14001C4D8);
  v4 = v3;
  if ( v3 < 0 )
  {
    v15 = 46;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140012D10, 2LL, v3, v15, 0LL);
    return v4;
  }
  if ( !dword_14001C4D8 )
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140012D10, 2LL, v4, 0x36u, 0LL);
      CDwmAppHost::ReportEventWithDword(v7, 1u, 0xC0002344, v4);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140012D10, 2LL, v4, 0x42u, 0LL);
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
  if ( (unsigned __int8)IsRegisterHotKeyPresent() && (_DWORD)v16 == 3 && !RegisterHotKey(hWnd, 0, 0x400Eu, 0x42u) )
  {
    v8 = GetLastError();
    if ( v8 > 0 )
      v8 = (unsigned __int16)v8 | 0x80070000;
    CDwmAppHost::ReportEventWithDword(v9, 2u, 0x8000234B, v8);
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
