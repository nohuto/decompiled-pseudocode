/*
 * XREFs of sub_18001C9D8 @ 0x18001C9D8
 * Callers:
 *     sub_18001CD00 @ 0x18001CD00 (sub_18001CD00.c)
 *     sub_18001D4D8 @ 0x18001D4D8 (sub_18001D4D8.c)
 *     sub_18001D58C @ 0x18001D58C (sub_18001D58C.c)
 *     sub_18001E640 @ 0x18001E640 (sub_18001E640.c)
 *     sub_18001E81C @ 0x18001E81C (sub_18001E81C.c)
 *     sub_18004E710 @ 0x18004E710 (sub_18004E710.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18001C9D8(__int64 a1, unsigned __int64 a2)
{
  if ( *(_QWORD *)(a1 + 16) < a2 )
  {
    std::_Xout_of_range("invalid string position");
    __debugbreak();
  }
}
