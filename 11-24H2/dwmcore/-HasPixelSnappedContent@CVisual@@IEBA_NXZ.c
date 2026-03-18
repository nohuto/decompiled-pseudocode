/*
 * XREFs of ?HasPixelSnappedContent@CVisual@@IEBA_NXZ @ 0x1801AA5A0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A5180 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsOfType@CBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007F390 (-IsOfType@CBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ShouldSnapToPixels@CMaskBrush@@UEBA_NXZ @ 0x1801AA660 (-ShouldSnapToPixels@CMaskBrush@@UEBA_NXZ.c)
 *     ?ShouldSnapToPixels@CEffectBrush@@UEBA_NXZ @ 0x1801AA700 (-ShouldSnapToPixels@CEffectBrush@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CVisual::HasPixelSnappedContent(CVisual *this)
{
  __int64 v2; // rcx
  bool (__fastcall *v4)(__int64, unsigned __int64); // rax
  CMaskBrush *v5; // rcx
  __int64 (*v6)(void); // rax
  char ShouldSnapToPixels; // al

  v2 = *((_QWORD *)this + 32);
  if ( !v2 )
    return 0;
  v4 = *(bool (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v2 + 64LL);
  if ( v4 == CColorBrush::IsOfType )
  {
    if ( CBrush::IsOfType(v2, 17) )
      goto LABEL_5;
    return 0;
  }
  if ( !v4(v2, 17uLL) )
    return 0;
LABEL_5:
  v5 = (CMaskBrush *)*((_QWORD *)this + 32);
  v6 = *(__int64 (**)(void))(*(_QWORD *)v5 + 328LL);
  if ( (char *)v6 == (char *)CSurfaceBrush::ShouldSnapToPixels )
  {
    ShouldSnapToPixels = *((_BYTE *)v5 + 200);
  }
  else if ( (char *)v6 == (char *)CMaskBrush::ShouldSnapToPixels )
  {
    ShouldSnapToPixels = CMaskBrush::ShouldSnapToPixels(v5);
  }
  else if ( (char *)v6 == (char *)CEffectBrush::ShouldSnapToPixels )
  {
    ShouldSnapToPixels = CEffectBrush::ShouldSnapToPixels(v5);
  }
  else
  {
    ShouldSnapToPixels = v6();
  }
  return ShouldSnapToPixels != 0;
}
