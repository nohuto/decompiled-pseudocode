/*
 * XREFs of ?SetFullTightDirtyRegion@CMonitorDirty@@QEAAXXZ @ 0x18022EE3C
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180052B90 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800C7D98 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?AddTightDirtyRect@CMonitorDirty@@MEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180289F00 (-AddTightDirtyRect@CMonitorDirty@@MEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 * Callees:
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x180042640 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
