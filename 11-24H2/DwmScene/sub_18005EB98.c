/*
 * XREFs of sub_18005EB98 @ 0x18005EB98
 * Callers:
 *     sub_18005F4D0 @ 0x18005F4D0 (sub_18005F4D0.c)
 * Callees:
 *     sub_18005EAA8 @ 0x18005EAA8 (sub_18005EAA8.c)
 */

__int64 __fastcall sub_18005EB98(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Engine::ViewerEngine::`vftable';
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 1504));
  sub_18005EAA8((__int64 *)(a1 + 1440));
  return sub_18003017C(a1);
}
