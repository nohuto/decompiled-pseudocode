/*
 * XREFs of ??0CallWithHangTimeout@@QEAA@W4TimeoutDuration@0@@Z @ 0x18000A760
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x18000AED0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x1800026B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180002718 (_Init_thread_header.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000D004 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2@@@details@wil@@QEAA_NXZ @ 0x18000D040 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2@@@det.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2@@@details@wil@@QEAA_NXZ @ 0x18000D0E0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$00@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18000D2C0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$_ea_18000D2C0.c)
 */

_DWORD *__fastcall CallWithHangTimeout::CallWithHangTimeout(_DWORD *a1, unsigned int a2)
{
  __int64 v3; // rdi
  PTP_TIMER ThreadpoolTimer; // rax
  void *v5; // rdx
  unsigned int v6; // r8d
  const char *v7; // r9
  struct _TP_TIMER *v8; // rcx
  __int64 v9; // rax
  bool v11; // al
  LSTATUS ValueW; // eax
  bool v13; // sf
  __int64 v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+8h] BYREF
  unsigned int pvData; // [rsp+58h] [rbp+10h] BYREF

  pvData = a2;
  *(_QWORD *)a1 = 0LL;
  a1[2] = GetCurrentThreadId();
  a1[3] = GetCurrentProcessId();
  *((_QWORD *)a1 + 2) = 0LL;
  a1[6] = 0;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionOnLogonUICallouts2>::GetImpl'::`2'::impl) )
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::GetImpl'::`2'::impl);
  if ( !IsDebuggerPresent() )
  {
    v3 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
    if ( __TSS0__1___0CallWithHangTimeout__QEAA_W4TimeoutDuration_1__Z_4HA > *(_DWORD *)(v3 + 4) )
    {
      Init_thread_header(&__TSS0__1___0CallWithHangTimeout__QEAA_W4TimeoutDuration_1__Z_4HA);
      if ( __TSS0__1___0CallWithHangTimeout__QEAA_W4TimeoutDuration_1__Z_4HA == -1 )
      {
        v11 = (NtCurrentPeb()->NtGlobalFlag & 0x100) != 0 && GetModuleHandleW(L"verifier.dll");
        `CallWithHangTimeout::CallWithHangTimeout'::`2'::s_isAppVerifierEnabled = v11;
        Init_thread_footer(&__TSS0__1___0CallWithHangTimeout__QEAA_W4TimeoutDuration_1__Z_4HA);
      }
    }
    if ( __TSS1__1___0CallWithHangTimeout__QEAA_W4TimeoutDuration_1__Z_4HA > *(_DWORD *)(v3 + 4) )
    {
      Init_thread_header(&__TSS1__1___0CallWithHangTimeout__QEAA_W4TimeoutDuration_1__Z_4HA);
      if ( __TSS1__1___0CallWithHangTimeout__QEAA_W4TimeoutDuration_1__Z_4HA == -1 )
      {
        pvData = 0;
        pftDueTime.dwLowDateTime = 4;
        ValueW = RegGetValueW(
                   HKEY_LOCAL_MACHINE,
                   L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon",
                   L"BaseHangTimeoutOverrideMs",
                   0x10u,
                   0LL,
                   &pvData,
                   (LPDWORD)&pftDueTime);
        v13 = ValueW < 0;
        if ( ValueW > 0 )
          v13 = 1;
        if ( v13 || pvData - 5000 > 0xF2EB8 )
          v14 = 0LL;
        else
          v14 = pvData;
        `CallWithHangTimeout::CallWithHangTimeout'::`2'::s_timeoutOverride = 10000 * v14;
        Init_thread_footer(&__TSS1__1___0CallWithHangTimeout__QEAA_W4TimeoutDuration_1__Z_4HA);
      }
    }
    ThreadpoolTimer = CreateThreadpoolTimer(
                        (PTP_TIMER_CALLBACK)_lambda_fe166ee785c77a0b82d43104ca244eaa_::_lambda_invoker_cdecl_,
                        a1,
                        0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,1>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      a1,
      ThreadpoolTimer);
    if ( !*(_QWORD *)a1 )
      wil::details::in1diag3::_Log_NullAlloc(retaddr, v5, v6, v7);
    v8 = *(struct _TP_TIMER **)a1;
    if ( *(_QWORD *)a1 )
    {
      v9 = `CallWithHangTimeout::CallWithHangTimeout'::`2'::s_timeoutOverride;
      if ( !`CallWithHangTimeout::CallWithHangTimeout'::`2'::s_timeoutOverride )
      {
        v9 = 300000000LL;
        if ( `CallWithHangTimeout::CallWithHangTimeout'::`2'::s_isAppVerifierEnabled )
          v9 = 1200000000LL;
      }
      pftDueTime = (struct _FILETIME)-v9;
      SetThreadpoolTimer(v8, &pftDueTime, 0, 0x3E8u);
    }
  }
  return a1;
}
