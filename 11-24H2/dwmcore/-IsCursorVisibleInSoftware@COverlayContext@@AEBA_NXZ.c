/*
 * XREFs of ?IsCursorVisibleInSoftware@COverlayContext@@AEBA_NXZ @ 0x18026C58C
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x18009BCC0 (-ApplyConfiguration@COverlayContext@@QEAAX_NPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@.c)
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@IPEA_N_N@Z @ 0x180233400 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 *     ?IsSoftwareCursor@COverlayContext@@QEBA_NPEBVCCursorVisual@@@Z @ 0x18026C78C (-IsSoftwareCursor@COverlayContext@@QEBA_NPEBVCCursorVisual@@@Z.c)
 *     ?IsSoftwareCursor@CDrawingContext@@QEBA_NPEBVCCursorVisual@@@Z @ 0x18029077C (-IsSoftwareCursor@CDrawingContext@@QEBA_NPEBVCCursorVisual@@@Z.c)
 * Callees:
 *     ?GetMonitorData@CCursorState@@AEBAPEAVMonitorData@1@U_LUID@@I@Z @ 0x18026C038 (-GetMonitorData@CCursorState@@AEBAPEAVMonitorData@1@U_LUID@@I@Z.c)
 */

bool __fastcall COverlayContext::IsCursorVisibleInSoftware(COverlayContext *this)
{
  struct CCursorState::MonitorData *MonitorData; // rbx
  int v2; // ebx

  MonitorData = CCursorState::GetMonitorData(
                  *(CCursorState **)(*((_QWORD *)this + 2403) + 704LL),
                  *(struct _LUID *)((char *)this + 19232),
                  *((_DWORD *)this + 4810));
  if ( !MonitorData )
    return 1;
  EnterCriticalSection(&g_CursorManager);
  v2 = *((_DWORD *)MonitorData + 38);
  LeaveCriticalSection(&g_CursorManager);
  return v2 == 2;
}
