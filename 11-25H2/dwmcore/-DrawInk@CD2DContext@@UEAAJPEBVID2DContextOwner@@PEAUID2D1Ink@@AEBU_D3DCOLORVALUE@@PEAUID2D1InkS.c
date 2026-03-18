/*
 * XREFs of ?DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1802C4E70
 * Callers:
 *     ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x180270770 (-DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 * Callees:
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180086F00 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180087450 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800D65E0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::DrawInk(
        CD2DContext *this,
        void (__fastcall ***a2)(CDrawingContext *__hidden this, struct D2D_MATRIX_3X2_F *),
        struct ID2D1Ink *a3,
        const struct _D3DCOLORVALUE *a4,
        struct ID2D1InkStyle *a5,
        enum D2D1_ANTIALIAS_MODE a6,
        enum D2D1_PRIMITIVE_BLEND a7)
{
  __int64 v11; // rdx
  __int64 v12; // r8
  struct D2D_MATRIX_3X2_F v14; // [rsp+30h] [rbp-28h] BYREF

  CD2DContext::FlushDrawList(this, (__int64)a2, (__int64)a3);
  CD2DContext::EnsureBeginDraw(this, v11, v12);
  memset(&v14, 0, sizeof(v14));
  CD2DContext::SetCommonState(this, a2, a7, &a6, &v14);
  (*(void (__fastcall **)(_QWORD, const struct _D3DCOLORVALUE *))(**((_QWORD **)this + 39) + 64LL))(
    *((_QWORD *)this + 39),
    a4);
  (*(void (__fastcall **)(_QWORD, struct ID2D1Ink *, _QWORD, struct ID2D1InkStyle *))(**((_QWORD **)this + 25) + 816LL))(
    *((_QWORD *)this + 25),
    a3,
    *((_QWORD *)this + 39),
    a5);
  return 0LL;
}
