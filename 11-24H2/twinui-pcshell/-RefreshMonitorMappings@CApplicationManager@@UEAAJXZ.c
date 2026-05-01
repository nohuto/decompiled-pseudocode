/*
 * XREFs of ?RefreshMonitorMappings@CApplicationManager@@UEAAJXZ @ 0x180077F40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _lambda_1e074cd5997424a950e43daab6bcbaaf_::operator() @ 0x18023159C (_lambda_1e074cd5997424a950e43daab6bcbaaf_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CApplicationManager::RefreshMonitorMappings(CApplicationManager *this)
{
  void (__fastcall *v2)(char *, GUID *, __int64 *); // rbx
  __int64 *v3; // rax
  HRESULT v4; // r12d
  IUnknown *v5; // rcx
  void *v6; // rcx
  int v8; // edi
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 i; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int j; // r15d
  __int64 v15; // rsi
  int (__fastcall *v16)(__int64, _QWORD, IUnknown **); // rdi
  PSRWLOCK v17; // rdi
  PVOID Ptr; // rcx
  bool v19; // zf
  IUnknown *v20; // rcx
  int v21; // [rsp+38h] [rbp-20h] BYREF
  __int64 v22[3]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+48h] BYREF
  IUnknown *punk; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+58h] BYREF
  void *ppvOut; // [rsp+B8h] [rbp+60h] BYREF

  v23 = 0;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  punk = 0LL;
  v23 = 2;
  v2 = *(void (__fastcall **)(char *, GUID *, __int64 *))(*((_QWORD *)this - 13) + 32LL);
  v3 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&punk);
  v2((char *)this - 104, &GUID_00000000_0000_0000_c000_000000000046, v3);
  v4 = IUnknown_QueryService(
         punk,
         (const GUID *const)&SID_ImmersiveShellHookService,
         &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
         &ppvOut);
  v5 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v5->lpVtbl->Release)(v5);
  }
  if ( v4 >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v8 = *((_DWORD *)this + 202);
    v9 = *((_QWORD *)this + 51);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v21 = v8;
    v22[0] = v9;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v22);
    v10 = *((_QWORD *)this + 61);
    for ( i = 0LL; i < v10; ++i )
    {
      if ( !(unsigned __int8)lambda_1e074cd5997424a950e43daab6bcbaaf_::operator()(
                               &v21,
                               *(_QWORD *)(*((_QWORD *)this + 60) + 8 * i)) )
        break;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v22);
    v25 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
    (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 53) + 32LL))(
      *((_QWORD *)this + 53),
      0LL,
      &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
      &v25);
    v23 = 0;
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 51) + 32LL))(*((_QWORD *)this + 51), &v23) >= 0 )
    {
      for ( j = 0; j < v23; ++j )
      {
        punk = 0LL;
        v15 = *((_QWORD *)this + 51);
        v16 = *(int (__fastcall **)(__int64, _QWORD, IUnknown **))(*(_QWORD *)v15 + 40LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
        if ( v16(v15, j, &punk) >= 0 )
        {
          v17 = CApplicationManagerUtility::g_pIAMGlobals;
          Ptr = CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
          if ( Ptr )
          {
            v19 = *((_DWORD *)CApplicationManagerUtility::g_pIAMGlobals[1].Ptr + (_QWORD)Ptr - 1) == 1;
          }
          else if ( LODWORD(CApplicationManagerUtility::g_pIAMGlobals[5].Ptr)
                 && (unsigned int)SHIsSameObject(
                                    punk,
                                    (struct IUnknown *)CApplicationManagerUtility::g_pIAMGlobals[6].Ptr) )
          {
            v19 = LODWORD(v17[5].Ptr) == 1;
          }
          else
          {
            v19 = HIDWORD(v17[5].Ptr) == 1;
          }
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, IUnknown *))(*(_QWORD *)v25 + 24LL))(
            v25,
            (unsigned int)v19 + 1,
            *((unsigned int *)this + 202),
            punk);
        }
        v20 = punk;
        if ( punk )
        {
          punk = 0LL;
          ((void (__fastcall *)(IUnknown *))v20->lpVtbl->Release)(v20);
        }
      }
    }
    v12 = *((_QWORD *)this + 48);
    if ( v12 )
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v12 + 40LL))(v12, ppvOut);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v13 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v6 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)v4;
}
