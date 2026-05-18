/*
 * XREFs of sub_180058CAC @ 0x180058CAC
 * Callers:
 *     sub_180018880 @ 0x180018880 (sub_180018880.c)
 *     sub_180053688 @ 0x180053688 (sub_180053688.c)
 * Callees:
 *     sub_180058AB0 @ 0x180058AB0 (sub_180058AB0.c)
 */

void __fastcall sub_180058CAC(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  char v4; // al
  _DWORD *v5; // rdx

  v4 = _mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)(a1 + 344), (__m128)a2));
  v5 = (_DWORD *)(a1 + 352);
  if ( (v4 & 3) != 3
    || (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)v5, (__m128)a3)) & 3) != 3
    || a4 != *(_DWORD *)(a1 + 360) )
  {
    *(_QWORD *)(a1 + 344) = a2;
    *v5 = a3;
    *(_DWORD *)(a1 + 356) = HIDWORD(a3);
    *(_DWORD *)(a1 + 360) = a4;
    sub_180058AB0(a1, 4);
  }
}
