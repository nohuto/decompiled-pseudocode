/*
 * XREFs of sub_18002FA7C @ 0x18002FA7C
 * Callers:
 *     sub_18002BFB0 @ 0x18002BFB0 (sub_18002BFB0.c)
 * Callees:
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 */

char __fastcall sub_18002FA7C(__int64 *a1)
{
  __int64 v1; // rcx
  char result; // al

  v1 = *a1;
  if ( v1 )
    return sub_180011A5C(v1);
  return result;
}
