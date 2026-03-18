/*
 * XREFs of ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140204AAC
 * Callers:
 *     xxxRealDrawMenuItem @ 0x14003B17C (xxxRealDrawMenuItem.c)
 *     xxxDrawMenuItem @ 0x140069860 (xxxDrawMenuItem.c)
 *     xxxDrawCaptionBar @ 0x14006E51C (xxxDrawCaptionBar.c)
 *     BitBltSysBmp @ 0x14007B288 (BitBltSysBmp.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1401FFBD8 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x140204794 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     NtUserBitBltSysBmp @ 0x140204940 (NtUserBitBltSysBmp.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402E8A4C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 * Callees:
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1400370A0 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     GreGetDCDpiScaleValue @ 0x14018D780 (GreGetDCDpiScaleValue.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GetDpiCacheIndex @ 0x1402F160C (GetDpiCacheIndex.c)
 */

__int64 __fastcall PrepareHDCBITSBitmap(HDC a1)
{
  unsigned int DpiForSystem; // eax
  unsigned int DpiCacheIndex; // edi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int DCDpiScaleValue; // eax
  __int64 v9; // rdx
  __int64 UserSessionState; // rsi
  __int64 v11; // rbp
  __int64 v12; // rdx

  DpiForSystem = GetDpiForSystem((__int64)a1);
  DpiCacheIndex = GetDpiCacheIndex(DpiForSystem);
  v4 = 0LL;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v5) & 0xF) == 0 )
  {
    if ( a1 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
      if ( DCDpiScaleValue > 1 )
        DpiCacheIndex = GetDpiCacheIndex((unsigned int)(96 * DCDpiScaleValue));
    }
  }
  UserSessionState = W32GetUserSessionState(v7, v6);
  v11 = 760LL * (int)DpiCacheIndex;
  if ( !*(_QWORD *)(UserSessionState + v11 + 43328) )
    CreateDPIBitmapStrip(DpiCacheIndex, v9);
  if ( DpiCacheIndex == -1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 576LL);
  v12 = *(_QWORD *)(UserSessionState + v11 + 43328);
  if ( v12 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 72LL);
    GreSelectBitmap(v4, v12);
  }
  return v4;
}
