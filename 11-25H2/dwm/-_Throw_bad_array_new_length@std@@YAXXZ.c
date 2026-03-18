/*
 * XREFs of ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1400100E8
 * Callers:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x14000EA70 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_MODE_INFO@@AEAV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@0@AEA_K@Z @ 0x14000EAE4 (--$_Allocate_at_least_helper@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDISPLAYCON.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_PATH_INFO@@AEAV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@0@AEA_K@Z @ 0x14000EB14 (--$_Allocate_at_least_helper@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDISPLAYCON.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x14000EB48 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x14000EE90 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140011010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __noreturn std::_Throw_bad_array_new_length(void)
{
  void **v0; // rdx
  _QWORD v1[3]; // [rsp+30h] [rbp-18h] BYREF

  v1[1] = "bad array new length";
  v0 = &stdext::bad_array_new_length::`vftable';
  v1[0] = &stdext::bad_array_new_length::`vftable';
  if ( std::_Raise_handler )
  {
    std::_Raise_handler((const struct stdext::exception *)v1);
    v0 = (void **)v1[0];
  }
  ((void (__fastcall *)(_QWORD *))v0[2])(v1);
  _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
}
