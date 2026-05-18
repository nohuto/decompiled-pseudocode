/*
 * XREFs of ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@_W@std@@@std@@QEBA_NXZ @ 0x18001309C
 * Callers:
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_String_val<std::_Simple_types<wchar_t>>::_Large_mode_engaged(__int64 a1)
{
  return *(_QWORD *)(a1 + 24) > 7uLL;
}
