/*
 * XREFs of sub_180010A3C @ 0x180010A3C
 * Callers:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 * Callees:
 *     sub_180011AFC @ 0x180011AFC (sub_180011AFC.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 */

unsigned __int64 __fastcall sub_180010A3C(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 result; // rax

  if ( a1 + 39 < a1 )
    sub_180011AFC();
  v1 = sub_18001B1F8(a1 + 39);
  v2 = v1;
  if ( !v1 )
  {
    o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
    JUMPOUT(0x180010A7ELL);
  }
  result = (v1 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(result - 8) = v2;
  return result;
}
