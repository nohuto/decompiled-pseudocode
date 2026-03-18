/*
 * XREFs of ?SumPointDistances@CPathLengthOperation@@AEBAMI@Z @ 0x180220A14
 * Callers:
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x18005D8D8 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 * Callees:
 *     _hypot_0 @ 0x1802E8824 (_hypot_0.c)
 */

float __fastcall CPathLengthOperation::SumPointDistances(CPathLengthOperation *this, unsigned int a2)
{
  float v2; // xmm6_4
  float *v3; // rbx
  __int64 v4; // rsi
  float *v5; // rdi
  double v6; // xmm0_8
  float v7; // xmm1_4

  v2 = 0.0;
  if ( a2 )
  {
    v3 = (float *)((char *)this + 92);
    v4 = a2;
    v5 = (float *)((char *)this + 100);
    do
    {
      v6 = hypot_0((float)(*v5 - *v3), (float)(v5[1] - v3[1]));
      v5 += 2;
      v7 = v6;
      v3 += 2;
      v2 = v2 + v7;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
