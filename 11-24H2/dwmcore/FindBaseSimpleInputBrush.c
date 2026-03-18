/*
 * XREFs of FindBaseSimpleInputBrush @ 0x1801E3394
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18001A9F4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ?IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x180018170 (-IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ?IsOfType@CNineGridDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x1801E3490 (-IsOfType@CNineGridDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall FindBaseSimpleInputBrush(_QWORD *a1)
{
  bool (__fastcall *v2)(__int64, int); // rax
  char v3; // al
  __int64 (__fastcall *v5)(_QWORD *, __int64); // rax
  __int64 (__fastcall *v7)(_QWORD *, _QWORD); // rax
  __int64 (__fastcall *v9)(_QWORD *, __int64); // rax
  char v10; // al

  while ( 1 )
  {
    v2 = *(bool (__fastcall **)(__int64, int))(*a1 + 8LL);
    if ( v2 == CSurfaceDrawListBrush::IsOfType )
    {
      v3 = CSurfaceDrawListBrush::IsOfType((__int64)a1, 2);
    }
    else if ( (char *)v2 == (char *)CNineGridDrawListBrush::IsOfType )
    {
      v3 = CNineGridDrawListBrush::IsOfType(a1, 2LL);
    }
    else
    {
      v3 = v2((__int64)a1, 2);
    }
    if ( v3 )
      return a1;
    v5 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 8LL);
    if ( (char *)v5 == (char *)CNineGridDrawListBrush::IsOfType
       ? CNineGridDrawListBrush::IsOfType(a1, 1LL)
       : (unsigned __int8)v5(a1, 1LL) )
    {
      return a1;
    }
    v7 = *(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 8LL);
    if ( (char *)v7 == (char *)CNineGridDrawListBrush::IsOfType
       ? CNineGridDrawListBrush::IsOfType(a1, 0LL)
       : (unsigned __int8)v7(a1, 0LL) )
    {
      return a1;
    }
    v9 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 8LL);
    v10 = (char *)v9 == (char *)CNineGridDrawListBrush::IsOfType
        ? CNineGridDrawListBrush::IsOfType(a1, 5LL)
        : v9(a1, 5LL);
    if ( !v10 && !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 8LL))(a1, 6LL) )
      break;
    a1 = (_QWORD *)a1[9];
  }
  return 0LL;
}
