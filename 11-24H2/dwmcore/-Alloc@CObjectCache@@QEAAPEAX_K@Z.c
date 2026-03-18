/*
 * XREFs of ?Alloc@CObjectCache@@QEAAPEAX_K@Z @ 0x180170C50
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18001A9F4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z @ 0x18016F400 (-Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z.c)
 *     ?Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@USamplerMode@@PEAPEAV1@@Z @ 0x180170D1C (-Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@USamplerMode@@PEA.c)
 *     ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x180172BF0 (-Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z.c)
 *     ?Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@PEAPEAV1@@Z @ 0x180285B74 (-Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CObjectCache::Alloc(CObjectCache *this, SIZE_T a2)
{
  int v2; // r9d
  _QWORD *result; // rax
  HANDLE ProcessHeap; // rax

  v2 = *((_DWORD *)this + 1);
  result = 0LL;
  if ( v2 )
  {
    result = (_QWORD *)*((_QWORD *)this + 1);
    *((_QWORD *)this + 1) = *result;
    *((_DWORD *)this + 1) = v2 - 1;
  }
  if ( !result )
  {
    ProcessHeap = GetProcessHeap();
    return HeapAlloc(ProcessHeap, 0, a2);
  }
  return result;
}
