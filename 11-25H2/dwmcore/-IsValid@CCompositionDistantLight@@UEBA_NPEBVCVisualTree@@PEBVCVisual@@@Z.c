/*
 * XREFs of ?IsValid@CCompositionDistantLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1802A0D10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CCompositionDistantLight::IsValid(
        CCompositionDistantLight *this,
        const struct CVisualTree *a2,
        const struct CVisual *a3)
{
  struct CVisual *v4; // rax
  CCompositionLight *v5; // rcx
  const struct CVisual *v6; // r8

  v4 = (struct CVisual *)(*(__int64 (__fastcall **)(CCompositionDistantLight *, const struct CVisualTree *, const struct CVisual *))(*(_QWORD *)this + 200LL))(
                           this,
                           a2,
                           a3);
  return CCompositionLight::IsValidCoordinateSpace(v5, a2, v6, v4);
}
