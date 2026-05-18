/*
 * XREFs of sub_180067FB4 @ 0x180067FB4
 * Callers:
 *     sub_18005DE90 @ 0x18005DE90 (sub_18005DE90.c)
 * Callees:
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 */

__int64 __fastcall sub_180067FB4(__int64 a1)
{
  __int64 result; // rax

  result = 0x492492492492492LL;
  if ( *(_QWORD *)(a1 + 8) == 0x492492492492492LL )
    sub_18001CD64();
  return result;
}
