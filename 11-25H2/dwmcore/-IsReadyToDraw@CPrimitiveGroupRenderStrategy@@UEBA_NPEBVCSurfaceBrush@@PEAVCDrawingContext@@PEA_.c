/*
 * XREFs of ?IsReadyToDraw@CPrimitiveGroupRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z @ 0x1800CF7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x1800D0EE0 (-IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CPrimitiveGroupRenderStrategy::IsReadyToDraw(
        CPrimitiveGroupRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct CDrawingContext *a3,
        bool *a4)
{
  CPrimitiveGroup *v4; // rcx
  bool (__fastcall *v6)(CPrimitiveGroup *__hidden); // rax
  char IsEmptyDrawing; // al

  v4 = (CPrimitiveGroup *)*((_QWORD *)a2 + 16);
  v6 = *(bool (__fastcall **)(CPrimitiveGroup *__hidden))(*(_QWORD *)v4 + 216LL);
  if ( v6 == CPrimitiveGroup::IsEmptyDrawing )
    IsEmptyDrawing = CPrimitiveGroup::IsEmptyDrawing(v4);
  else
    IsEmptyDrawing = ((__int64 (__fastcall *)(CPrimitiveGroup *, bool (__fastcall *)(CPrimitiveGroup *__hidden), struct CDrawingContext *))v6)(
                       v4,
                       CPrimitiveGroup::IsEmptyDrawing,
                       a3);
  *a4 = IsEmptyDrawing;
  return 1;
}
