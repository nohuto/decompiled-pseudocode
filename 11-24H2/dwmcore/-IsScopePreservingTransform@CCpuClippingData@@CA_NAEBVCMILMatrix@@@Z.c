/*
 * XREFs of ?IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z @ 0x1800F5DEC
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800AE6F0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z @ 0x1800F62FC (-TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CCpuClippingData::IsScopePreservingTransform(const struct CMILMatrix *a1)
{
  char v1; // r8
  char v3; // bl
  float v4; // xmm2_4
  float v6; // xmm2_4
  bool v7; // cl

  v1 = *((_BYTE *)a1 + 64);
  if ( (char)(16 * v1) >> 6 == 1 )
    return 0;
  v3 = 1;
  if ( (char)(16 * *((_BYTE *)a1 + 64)) >> 6 >= 0 )
  {
    v7 = (char)(4 * *((_BYTE *)a1 + 65)) >> 6 != 1
      && ((char)(4 * *((_BYTE *)a1 + 65)) >> 6 < 0
       || (LODWORD(v6) = COERCE_UNSIGNED_INT(
                           (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a1 + 7) & _xmm) * 61440.0)
                                         + (float)(COERCE_FLOAT(*((_DWORD *)a1 + 3) & _xmm) * 61440.0))
                                 + COERCE_FLOAT(*((_DWORD *)a1 + 15) & _xmm))
                         - 1.0) & _xmm,
           *((_BYTE *)a1 + 65) = *((_BYTE *)a1 + 65) & 0xCF | (32 * (v6 < 0.000081380211) + 16),
           v6 < 0.000081380211))
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 2) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 6) - 0.0) & _xmm) < 0.000081380211;
    *((_BYTE *)a1 + 64) = v1 & 0xF3 | (8 * v7 + 4);
    if ( !v7 )
      return 0;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 14) - 0.0) & _xmm) >= 0.000081380211 )
    return 0;
  v4 = (float)(*((float *)a1 + 5) * *(float *)a1) - (float)(*((float *)a1 + 4) * *((float *)a1 + 1));
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v4 - 0.0) & _xmm) < 0.00000011920929 || !_finite((float)(1.0 / v4)) )
    return 0;
  return v3;
}
