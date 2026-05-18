/*
 * XREFs of sub_18002FBDC @ 0x18002FBDC
 * Callers:
 *     sub_18002C110 @ 0x18002C110 (sub_18002C110.c)
 * Callees:
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 */

char __fastcall sub_18002FBDC(__int64 *a1)
{
  __int64 v1; // rcx
  char result; // al

  v1 = *a1;
  if ( v1 )
    return sub_180011B5C(v1);
  return result;
}
