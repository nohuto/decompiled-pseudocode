/*
 * XREFs of sub_1800514D0 @ 0x1800514D0
 * Callers:
 *     sub_1800C1490 @ 0x1800C1490 (sub_1800C1490.c)
 * Callees:
 *     sub_18004E834 @ 0x18004E834 (sub_18004E834.c)
 */

__int64 __fastcall sub_1800514D0(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18004E834(v1);
  return result;
}
