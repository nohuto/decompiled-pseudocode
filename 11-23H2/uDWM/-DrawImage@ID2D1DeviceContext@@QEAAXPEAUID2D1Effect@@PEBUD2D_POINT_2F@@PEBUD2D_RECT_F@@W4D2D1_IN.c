/*
 * XREFs of ?DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x18001DC1C
 * Callers:
 *     ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x180043FC4 (-CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ID2D1DeviceContext::DrawImage(
        ID2D1DeviceContext *this,
        struct ID2D1Effect *a2,
        const struct D2D_POINT_2F *a3,
        const struct D2D_RECT_F *a4)
{
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  (*(void (__fastcall **)(struct ID2D1Effect *, __int64 *))(*(_QWORD *)a2 + 144LL))(a2, &v5);
  (*(void (__fastcall **)(ID2D1DeviceContext *, __int64, _QWORD, _QWORD, int, _DWORD))(*(_QWORD *)this + 664LL))(
    this,
    v5,
    0LL,
    0LL,
    1,
    0);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
}
