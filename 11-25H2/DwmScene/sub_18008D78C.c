/*
 * XREFs of sub_18008D78C @ 0x18008D78C
 * Callers:
 *     sub_18008D908 @ 0x18008D908 (sub_18008D908.c)
 *     sub_180090D30 @ 0x180090D30 (sub_180090D30.c)
 * Callees:
 *     sub_18008D574 @ 0x18008D574 (sub_18008D574.c)
 */

__int64 *__fastcall sub_18008D78C(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 *v7; // rdi
  __int64 *v8; // rsi

  v5 = qword_1801C8A58;
  v7 = *(__int64 **)(qword_1801C8A68 + 16 * (a4 & qword_1801C8A80) + 8);
  if ( v7 == (__int64 *)qword_1801C8A58 )
  {
    a2[1] = 0LL;
    *a2 = v5;
  }
  else
  {
    v8 = *(__int64 **)(qword_1801C8A68 + 16 * (a4 & qword_1801C8A80));
    while ( sub_18008D574(v5, a3, (__int64)(v7 + 2)) )
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
