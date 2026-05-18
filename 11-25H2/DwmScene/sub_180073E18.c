/*
 * XREFs of sub_180073E18 @ 0x180073E18
 * Callers:
 *     sub_180073BD4 @ 0x180073BD4 (sub_180073BD4.c)
 * Callees:
 *     sub_1800366CC @ 0x1800366CC (sub_1800366CC.c)
 */

__int64 __fastcall sub_180073E18(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_1800366CC(v1);
  return result;
}
