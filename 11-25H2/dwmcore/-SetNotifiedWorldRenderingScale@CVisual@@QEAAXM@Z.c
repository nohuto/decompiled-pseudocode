/*
 * XREFs of ?SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z @ 0x18003E620
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18000D550 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CVisual::SetNotifiedWorldRenderingScale(CVisual *this, double a2)
{
  struct CSparseStorage::AllocatedStorage **v2; // rcx
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = LODWORD(a2);
  v2 = (struct CSparseStorage::AllocatedStorage **)((char *)this + 224);
  if ( _mm_cvtsi128_si32(*(__m128i *)&a2) == LODWORD(`CVisual::SetWorldRenderingScaleOverride'::`2'::sc_defaultValue) )
    *((_DWORD *)*v2 + 1) &= ~0x1000000u;
  else
    CSparseStorage::SetData(v2, 8, 4u, &v3);
}
