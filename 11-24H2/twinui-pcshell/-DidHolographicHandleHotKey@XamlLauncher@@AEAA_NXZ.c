/*
 * XREFs of ?DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ @ 0x18022C304
 * Callers:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18024D0C0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18016C510 (-QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall XamlLauncher::DidHolographicHandleHotKey(XamlLauncher *this)
{
  __int64 v2; // rcx
  int v4; // eax
  int v5; // eax
  int v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+24h] [rbp-14h] BYREF
  void *v8[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *((_QWORD *)this + 24);
  if ( !v2 )
    return 0;
  LOBYTE(v6) = 0;
  v7 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 56LL))(v2, &v7);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x77D,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v4);
  if ( v7 == 1 )
  {
    v8[0] = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v8);
    if ( XamlLauncher::QueryService(
           (XamlLauncher *)((char *)this + 48),
           &GUID_40e2a5e3_4191_4768_937b_90416fbe69bd,
           &GUID_40e2a5e3_4191_4768_937b_90416fbe69bd,
           v8) >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(void *, __int64, int *))(*(_QWORD *)v8[0] + 48LL))(v8[0], 1LL, &v6);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x78A,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v5);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v8);
  }
  return (_BYTE)v6 != 0;
}
