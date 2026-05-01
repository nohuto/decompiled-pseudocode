/*
 * XREFs of _lambda_67b2f18edae7de11733e212eb4a2dec4_::operator() @ 0x180309AEC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a89b6450af0da03016498a5e0f8799e___::Run @ 0x18030A8B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5a89b6450af0da03016498a5e0f8799e___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_6c2381c8148a5bf607d7998e82322cb8_::__lambda_6c2381c8148a5bf607d7998e82322cb8_ @ 0x1801B74C4 (_lambda_6c2381c8148a5bf607d7998e82322cb8_--__lambda_6c2381c8148a5bf607d7998e82322cb8_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_55bfb5526f4392ad79f3fb342555afb6___ @ 0x1803087C8 (Windows--Internal--ComTaskPool--QueueTask__lambda_55bfb5526f4392ad79f3fb342555afb6___.c)
 */

__int64 __fastcall lambda_67b2f18edae7de11733e212eb4a2dec4_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  PSRWLOCK v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  PVOID Ptr; // [rsp+20h] [rbp-10h] BYREF
  __int64 v7; // [rsp+28h] [rbp-8h] BYREF
  __int64 v8; // [rsp+40h] [rbp+10h] BYREF
  __int64 v9; // [rsp+48h] [rbp+18h] BYREF

  v9 = *a1;
  v1 = v9;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  v8 = v1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
  {
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
    v7 = v1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v7);
    Windows::Internal::ComTaskPool::QueueTask__lambda_55bfb5526f4392ad79f3fb342555afb6___(
      v4,
      v3,
      (unsigned int)v2[15].Ptr,
      &Ptr);
    lambda_6c2381c8148a5bf607d7998e82322cb8_::__lambda_6c2381c8148a5bf607d7998e82322cb8_((__int64 *)&Ptr);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
}
