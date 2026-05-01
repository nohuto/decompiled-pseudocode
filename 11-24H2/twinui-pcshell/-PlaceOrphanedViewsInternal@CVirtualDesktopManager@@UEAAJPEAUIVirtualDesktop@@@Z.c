/*
 * XREFs of ?PlaceOrphanedViewsInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x18007D660
 * Callers:
 *     ?SetViewCollectionInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x180555360 (-SetViewCollectionInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationViewCollection@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18002CBE4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@V?$initializer_list@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@1@AEBV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x18007D8C8 (--0-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com.c)
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18007D950 (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18007DA98 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1802D4CD0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CVirtualDesktopManager::PlaceOrphanedViewsInternal(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // rbx
  int updated; // edi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // [rsp+20h] [rbp-39h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-31h]
  _QWORD v17[2]; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-19h] BYREF
  __int64 v19; // [rsp+48h] [rbp-11h] BYREF
  __int64 *v20; // [rsp+50h] [rbp-9h]
  unsigned int v21; // [rsp+58h] [rbp-1h] BYREF
  __int64 v22; // [rsp+60h] [rbp+7h] BYREF
  __int64 *v23; // [rsp+68h] [rbp+Fh]
  _BYTE v24[64]; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  __int64 v26; // [rsp+C0h] [rbp+67h] BYREF
  struct IVirtualDesktop *v27; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v28; // [rsp+D8h] [rbp+7Fh] BYREF

  v26 = 0LL;
  v4 = *((_QWORD *)this + 13);
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  v6 = v5(v4, &v26);
  v7 = v6;
  if ( v6 >= 0 )
  {
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
      &v15,
      v26);
    v18 = 0;
    v19 = 0LL;
    v20 = &v15;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v18);
    v21 = v16;
    v22 = 0LL;
    v23 = &v15;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v21);
    while ( v18 != v21 || v20 != v23 )
    {
      v10 = v19;
      v28 = v19;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 14) + 72LL))(
             *((_QWORD *)this + 14),
             v10,
             *((_QWORD *)this + 12)) )
      {
        updated = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IVirtualDesktop *))(**((_QWORD **)this + 14) + 40LL))(
                    *((_QWORD *)this + 14),
                    v10,
                    a2);
        if ( updated < 0 )
        {
          v14 = 1547LL;
LABEL_23:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v14,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
            (const char *)(unsigned int)updated);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
          return (unsigned int)updated;
        }
      }
      v27 = a2;
      if ( a2 )
        (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)a2 + 8LL))(a2);
      v17[0] = &v27;
      v17[1] = &v28;
      v12 = std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>(
              v24,
              v17);
      updated = CVirtualDesktopManager::UpdateViewVisibility((char *)this - 8, v10, v12);
      `eh vector destructor iterator'(
        &v27,
        8uLL,
        1uLL,
        (void (*)(void *))wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>);
      if ( updated < 0 )
      {
        v14 = 1550LL;
        goto LABEL_23;
      }
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      ++v18;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v18);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    v13 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x606,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v6);
    v8 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return v7;
  }
}
