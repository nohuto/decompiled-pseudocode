/*
 * XREFs of ?GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007CAA0
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E4C0 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?GetBounds@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007C2E0 (-GetBounds@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POIN.c)
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007C4A0 (-GetContentBounds@CSpriteVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?GetContentBounds@CVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007C7B0 (-GetContentBounds@CVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@.c)
 *     ?GetBounds@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007CA10 (-GetBounds@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 * Callees:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180015130 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180051CA0 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800AC100 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?IsEmptyDrawing@CBrush@@UEBA_NXZ @ 0x1800D10D0 (-IsEmptyDrawing@CBrush@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceBrush::GetBounds(CSurfaceBrush *this, struct D2D_SIZE_F *a2, __int64 a3)
{
  CRectanglesShape *v4; // rcx
  int v7; // edi
  __int64 (__fastcall *v8)(__int64, struct D2D_RECT_F *, __int64); // rax
  int TightBounds; // eax
  unsigned int v10; // edi
  void *(__fastcall *v11)(CRectanglesShape *__hidden, unsigned int); // rax
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  struct CShape *v15; // [rsp+38h] [rbp-38h] BYREF
  char v16; // [rsp+40h] [rbp-30h]
  _OWORD v17[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v18; // [rsp+68h] [rbp-8h]
  CRectanglesShape *v19; // [rsp+98h] [rbp+28h]

  v4 = 0LL;
  v18 = 0LL;
  memset(v17, 0, sizeof(v17));
  v19 = 0LL;
  if ( a2->width > 0.0 && a2->height > 0.0 )
  {
    if ( !CBrush::IsEmptyDrawing(this) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, CSurfaceBrush *, _QWORD))(**((_QWORD **)this + 17) + 24LL))(
             *((_QWORD *)this + 17),
             this,
             0LL) )
      {
        width = a2->width;
        v10 = 0;
        height = a2->height;
        *(_DWORD *)a3 = 0;
        *(_DWORD *)(a3 + 4) = 0;
        *(FLOAT *)(a3 + 8) = width;
        *(FLOAT *)(a3 + 12) = height;
LABEL_12:
        v4 = v19;
        goto LABEL_13;
      }
      v15 = 0LL;
      v16 = 1;
      v7 = CSurfaceBrush::ComputeLayout(this, a2, (struct CContent::LayoutData *)v17, &v15);
      if ( v16 )
        v19 = v15;
      if ( v7 >= 0 )
      {
        v8 = *(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *, __int64))(*(_QWORD *)v19 + 48LL);
        if ( v8 == CRectanglesShape::GetTightBounds )
          TightBounds = CRectanglesShape::GetTightBounds((__int64)v19, (struct D2D_RECT_F *)a3, 0LL);
        else
          TightBounds = v8((__int64)v19, (struct D2D_RECT_F *)a3, 0LL);
        v10 = TightBounds;
        if ( TightBounds < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x22Au, 0LL);
        goto LABEL_12;
      }
    }
    v4 = v19;
  }
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 0;
  v10 = 0;
LABEL_13:
  if ( v4 )
  {
    v11 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v4;
    if ( v11 == CRectanglesShape::`scalar deleting destructor' )
      CRectanglesShape::`scalar deleting destructor'(v4, 1u);
    else
      v11(v4, 1u);
  }
  return v10;
}
