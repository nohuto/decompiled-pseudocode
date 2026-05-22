/*
 * XREFs of ?XMScalarACos@DirectX@@YAMM@Z @ 0x1800CE8B4
 * Callers:
 *     ?AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ @ 0x180076C94 (-AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ.c)
 * Callees:
 *     _o_sqrtf_0 @ 0x18009D35C (_o_sqrtf_0.c)
 */

float __fastcall DirectX::XMScalarACos(DirectX *this, float a2)
{
  float v2; // xmm0_4
  float v3; // xmm6_4
  bool v4; // bl
  float v5; // xmm3_4

  LODWORD(v3) = LODWORD(v2) & _xmm;
  v4 = v2 >= 0.0;
  v5 = o_sqrtf_0(fmaxf(0.0, 1.0 - COERCE_FLOAT(LODWORD(v2) & _xmm)))
     * (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(0.0066700899 - (float)(v3 * 0.0012624911)) * v3)
                                                                                             - 0.017088126)
                                                                                     * v3)
                                                                             + 0.03089188)
                                                                     * v3)
                                                             - 0.050174303)
                                                     * v3)
                                             + 0.088978991)
                                     * v3)
                             - 0.2145988)
                     * v3)
             + 1.5707963);
  if ( !v4 )
    return 3.1415927 - v5;
  return v5;
}
