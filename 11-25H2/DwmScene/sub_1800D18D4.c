/*
 * XREFs of sub_1800D18D4 @ 0x1800D18D4
 * Callers:
 *     sub_1800E26ED @ 0x1800E26ED (sub_1800E26ED.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800D18D4(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Utils::ICancellationToken::`vftable';
  *a1 = &Spectre::Utils::ICancellationToken::`vftable';
  return result;
}
