/*
 * XREFs of sub_18008C99C @ 0x18008C99C
 * Callers:
 *     sub_18008CAD8 @ 0x18008CAD8 (sub_18008CAD8.c)
 * Callees:
 *     sub_18008C49C @ 0x18008C49C (sub_18008C49C.c)
 */

__int64 **__fastcall sub_18008C99C(__int64 **a1, __int64 **a2)
{
  if ( a1 != a2 )
    sub_18008C49C(a1, *a2, ((char *)a2[1] - (char *)*a2) >> 4);
  return a1;
}
