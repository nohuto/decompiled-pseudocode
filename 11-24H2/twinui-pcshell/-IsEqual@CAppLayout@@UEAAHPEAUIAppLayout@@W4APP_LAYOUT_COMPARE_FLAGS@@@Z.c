/*
 * XREFs of ?IsEqual@CAppLayout@@UEAAHPEAUIAppLayout@@W4APP_LAYOUT_COMPARE_FLAGS@@@Z @ 0x1806C44D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIAppLayoutInternal@@U?$ChainInterfaces@UIAppLayoutBuilder@@UIAppLayout@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIAppLayoutInternal@@U?$ChainInterfaces@UIAppLayoutBuilder@@UIAppLayout@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801CA970 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFt_ea_1801CA970.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?AreLayoutEnvEqual@ImmersiveApplicationLayout@@YA_NPEBULAYOUT_ENVIRONMENT_DETAILS@@0@Z @ 0x18067EE38 (-AreLayoutEnvEqual@ImmersiveApplicationLayout@@YA_NPEBULAYOUT_ENVIRONMENT_DETAILS@@0@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1806C3548 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::IsEqual(__int64 a1, int (__fastcall ***a2)(_QWORD, GUID *, __int64 *), char a3)
{
  unsigned int v6; // edi
  int (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v8; // rax
  int (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v10; // rax
  RTL_SRWLOCK *v11; // rax
  RTL_SRWLOCK *v12; // rax
  const struct LAYOUT_ENVIRONMENT_DETAILS *v13; // r8
  unsigned __int64 v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rcx
  int v17; // r12d
  __int64 v18; // rbx
  int (__fastcall *v19)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, GUID *, __int64 *); // rbx
  __int64 *v22; // rax
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, GUID *, __int64 *); // rdi
  __int64 *v28; // rax
  unsigned __int64 v29; // r15
  unsigned __int64 i; // rsi
  __int64 v31; // rbx
  int (__fastcall *v32)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 v33; // rcx
  struct IUnknown *v35; // [rsp+30h] [rbp-39h] BYREF
  __int64 v36; // [rsp+38h] [rbp-31h] BYREF
  __int64 v37; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v39; // [rsp+50h] [rbp-19h] BYREF
  struct IUnknown *v40; // [rsp+58h] [rbp-11h] BYREF
  RTL_SRWLOCK *v41; // [rsp+60h] [rbp-9h] BYREF
  RTL_SRWLOCK *v42; // [rsp+68h] [rbp-1h] BYREF
  RECT v43[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v44; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v6 = 0;
  v36 = 0LL;
  v7 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v36);
  if ( v7(a2, &GUID_1ef1ecfa_786a_4d06_b024_4a61c7049b29, &v36) >= 0 )
  {
    v42 = 0LL;
    v41 = 0LL;
    v39 = 0LL;
    v38 = 0LL;
    v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v39);
    if ( (int)Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IAppLayoutInternal,Microsoft::WRL::ChainInterfaces<IAppLayoutBuilder,IAppLayout,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>>(
                a1 - 40,
                &GUID_00000000_0000_0000_c000_000000000046,
                v8) < 0 )
      goto LABEL_37;
    v9 = **a2;
    v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v38);
    if ( v9(a2, &GUID_00000000_0000_0000_c000_000000000046, v10) < 0 )
      goto LABEL_37;
    if ( v38 > v39 )
    {
      v12 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 56LL))(v36);
      Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)&v35, v12);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::operator=(
        &v41,
        (RTL_SRWLOCK **)&v35);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v35);
      Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)&v35, (RTL_SRWLOCK *)(a1 + 16));
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::operator=(
        &v42,
        (RTL_SRWLOCK **)&v35);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v35);
    }
    else
    {
      Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)&v35, (RTL_SRWLOCK *)(a1 + 16));
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::operator=(
        &v42,
        (RTL_SRWLOCK **)&v35);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v35);
      if ( v38 != v39 )
      {
        v11 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 56LL))(v36);
        Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)&v35, v11);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::operator=(
          &v41,
          (RTL_SRWLOCK **)&v35);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v35);
      }
    }
    memset(v43, 0, sizeof(v43));
    v44 = 0LL;
    (*(void (__fastcall **)(__int64, RECT *))(*(_QWORD *)v36 + 24LL))(v36, v43);
    if ( (a3 & 1) == 0 || ImmersiveApplicationLayout::AreLayoutEnvEqual((const RECT *)(a1 + 24), v43, v13) )
    {
      v6 = 1;
      if ( (a3 & 4) != 0 )
      {
        v14 = *(_QWORD *)(a1 + 72);
        if ( v14 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36) )
        {
          v15 = 0LL;
          if ( v14 )
          {
            while ( 1 )
            {
              if ( !v6 )
                goto LABEL_37;
              v16 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v15);
              v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
              v37 = 0LL;
              v18 = v36;
              v19 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v36 + 40LL);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
              if ( v19(v18, (unsigned int)v15, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v37) < 0
                || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v37 + 24LL))(v37) != v17 )
              {
                v6 = 0;
                goto LABEL_25;
              }
              v6 = 1;
              if ( v17 == 1 )
                break;
LABEL_25:
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
              if ( ++v15 >= v14 )
                goto LABEL_37;
            }
            v35 = 0LL;
            v40 = 0LL;
            v20 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v15);
            v21 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v20 + 48LL);
            v22 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v35);
            v23 = v21(v20, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v22);
            v24 = retaddr;
            if ( v23 >= 0 )
            {
              v26 = v37;
              v27 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v37 + 48LL);
              v28 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v40);
              v23 = v27(v26, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v28);
              v24 = retaddr;
              if ( v23 >= 0 )
              {
                v6 = SHIsSameObject(v35, v40);
                goto LABEL_23;
              }
              v25 = 788LL;
            }
            else
            {
              v25 = 787LL;
            }
            wil::details::in1diag3::_Log_Hr(
              v24,
              (void *)v25,
              (int)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
              (const char *)(unsigned int)v23);
            v6 = 0;
LABEL_23:
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v40);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v35);
            goto LABEL_25;
          }
          goto LABEL_37;
        }
      }
      else
      {
        if ( (a3 & 2) == 0 )
        {
LABEL_37:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v39);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v41);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v42);
          goto LABEL_38;
        }
        v29 = *(_QWORD *)(a1 + 72);
        if ( v29 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36) )
        {
          for ( i = 0LL; i < v29; ++i )
          {
            if ( !v6 )
              break;
            v37 = 0LL;
            v31 = v36;
            v32 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v36 + 40LL);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
            if ( v32(v31, (unsigned int)i, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v37) < 0 )
            {
              v6 = 0;
            }
            else
            {
              v33 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * i);
              v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 96LL))(v33, v37);
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
          }
          goto LABEL_37;
        }
      }
    }
    v6 = 0;
    goto LABEL_37;
  }
LABEL_38:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v36);
  return v6;
}
