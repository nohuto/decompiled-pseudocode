/*
 * XREFs of ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@_W@std@@@std@@QEBA_NXZ @ 0x18001319C
 * Callers:
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_String_val<std::_Simple_types<wchar_t>>::_Large_mode_engaged(__int64 a1)
{
  return *(_QWORD *)(a1 + 24) > 7uLL;
}
