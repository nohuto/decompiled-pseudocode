/*
 * XREFs of sub_18005160C @ 0x18005160C
 * Callers:
 *     sub_1800514F0 @ 0x1800514F0 (sub_1800514F0.c)
 *     sub_1800BF840 @ 0x1800BF840 (sub_1800BF840.c)
 *     sub_1800C24AC @ 0x1800C24AC (sub_1800C24AC.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180051510 @ 0x180051510 (sub_180051510.c)
 */

__int64 __fastcall sub_18005160C(__int64 a1, void **a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    sub_180051510(a2);
    return sub_18000BB4C(a2);
  }
  return result;
}
