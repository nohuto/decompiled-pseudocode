/*
 * XREFs of ?SetFullTightDirtyRegion@CMonitorDirty@@QEAAXXZ @ 0x18022369C
 * Callers:
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180099DE8 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800D4530 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?AddTightDirtyRect@CMonitorDirty@@MEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18027EEC0 (-AddTightDirtyRect@CMonitorDirty@@MEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 * Callees:
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x18005B278 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMonitorDirty::SetFullTightDirtyRegion(CMonitorDirty *this)
{
  CRegion *v2; // rcx
  _DWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v4[4]; // [rsp+28h] [rbp-20h] BYREF

  if ( *((_QWORD *)this + 58) )
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 40LL))(
      *((_QWORD *)this + 1) + 8LL,
      v3);
    v4[0] = 0;
    v4[1] = 0;
    v2 = (CRegion *)*((_QWORD *)this + 58);
    v4[2] = v3[0];
    v4[3] = v3[1];
    CRegion::SetRectangle(v2, (const struct MilRectU *)v4);
  }
}
