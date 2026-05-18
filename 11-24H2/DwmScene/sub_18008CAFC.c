/*
 * XREFs of sub_18008CAFC @ 0x18008CAFC
 * Callers:
 *     sub_18008CC38 @ 0x18008CC38 (sub_18008CC38.c)
 * Callees:
 *     sub_18008C5FC @ 0x18008C5FC (sub_18008C5FC.c)
 */

__int64 **__fastcall sub_18008CAFC(__int64 **a1, __int64 **a2)
{
  if ( a1 != a2 )
    sub_18008C5FC(a1, *a2, ((char *)a2[1] - (char *)*a2) >> 4);
  return a1;
}
