/*
 * XREFs of sub_180052750 @ 0x180052750
 * Callers:
 *     sub_1800C1490 @ 0x1800C1490 (sub_1800C1490.c)
 * Callees:
 *     sub_180013278 @ 0x180013278 (sub_180013278.c)
 *     sub_18001D7D8 @ 0x18001D7D8 (sub_18001D7D8.c)
 */

__int64 __fastcall sub_180052750(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
    sub_180013278();
  v5 = a2;
  result = sub_18001D7D8((__int64)a1, &v5);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 32 * a2;
  return result;
}
