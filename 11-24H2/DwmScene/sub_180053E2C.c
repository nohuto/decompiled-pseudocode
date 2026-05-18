/*
 * XREFs of sub_180053E2C @ 0x180053E2C
 * Callers:
 *     sub_180052CE0 @ 0x180052CE0 (sub_180052CE0.c)
 *     sub_180062390 @ 0x180062390 (sub_180062390.c)
 * Callees:
 *     sub_1800109F8 @ 0x1800109F8 (sub_1800109F8.c)
 *     sub_180013278 @ 0x180013278 (sub_180013278.c)
 */

__int64 __fastcall sub_180053E2C(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    sub_180013278();
  v5 = a2;
  result = sub_1800109F8((__int64)a1, &v5);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 16 * a2;
  return result;
}
