/*
 * XREFs of ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800CE180
 * Callers:
 *     ?DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@M_N@Z @ 0x18020D4F0 (-DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartn.c)
 *     ?DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1802BB810 (-DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkS.c)
 *     ?DrawTextW@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@W4D2D1_DRAW_TEXT_OPTIONS@@W4DWRITE_MEASURING_MODE@@@Z @ 0x1802BB8D0 (-DrawTextW@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@A.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1802BBCC0 (-FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     ?FillRectangles@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@UNotNeeded@4@@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1802BBF10 (-FillRectangles@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV-$T.c)
 * Callees:
 *     ?GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800CE620 (-GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD2DContext::SetCommonState(
        CD2DContext *this,
        void (__fastcall ***a2)(CDrawingContext *__hidden this, struct D2D_MATRIX_3X2_F *),
        unsigned int a3,
        const enum D2D1_ANTIALIAS_MODE *a4,
        struct D2D_MATRIX_3X2_F *a5)
{
  void (__fastcall **v6)(CDrawingContext *__hidden, struct D2D_MATRIX_3X2_F *); // rax
  void (__fastcall *v9)(CDrawingContext *__hidden, struct D2D_MATRIX_3X2_F *); // rax
  unsigned int v10; // esi
  __int64 v11; // xmm1_8
  struct D2D_MATRIX_3X2_F v12; // [rsp+20h] [rbp-48h] BYREF

  v6 = *a2;
  memset(&v12, 0, sizeof(v12));
  v9 = *v6;
  if ( v9 == CDrawingContext::GetWorldTransform3x2 )
    CDrawingContext::GetWorldTransform3x2((CDrawingContext *)a2, &v12);
  else
    v9((CDrawingContext *)a2, &v12);
  (*(void (__fastcall **)(_QWORD, struct D2D_MATRIX_3X2_F *))(**((_QWORD **)this + 25) + 240LL))(
    *((_QWORD *)this + 25),
    &v12);
  if ( a3 != *((_DWORD *)this + 99) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 25) + 624LL))(*((_QWORD *)this + 25), a3);
    *((_DWORD *)this + 99) = a3;
  }
  if ( a4 )
  {
    v10 = *a4;
    if ( v10 != *((_DWORD *)this + 98) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 25) + 256LL))(*((_QWORD *)this + 25), v10);
      *((_DWORD *)this + 98) = v10;
    }
  }
  if ( a5 )
  {
    v11 = *(_QWORD *)&v12.m[2][0];
    *(_OWORD *)&a5->m11 = *(_OWORD *)&v12.m11;
    *(_QWORD *)&a5->m[2][0] = v11;
  }
}
