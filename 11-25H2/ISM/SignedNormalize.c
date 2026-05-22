/*
 * XREFs of SignedNormalize @ 0x18017A8F0
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x18017A0BC (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall SignedNormalize(float a1, float a2, double a3)
{
  __int128 v3; // xmm3
  float v4; // xmm5_4
  float v5; // xmm4_4

  v3 = 0LL;
  if ( a1 >= 0.0 )
    v4 = FLOAT_1_0;
  else
    v4 = FLOAT_N1_0;
  *(float *)&a3 = *(float *)&a3 - a2;
  v5 = COERCE_FLOAT(LODWORD(a1) & _xmm) - a2;
  if ( *(float *)&a3 <= fmaxf(v5, 0.0) )
    v3 = *(_OWORD *)&a3;
  else
    *(float *)&v3 = fmaxf(0.0, v5);
  *(float *)&v3 = (float)(*(float *)&v3 / *(float *)&a3) * v4;
  return (__m128)v3;
}
