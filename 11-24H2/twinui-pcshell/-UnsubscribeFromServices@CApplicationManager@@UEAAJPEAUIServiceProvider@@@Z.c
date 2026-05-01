/*
 * XREFs of ?UnsubscribeFromServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801ED790
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800C75C8 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationManager::UnsubscribeFromServices(CApplicationManager *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v5; // rcx
  HRESULT (__stdcall *v6)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v7)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+70h] [rbp+30h] BYREF
  __int64 v18; // [rsp+80h] [rbp+40h] BYREF
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  v18 = 0LL;
  if ( *((_DWORD *)this + 176) )
  {
    QueryService = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))QueryService)(
           a2,
           &SID_ImmersiveShellHookService,
           &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
           &v18) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 32LL))(v18, *((unsigned int *)this + 176));
  }
  v5 = *((_QWORD *)this + 62);
  if ( v5 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 88LL))(v5, *((unsigned int *)this + 181));
  if ( *((_DWORD *)this + 183) )
  {
    v19 = 0LL;
    v6 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v6)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           &v19) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 32LL))(v19, *((unsigned int *)this + 183));
      *((_DWORD *)this + 183) = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  }
  if ( *((_QWORD *)this + 92) )
  {
    v16[0] = 0LL;
    v7 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v16);
    if ( ((int (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v7)(
           a2,
           &SID_ViewEventDispatcher,
           &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e,
           v16) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16[0] + 56LL))(v16[0], *((_QWORD *)this + 92));
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v16);
  }
  v17 = 0LL;
  if ( *((_DWORD *)this + 182) )
  {
    v8 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    if ( ((int (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v8)(
           a2,
           &IID_IImmersiveSessionIdleDetector,
           &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
           &v17) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 40LL))(v17, *((unsigned int *)this + 182));
      *((_DWORD *)this + 182) = 0;
    }
  }
  v9 = *((_QWORD *)this + 58);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
  if ( *((_QWORD *)this + 59) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 60) + 32LL))(*((_QWORD *)this + 60));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 55) + 32LL))(
      *((_QWORD *)this + 55),
      *((_QWORD *)this + 59));
  }
  v10 = *((_QWORD *)this + 57);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
  v11 = *((_QWORD *)this + 64);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 104LL))(v11);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v19 = *((_QWORD *)this + 87);
  v12 = v19;
  *((_QWORD *)this + 87) = 0LL;
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  SmartCookie::Unregister((CApplicationManager *)((char *)this + 744));
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return 0LL;
}
