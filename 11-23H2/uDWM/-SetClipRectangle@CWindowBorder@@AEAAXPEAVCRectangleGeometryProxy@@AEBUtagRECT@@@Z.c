/*
 * XREFs of ?SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z @ 0x1800359A8
 * Callers:
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x1800325B4 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z @ 0x180035544 (-SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18003567C (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18003EF90 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CWindowBorder::SetClipRectangle(
        CWindowBorder *this,
        struct CRectangleGeometryProxy *a2,
        const struct tagRECT *a3)
{
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 2) + 16LL) + 560LL))(
    *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL),
    *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL));
}
