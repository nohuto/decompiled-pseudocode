/*
 * XREFs of sub_18003FFE4 @ 0x18003FFE4
 * Callers:
 *     sub_18003D2CC @ 0x18003D2CC (sub_18003D2CC.c)
 *     sub_180068420 @ 0x180068420 (sub_180068420.c)
 *     sub_1800D006C @ 0x1800D006C (sub_1800D006C.c)
 *     sub_1800D10A0 @ 0x1800D10A0 (sub_1800D10A0.c)
 * Callees:
 *     _o_ceilf @ 0x18000C41C (_o_ceilf.c)
 */

__int64 __fastcall sub_18003FFE4(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  float v3; // xmm0_4
  float v4; // xmm0_4
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx

  v2 = *(_QWORD *)(a1 + 56);
  if ( a2 < 0 )
    v3 = (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1))
       + (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1));
  else
    v3 = (float)(int)a2;
  v4 = v3 / *(float *)a1;
  o_ceilf();
  v5 = 0LL;
  if ( v4 >= 9.223372e18 )
  {
    v4 = v4 - 9.223372e18;
    if ( v4 < 9.223372e18 )
      v5 = 0x8000000000000000uLL;
  }
  v6 = 8LL;
  if ( v5 + (unsigned int)(int)v4 > 8 )
    v6 = v5 + (unsigned int)(int)v4;
  if ( v2 >= v6 )
    return v2;
  if ( v2 < 0x200 && 8 * v2 >= v6 )
    return 8 * v2;
  return v6;
}
