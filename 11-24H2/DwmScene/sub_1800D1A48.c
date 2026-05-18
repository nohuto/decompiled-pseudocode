/*
 * XREFs of sub_1800D1A48 @ 0x1800D1A48
 * Callers:
 *     sub_1800D1B10 @ 0x1800D1B10 (sub_1800D1B10.c)
 * Callees:
 *     sub_1800CFE98 @ 0x1800CFE98 (sub_1800CFE98.c)
 */

void **__fastcall sub_1800D1A48(__int64 a1)
{
  void **result; // rax

  sub_1800CFE98((void **)(a1 + 48));
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 8));
  result = &Spectre::Utils::ICancellationToken::`vftable';
  *(_QWORD *)a1 = &Spectre::Utils::ICancellationToken::`vftable';
  return result;
}
