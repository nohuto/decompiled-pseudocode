/*
 * XREFs of ?OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ @ 0x1800A3B70
 * Callers:
 *     ?InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A345C (-InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerChangedEventArgs___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs_____::_)(Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerChangedEventArgs____Microsoft::WRL::FtmBase___lambda_b46eae7c97fd0c0221a3f2c2069b78bc___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs___::Invoke @ 0x1800A37E0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800A37E0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x1800153E0 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800759E4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$get_range_nothrow@PEAVDisplayTarget@Core@Display@Devices@Windows@@@wil@@YA?AV?$vector_range_nothrow@U?$IVectorView@PEAVDisplayTarget@Core@Display@Devices@Windows@@@Collections@Foundation@Windows@@@0@PEAU?$IVectorView@PEAVDisplayTarget@Core@Display@Devices@Windows@@@Collections@Foundation@Windows@@PEAJ@Z @ 0x1800A2CC0 (--$get_range_nothrow@PEAVDisplayTarget@Core@Display@Devices@Windows@@@wil@@YA-AV-$vector_range_n.c)
 *     _lambda_5d2a0d57000e9a8e56f274d64107aadc_::operator() @ 0x1800A2E38 (_lambda_5d2a0d57000e9a8e56f274d64107aadc_--operator().c)
 *     ?IsEnabled@UDwmTrace@@SA_NE_K@Z @ 0x1800A394C (-IsEnabled@UDwmTrace@@SA_NE_K@Z.c)
 *     ?IsVirtualMonitorsInstalled@CAnalogCompositorManager@@SA_NXZ @ 0x1800A3970 (-IsVirtualMonitorsInstalled@CAnalogCompositorManager@@SA_NXZ.c)
 *     ?UDwmCreatingVirtualMonitor_@UDwmTrace@@QEAAXXZ @ 0x1800A42AC (-UDwmCreatingVirtualMonitor_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmRemovingVirtualMonitor_@UDwmTrace@@QEAAXXZ @ 0x1800A4450 (-UDwmRemovingVirtualMonitor_@UDwmTrace@@QEAAXXZ.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A44DC (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get_at_current@?$vector_range_nothrow@U?$IVectorView@PEAVDisplayTarget@Core@Display@Devices@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x1800A4550 (-get_at_current@-$vector_range_nothrow@U-$IVectorView@PEAVDisplayTarget@Core@Display@Devices@Win.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAnalogCompositorManager::OnMonitorChangedNotification(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // r14
  int VirtualMonitorManager; // eax
  int v4; // ebx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  RTL_SRWLOCK *v7; // r15
  PVOID Ptr; // rdi
  __int64 (__fastcall *v9)(PVOID, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // ebx
  int v13; // edi
  __int64 v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // rcx
  UDwmTrace *v17; // rcx
  __int64 v19; // rcx
  UDwmTrace *v20; // rcx
  int v21; // eax
  int v22; // [rsp+20h] [rbp-49h]
  RTL_SRWLOCK *v23; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v24[2]; // [rsp+58h] [rbp-11h] BYREF
  char v25[8]; // [rsp+68h] [rbp-1h] BYREF
  int v26; // [rsp+70h] [rbp+7h]
  int *v27; // [rsp+78h] [rbp+Fh]
  __int64 v28[7]; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  char v30; // [rsp+D8h] [rbp+6Fh] BYREF
  int v31; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v32; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( CAnalogCompositorManager::IsVirtualMonitorsInstalled() )
  {
    AcquireSRWLockExclusive(this + 18);
    v23 = this + 18;
    v2 = this + 15;
    if ( !this[15].Ptr )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&this[15]);
      VirtualMonitorManager = CreateVirtualMonitorManager(&this[15]);
      v4 = VirtualMonitorManager;
      if ( VirtualMonitorManager < 0 )
      {
        v5 = (unsigned int)VirtualMonitorManager;
        v6 = 315LL;
        goto LABEL_10;
      }
    }
    v7 = this + 16;
    if ( !this[16].Ptr )
    {
      v4 = (*(__int64 (__fastcall **)(PVOID, RTL_SRWLOCK *, _QWORD, _QWORD))(*(_QWORD *)v2->Ptr + 24LL))(
             v2->Ptr,
             this + 16,
             0LL,
             0LL);
      if ( v4 < 0 )
      {
        if ( v4 == -2147024891 )
        {
          v4 = -2147024891;
LABEL_28:
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v23);
          return (unsigned int)v4;
        }
        v5 = (unsigned int)v4;
        v6 = 323LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v6,
          (__int64)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
          (const char *)v5);
        goto LABEL_28;
      }
    }
    v32 = 0LL;
    Ptr = this[10].Ptr;
    v9 = *(__int64 (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)Ptr + 48LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
    v10 = v9(Ptr, &v32);
    v4 = v10;
    if ( v10 < 0 )
    {
      v11 = 327LL;
LABEL_26:
      v15 = (unsigned int)v10;
      goto LABEL_27;
    }
    v31 = 0;
    v30 = 0;
    wil::get_range_nothrow<Windows::Devices::Display::Core::DisplayTarget *>((__int64)v25, v32, (__int64)&v31);
    wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Devices::Display::Core::DisplayTarget *>>::get_at_current(
      v25,
      0LL);
    v12 = 0;
    v13 = v26;
    while ( *v27 >= 0 )
    {
      if ( v12 == v13 )
        break;
      v24[0] = v28;
      v24[1] = (__int64 *)&v30;
      lambda_5d2a0d57000e9a8e56f274d64107aadc_::operator()(v24);
      if ( v30 )
        break;
      wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Devices::Display::Core::DisplayTarget *>>::get_at_current(
        v25,
        (unsigned int)++v12);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v28);
    v4 = v31;
    if ( v31 < 0 )
    {
      v15 = (unsigned int)v31;
      v11 = 376LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)v15);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
      goto LABEL_28;
    }
    if ( v30 )
    {
      if ( BYTE4(this[17].Ptr) )
      {
        if ( UDwmTrace::IsEnabled(v14) )
        {
          wil::details::static_lazy<UDwmTrace>::get(
            v19,
            (void (__cdecl *)())_lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_);
          UDwmTrace::UDwmRemovingVirtualMonitor_(v20);
        }
        v21 = (*(__int64 (__fastcall **)(PVOID, PVOID, _QWORD))(*(_QWORD *)v2->Ptr + 56LL))(
                v2->Ptr,
                v7->Ptr,
                LODWORD(this[17].Ptr));
        if ( v21 < 0 )
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x18D,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
            (const char *)(unsigned int)v21,
            v22);
        BYTE4(this[17].Ptr) = 0;
      }
    }
    else if ( !BYTE4(this[17].Ptr) )
    {
      if ( UDwmTrace::IsEnabled(v14) )
      {
        wil::details::static_lazy<UDwmTrace>::get(
          v16,
          (void (__cdecl *)())_lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_);
        UDwmTrace::UDwmCreatingVirtualMonitor_(v17);
      }
      v10 = (*(__int64 (__fastcall **)(PVOID, PVOID, RTL_SRWLOCK *, __int64, int, int, int, int, _QWORD))(*(_QWORD *)v2->Ptr + 40LL))(
              v2->Ptr,
              v7->Ptr,
              this + 17,
              1280LL,
              720,
              100,
              90,
              1,
              0LL);
      v4 = v10;
      if ( v10 < 0 )
      {
        v11 = 390LL;
        goto LABEL_26;
      }
      BYTE4(this[17].Ptr) = 1;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v23);
  }
  return 0LL;
}
