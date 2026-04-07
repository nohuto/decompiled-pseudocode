/*
 * XREFs of ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18009542C
 * Callers:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039930 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180095314 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

unsigned __int64 __fastcall std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(
        unsigned __int64 a1,
        const struct std::nothrow_t *a2)
{
  void *v2; // rax
  void *v3; // rcx
  unsigned __int64 result; // rax

  if ( a1 + 39 < a1 )
    std::_Throw_bad_array_new_length();
  v2 = operator new[](a1 + 39, a2);
  v3 = v2;
  if ( !v2 )
  {
    _o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
    JUMPOUT(0x18009546ELL);
  }
  result = ((unsigned __int64)v2 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(result - 8) = v3;
  return result;
}
