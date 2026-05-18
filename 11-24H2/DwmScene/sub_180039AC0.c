/*
 * XREFs of sub_180039AC0 @ 0x180039AC0
 * Callers:
 *     sub_18003A648 @ 0x18003A648 (sub_18003A648.c)
 *     sub_180065B14 @ 0x180065B14 (sub_180065B14.c)
 *     sub_180065E60 @ 0x180065E60 (sub_180065E60.c)
 * Callees:
 *     sub_18003C5D8 @ 0x18003C5D8 (sub_18003C5D8.c)
 */

_OWORD *__fastcall sub_180039AC0(__int64 a1, unsigned __int64 *a2)
{
  __int128 v2; // xmm0
  _OWORD *v3; // r8

  *((_QWORD *)&v2 + 1) = _mm_movelh_ps((__m128)*a2, (__m128)(unsigned int)a2[8LL]).m128_u64[1];
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 1065353216;
  *(double *)&v2 = sub_18003C5D8(a1, a2, a1);
  *v3 = v2;
  return v3;
}
