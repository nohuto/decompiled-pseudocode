/*
 * XREFs of ?GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCOcclusionContext@@@Z @ 0x18022DC14
 * Callers:
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180099DE8 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z @ 0x18009F0C0 (-GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDirectFlipInfo::GetCutoffZ(CDirectFlipInfo *this, const struct COcclusionContext *a2)
{
  CVisual *v2; // rdi
  unsigned int v3; // ebx
  const struct CVisualTree *v4; // rax

  if ( *((int *)this + 13) < 3 )
    return 0x7FFFFFFFLL;
  v2 = (CVisual *)*((_QWORD *)this + 1);
  v3 = *((_DWORD *)a2 + 384);
  v4 = (const struct CVisualTree *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this);
  return CVisual::GetZ(v2, v4, v3);
}
