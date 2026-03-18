/*
 * XREFs of ?GetUsedSamplersBitmask@CBrushRenderingEffect@@UEBAIXZ @ 0x1800458A0
 * Callers:
 *     ??0CReconstructableDrawListEntry@@IEAA@AEBUReconstructableDrawListEntryParams@@PEAVCWarpRenderingEffect@@$$QEAV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@V?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@@Z @ 0x180046190 (--0CReconstructableDrawListEntry@@IEAA@AEBUReconstructableDrawListEntryParams@@PEAVCWarpRenderin.c)
 *     ?Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z @ 0x180046710 (-Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBrushRenderingEffect::GetUsedSamplersBitmask(CBrushRenderingEffect *this)
{
  return (unsigned int)((1 << *(_DWORD *)(*((_QWORD *)this + 2) + 260LL)) - 1);
}
