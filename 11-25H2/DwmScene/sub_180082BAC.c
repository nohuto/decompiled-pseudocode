/*
 * XREFs of sub_180082BAC @ 0x180082BAC
 * Callers:
 *     sub_180082B48 @ 0x180082B48 (sub_180082B48.c)
 * Callees:
 *     sub_18007CB44 @ 0x18007CB44 (sub_18007CB44.c)
 */

__int64 __fastcall sub_180082BAC(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18007CB44(v1);
  return result;
}
