/*
 * XREFs of ?Run@CDwmAppHost@@QEAAJXZ @ 0x1400037F0
 * Callers:
 *     wWinMain @ 0x140002790 (wWinMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400030AC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140003934 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?Start@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@QEAAXP6AXAEBU_GUID@@@ZH@Z @ 0x140004474 (-Start@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@QEAAXP6AXAEBU_GUID@@@ZH@Z.c)
 *     ?OnClose@CDwmAppHost@@AEAAXXZ @ 0x140004674 (-OnClose@CDwmAppHost@@AEAAXXZ.c)
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140004960 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 *     ?Stop@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@QEAAXXZ @ 0x14000EA30 (-Stop@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@QEAAXXZ.c)
 */

__int64 __fastcall CDwmAppHost::Run(CDwmAppHost *this)
{
  CDwmAppHost *v1; // rcx
  int started; // ebx
  void (*v4)(const struct _GUID *); // rdx
  int v5; // r8d
  CDwmAppHost *v6; // rcx
  tagMSG Msg; // [rsp+30h] [rbp-38h] BYREF
  CDwmAppHost *v8; // [rsp+70h] [rbp+8h] BYREF

  v8 = this;
  memset(&Msg, 0, sizeof(Msg));
  started = CDwmAppHost::StartComposition(this);
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0xADu, 0LL);
    return (unsigned int)started;
  }
  started = CDwmAppHost::LpcSyncFlush(v1);
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0xB5u, 0LL);
    return (unsigned int)started;
  }
  LODWORD(v8) = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v8, 0LL);
  if ( (_DWORD)v8 != 10 )
    BlackScreenDiagnostics::CLongPowerButtonHoldListener::Start(
      (BlackScreenDiagnostics::CLongPowerButtonHoldListener *)&byte_14001D618,
      v4,
      v5);
  while ( GetMessageW(&Msg, 0LL, 0, 0) )
  {
    TranslateMessage(&Msg);
    DispatchMessageW(&Msg);
  }
  if ( (_DWORD)v8 != 10 )
    BlackScreenDiagnostics::CLongPowerButtonHoldListener::Stop((BlackScreenDiagnostics::CLongPowerButtonHoldListener *)&byte_14001D618);
  if ( hWnd )
    CDwmAppHost::OnClose(v6);
  return uExitCode;
}
