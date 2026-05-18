/*
 * XREFs of sub_180011FD4 @ 0x180011FD4
 * Callers:
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_18001D800 @ 0x18001D800 (sub_18001D800.c)
 *     sub_18001D8A8 @ 0x18001D8A8 (sub_18001D8A8.c)
 *     sub_18001D9AC @ 0x18001D9AC (sub_18001D9AC.c)
 *     sub_18001DAA0 @ 0x18001DAA0 (sub_18001DAA0.c)
 *     sub_18002EE78 @ 0x18002EE78 (sub_18002EE78.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 */

__int64 __fastcall sub_180011FD4(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // rax
  __int64 result; // rax

  v3 = sub_180012170(++*a2);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(v3);
  --*a2;
  return result;
}
