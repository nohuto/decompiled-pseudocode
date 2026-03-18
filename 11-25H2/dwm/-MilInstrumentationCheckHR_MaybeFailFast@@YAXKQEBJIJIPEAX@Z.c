/*
 * XREFs of ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400030AC
 * Callers:
 *     ?s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140002060 (-s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     wWinMain @ 0x140002790 (wWinMain.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140002A10 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z @ 0x140002C40 (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z @ 0x140002D88 (-SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z.c)
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140002E78 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x1400031A0 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?ModifyTokenPrivileges@@YAJXZ @ 0x1400034E8 (-ModifyTokenPrivileges@@YAJXZ.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x1400036A4 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x1400037F0 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140003934 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x140003D3C (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140004960 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 *     ?SetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGK@Z @ 0x14000E6DC (-SetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGK@Z.c)
 *     ?WilResultLoggingCallback_MaybeFailFast@@YAXAEBUFailureInfo@wil@@@Z @ 0x1400108D0 (-WilResultLoggingCallback_MaybeFailFast@@YAXAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x140003A2C (-IsOOM@@YA_NJ@Z.c)
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x1400105D0 (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ?IsHRInList@@YA_NJQEBJI@Z @ 0x14001075C (-IsHRInList@@YA_NJQEBJI@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x140010780 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 */

void __fastcall MilInstrumentationCheckHR_MaybeFailFast(
        unsigned int a1,
        const int *const a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        void *a6)
{
  void *v6; // rdi
  bool v9; // al
  int v10; // ecx
  const int *v11; // r10
  unsigned int v12; // r11d
  bool v13; // bp
  void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = a6;
  if ( !a6 )
    v6 = retaddr;
  v9 = IsOOM(a4);
  v13 = v9;
  if ( (a1 & 0x10) != 0 && v9 )
  {
    if ( !v11 || !v12 )
      goto LABEL_12;
  }
  else if ( !v11 || !v12 )
  {
    v11 = (const int *)&unk_140014280;
    v12 = 10;
  }
  if ( !IsHRInList(v10, v11, v12) )
  {
LABEL_12:
    MilInstrumentationHandleFailure_MaybeFailFast(a4, a1, a5, v6);
    return;
  }
  if ( (a1 & 4) != 0 && v13 )
    DoStackCapture(a4, a5, v6);
}
