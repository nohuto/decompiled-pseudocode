/*
 * XREFs of PrepareHDCBITSBitmap @ 0x1C0016A3C
 * Callers:
 *     BitBltSysBmp @ 0x1C0076710 (BitBltSysBmp.c)
 *     xxxDrawCaptionBar @ 0x1C00E2158 (xxxDrawCaptionBar.c)
 *     NtUserBitBltSysBmp @ 0x1C01CC510 (NtUserBitBltSysBmp.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C022AF60 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022B0F4 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0232B64 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxDrawMenuItem @ 0x1C02343FC (xxxDrawMenuItem.c)
 *     xxxRealDrawMenuItem @ 0x1C0236080 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreGetDCDpiScaleValue @ 0x1C0015C48 (GreGetDCDpiScaleValue.c)
 *     GetDpiCacheSlot @ 0x1C00EB0D0 (GetDpiCacheSlot.c)
 *     GetDpiForSystem @ 0x1C00EB100 (GetDpiForSystem.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C0116710 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 */

__int64 __fastcall PrepareHDCBITSBitmap(HDC a1, __int64 a2)
{
  unsigned int DpiForSystem; // eax
  unsigned int DpiCacheSlot; // edi
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  int DCDpiScaleValue; // eax

  DpiForSystem = GetDpiForSystem(a1, a2);
  DpiCacheSlot = GetDpiCacheSlot(DpiForSystem);
  v5 = 0LL;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
  {
    if ( a1 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
      if ( DCDpiScaleValue > 1 )
        DpiCacheSlot = GetDpiCacheSlot((unsigned int)(96 * DCDpiScaleValue));
    }
  }
  v6 = 760LL * DpiCacheSlot;
  if ( !*(_QWORD *)((char *)&gOemBitmapSet + v6) )
    CreateDPIBitmapStrip(DpiCacheSlot);
  v7 = *(_QWORD *)((char *)&gOemBitmapSet + v6);
  if ( v7 )
  {
    v5 = *(_QWORD *)(gpDispInfo + 64LL);
    GreSelectBitmap(v5, v7);
  }
  return v5;
}
