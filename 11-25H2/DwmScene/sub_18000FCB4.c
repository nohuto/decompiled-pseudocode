/*
 * XREFs of sub_18000FCB4 @ 0x18000FCB4
 * Callers:
 *     sub_18000D7F4 @ 0x18000D7F4 (sub_18000D7F4.c)
 *     sub_18000EF44 @ 0x18000EF44 (sub_18000EF44.c)
 *     sub_18000FC34 @ 0x18000FC34 (sub_18000FC34.c)
 * Callees:
 *     sub_18000D4FC @ 0x18000D4FC (sub_18000D4FC.c)
 *     sub_18000D750 @ 0x18000D750 (sub_18000D750.c)
 *     sub_18000DA6C @ 0x18000DA6C (sub_18000DA6C.c)
 */

void __fastcall sub_18000FCB4(void **a1, void *a2)
{
  void *v2; // rdi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    sub_18000D4FC((__int64)&v5);
    sub_18000DA6C(v2);
    sub_18000D750((__int64)&v5);
  }
  *a1 = a2;
}
