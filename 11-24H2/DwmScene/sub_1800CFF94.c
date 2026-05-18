/*
 * XREFs of sub_1800CFF94 @ 0x1800CFF94
 * Callers:
 *     sub_1800D0160 @ 0x1800D0160 (sub_1800D0160.c)
 * Callees:
 *     sub_1800CFE98 @ 0x1800CFE98 (sub_1800CFE98.c)
 *     sub_1800CFEC8 @ 0x1800CFEC8 (sub_1800CFEC8.c)
 */

__int64 __fastcall sub_1800CFF94(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Utils::JsonConfigurationManager::`vftable';
  sub_1800CFE98((void **)(a1 + 144));
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 112));
  sub_1800CFEC8((void **)(a1 + 96));
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 64));
  return sub_1800CDB54(a1);
}
