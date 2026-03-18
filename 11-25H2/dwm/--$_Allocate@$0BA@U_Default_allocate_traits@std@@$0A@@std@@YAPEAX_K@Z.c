/*
 * XREFs of ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x14000EA70
 * Callers:
 *     ??$_Allocate_at_least_helper@V?$allocator@E@std@@@std@@YAPEAEAEAV?$allocator@E@0@AEA_K@Z @ 0x14000EAD4 (--$_Allocate_at_least_helper@V-$allocator@E@std@@@std@@YAPEAEAEAV-$allocator@E@0@AEA_K@Z.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_MODE_INFO@@AEAV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@0@AEA_K@Z @ 0x14000EAE4 (--$_Allocate_at_least_helper@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDISPLAYCON.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_PATH_INFO@@AEAV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@0@AEA_K@Z @ 0x14000EB14 (--$_Allocate_at_least_helper@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDISPLAYCON.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x14000EB48 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x14000EE90 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x14000599C (--2@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1400100E8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::_Allocate<16,std::_Default_allocate_traits,0>(size_t a1)
{
  void *v1; // rax
  void *v2; // rcx
  _QWORD *result; // rax

  if ( a1 >= 0x1000 )
  {
    if ( a1 + 39 < a1 )
      std::_Throw_bad_array_new_length();
    v1 = operator new(a1 + 39);
    v2 = v1;
    if ( v1 )
    {
      result = (_QWORD *)(((unsigned __int64)v1 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(result - 1) = v2;
      return result;
    }
    _o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
  }
  if ( a1 )
    return operator new(a1);
  else
    return 0LL;
}
