/*
 * XREFs of ?clear@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800F7944
 * Callers:
 *     ?CalcOcclusion@CDesktopTree@@UEBAJAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z @ 0x1800F78D0 (-CalcOcclusion@CDesktopTree@@UEBAJAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x18028AD60 (--1CDesktopTree@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  result = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[1] - *a1) >> 3);
  if ( result )
  {
    result = 8 * ((__int64)(a1[1] - *a1) >> 3);
    a1[1] -= result;
  }
  return result;
}
