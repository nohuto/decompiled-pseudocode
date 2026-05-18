/*
 * XREFs of sub_18005EA38 @ 0x18005EA38
 * Callers:
 *     sub_18005F370 @ 0x18005F370 (sub_18005F370.c)
 * Callees:
 *     sub_18005E948 @ 0x18005E948 (sub_18005E948.c)
 */

__int64 __fastcall sub_18005EA38(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Engine::ViewerEngine::`vftable';
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 1504));
  sub_18005E948((__int64 *)(a1 + 1440));
  return sub_18003001C(a1);
}
