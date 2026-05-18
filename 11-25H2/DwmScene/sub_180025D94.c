/*
 * XREFs of sub_180025D94 @ 0x180025D94
 * Callers:
 *     sub_180054160 @ 0x180054160 (sub_180054160.c)
 * Callees:
 *     sub_18001D678 @ 0x18001D678 (sub_18001D678.c)
 */

__int64 __fastcall sub_180025D94(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  result = sub_18001D678((__int64)a1, &v5);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 32 * a2;
  return result;
}
