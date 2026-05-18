/*
 * XREFs of sub_18000D7D0 @ 0x18000D7D0
 * Callers:
 *     sub_18000D860 @ 0x18000D860 (sub_18000D860.c)
 * Callees:
 *     sub_18000FE08 @ 0x18000FE08 (sub_18000FE08.c)
 */

void **__fastcall sub_18000D7D0(_QWORD *a1)
{
  void **result; // rax

  sub_18000FE08(a1 + 23);
  sub_18000FE08(a1 + 21);
  result = &stdext::exception::`vftable';
  *a1 = &stdext::exception::`vftable';
  return result;
}
