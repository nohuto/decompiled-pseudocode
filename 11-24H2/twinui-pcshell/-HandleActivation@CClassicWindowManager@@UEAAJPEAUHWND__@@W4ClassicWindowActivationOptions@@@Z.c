/*
 * XREFs of ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z @ 0x180286950
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18003B754 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180041470 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180041D50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@.c)
 *     ?_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ @ 0x1801ECBEC (-_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802875C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4Report.c)
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@V?$optional@UHandleActivationHints@CClassicWindowManager@@@std@@@Z @ 0x18028796C (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@V-$optional@UHandleActivationHints@CC.c)
 *     ??1?$optional@UHandleActivationHints@CClassicWindowManager@@@std@@QEAA@XZ @ 0x1802946D4 (--1-$optional@UHandleActivationHints@CClassicWindowManager@@@std@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1802C1D38 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall CClassicWindowManager::HandleActivation(__int64 a1, HWND a2, char a3)
{
  HWND v4; // r12
  CClassicWindowManager *v6; // rdi
  struct _RTL_CRITICAL_SECTION *v7; // r13
  unsigned __int64 v8; // rsi
  int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rbx
  int v14; // r12d
  __int64 v15; // rcx
  bool v16; // zf
  int v17; // eax
  int (__fastcall ***v18)(_QWORD, GUID *, volatile signed __int32 **); // rcx
  __int64 v19; // rax
  __int64 v20; // rdi
  void (__fastcall *v21)(__int64, HWND, GUID *, GUID *, __int64 *); // rbx
  __int64 v22; // rdi
  volatile signed __int32 *v23; // rax
  volatile signed __int32 *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v28; // [rsp+38h] [rbp-59h] BYREF
  __int64 v29; // [rsp+40h] [rbp-51h] BYREF
  __int64 v30; // [rsp+48h] [rbp-49h]
  char v31; // [rsp+50h] [rbp-41h]
  __int64 v32; // [rsp+58h] [rbp-39h]
  __int64 v33; // [rsp+60h] [rbp-31h] BYREF
  __int64 v34; // [rsp+68h] [rbp-29h]
  char v35; // [rsp+70h] [rbp-21h]
  CClassicWindowManager *v36; // [rsp+78h] [rbp-19h]
  __int64 v37[3]; // [rsp+80h] [rbp-11h] BYREF
  int v38; // [rsp+98h] [rbp+7h]
  __int64 v39; // [rsp+A0h] [rbp+Fh]
  __int64 v40; // [rsp+A8h] [rbp+17h]
  volatile signed __int32 *v43; // [rsp+110h] [rbp+7Fh] BYREF

  v4 = a2;
  v6 = (CClassicWindowManager *)(a1 - 72);
  v36 = (CClassicWindowManager *)(a1 - 72);
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 64) & -(__int64)(a1 != 72));
  v37[2] = (__int64)v7;
  v38 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  v8 = 0LL;
  v35 = 0;
  v9 = 0;
  LOBYTE(v10) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
    v10);
  if ( (a3 & 1) == 0 || GetShellWindow() == v4 )
    goto LABEL_37;
  v43 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v43);
  v43 = 0LL;
  v11 = a1 + 112;
  v32 = a1 + 112;
  v39 = 0LL;
  v12 = 0LL;
  while ( v8 < *(_QWORD *)(v11 + 16) )
  {
    v40 = 0LL;
    v13 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8 * v8);
    v37[0] = v13;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v28 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v13)(
           v13,
           &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
           &v28) >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v28 + 192LL))(v28, v4) )
    {
      v14 = 0;
    }
    else
    {
      v14 = -1;
    }
    v15 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v11 = v32;
    v16 = v14 == 0;
    v4 = a2;
    if ( v16 )
    {
      v12 = v8;
      v17 = 0;
      goto LABEL_17;
    }
    ++v8;
  }
  v17 = -2147319765;
LABEL_17:
  if ( v17 < 0
    || (v18 = *(int (__fastcall ****)(_QWORD, GUID *, volatile signed __int32 **))(*(_QWORD *)(v11 + 8) + 8 * v12),
        (**v18)(v18, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v43) < 0) )
  {
    v28 = 0LL;
    if ( (a3 & 3) == 3 && (int)CClassicWindowManager::_EnsureMonitorManager(v36) >= 0 )
    {
      v20 = *(_QWORD *)(a1 + 200);
      v21 = *(void (__fastcall **)(__int64, HWND, GUID *, GUID *, __int64 *))(*(_QWORD *)v20 + 88LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
      v21(v20, v4, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v28);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v43);
    v22 = v28;
    v43 = 0LL;
    v23 = (volatile signed __int32 *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    v24 = v23;
    if ( v23 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>((__int64)v23);
      *(_QWORD *)v24 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IClassicWindow>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *(_QWORD *)v24 = &CClassicWindow::`vftable';
      *((_QWORD *)v24 + 2) = v4;
      *((_QWORD *)v24 + 3) = v22;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v24 + 3);
      *((_QWORD *)v24 + 5) = 0LL;
      *((_QWORD *)v24 + 6) = 0LL;
      *((_QWORD *)v24 + 7) = 0LL;
      *((_QWORD *)v24 + 8) = 0LL;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v24 + 8);
      *((_QWORD *)v24 + 9) = 0LL;
      *((_QWORD *)v24 + 10) = 0LL;
      *((_QWORD *)v24 + 4) = 0LL;
      v43 = v24;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release(v24);
      v9 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)v32 + 8LL))(v32, &v43);
    }
    else
    {
      v9 = -2147024882;
    }
    v25 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
  }
  else
  {
    v19 = (__int64)v43;
    v43 = 0LL;
    v37[1] = v12;
    v29 = v19;
    v37[0] = 0LL;
    v30 = v12;
    v31 = 1;
    if ( v35 )
    {
      Microsoft::WRL::ComPtr<IClassicWindow>::operator=(&v33, &v29);
      v34 = v30;
    }
    else
    {
      v33 = v19;
      v29 = 0LL;
      v34 = v12;
      v35 = 1;
    }
    std::optional<CClassicWindowManager::HandleActivationHints>::~optional<CClassicWindowManager::HandleActivationHints>(&v29);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v37);
  }
  v26 = (__int64)v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  if ( v9 >= 0 )
  {
    v6 = v36;
LABEL_37:
    v31 = 0;
    if ( v35 )
    {
      v29 = v33;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v29);
      v30 = v34;
      v31 = 1;
    }
    v9 = CClassicWindowManager::_HandleActivation(v6, v4, &v29);
  }
  if ( v35 )
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
  if ( v38 >= 0 )
    LeaveCriticalSection(v7);
  return (unsigned int)v9;
}
