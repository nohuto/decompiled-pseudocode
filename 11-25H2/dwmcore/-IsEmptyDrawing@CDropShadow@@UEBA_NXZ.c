/*
 * XREFs of ?IsEmptyDrawing@CDropShadow@@UEBA_NXZ @ 0x18011A1F0
 * Callers:
 *     ?GetBounds@CDropShadow@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180119C60 (-GetBounds@CDropShadow@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 * Callees:
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D0590 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDropShadow::IsEmptyDrawing(CDropShadow *this)
{
  char v1; // bl
  float v2; // xmm1_4
  bool v3; // al
  CSurfaceBrush *v4; // rcx
  char (__fastcall *v5)(CSurfaceBrush *, struct CDrawingContext *, bool *); // rax
  char IsReadyToDraw; // al
  bool v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  LODWORD(v2) = *((_DWORD *)this + 23) & _xmm;
  v3 = 0;
  v8 = 0;
  if ( v2 < 0.0000011920929 )
    return 1;
  if ( *((_DWORD *)this + 31) != 1 )
  {
    v4 = (CSurfaceBrush *)*((_QWORD *)this + 22);
    if ( !v4 )
      goto LABEL_4;
    v5 = *(char (__fastcall **)(CSurfaceBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)v4 + 312LL);
    if ( v5 == CSurfaceBrush::IsReadyToDraw )
      IsReadyToDraw = CSurfaceBrush::IsReadyToDraw(v4, 0LL, &v8);
    else
      IsReadyToDraw = v5(v4, 0LL, &v8);
    if ( IsReadyToDraw )
    {
      v3 = v8;
LABEL_4:
      if ( !v3 )
        return v1;
    }
    return 1;
  }
  return v1;
}
