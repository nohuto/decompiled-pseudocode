/*
 * XREFs of ?HasNonEmptyContent@CRedirectVisual@@UEBA_NXZ @ 0x1801FC650
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmptyDrawing@CRedirectedVisualContent@@UEBA_NXZ @ 0x1801FC6A0 (-IsEmptyDrawing@CRedirectedVisualContent@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CRedirectVisual::HasNonEmptyContent(CRedirectVisual *this)
{
  CRedirectedVisualContent *v1; // rcx
  __int64 (*v2)(void); // rax
  char IsEmptyDrawing; // al

  v1 = (CRedirectedVisualContent *)*((_QWORD *)this + 32);
  if ( !v1 )
    return 0;
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 216LL);
  if ( (char *)v2 == (char *)CRedirectedVisualContent::IsEmptyDrawing )
    IsEmptyDrawing = CRedirectedVisualContent::IsEmptyDrawing(v1);
  else
    IsEmptyDrawing = v2();
  return IsEmptyDrawing == 0;
}
