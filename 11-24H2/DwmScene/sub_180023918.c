/*
 * XREFs of sub_180023918 @ 0x180023918
 * Callers:
 *     sub_18002397C @ 0x18002397C (sub_18002397C.c)
 *     sub_18007587C @ 0x18007587C (sub_18007587C.c)
 *     sub_18008D71C @ 0x18008D71C (sub_18008D71C.c)
 * Callees:
 *     sub_180023C10 @ 0x180023C10 (sub_180023C10.c)
 */

__int64 __fastcall sub_180023918(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_180023C10(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
