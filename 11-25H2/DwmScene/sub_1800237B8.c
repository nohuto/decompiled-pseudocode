/*
 * XREFs of sub_1800237B8 @ 0x1800237B8
 * Callers:
 *     sub_18002381C @ 0x18002381C (sub_18002381C.c)
 *     sub_18007571C @ 0x18007571C (sub_18007571C.c)
 *     sub_18008D5BC @ 0x18008D5BC (sub_18008D5BC.c)
 * Callees:
 *     sub_180023AB0 @ 0x180023AB0 (sub_180023AB0.c)
 */

__int64 __fastcall sub_1800237B8(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_180023AB0(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
