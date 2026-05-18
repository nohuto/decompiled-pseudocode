/*
 * XREFs of sub_180053CCC @ 0x180053CCC
 * Callers:
 *     sub_180052B80 @ 0x180052B80 (sub_180052B80.c)
 *     sub_180062230 @ 0x180062230 (sub_180062230.c)
 * Callees:
 *     sub_1800108F8 @ 0x1800108F8 (sub_1800108F8.c)
 *     sub_180013178 @ 0x180013178 (sub_180013178.c)
 */

__int64 __fastcall sub_180053CCC(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    sub_180013178();
  v5 = a2;
  result = sub_1800108F8((__int64)a1, &v5);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 16 * a2;
  return result;
}
