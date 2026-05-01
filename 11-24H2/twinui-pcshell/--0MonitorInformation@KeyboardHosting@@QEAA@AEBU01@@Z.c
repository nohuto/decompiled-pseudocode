/*
 * XREFs of ??0MonitorInformation@KeyboardHosting@@QEAA@AEBU01@@Z @ 0x180479DCC
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18007EBC8 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x1802553FC (-GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Window.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180255CA0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x1804872D4 (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x18047A5A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 */

KeyboardHosting::MonitorInformation *__fastcall KeyboardHosting::MonitorInformation::MonitorInformation(
        KeyboardHosting::MonitorInformation *this,
        const struct KeyboardHosting::MonitorInformation *a2)
{
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = 0LL;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *((_DWORD *)this + 10) = 100;
  *(_OWORD *)((char *)this + 44) = 0LL;
  *(_OWORD *)((char *)this + 60) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 100;
  *(_OWORD *)((char *)this + 100) = 0LL;
  *(_OWORD *)((char *)this + 116) = 0LL;
  *(_OWORD *)((char *)this + 132) = 0LL;
  *(_OWORD *)((char *)this + 148) = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockShared(&v5, (RTL_SRWLOCK *)a2 + 10);
    *((_QWORD *)this + 11) = *((_QWORD *)a2 + 11);
    *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
    *(_OWORD *)((char *)this + 100) = *(_OWORD *)((char *)a2 + 100);
    *(_OWORD *)((char *)this + 116) = *(_OWORD *)((char *)a2 + 116);
    *(_OWORD *)((char *)this + 132) = *(_OWORD *)((char *)a2 + 132);
    *(_OWORD *)((char *)this + 148) = *(_OWORD *)((char *)a2 + 148);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v5);
  }
  else
  {
    *(_QWORD *)this = *(_QWORD *)a2;
    *(_OWORD *)((char *)this + 8) = *(_OWORD *)((char *)a2 + 8);
    *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
    *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
    *(_OWORD *)((char *)this + 44) = *(_OWORD *)((char *)a2 + 44);
    *(_OWORD *)((char *)this + 60) = *(_OWORD *)((char *)a2 + 60);
  }
  return this;
}
