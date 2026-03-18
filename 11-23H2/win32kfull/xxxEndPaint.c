/*
 * XREFs of xxxEndPaint @ 0x1C0061760
 * Callers:
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00604D0 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     NtUserBeginPaint @ 0x1C0060550 (NtUserBeginPaint.c)
 *     xxxTooltipWndProc @ 0x1C00D7ED0 (xxxTooltipWndProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00DF38C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C021522C (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxSBWndProc @ 0x1C022A1A0 (xxxSBWndProc.c)
 * Callees:
 *     zzzInternalShowCaret @ 0x1C00062D4 (zzzInternalShowCaret.c)
 *     InternalInvalidate3 @ 0x1C0051900 (InternalInvalidate3.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 */

__int64 __fastcall xxxEndPaint(__int64 *a1, _QWORD *a2)
{
  ReleaseCacheDC(*a2, 1LL);
  if ( (*(_BYTE *)(a1[5] + 20) & 2) != 0 )
  {
    if ( *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
    {
      InternalInvalidate3(a1, *(__int64 *)&WPP_MAIN_CB.DeviceQueue.Type, (unsigned int)gRdwFlags);
      if ( !--LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
      {
        GreDeleteObject(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type);
        *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type = 0LL;
        gRdwFlags = 0;
      }
    }
    SetOrClrWF(0LL, a1, 1026LL, 1LL);
  }
  SetOrClrWF(0LL, a1, 1025LL, 1LL);
  SetOrClrWF(0LL, a1, 1028LL, 1LL);
  if ( a1 == *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 304LL) )
    zzzInternalShowCaret();
  return 1LL;
}
