/*
 * XREFs of sub_180030010 @ 0x180030010
 * Callers:
 *     sub_18003017C @ 0x18003017C (sub_18003017C.c)
 *     sub_1800D6D9C @ 0x1800D6D9C (sub_1800D6D9C.c)
 *     sub_1800D709F @ 0x1800D709F (sub_1800D709F.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18002FCDC @ 0x18002FCDC (sub_18002FCDC.c)
 */

__int64 __fastcall sub_180030010(void ***a1)
{
  void **v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    sub_18002FCDC(v1 + 2);
    return sub_18000BB4C(v1);
  }
  return result;
}
