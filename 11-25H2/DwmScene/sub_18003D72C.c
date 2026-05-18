/*
 * XREFs of sub_18003D72C @ 0x18003D72C
 * Callers:
 *     sub_18003D858 @ 0x18003D858 (sub_18003D858.c)
 *     sub_18003D888 @ 0x18003D888 (sub_18003D888.c)
 *     sub_18004B5FC @ 0x18004B5FC (sub_18004B5FC.c)
 *     sub_1800D7B90 @ 0x1800D7B90 (sub_1800D7B90.c)
 *     sub_1800D88D4 @ 0x1800D88D4 (sub_1800D88D4.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_18003D72C(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010134(v1, 0x50uLL);
  return result;
}
