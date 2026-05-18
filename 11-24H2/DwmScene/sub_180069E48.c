/*
 * XREFs of sub_180069E48 @ 0x180069E48
 * Callers:
 *     sub_180069A0C @ 0x180069A0C (sub_180069A0C.c)
 *     sub_180069C8C @ 0x180069C8C (sub_180069C8C.c)
 * Callees:
 *     sub_1800698A0 @ 0x1800698A0 (sub_1800698A0.c)
 */

__int64 __fastcall sub_180069E48(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = a1[1];
  if ( v4 == a1[2] )
    return sub_1800695F4(a1, v4, a2);
  result = sub_1800698A0((__int64)a1, v4, a2);
  a1[1] += 80LL;
  return result;
}
