/*
 * XREFs of ?ProviderFinalRelease@CVolumeHardware@@UEAAXXZ @ 0x180114C10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 *     ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x1801146AC (-LogBurst@VolumeHardwareLogger@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVolumeHardware::ProviderFinalRelease(CVolumeHardware *this)
{
  char *v1; // rbx
  struct _TP_TIMER *v3; // rcx
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 296;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 296));
  v3 = (struct _TP_TIMER *)*((_QWORD *)v1 + 6);
  v4 = (struct _RTL_CRITICAL_SECTION *)v1;
  v1[56] = 1;
  SetThreadpoolTimer(v3, 0LL, 0, 0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v4);
  WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)v1 + 6), 1);
  CloseThreadpoolTimer(*((PTP_TIMER *)v1 + 6));
  VolumeHardwareLogger::LogBurst((struct _RTL_CRITICAL_SECTION *)v1);
  *((_QWORD *)v1 + 8) = 0LL;
  if ( *((_QWORD *)this + 31) && *((_DWORD *)this + 70) )
  {
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Bu,
        (__int64)&WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids,
        this);
    }
    (*(void (__fastcall **)(_QWORD, CVolumeHardware *))(**((_QWORD **)this + 31) + 120LL))(*((_QWORD *)this + 31), this);
    *((_DWORD *)this + 70) = 0;
  }
  ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 31);
}
