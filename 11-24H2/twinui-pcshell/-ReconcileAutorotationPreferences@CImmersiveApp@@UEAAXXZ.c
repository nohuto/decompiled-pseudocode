/*
 * XREFs of ?ReconcileAutorotationPreferences@CImmersiveApp@@UEAAXXZ @ 0x1800A05E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CImmersiveApp::ReconcileAutorotationPreferences(CImmersiveApp *this)
{
  char *v2; // rsi
  void (__fastcall *v3)(char *, GUID *, __int64 *); // rbx
  __int64 *v4; // rax
  __int64 v5; // rcx
  bool v6; // bl
  void (__fastcall *v7)(char *, GUID *, __int64 *); // rbx
  __int64 *v8; // rax
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rbx
  int v11; // ebx
  __int64 v12; // rcx
  bool v13; // bl
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v15; // rcx
  __int64 v16; // [rsp+50h] [rbp+20h] BYREF
  __int64 v17; // [rsp+58h] [rbp+28h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+30h] BYREF

  v2 = (char *)this - 64;
  v17 = 0LL;
  LODWORD(v16) = 2;
  v3 = *(void (__fastcall **)(char *, GUID *, __int64 *))(*((_QWORD *)this - 8) + 32LL);
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v17);
  v3(v2, &GUID_00000000_0000_0000_c000_000000000046, v4);
  v5 = v17;
  v6 = v17 != 0;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v6 && (*((_BYTE *)this + 456) & 2) != 0 )
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    v18 = 0LL;
    LODWORD(v16) = 9;
    v7 = *(void (__fastcall **)(char *, GUID *, __int64 *))(*(_QWORD *)v2 + 32LL);
    v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v18);
    v7(v2, &GUID_00000000_0000_0000_c000_000000000046, v8);
    v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
    v17 = 0LL;
    v16 = 0LL;
    v10 = **v18;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    v11 = v10(v9, &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a, &v16);
    if ( v11 >= 0 )
      v11 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v16 + 24LL))(
              v16,
              &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee,
              &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee,
              &v17);
    v12 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = v11 >= 0;
    v14 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
    if ( v18 )
    {
      v18 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v14)[2])(v14);
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(v17);
    v15 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
}
