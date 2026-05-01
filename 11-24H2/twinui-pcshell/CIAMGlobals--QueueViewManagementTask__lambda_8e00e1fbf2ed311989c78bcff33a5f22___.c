/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_8e00e1fbf2ed311989c78bcff33a5f22___ @ 0x180308B4C
 * Callers:
 *     _lambda_ffa95d5ea910b6ca98d895ec7ec1025e_::operator() @ 0x18030A098 (_lambda_ffa95d5ea910b6ca98d895ec7ec1025e_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1e9e8bfaf495bf26ee609f3817360555___ @ 0x180308740 (Windows--Internal--ComTaskPool--QueueTask__lambda_1e9e8bfaf495bf26ee609f3817360555___.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_8e00e1fbf2ed311989c78bcff33a5f22___(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v2; // rbx
  unsigned int Ptr; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( !CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
    return 2147943568LL;
  v9[0] = (__int64)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
  Ptr = (unsigned int)v2[15].Ptr;
  v9[1] = *a2;
  v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_1e9e8bfaf495bf26ee609f3817360555___(
         v7,
         v6,
         Ptr,
         (volatile signed __int32 *)v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v9);
  return v8;
}
