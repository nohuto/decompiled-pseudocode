/*
 * XREFs of sub_180010918 @ 0x180010918
 * Callers:
 *     sub_1800131FC @ 0x1800131FC (sub_1800131FC.c)
 *     sub_180013818 @ 0x180013818 (sub_180013818.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18001B96C @ 0x18001B96C (sub_18001B96C.c)
 *     sub_18001BA64 @ 0x18001BA64 (sub_18001BA64.c)
 *     sub_18001BE10 @ 0x18001BE10 (sub_18001BE10.c)
 *     sub_18001D0DC @ 0x18001D0DC (sub_18001D0DC.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_18002BFB0 @ 0x18002BFB0 (sub_18002BFB0.c)
 *     sub_18004D5B4 @ 0x18004D5B4 (sub_18004D5B4.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180010918(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits,0>(++*a2);
  --*a2;
  return result;
}
