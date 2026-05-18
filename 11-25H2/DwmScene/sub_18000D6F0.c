/*
 * XREFs of sub_18000D6F0 @ 0x18000D6F0
 * Callers:
 *     sub_18000D780 @ 0x18000D780 (sub_18000D780.c)
 * Callees:
 *     sub_18000FD08 @ 0x18000FD08 (sub_18000FD08.c)
 */

void **__fastcall sub_18000D6F0(_QWORD *a1)
{
  void **result; // rax

  sub_18000FD08(a1 + 23);
  sub_18000FD08(a1 + 21);
  result = &stdext::exception::`vftable';
  *a1 = &stdext::exception::`vftable';
  return result;
}
