/*
 * XREFs of sub_180069CE8 @ 0x180069CE8
 * Callers:
 *     sub_1800698AC @ 0x1800698AC (sub_1800698AC.c)
 *     sub_180069B2C @ 0x180069B2C (sub_180069B2C.c)
 * Callees:
 *     sub_180069740 @ 0x180069740 (sub_180069740.c)
 */

__int64 __fastcall sub_180069CE8(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = a1[1];
  if ( v4 == a1[2] )
    return sub_180069494(a1, v4, a2);
  result = sub_180069740((__int64)a1, v4, a2);
  a1[1] += 80LL;
  return result;
}
