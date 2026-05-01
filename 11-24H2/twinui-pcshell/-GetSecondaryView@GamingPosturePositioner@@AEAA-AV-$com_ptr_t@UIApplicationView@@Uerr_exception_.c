/*
 * XREFs of ?GetSecondaryView@GamingPosturePositioner@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180500560
 * Callers:
 *     ?MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180502640 (-MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18007D438 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1802CBA1C (-_Tidy@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-.c)
 *     ?GetLastViews@GamingApplicationViewCollection@@QEAA?AV?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@I@Z @ 0x180500254 (-GetLastViews@GamingApplicationViewCollection@@QEAA-AV-$vector@V-$com_ptr_t@UIApplicationView@@U.c)
 *     ?IsFullScreenWindow@GamingPosturePositioner@@AEAA_NPEAUHWND__@@@Z @ 0x180501F30 (-IsFullScreenWindow@GamingPosturePositioner@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?IsOwnedAppWindow@GamingPosturePositioner@@AEAA_NPEAUHWND__@@@Z @ 0x18050215C (-IsOwnedAppWindow@GamingPosturePositioner@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60170937@@@details@wil@@QEAA_NXZ @ 0x18050874C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60170937@@@details@wil@@QEAA_NXZ.c)
 *     ?HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18067F4F4 (-HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct IApplicationView *__fastcall GamingPosturePositioner::GetSecondaryView(
        RTL_SRWLOCK *this,
        struct IApplicationView *a2,
        __int64 (__fastcall ***a3)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  HWND WindowForView; // rax
  __int64 v7; // rdi
  struct IUnknown **Ptr; // rdi
  struct IUnknown **v9; // r12
  struct IApplicationView *v10; // rdx
  HWND v11; // rsi
  GamingPosturePositioner *v12; // rcx
  RTL_SRWLOCK v14[3]; // [rsp+28h] [rbp-18h] BYREF
  DWORD dwProcessId; // [rsp+80h] [rbp+40h] BYREF
  RTL_SRWLOCK *v16; // [rsp+88h] [rbp+48h] BYREF

  if ( !a3
    || (WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a3, a2)) == 0LL
    || (dwProcessId = 0, !GetWindowThreadProcessId(WindowForView, &dwProcessId))
    || (Microsoft::WRL::Wrappers::SRWLock::LockShared(&v16, this + 109),
        v7 = ((char *)this[107].Ptr - (char *)this[106].Ptr) >> 3,
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v16),
        !v7) )
  {
    *(_QWORD *)a2 = 0LL;
    return a2;
  }
  GamingApplicationViewCollection::GetLastViews(this + 106, v14, v7);
  Ptr = (struct IUnknown **)v14[0].Ptr;
  v9 = (struct IUnknown **)v14[1].Ptr;
  while ( 1 )
  {
    if ( Ptr == v9 )
    {
      *(_QWORD *)a2 = 0LL;
      goto LABEL_22;
    }
    if ( SHIsSameObject(*Ptr, (struct IUnknown *)a3)
      || (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_60170937>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_60170937>::GetImpl'::`2'::impl)
      && ApplicationViewHelpers::HasRootSwitchableOwner(*Ptr, v10) )
    {
      goto LABEL_18;
    }
    v11 = (HWND)ApplicationViewHelpers::GetWindowForView(
                  (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))*Ptr,
                  v10);
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_60170937>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_60170937>::GetImpl'::`2'::impl) )
      break;
    if ( v11 && GamingPosturePositioner::IsFullScreenWindow((GamingPosturePositioner *)this, v11) )
      goto LABEL_16;
LABEL_18:
    ++Ptr;
  }
  if ( !v11
    || !GamingPosturePositioner::IsFullScreenWindow((GamingPosturePositioner *)this, v11)
    || GamingPosturePositioner::IsOwnedAppWindow(v12, v11) )
  {
    goto LABEL_18;
  }
LABEL_16:
  LODWORD(v16) = 0;
  if ( !GetWindowThreadProcessId(v11, (LPDWORD)&v16) || (_DWORD)v16 != dwProcessId )
    goto LABEL_18;
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    (__int64 *)a2,
    (__int64 *)Ptr);
LABEL_22:
  std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Tidy((__int64)v14);
  return a2;
}
