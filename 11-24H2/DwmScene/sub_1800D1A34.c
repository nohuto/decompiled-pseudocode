/*
 * XREFs of sub_1800D1A34 @ 0x1800D1A34
 * Callers:
 *     sub_1800E284D @ 0x1800E284D (sub_1800E284D.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800D1A34(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Utils::ICancellationToken::`vftable';
  *a1 = &Spectre::Utils::ICancellationToken::`vftable';
  return result;
}
