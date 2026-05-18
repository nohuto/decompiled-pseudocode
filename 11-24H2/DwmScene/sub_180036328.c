/*
 * XREFs of sub_180036328 @ 0x180036328
 * Callers:
 *     sub_18002C7A0 @ 0x18002C7A0 (sub_18002C7A0.c)
 *     sub_180073304 @ 0x180073304 (sub_180073304.c)
 * Callees:
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 */

__int64 __fastcall sub_180036328(__int64 a1)
{
  __int64 result; // rax

  result = 0x2AAAAAAAAAAAAAALL;
  if ( *(_QWORD *)(a1 + 8) == 0x2AAAAAAAAAAAAAALL )
    sub_18001CD64();
  return result;
}
