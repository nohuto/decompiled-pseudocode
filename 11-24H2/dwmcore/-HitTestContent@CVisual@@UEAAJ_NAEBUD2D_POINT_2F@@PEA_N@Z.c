/*
 * XREFs of ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C4A0
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800C0020 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C600 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTest@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C750 (-HitTest@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014CBC0 (-HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUD2D_RECT_F@@@Z @ 0x1801B2650 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUD2D_RECT_F@@@Z.c)
 *     ?GetTouchTargetBounds@CVisual@@IEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1801C6EE0 (-GetTouchTargetBounds@CVisual@@IEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::HitTestContent(CSurfaceBrush **this, char a2, const struct D2D_POINT_2F *a3, bool *a4)
{
  bool (__fastcall *v8)(CWindowNode *__hidden); // rax
  CSurfaceBrush *v9; // rcx
  const struct D2D_SIZE_F *v10; // rdx
  int (*v11)(CMaskBrush *__hidden, const struct D2D_SIZE_F *, const struct D2D_POINT_2F *, bool *); // rax
  int v12; // eax
  unsigned int v13; // ebx
  const struct D2D_RECT_F *TouchTargetBounds; // rax
  char v16[24]; // [rsp+30h] [rbp-18h] BYREF

  *a4 = 0;
  v8 = (bool (__fastcall *)(CWindowNode *__hidden))*((_QWORD *)*this + 37);
  if ( v8 != CWindowNode::ShouldHitTest )
  {
    if ( v8((CWindowNode *)this) )
      goto LABEL_4;
    return 0LL;
  }
  if ( *((_BYTE *)this + 753) || !this[100] )
    return 0LL;
LABEL_4:
  if ( a2 )
  {
    TouchTargetBounds = (const struct D2D_RECT_F *)CVisual::GetTouchTargetBounds(this, v16, a3, a4);
    *a4 = IsPointInRect(a3, TouchTargetBounds);
  }
  if ( *a4 )
    return 0LL;
  v9 = this[32];
  if ( !v9 )
    return 0LL;
  v10 = (const struct D2D_SIZE_F *)(this + 18);
  v11 = *(int (**)(CMaskBrush *__hidden, const struct D2D_SIZE_F *, const struct D2D_POINT_2F *, bool *))(*(_QWORD *)v9 + 208LL);
  if ( (char *)v11 == (char *)CSurfaceBrush::HitTest )
  {
    v12 = CSurfaceBrush::HitTest(v9, v10, a3, a4);
  }
  else if ( v11 == CMaskBrush::HitTest )
  {
    v12 = CMaskBrush::HitTest(v9, v10, a3, a4);
  }
  else if ( (char *)v11 == (char *)CPrimitiveGroup::HitTest )
  {
    v12 = CPrimitiveGroup::HitTest(v9, v10, a3, a4);
  }
  else
  {
    v12 = ((__int64 (__fastcall *)(CSurfaceBrush *, const struct D2D_SIZE_F *, const struct D2D_POINT_2F *, bool *))v11)(
            v9,
            v10,
            a3,
            a4);
  }
  v13 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x138Eu, 0LL);
  return v13;
}
