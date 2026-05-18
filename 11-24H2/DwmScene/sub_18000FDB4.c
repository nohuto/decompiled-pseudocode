/*
 * XREFs of sub_18000FDB4 @ 0x18000FDB4
 * Callers:
 *     sub_18000D8D4 @ 0x18000D8D4 (sub_18000D8D4.c)
 *     sub_18000F044 @ 0x18000F044 (sub_18000F044.c)
 *     sub_18000FD34 @ 0x18000FD34 (sub_18000FD34.c)
 * Callees:
 *     sub_18000D5E4 @ 0x18000D5E4 (sub_18000D5E4.c)
 *     sub_18000D830 @ 0x18000D830 (sub_18000D830.c)
 *     sub_18000DB4C @ 0x18000DB4C (sub_18000DB4C.c)
 */

void __fastcall sub_18000FDB4(void **a1, void *a2)
{
  void *v2; // rdi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    sub_18000D5E4((__int64)&v5);
    sub_18000DB4C(v2);
    sub_18000D830((__int64)&v5);
  }
  *a1 = a2;
}
