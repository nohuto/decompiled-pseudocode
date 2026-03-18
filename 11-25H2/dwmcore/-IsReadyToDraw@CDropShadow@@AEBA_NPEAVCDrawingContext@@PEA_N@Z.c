/*
 * XREFs of ?IsReadyToDraw@CDropShadow@@AEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18007FB1C
 * Callers:
 *     ?Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18007E280 (-Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D0440 (-IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D0590 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18012B670 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012D970 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDropShadow::IsReadyToDraw(CDropShadow *this, struct CDrawingContext *a2, bool *a3)
{
  char v3; // bl
  char v6; // di
  CSurfaceBrush *v7; // rcx
  struct CVisual *CurrentVisual; // rbp
  __int64 v10; // rcx
  bool (__fastcall *v11)(CSurfaceBrush *__hidden, struct CDrawingContext *, bool *); // rax
  char v12; // al
  __int64 (__fastcall *v13)(__int64, __int64); // rax
  CNineGridBrush *v15; // rcx
  bool (__fastcall *v16)(CNineGridBrush *__hidden, struct CDrawingContext *, bool *); // rax

  v3 = 0;
  *a3 = 0;
  if ( COERCE_FLOAT(*((_DWORD *)this + 23) & _xmm) < 0.0000011920929 )
  {
    *a3 = 1;
    return 0;
  }
  else
  {
    v6 = 1;
    if ( *((_DWORD *)this + 31) == 1 )
    {
      if ( a2 )
      {
        CurrentVisual = CDrawingContext::GetCurrentVisual(a2);
        v10 = *((_QWORD *)CurrentVisual + 32);
        if ( !v10 )
          return 0;
        v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 64LL);
        if ( !(v13 == CColorBrush::IsOfType ? CColorBrush::IsOfType(v10, 17LL) : (unsigned __int8)v13(v10, 17LL)) )
          return 0;
        v15 = (CNineGridBrush *)*((_QWORD *)CurrentVisual + 32);
        if ( !v15 )
          return 0;
        v16 = *(bool (__fastcall **)(CNineGridBrush *__hidden, struct CDrawingContext *, bool *))(*(_QWORD *)v15 + 312LL);
        if ( !(v16 == CNineGridBrush::IsReadyToDraw ? CNineGridBrush::IsReadyToDraw(v15, a2, a3) : v16(v15, a2, a3)) )
          return 0;
      }
      return v6;
    }
    else
    {
      v7 = (CSurfaceBrush *)*((_QWORD *)this + 22);
      if ( !v7 )
        return 1;
      v11 = *(bool (__fastcall **)(CSurfaceBrush *__hidden, struct CDrawingContext *, bool *))(*(_QWORD *)v7 + 312LL);
      v12 = v11 == CSurfaceBrush::IsReadyToDraw ? CSurfaceBrush::IsReadyToDraw(v7, a2, a3) : ((__int64 (*)(void))v11)();
      if ( v12 )
        return 1;
      return v3;
    }
  }
}
