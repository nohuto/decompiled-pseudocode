/*
 * XREFs of sub_1800695BC @ 0x1800695BC
 * Callers:
 *     sub_18006951C @ 0x18006951C (sub_18006951C.c)
 *     sub_1800695F4 @ 0x1800695F4 (sub_1800695F4.c)
 *     sub_1800697C4 @ 0x1800697C4 (sub_1800697C4.c)
 *     sub_18006999C @ 0x18006999C (sub_18006999C.c)
 *     sub_180069D78 @ 0x180069D78 (sub_180069D78.c)
 *     sub_180069E18 @ 0x180069E18 (sub_180069E18.c)
 * Callees:
 *     sub_18008CAC0 @ 0x18008CAC0 (sub_18008CAC0.c)
 */

__int64 __fastcall sub_1800695BC(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_18008CAC0(v3);
      v3 += 80LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
