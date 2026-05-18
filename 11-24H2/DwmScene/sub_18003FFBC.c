/*
 * XREFs of sub_18003FFBC @ 0x18003FFBC
 * Callers:
 *     sub_18003CC78 @ 0x18003CC78 (sub_18003CC78.c)
 *     sub_18003D140 @ 0x18003D140 (sub_18003D140.c)
 * Callees:
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 */

__int64 __fastcall sub_18003FFBC(__int64 a1)
{
  __int64 result; // rax

  result = 0x333333333333333LL;
  if ( *(_QWORD *)(a1 + 8) == 0x333333333333333LL )
    sub_18001CD64();
  return result;
}
