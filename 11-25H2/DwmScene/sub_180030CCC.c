/*
 * XREFs of sub_180030CCC @ 0x180030CCC
 * Callers:
 *     sub_180035358 @ 0x180035358 (sub_180035358.c)
 *     sub_1800355DC @ 0x1800355DC (sub_1800355DC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180030CCC(__int64 a1, float a2)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  float v4; // xmm1_4

  if ( a2 > 0.0 )
  {
    v2 = *(float *)a1;
    if ( a2 > *(float *)a1 )
      v2 = a2;
    *(float *)a1 = v2;
    v3 = *(float *)(a1 + 4);
    if ( v3 > a2 )
      v3 = a2;
    *(float *)(a1 + 4) = v3;
    v4 = a2 + *(float *)(a1 + 8);
    ++*(_QWORD *)(a1 + 16);
    *(float *)(a1 + 8) = v4;
  }
}
