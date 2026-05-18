/*
 * XREFs of sub_1800D18E8 @ 0x1800D18E8
 * Callers:
 *     sub_1800D19B0 @ 0x1800D19B0 (sub_1800D19B0.c)
 * Callees:
 *     sub_1800CFD38 @ 0x1800CFD38 (sub_1800CFD38.c)
 */

void **__fastcall sub_1800D18E8(__int64 a1)
{
  void **result; // rax

  sub_1800CFD38((void **)(a1 + 48));
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 8));
  result = &Spectre::Utils::ICancellationToken::`vftable';
  *(_QWORD *)a1 = &Spectre::Utils::ICancellationToken::`vftable';
  return result;
}
