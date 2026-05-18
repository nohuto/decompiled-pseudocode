/*
 * XREFs of sub_18001CB38 @ 0x18001CB38
 * Callers:
 *     sub_18001CE60 @ 0x18001CE60 (sub_18001CE60.c)
 *     sub_18001D638 @ 0x18001D638 (sub_18001D638.c)
 *     sub_18001D6EC @ 0x18001D6EC (sub_18001D6EC.c)
 *     sub_18001E7A0 @ 0x18001E7A0 (sub_18001E7A0.c)
 *     sub_18001E97C @ 0x18001E97C (sub_18001E97C.c)
 *     sub_18004E870 @ 0x18004E870 (sub_18004E870.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18001CB38(__int64 a1, unsigned __int64 a2)
{
  if ( *(_QWORD *)(a1 + 16) < a2 )
  {
    std::_Xout_of_range("invalid string position");
    __debugbreak();
  }
}
