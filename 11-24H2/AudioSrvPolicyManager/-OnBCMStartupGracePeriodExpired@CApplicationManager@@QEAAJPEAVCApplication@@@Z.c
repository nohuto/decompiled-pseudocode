/*
 * XREFs of ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z @ 0x18003835C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_e5b57c815c7e6daab9defd929b9a5039__void_::_Do_call @ 0x1800351A0 (std--_Func_impl_no_alloc__lambda_e5b57c815c7e6daab9defd929b9a5039__void_--_Do_call.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18000C910 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18001F420 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     WPP_SF_S @ 0x18002F290 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnBCMStartupGracePeriodExpired(
        struct _RTL_CRITICAL_SECTION *this,
        struct CApplication *a2)
{
  CApplicationManager *v3; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = this;
  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v6 = v4;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x35u,
      &WPP_8d4f0c2ae8213c98c7518ad68b13e68c_Traceguids,
      *((const wchar_t **)a2 + 3));
  }
  CApplication::CleanupBCMStartupLatencyGracePeriod((struct _RTL_CRITICAL_SECTION *)a2);
  CApplicationManager::ApplyPBMPolicy(v3, a2, 0xD1u, 0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v6);
  return 0LL;
}
