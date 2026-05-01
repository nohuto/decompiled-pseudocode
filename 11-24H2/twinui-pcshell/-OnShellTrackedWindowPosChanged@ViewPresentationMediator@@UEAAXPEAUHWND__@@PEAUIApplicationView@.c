/*
 * XREFs of ?OnShellTrackedWindowPosChanged@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x18044D0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1800C9598 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801BF268 (--0-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@UIApplicationViewChangeLi.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1801C504C (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$Com.c)
 *     ??DIterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@QEAA?AV?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@XZ @ 0x18044CE80 (--DIterator@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$ComPtr@UIWindowMan.c)
 *     ?begin@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x18044D6D0 (-begin@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$ComPtr@UIWindowManageme.c)
 *     ?end@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x18044D6F8 (-end@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$ComPtr@UIWindowManagement.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ViewPresentationMediator::OnShellTrackedWindowPosChanged(
        ViewPresentationMediator *this,
        HWND a2,
        struct IApplicationView *a3,
        unsigned int a4,
        unsigned int a5,
        struct tagRECT *a6)
{
  RTL_SRWLOCK *v9; // rbx
  struct tagRECT *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 *v13; // [rsp+48h] [rbp-29h] BYREF
  __int64 v14[3]; // [rsp+50h] [rbp-21h] BYREF
  struct tagRECT v15; // [rsp+68h] [rbp-9h] BYREF
  unsigned int v16; // [rsp+78h] [rbp+7h] BYREF
  __int64 v17[2]; // [rsp+80h] [rbp+Fh] BYREF
  int v18; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 v19[2]; // [rsp+98h] [rbp+27h] BYREF
  struct IObjectArray *v20; // [rsp+C8h] [rbp+57h] BYREF

  v20 = 0LL;
  v9 = (RTL_SRWLOCK *)((char *)this + 88);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
  if ( (int)CGITRegistrationList::GetCallbackArray(v9, &v20) >= 0 )
  {
    details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>(
      (__int64)v14,
      (__int64)v20);
    details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::begin(
      v14,
      &v16);
    details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::end(
      v14,
      &v18);
    v10 = a6;
    v11 = a5;
    while ( v16 != v18 || v17[1] != v19[1] )
    {
      details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::operator*(
        (__int64)&v16,
        &v13);
      v12 = *v13;
      v15 = *v10;
      (*(void (__fastcall **)(__int64 *, HWND, struct IApplicationView *, _QWORD, unsigned int, struct tagRECT *))(v12 + 32))(
        v13,
        a2,
        a3,
        a4,
        v11,
        &v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
      ++v16;
      details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::GetCurrentObject(&v16);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v19);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v17);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v14);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
}
