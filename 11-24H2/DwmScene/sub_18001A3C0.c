/*
 * XREFs of sub_18001A3C0 @ 0x18001A3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001A3C0(_DWORD *a1, float *a2)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm2_4
  __int64 result; // rax

  v2 = a2[1];
  v3 = a2[2];
  v4 = a2[3];
  a1[32] = (int)*a2;
  a1[33] = (int)v2;
  a1[34] = (int)v3;
  result = (unsigned int)(int)v4;
  a1[35] = result;
  return result;
}
