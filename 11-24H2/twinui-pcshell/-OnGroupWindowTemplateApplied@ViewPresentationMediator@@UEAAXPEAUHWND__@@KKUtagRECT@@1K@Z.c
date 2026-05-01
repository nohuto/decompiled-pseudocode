/*
 * XREFs of ?OnGroupWindowTemplateApplied@ViewPresentationMediator@@UEAAXPEAUHWND__@@KKUtagRECT@@1K@Z @ 0x180224FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1800C9598 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V?$ComPtr@UIWindowManagementWindowGroupingEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1802A529C (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V-$C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall ViewPresentationMediator::OnGroupWindowTemplateApplied(
        ViewPresentationMediator *this,
        HWND a2,
        unsigned int a3,
        unsigned int a4,
        struct tagRECT *a5,
        struct tagRECT *a6,
        unsigned int a7)
{
  RTL_SRWLOCK *v10; // rbx
  struct IObjectArray *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  struct tagRECT *v14; // rsi
  struct tagRECT *v15; // r14
  __int64 *v16; // rbx
  __int64 v17; // rax
  struct IObjectArray *v18; // rcx
  __int64 *v19; // [rsp+48h] [rbp-51h] BYREF
  struct IObjectArray *v20; // [rsp+50h] [rbp-49h] BYREF
  _DWORD v21[4]; // [rsp+58h] [rbp-41h] BYREF
  struct tagRECT v22; // [rsp+68h] [rbp-31h] BYREF
  struct tagRECT v23; // [rsp+78h] [rbp-21h] BYREF
  int v24; // [rsp+88h] [rbp-11h] BYREF
  __int64 *v25; // [rsp+90h] [rbp-9h] BYREF
  struct IObjectArray **v26; // [rsp+98h] [rbp-1h]
  int v27; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+Fh] BYREF
  struct IObjectArray **v29; // [rsp+B0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+47h]
  struct IObjectArray *v31; // [rsp+E8h] [rbp+4Fh] BYREF

  v31 = 0LL;
  v10 = (RTL_SRWLOCK *)((char *)this + 120);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
  if ( (int)CGITRegistrationList::GetCallbackArray(v10, &v31) >= 0 )
  {
    v11 = v31;
    v20 = v31;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
    v21[0] = 0;
    v12 = ((__int64 (__fastcall *)(struct IObjectArray *, _DWORD *))v11->lpVtbl->GetCount)(v11, v21);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10,
        (int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)v12);
    v24 = 0;
    v25 = 0LL;
    v26 = &v20;
    details::ObjectArrayAdapterImpl<IWindowManagementWindowGroupingEvents,Microsoft::WRL::ComPtr<IWindowManagementWindowGroupingEvents>>::Iterator::GetCurrentObject(&v24);
    v27 = v21[0];
    v28 = 0LL;
    v29 = &v20;
    details::ObjectArrayAdapterImpl<IWindowManagementWindowGroupingEvents,Microsoft::WRL::ComPtr<IWindowManagementWindowGroupingEvents>>::Iterator::GetCurrentObject(&v27);
    v13 = a7;
    v14 = a6;
    v15 = a5;
    while ( v24 != v27 || v26 != v29 )
    {
      v16 = v25;
      v19 = v25;
      if ( v25 )
        (*(void (__fastcall **)(__int64 *))(*v25 + 8))(v25);
      v17 = *v16;
      v22 = *v14;
      v23 = *v15;
      (*(void (__fastcall **)(__int64 *, HWND, _QWORD, _QWORD, struct tagRECT *, struct tagRECT *, unsigned int))(v17 + 24))(
        v16,
        a2,
        a3,
        a4,
        &v23,
        &v22,
        v13);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
      ++v24;
      details::ObjectArrayAdapterImpl<IWindowManagementWindowGroupingEvents,Microsoft::WRL::ComPtr<IWindowManagementWindowGroupingEvents>>::Iterator::GetCurrentObject(&v24);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
  }
  v18 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    ((void (__fastcall *)(struct IObjectArray *))v18->lpVtbl->Release)(v18);
  }
}
