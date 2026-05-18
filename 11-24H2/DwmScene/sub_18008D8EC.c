/*
 * XREFs of sub_18008D8EC @ 0x18008D8EC
 * Callers:
 *     sub_18008DA68 @ 0x18008DA68 (sub_18008DA68.c)
 *     sub_180090E90 @ 0x180090E90 (sub_180090E90.c)
 * Callees:
 *     sub_18008D6D4 @ 0x18008D6D4 (sub_18008D6D4.c)
 */

__int64 *__fastcall sub_18008D8EC(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 *v7; // rdi
  __int64 *v8; // rsi

  v5 = qword_1801C9A68;
  v7 = *(__int64 **)(qword_1801C9A78 + 16 * (a4 & qword_1801C9A90) + 8);
  if ( v7 == (__int64 *)qword_1801C9A68 )
  {
    a2[1] = 0LL;
    *a2 = v5;
  }
  else
  {
    v8 = *(__int64 **)(qword_1801C9A78 + 16 * (a4 & qword_1801C9A90));
    while ( sub_18008D6D4(v5, a3, (__int64)(v7 + 2)) )
    {
      if ( v7 == v8 )
      {
        a2[1] = 0LL;
        *a2 = (__int64)v7;
        return a2;
      }
      v7 = (__int64 *)v7[1];
    }
    *a2 = *v7;
    a2[1] = (__int64)v7;
  }
  return a2;
}
