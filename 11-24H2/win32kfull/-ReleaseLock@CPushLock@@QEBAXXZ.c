/*
 * XREFs of ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140076B48
 * Callers:
 *     GreGetRandomRgn @ 0x140038FA0 (GreGetRandomRgn.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x140076ADC (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x140077EA8 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x14007AA08 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x140094048 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1401333EC (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x140259240 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x14025C360 (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 *     ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPECUtagCURSORSIZEINFO@@@Z @ 0x14027130C (-HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPECUtagCURSORSIZEINFO@@@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140095C68 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 */

void __fastcall CPushLock::ReleaseLock(CPushLock *this)
{
  if ( PsGetCurrentThreadId() == *((HANDLE *)this + 1) )
  {
    *((_QWORD *)this + 1) = 0LL;
    W32ReleasePushLockExclusive(this);
  }
  else
  {
    ExReleasePushLockSharedEx(this, 0LL);
    KeLeaveCriticalRegion();
  }
}
