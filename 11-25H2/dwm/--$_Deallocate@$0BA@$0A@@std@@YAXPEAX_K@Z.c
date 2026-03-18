/*
 * XREFs of ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x14000EE04
 * Callers:
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x14000EE90 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ?_Deallocate_for_capacity@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXAEAV?$allocator@G@2@QEAG_K@Z @ 0x140010098 (-_Deallocate_for_capacity@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXAEAV-$.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x140010154 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAXXZ @ 0x14001018C (-_Tidy@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEA.c)
 *     ?_Tidy@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAXXZ @ 0x1400101C8 (-_Tidy@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEA.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Deallocate<16,0>(char *a1, unsigned __int64 a2)
{
  char *v2; // r8
  unsigned __int64 v3; // rdx
  char *v4; // rcx

  if ( a2 >= 0x1000 )
  {
    v2 = (char *)*((_QWORD *)a1 - 1);
    v3 = a2 + 39;
    v4 = (char *)(a1 - v2);
    if ( (unsigned __int64)(v4 - 8) > 0x1F )
    {
      _o__invalid_parameter_noinfo_noreturn(v4, v3);
      __debugbreak();
      JUMPOUT(0x14000EE3FLL);
    }
    a1 = v2;
  }
  operator delete(a1);
}
