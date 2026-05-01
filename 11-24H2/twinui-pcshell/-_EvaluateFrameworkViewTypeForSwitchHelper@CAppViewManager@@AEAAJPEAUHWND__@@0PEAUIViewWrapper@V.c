/*
 * XREFs of ?_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEA_N@Z @ 0x1802FBCEC
 * Callers:
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x1802FDCD4 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x1801C450C (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x1802FC300 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::_EvaluateFrameworkViewTypeForSwitchHelper(
        CAppViewManager *this,
        HWND a2,
        HWND a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a4,
        bool *a5)
{
  int GlomForWindow; // ebx
  bool v10; // al
  CAppViewManager *v11; // rcx
  int v12; // edi
  int v13; // r12d
  int v14; // ecx
  __int64 (__fastcall *v15)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, __int64, int *); // rbx
  char v16; // si
  int v17; // eax
  bool v19; // [rsp+20h] [rbp-50h] BYREF
  bool v20; // [rsp+21h] [rbp-4Fh] BYREF
  int v21; // [rsp+24h] [rbp-4Ch] BYREF
  struct IImmersiveApplicationInternal *v22; // [rsp+28h] [rbp-48h] BYREF
  struct IImmersiveApplicationInternal *v23; // [rsp+30h] [rbp-40h] BYREF
  int v24; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v26; // [rsp+58h] [rbp-18h]

  v24 = 0;
  *a5 = 0;
  v23 = 0LL;
  v22 = 0LL;
  v19 = 0;
  v20 = 0;
  if ( a2 == a3 )
  {
    GlomForWindow = -2147024809;
LABEL_3:
    v10 = 0;
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(this, a2, &v23, &v19);
  v10 = 0;
  if ( GlomForWindow < 0 )
    goto LABEL_17;
  if ( !v19 )
  {
    GlomForWindow = -2147024891;
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(this, a3, &v22, &v20);
  v12 = GlomForWindow;
  v10 = 0;
  if ( GlomForWindow < 0 )
    goto LABEL_17;
  if ( !CAppViewManager::_IsMultiViewOperationAllowed(v11, v22) )
  {
    GlomForWindow = -2147024891;
    goto LABEL_3;
  }
  v10 = 0;
  if ( !v20 )
  {
    v13 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v23 + 616LL))(v23);
    v14 = 6;
    v21 = 6;
    if ( !a4
      || (v15 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, __int64, int *))(*(_QWORD *)a4 + 368LL),
          v26 = 0LL,
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(
            &hstringHeader,
            L"FrameworkViewType",
            0x12u,
            0x11u),
          v16 = 1,
          v24 = 1,
          v17 = v15(a4, v26, &v21),
          v14 = v21,
          v17 < 0) )
    {
      v16 = 0;
    }
    v10 = 0;
    GlomForWindow = v12;
    if ( v16 && v14 != 6 )
      v10 = v14 != v13;
  }
LABEL_17:
  *a5 = v10;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
  return (unsigned int)GlomForWindow;
}
