/*
 * XREFs of sub_18001093C @ 0x18001093C
 * Callers:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 * Callees:
 *     sub_1800119FC @ 0x1800119FC (sub_1800119FC.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 */

unsigned __int64 __fastcall sub_18001093C(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 result; // rax

  if ( a1 + 39 < a1 )
    sub_1800119FC();
  v1 = sub_18001B098(a1 + 39);
  v2 = v1;
  if ( !v1 )
  {
    o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
    JUMPOUT(0x18001097ELL);
  }
  result = (v1 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(result - 8) = v2;
  return result;
}
