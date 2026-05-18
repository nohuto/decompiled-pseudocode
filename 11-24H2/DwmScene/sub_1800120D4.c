/*
 * XREFs of sub_1800120D4 @ 0x1800120D4
 * Callers:
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_18001D960 @ 0x18001D960 (sub_18001D960.c)
 *     sub_18001DA08 @ 0x18001DA08 (sub_18001DA08.c)
 *     sub_18001DB0C @ 0x18001DB0C (sub_18001DB0C.c)
 *     sub_18001DC00 @ 0x18001DC00 (sub_18001DC00.c)
 *     sub_18002EFD8 @ 0x18002EFD8 (sub_18002EFD8.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180012270 @ 0x180012270 (sub_180012270.c)
 */

__int64 __fastcall sub_1800120D4(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // rax
  __int64 result; // rax

  v3 = sub_180012270(++*a2);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(v3);
  --*a2;
  return result;
}
