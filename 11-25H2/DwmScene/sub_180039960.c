/*
 * XREFs of sub_180039960 @ 0x180039960
 * Callers:
 *     sub_18003A4E8 @ 0x18003A4E8 (sub_18003A4E8.c)
 *     sub_1800659B4 @ 0x1800659B4 (sub_1800659B4.c)
 *     sub_180065D00 @ 0x180065D00 (sub_180065D00.c)
 * Callees:
 *     sub_18003C478 @ 0x18003C478 (sub_18003C478.c)
 */

_OWORD *__fastcall sub_180039960(__int64 a1, unsigned __int64 *a2)
{
  __int128 v2; // xmm0
  _OWORD *v3; // r8

  *((_QWORD *)&v2 + 1) = _mm_movelh_ps((__m128)*a2, (__m128)(unsigned int)a2[8LL]).m128_u64[1];
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 1065353216;
  *(double *)&v2 = sub_18003C478(a1, a2, a1);
  *v3 = v2;
  return v3;
}
