/*
 * XREFs of ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@D@std@@@std@@QEBA_NXZ @ 0x180011A9C
 * Callers:
 *     sub_1800037B0 @ 0x1800037B0 (sub_1800037B0.c)
 *     sub_180003840 @ 0x180003840 (sub_180003840.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18004D714 @ 0x18004D714 (sub_18004D714.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_String_val<std::_Simple_types<char>>::_Large_mode_engaged(__int64 a1)
{
  return *(_QWORD *)(a1 + 24) > 0xFuLL;
}
