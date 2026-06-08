/*
 * XREFs of sub_140006038 @ 0x140006038
 * Callers:
 *     sub_1400073B8 @ 0x1400073B8 (sub_1400073B8.c)
 *     sub_14000740C @ 0x14000740C (sub_14000740C.c)
 * Callees:
 *     sub_140007D54 @ 0x140007D54 (sub_140007D54.c)
 *     sub_140007F5C @ 0x140007F5C (sub_140007F5C.c)
 *     sub_140008174 @ 0x140008174 (sub_140008174.c)
 */

__int64 __fastcall sub_140006038(__int64 a1, unsigned int a2, _QWORD *a3)
{
  char v5; // bl
  __int64 v6; // rdi

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = (unsigned int)a1;
  }
  else
  {
    v6 = sub_140007F5C(*a3, a1, a3);
    v5 = v6;
  }
  if ( a2 )
  {
    sub_140007D54(a3, v6, a2);
    if ( a2 - 3 <= 1 )
      sub_140008174(v6, a2, a3);
  }
  return v5 & 1;
}
