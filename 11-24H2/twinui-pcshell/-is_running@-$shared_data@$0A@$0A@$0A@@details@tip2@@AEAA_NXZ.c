/*
 * XREFs of ?is_running@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x180294BC0
 * Callers:
 *     ?v_DismissView@XamlAltTabViewHost@@MEAAXXZ @ 0x18011B160 (-v_DismissView@XamlAltTabViewHost@@MEAAXXZ.c)
 *     ?v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ @ 0x180222CE0 (-v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEBA_NXZ @ 0x180294B9C (--B-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@.c)
 *     ?v_DismissView@XamlGamingTaskViewHost@@MEAAXXZ @ 0x1806A2EF0 (-v_DismissView@XamlGamingTaskViewHost@@MEAAXXZ.c)
 *     ?v_DismissView@TaskViewHost@@MEAAXXZ @ 0x1806A6290 (-v_DismissView@TaskViewHost@@MEAAXXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180187DA4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 */

char __fastcall tip2::details::shared_data<0,0,0>::is_running(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  bool v3; // zf
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
  v3 = *(_QWORD *)(a1 + 240) == 0LL;
  v5 = v1;
  if ( v3 || (*(_DWORD *)(a1 + 64) & 0x100) != 0 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v5);
    return 0;
  }
  else
  {
    if ( v1 )
      LeaveCriticalSection(v1);
    return 1;
  }
}
