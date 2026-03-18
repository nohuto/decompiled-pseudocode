/*
 * XREFs of ?ShouldSnapToPixels@CNineGridBrush@@UEBA_NXZ @ 0x1801AA550
 * Callers:
 *     ?ShouldSnapToPixels@CMaskBrush@@UEBA_NXZ @ 0x1801AA660 (-ShouldSnapToPixels@CMaskBrush@@UEBA_NXZ.c)
 * Callees:
 *     ?ShouldSnapToPixels@CSurfaceBrush@@UEBA_NXZ @ 0x1801AA6F0 (-ShouldSnapToPixels@CSurfaceBrush@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CNineGridBrush::ShouldSnapToPixels(CNineGridBrush *this)
{
  CSurfaceBrush *v1; // rcx
  char v2; // bl
  __int64 (*v3)(void); // rax
  char ShouldSnapToPixels; // al

  v1 = (CSurfaceBrush *)*((_QWORD *)this + 13);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(__int64 (**)(void))(*(_QWORD *)v1 + 328LL);
    if ( (char *)v3 == (char *)CSurfaceBrush::ShouldSnapToPixels )
      ShouldSnapToPixels = CSurfaceBrush::ShouldSnapToPixels(v1);
    else
      ShouldSnapToPixels = v3();
    if ( ShouldSnapToPixels )
      return 1;
  }
  return v2;
}
