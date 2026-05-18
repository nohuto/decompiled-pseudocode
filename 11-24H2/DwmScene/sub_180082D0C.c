/*
 * XREFs of sub_180082D0C @ 0x180082D0C
 * Callers:
 *     sub_180082CA8 @ 0x180082CA8 (sub_180082CA8.c)
 * Callees:
 *     sub_18007CCA4 @ 0x18007CCA4 (sub_18007CCA4.c)
 */

__int64 __fastcall sub_180082D0C(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18007CCA4(v1);
  return result;
}
