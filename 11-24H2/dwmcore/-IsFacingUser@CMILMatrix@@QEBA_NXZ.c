/*
 * XREFs of ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x18016A364
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800C0020 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x180169048 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     _lambda_88375b7c038d402b80e7daa8931735f4_::operator() @ 0x1801693CC (_lambda_88375b7c038d402b80e7daa8931735f4_--operator().c)
 *     ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x180169400 (-PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 * Callees:
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x18016A964 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x18016AAAC (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 */

bool __fastcall CMILMatrix::IsFacingUser(CMILMatrix *this, const struct Windows::Foundation::Numerics::float4x4 *a2)
{
  float v2; // xmm6_4
  float v3; // xmm7_4
  bool IsInvertibleDeterminant; // al
  int v5; // ecx
  __int64 v6; // rax

  v2 = (float)((float)((float)((float)(*((float *)this + 4) * *((float *)this + 3))
                             - (float)(*(float *)this * *((float *)this + 7)))
                     * *((float *)this + 13))
             + (float)((float)((float)(*((float *)this + 1) * *((float *)this + 7))
                             - (float)(*((float *)this + 3) * *((float *)this + 5)))
                     * *((float *)this + 12)))
     + (float)((float)((float)(*(float *)this * *((float *)this + 5))
                     - (float)(*((float *)this + 4) * *((float *)this + 1)))
             * *((float *)this + 15));
  v3 = Windows::Foundation::Numerics::determinant(this, a2);
  IsInvertibleDeterminant = CMILMatrix::IsInvertibleDeterminant(v3);
  v5 = 0;
  if ( IsInvertibleDeterminant )
  {
    LOBYTE(v5) = v3 < 0.0;
    return v5 == v2 < 0.0;
  }
  else
  {
    LOBYTE(v6) = v2 >= 0.0;
  }
  return v6;
}
