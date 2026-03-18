/*
 * XREFs of ?SetSuperWetInkClip@CTreeData@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18021E29C
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CTreeData::SetSuperWetInkClip(__int64 a1, const __m128i *a2)
{
  __m128i *v2; // rax
  _OWORD *v5; // rax
  void *v6; // rcx

  v2 = *(__m128i **)(a1 + 264);
  if ( v2 )
  {
    *v2 = _mm_loadu_si128(a2);
  }
  else
  {
    v5 = operator new(0x10uLL);
    if ( v5 )
      *v5 = *a2;
    v6 = *(void **)(a1 + 264);
    *(_QWORD *)(a1 + 264) = v5;
    if ( v6 )
      operator delete(v6, 0x10uLL);
  }
}
