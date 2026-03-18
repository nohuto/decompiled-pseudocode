/*
 * XREFs of ?GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014DBC0
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180016810 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?GetBounds@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014D400 (-GetBounds@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POIN.c)
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014D5C0 (-GetContentBounds@CSpriteVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?GetContentBounds@CVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014D8D0 (-GetContentBounds@CVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@.c)
 *     ?GetBounds@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014DB30 (-GetBounds@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 * Callees:
 *     ?IsEmptyDrawing@CBrush@@UEBA_NXZ @ 0x18004E680 (-IsEmptyDrawing@CBrush@@UEBA_NXZ.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x18007A2E0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CD910 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180141330 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceBrush::GetBounds(CSurfaceBrush *this, struct D2D_SIZE_F *a2, CRectanglesShape **a3)
{
  CRectanglesShape *v4; // rcx
  CRectanglesShape **v5; // rbx
  int v7; // edi
  CRectanglesShape *v8; // rcx
  CRectanglesShape *(__fastcall *v9)(CRectanglesShape *, char, __int64); // rax
  __int64 (__fastcall *v10)(__int64, struct D2D_RECT_F *, __int64); // rax
  int TightBounds; // eax
  unsigned int v12; // edi
  CRectanglesShape *(__fastcall *v13)(CRectanglesShape *, char, __int64); // rax
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  struct CShape *v17; // [rsp+38h] [rbp-38h] BYREF
  char v18; // [rsp+40h] [rbp-30h]
  _OWORD v19[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v20; // [rsp+68h] [rbp-8h]
  CRectanglesShape *v21; // [rsp+98h] [rbp+28h] BYREF

  v4 = 0LL;
  v20 = 0LL;
  memset(v19, 0, sizeof(v19));
  v5 = a3;
  v21 = 0LL;
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
        v12 = 0;
        height = a2->height;
        *(_DWORD *)v5 = 0;
        *((_DWORD *)v5 + 1) = 0;
        *((FLOAT *)v5 + 2) = width;
        *((FLOAT *)v5 + 3) = height;
LABEL_14:
        v4 = v21;
        goto LABEL_15;
      }
      v17 = 0LL;
      v18 = 1;
      v7 = CSurfaceBrush::ComputeLayout(this, a2, (struct CContent::LayoutData *)v19, &v17);
      if ( v18 )
      {
        a3 = &v21;
        v8 = v21;
        v21 = v17;
        if ( v8 )
        {
          v9 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))v8;
          if ( v9 == CRectanglesShape::`scalar deleting destructor' )
            CRectanglesShape::`scalar deleting destructor'(v8, 1, (__int64)&v21);
          else
            ((void (__fastcall *)(CRectanglesShape *, __int64))v9)(v8, 1LL);
        }
      }
      if ( v7 >= 0 )
      {
        v10 = *(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *, __int64))(*(_QWORD *)v21 + 48LL);
        if ( v10 == CRectanglesShape::GetTightBounds )
          TightBounds = CRectanglesShape::GetTightBounds((__int64)v21, (struct D2D_RECT_F *)v5, 0LL);
        else
          TightBounds = v10((__int64)v21, (struct D2D_RECT_F *)v5, 0LL);
        v12 = TightBounds;
        if ( TightBounds < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, TightBounds, 0x22Au, 0LL);
        goto LABEL_14;
      }
    }
    v4 = v21;
  }
  *((_DWORD *)v5 + 3) = 0;
  *((_DWORD *)v5 + 2) = 0;
  *((_DWORD *)v5 + 1) = 0;
  *(_DWORD *)v5 = 0;
  v12 = 0;
LABEL_15:
  if ( v4 )
  {
    v13 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))v4;
    if ( v13 == CRectanglesShape::`scalar deleting destructor' )
      CRectanglesShape::`scalar deleting destructor'(v4, 1, (__int64)a3);
    else
      ((void (__fastcall *)(CRectanglesShape *, __int64))v13)(v4, 1LL);
  }
  return v12;
}
