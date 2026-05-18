/*
 * XREFs of sub_18000D7B0 @ 0x18000D7B0
 * Callers:
 *     sub_18000D8D4 @ 0x18000D8D4 (sub_18000D8D4.c)
 *     sub_18000F044 @ 0x18000F044 (sub_18000F044.c)
 * Callees:
 *     sub_18000F124 @ 0x18000F124 (sub_18000F124.c)
 */

__int64 __fastcall sub_18000D7B0(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return sub_18000F124();
  return result;
}
