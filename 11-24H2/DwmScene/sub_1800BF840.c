/*
 * XREFs of sub_1800BF840 @ 0x1800BF840
 * Callers:
 *     sub_1800C0598 @ 0x1800C0598 (sub_1800C0598.c)
 *     sub_1800C0BD4 @ 0x1800C0BD4 (sub_1800C0BD4.c)
 *     sub_1800C24AC @ 0x1800C24AC (sub_1800C24AC.c)
 * Callees:
 *     sub_18005160C @ 0x18005160C (sub_18005160C.c)
 */

void ***__fastcall sub_1800BF840(void ***a1, void ***a2)
{
  void **v2; // rax
  void **v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    sub_18005160C((__int64)a1, v4);
  return a1;
}
