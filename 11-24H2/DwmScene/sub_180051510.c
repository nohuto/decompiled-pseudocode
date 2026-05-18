/*
 * XREFs of sub_180051510 @ 0x180051510
 * Callers:
 *     sub_18005157C @ 0x18005157C (sub_18005157C.c)
 *     sub_18005160C @ 0x18005160C (sub_18005160C.c)
 *     sub_1800517B8 @ 0x1800517B8 (sub_1800517B8.c)
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 *     sub_1800BF8BC @ 0x1800BF8BC (sub_1800BF8BC.c)
 *     sub_1800BF9CC @ 0x1800BF9CC (sub_1800BF9CC.c)
 *     sub_1800C0BD4 @ 0x1800C0BD4 (sub_1800C0BD4.c)
 *     sub_1800E20C7 @ 0x1800E20C7 (sub_1800E20C7.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 */

__int64 __fastcall sub_180051510(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000BB4C(v1);
  return result;
}
