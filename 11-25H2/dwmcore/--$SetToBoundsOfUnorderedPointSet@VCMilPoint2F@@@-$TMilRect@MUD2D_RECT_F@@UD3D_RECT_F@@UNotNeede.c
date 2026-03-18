/*
 * XREFs of ??$SetToBoundsOfUnorderedPointSet@VCMilPoint2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBVCMilPoint2F@@$0?0@gsl@@@Z @ 0x18025A770
 * Callers:
 *     ?ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2PEAV4@@Z @ 0x1802B6A3C (-ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV-$TMilRect_@M.c)
 * Callees:
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x1801D4478 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 */

__int64 __fastcall TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<CMilPoint2F>(
        float *a1,
        unsigned __int64 *a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rbx

  *a1 = *(float *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, 0LL);
  a1[1] = *(float *)(gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, 0LL) + 4);
  a1[2] = *(float *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, 0LL);
  result = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, 0LL);
  v5 = 1LL;
  a1[3] = *(float *)(result + 4);
  while ( v5 < *a2 )
  {
    *a1 = fminf(*a1, *(float *)(a2[1] + 8 * v5));
    a1[1] = fminf(a1[1], *(float *)(gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v5) + 4));
    a1[2] = fmaxf(a1[2], *(float *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v5));
    result = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v5++);
    a1[3] = fmaxf(a1[3], *(float *)(result + 4));
  }
  return result;
}
