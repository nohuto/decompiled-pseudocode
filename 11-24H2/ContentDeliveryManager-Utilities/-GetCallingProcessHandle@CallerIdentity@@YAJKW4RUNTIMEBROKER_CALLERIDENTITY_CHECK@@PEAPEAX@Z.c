/*
 * XREFs of ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180071E28
 * Callers:
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x180033EE4 (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z @ 0x180071E04 (-GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWwwFormUrlDecoderRuntimeClass@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180070FCC (-InternalRelease@-$ComPtr@UIWwwFormUrlDecoderRuntimeClass@Foundation@Windows@@@WRL@Microsoft@@IE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CallerIdentity::GetCallingProcessHandle(__int64 a1, __int64 a2, HANDLE *a3)
{
  HRESULT v4; // eax
  int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppInterface; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  ppInterface = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::InternalRelease((__int64 *)&ppInterface);
  v4 = CoGetCallContext(&GUID_68c6a1b9_de39_42c3_8d28_bf40a5126541, &ppInterface);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(void *, __int64, HANDLE *))(*(_QWORD *)ppInterface + 24LL))(ppInterface, 4096LL, a3);
    if ( v5 < 0 )
      goto LABEL_8;
LABEL_6:
    Microsoft::WRL::ComPtr<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::InternalRelease((__int64 *)&ppInterface);
    return 0LL;
  }
  if ( v4 == -2147417833 )
  {
    *a3 = GetCurrentProcess();
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x58,
    (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
    (const char *)(unsigned int)v4);
LABEL_8:
  Microsoft::WRL::ComPtr<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::InternalRelease((__int64 *)&ppInterface);
  return (unsigned int)v5;
}
