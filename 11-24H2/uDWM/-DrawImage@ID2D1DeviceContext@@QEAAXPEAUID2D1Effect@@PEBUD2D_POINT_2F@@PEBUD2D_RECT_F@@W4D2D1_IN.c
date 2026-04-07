/*
 * XREFs of ?DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1800745C8
 * Callers:
 *     ?CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x180035CDC (-CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ID2D1DeviceContext::DrawImage(
        ID2D1DeviceContext *this,
        struct ID2D1Effect *a2,
        const struct D2D_POINT_2F *a3,
        const struct D2D_RECT_F *a4)
{
  __int64 v4; // rax
  const struct D2D_RECT_F *v6; // [rsp+68h] [rbp+20h] BYREF

  v6 = a4;
  v4 = *(_QWORD *)a2;
  v6 = 0LL;
  (*(void (__fastcall **)(struct ID2D1Effect *, const struct D2D_RECT_F **))(v4 + 144))(a2, &v6);
  (*(void (__fastcall **)(ID2D1DeviceContext *, const struct D2D_RECT_F *, _QWORD, _QWORD, int, _DWORD))(*(_QWORD *)this + 664LL))(
    this,
    v6,
    0LL,
    0LL,
    1,
    0);
  (*(void (__fastcall **)(const struct D2D_RECT_F *))(*(_QWORD *)&v6->left + 16LL))(v6);
}
