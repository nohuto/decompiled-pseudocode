/*
 * XREFs of FixedPointSubPixel @ 0x14015A1C8
 * Callers:
 *     TransformVector @ 0x140159628 (TransformVector.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1401596DC (PhysicalToLogicalInPlacePointWithParent.c)
 *     ?DCEInverseTransform@@YA_NPEBUtagRECT@@PEBU_D3DVERTEX@@PEBU_SUBPIXELS@@PEAUtagPOINT@@@Z @ 0x140159F8C (-DCEInverseTransform@@YA_NPEBUtagRECT@@PEBU_D3DVERTEX@@PEBU_SUBPIXELS@@PEAUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall FixedPointSubPixel(__int64 a1)
{
  unsigned __int64 v1; // rax

  if ( a1 < 0 )
    v1 = a1 + (-a1 & 0xFFFFFFFFFFFF0000uLL);
  else
    LODWORD(v1) = (unsigned __int16)a1;
  return (float)(int)v1 * 0.000015258789;
}
