/*
 * XREFs of sub_180010A18 @ 0x180010A18
 * Callers:
 *     sub_1800132FC @ 0x1800132FC (sub_1800132FC.c)
 *     sub_180013918 @ 0x180013918 (sub_180013918.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18001BACC @ 0x18001BACC (sub_18001BACC.c)
 *     sub_18001BBC4 @ 0x18001BBC4 (sub_18001BBC4.c)
 *     sub_18001BF70 @ 0x18001BF70 (sub_18001BF70.c)
 *     sub_18001D23C @ 0x18001D23C (sub_18001D23C.c)
 *     sub_18001DCC8 @ 0x18001DCC8 (sub_18001DCC8.c)
 *     sub_18002C110 @ 0x18002C110 (sub_18002C110.c)
 *     sub_18004D714 @ 0x18004D714 (sub_18004D714.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180010A18(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits,0>(++*a2);
  --*a2;
  return result;
}
