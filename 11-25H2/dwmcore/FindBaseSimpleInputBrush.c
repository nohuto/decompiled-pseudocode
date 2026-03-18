/*
 * XREFs of FindBaseSimpleInputBrush @ 0x1801269EC
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18012A1A4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ?IsOfType@CNineGridDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x180125440 (-IsOfType@CNineGridDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ?IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x180127920 (-IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall FindBaseSimpleInputBrush(_QWORD *a1)
{
  bool (__fastcall *v2)(__int64, int); // rax
  char v3; // al
  bool (__fastcall *v5)(__int64, int); // rax
  bool (__fastcall *v7)(__int64, int); // rax
  bool (__fastcall *v9)(__int64, int); // rax
  bool v10; // al

  while ( 1 )
  {
    v2 = *(bool (__fastcall **)(__int64, int))(*a1 + 8LL);
    if ( (char *)v2 == (char *)CSurfaceDrawListBrush::IsOfType )
    {
      v3 = CSurfaceDrawListBrush::IsOfType(a1, 2LL);
    }
    else if ( v2 == CNineGridDrawListBrush::IsOfType )
    {
      v3 = CNineGridDrawListBrush::IsOfType((__int64)a1, 2);
    }
    else
    {
      v3 = v2((__int64)a1, 2);
    }
    if ( v3 )
      return a1;
    v5 = *(bool (__fastcall **)(__int64, int))(*a1 + 8LL);
    if ( v5 == CNineGridDrawListBrush::IsOfType ? CNineGridDrawListBrush::IsOfType((__int64)a1, 1) : v5((__int64)a1, 1) )
      return a1;
    v7 = *(bool (__fastcall **)(__int64, int))(*a1 + 8LL);
    if ( v7 == CNineGridDrawListBrush::IsOfType ? CNineGridDrawListBrush::IsOfType((__int64)a1, 0) : v7((__int64)a1, 0) )
      return a1;
    v9 = *(bool (__fastcall **)(__int64, int))(*a1 + 8LL);
    v10 = v9 == CNineGridDrawListBrush::IsOfType ? CNineGridDrawListBrush::IsOfType((__int64)a1, 5) : v9((__int64)a1, 5);
    if ( !v10 && !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 8LL))(a1, 6LL) )
      break;
    a1 = (_QWORD *)a1[9];
  }
  return 0LL;
}
