/*
 * XREFs of sub_180058B4C @ 0x180058B4C
 * Callers:
 *     sub_1800187C0 @ 0x1800187C0 (sub_1800187C0.c)
 *     sub_180053528 @ 0x180053528 (sub_180053528.c)
 * Callees:
 *     sub_180058950 @ 0x180058950 (sub_180058950.c)
 */

void __fastcall sub_180058B4C(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
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
    sub_180058950(a1, 4);
  }
}
