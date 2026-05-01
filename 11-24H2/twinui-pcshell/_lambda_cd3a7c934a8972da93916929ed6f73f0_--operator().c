/*
 * XREFs of _lambda_cd3a7c934a8972da93916929ed6f73f0_::operator() @ 0x1801E8CC0
 * Callers:
 *     CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_cd3a7c934a8972da93916929ed6f73f0___ @ 0x180679458 (CallerIdentity--ApiPolicyChecker--_ForEachApplicationByAppID__lambda_cd3a7c934a8972da93916929ed6.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_cd3a7c934a8972da93916929ed6f73f0_::operator()(bool **a1, __int64 *a2, bool *a3)
{
  __int64 v3; // rax
  __int64 (__fastcall *v7)(__int64 *, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v8; // rax
  int v9; // ebx
  bool v10; // zf
  bool *v11; // rax
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  HWND hWnd; // [rsp+68h] [rbp+20h] BYREF

  v3 = *a2;
  v13 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v3 + 24);
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v13);
  v9 = v7(a2, 0LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v8);
  if ( v9 >= 0 )
  {
    hWnd = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v13 + 32LL))(v13, &hWnd);
    if ( v9 >= 0 )
    {
      v10 = GetPropW(hWnd, L"PROP_APPWINDOW_BLOCK_UNTRUSTED_LAUNCHES") == 0LL;
      v11 = *a1;
      *a3 = !v10;
      *v11 = !v10;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  return (unsigned int)v9;
}
