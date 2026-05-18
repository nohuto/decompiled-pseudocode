/*
 * XREFs of ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@D@std@@@std@@QEBA_NXZ @ 0x18001199C
 * Callers:
 *     sub_1800037B0 @ 0x1800037B0 (sub_1800037B0.c)
 *     sub_180003840 @ 0x180003840 (sub_180003840.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18004D5B4 @ 0x18004D5B4 (sub_18004D5B4.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_String_val<std::_Simple_types<char>>::_Large_mode_engaged(__int64 a1)
{
  return *(_QWORD *)(a1 + 24) > 0xFuLL;
}
