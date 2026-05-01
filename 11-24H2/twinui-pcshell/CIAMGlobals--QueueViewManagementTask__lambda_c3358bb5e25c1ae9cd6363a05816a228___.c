/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_c3358bb5e25c1ae9cd6363a05816a228___ @ 0x18008E900
 * Callers:
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18008E604 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_323d14d606b14d2939124d398e1f4aa2___ @ 0x18008DCE0 (Windows--Internal--ComTaskPool--QueueTask__lambda_323d14d606b14d2939124d398e1f4aa2___.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_c3358bb5e25c1ae9cd6363a05816a228___(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v2; // rbx
  unsigned int Ptr; // r8d
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( !CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
    return 2147943568LL;
  v9[0] = (__int64)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
  Ptr = (unsigned int)v2[15].Ptr;
  v9[1] = *a2;
  v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_323d14d606b14d2939124d398e1f4aa2___(v6, v5, Ptr, v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v9);
  return v7;
}
