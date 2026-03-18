/*
 * XREFs of ?ForceSoftwareCursor@COverlayContext@@AEAAXXZ @ 0x18026A168
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x18009BCC0 (-ApplyConfiguration@COverlayContext@@QEAAX_NPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x180231EE4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetCursorBounds@COverlayContext@@AEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18026BF8C (-GetCursorBounds@COverlayContext@@AEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ?GetMonitorData@CCursorState@@AEBAPEAVMonitorData@1@U_LUID@@I@Z @ 0x18026C038 (-GetMonitorData@CCursorState@@AEBAPEAVMonitorData@1@U_LUID@@I@Z.c)
 *     ?ForceSoftwareShape@CCursorState@@AEAA_NPEAVMonitorData@1@@Z @ 0x1802B2E80 (-ForceSoftwareShape@CCursorState@@AEAA_NPEAVMonitorData@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::ForceSoftwareCursor(COverlayContext *this)
{
  struct CCursorState::MonitorData *MonitorData; // rbx
  CCursorState *v3; // rcx
  bool v4; // bl
  __int64 v5; // rdi
  void (__fastcall *v6)(__int64, __int64); // rbx
  __int64 CursorBounds; // rax
  struct D2D_RECT_F v8; // [rsp+20h] [rbp-28h] BYREF

  MonitorData = CCursorState::GetMonitorData(
                  *(CCursorState **)(*((_QWORD *)this + 2403) + 704LL),
                  *(struct _LUID *)((char *)this + 19232),
                  *((_DWORD *)this + 4810));
  if ( MonitorData )
  {
    EnterCriticalSection(&g_CursorManager);
    v4 = CCursorState::ForceSoftwareShape(v3, MonitorData);
    LeaveCriticalSection(&g_CursorManager);
    if ( v4 )
    {
      v5 = *(_QWORD *)this;
      v6 = *(void (__fastcall **)(__int64, __int64))(**(_QWORD **)this + 296LL);
      CursorBounds = COverlayContext::GetCursorBounds(this, &v8);
      v6(v5, CursorBounds);
    }
  }
}
