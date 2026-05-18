/*
 * XREFs of sub_18008BF3C @ 0x18008BF3C
 * Callers:
 *     sub_18008BFD0 @ 0x18008BFD0 (sub_18008BFD0.c)
 * Callees:
 *     _o_cosf @ 0x18000BFC8 (_o_cosf.c)
 *     _o_sinf @ 0x18000C034 (_o_sinf.c)
 */

__int64 __fastcall sub_18008BF3C(__int64 a1, __int64 a2, float a3)
{
  float v7; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  __int64 result; // rax

  o_cosf();
  o_sinf();
  v7 = *(float *)a2;
  v8 = *(float *)(a2 + 8);
  v9 = *(float *)a2 * a3;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  result = a1;
  *(float *)a1 = v9 - (float)(v8 * a3);
  *(float *)(a1 + 8) = (float)(v8 * a3) + (float)(v7 * a3);
  return result;
}
