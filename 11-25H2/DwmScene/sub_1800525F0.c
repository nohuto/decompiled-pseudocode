/*
 * XREFs of sub_1800525F0 @ 0x1800525F0
 * Callers:
 *     sub_1800C1330 @ 0x1800C1330 (sub_1800C1330.c)
 * Callees:
 *     sub_180013178 @ 0x180013178 (sub_180013178.c)
 *     sub_18001D678 @ 0x18001D678 (sub_18001D678.c)
 */

__int64 __fastcall sub_1800525F0(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
    sub_180013178();
  v5 = a2;
  result = sub_18001D678((__int64)a1, &v5);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 32 * a2;
  return result;
}
