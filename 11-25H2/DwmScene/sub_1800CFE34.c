/*
 * XREFs of sub_1800CFE34 @ 0x1800CFE34
 * Callers:
 *     sub_1800D0000 @ 0x1800D0000 (sub_1800D0000.c)
 * Callees:
 *     sub_1800CFD38 @ 0x1800CFD38 (sub_1800CFD38.c)
 *     sub_1800CFD68 @ 0x1800CFD68 (sub_1800CFD68.c)
 */

__int64 __fastcall sub_1800CFE34(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Utils::JsonConfigurationManager::`vftable';
  sub_1800CFD38((void **)(a1 + 144));
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 112));
  sub_1800CFD68((void **)(a1 + 96));
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 64));
  return sub_1800CD9F4(a1);
}
