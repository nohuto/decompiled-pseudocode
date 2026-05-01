/*
 * XREFs of ?GetNewForegroundViewForDesktopSwitch@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@PEAPEAUIApplicationView@@PEA_N@Z @ 0x18026A090
 * Callers:
 *     ?DesktopChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1805501E0 (-DesktopChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _lambda_3d7494e9d27b7fd2e8e892ddeaab5a34_::operator() @ 0x180550028 (_lambda_3d7494e9d27b7fd2e8e892ddeaab5a34_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CVirtualDesktopForegroundPolicy::GetNewForegroundViewForDesktopSwitch(
        CVirtualDesktopForegroundPolicy *this,
        struct IVirtualDesktop *a2,
        struct IApplicationView **a3,
        bool *a4)
{
  unsigned int v7; // ebx
  __int64 (__fastcall **v8)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, struct IApplicationView **); // rbx
  int v13; // eax
  struct IApplicationView *v14; // rdx
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, __int64 *); // rbx
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // esi
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v22; // rax
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  __int64 v25; // rdx
  struct IApplicationView *v26; // rax
  struct IApplicationView *v28; // [rsp+30h] [rbp-50h] BYREF
  struct IApplicationView *v29; // [rsp+38h] [rbp-48h] BYREF
  struct IApplicationView *v30; // [rsp+40h] [rbp-40h] BYREF
  __int64 v31; // [rsp+48h] [rbp-38h] BYREF
  __int64 v32; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v33[5]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v35; // [rsp+C0h] [rbp+40h] BYREF
  struct IVirtualDesktop *v36; // [rsp+C8h] [rbp+48h] BYREF
  int v37; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v38; // [rsp+D8h] [rbp+58h] BYREF

  v36 = a2;
  *a3 = 0LL;
  *a4 = 0;
  if ( !*((_QWORD *)this + 5) )
  {
    v7 = -2147417848;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)0x80010108LL);
    return v7;
  }
  v31 = 0LL;
  v8 = *(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))a2;
  v31 = 0LL;
  v9 = (*v8)(a2, &GUID_c9be252c_e386_425e_b33c_ca422112f51f, &v31);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = 71LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_33;
  }
  v37 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v31 + 64LL))(v31, &v37);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = 73LL;
    goto LABEL_7;
  }
  if ( !v37 && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4)) )
  {
    v28 = 0LL;
    v11 = *((_QWORD *)this + 5);
    v12 = *(__int64 (__fastcall **)(__int64, struct IApplicationView **))(*(_QWORD *)v11 + 72LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
    v13 = v12(v11, &v28);
    v7 = v13;
    if ( v13 == -2147023728 )
      goto LABEL_18;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x54,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
      goto LABEL_33;
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28);
    v14 = v28;
    *a3 = v28;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, struct IVirtualDesktop *))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           v14,
           v36) )
    {
LABEL_18:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
      goto LABEL_32;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
  }
  *a4 = 1;
  v38 = 0LL;
  v15 = *((_QWORD *)this + 5);
  v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
  v17 = v16(v15, &v38);
  v7 = v17;
  if ( v17 < 0 )
  {
    v18 = 92LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)v17);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
    goto LABEL_33;
  }
  v35 = 0;
  v17 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v38 + 24LL))(v38, &v35);
  v7 = v17;
  if ( v17 < 0 )
  {
    v18 = 95LL;
    goto LABEL_17;
  }
  v30 = 0LL;
  v29 = 0LL;
  v33[0] = this;
  v33[1] = &v36;
  v33[2] = &v30;
  v33[3] = &v29;
  v19 = 0;
  if ( !v35 )
    goto LABEL_30;
  do
  {
    v32 = 0LL;
    v20 = v38;
    v21 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v38 + 32LL);
    v22 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v32);
    v23 = v21(v20, v19, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v22);
    v24 = retaddr;
    if ( v23 >= 0 )
    {
      v23 = lambda_3d7494e9d27b7fd2e8e892ddeaab5a34_::operator()(v33, v32);
      v24 = retaddr;
      if ( v23 >= 0 )
        goto LABEL_27;
      v25 = 138LL;
    }
    else
    {
      v25 = 136LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v24,
      (void *)v25,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)v23);
LABEL_27:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
    ++v19;
  }
  while ( v19 < v35 );
  if ( v29 )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v29);
    v26 = v29;
    goto LABEL_31;
  }
LABEL_30:
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v30);
  v26 = v30;
LABEL_31:
  *a3 = v26;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
LABEL_32:
  v7 = 0;
LABEL_33:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v31);
  return v7;
}
