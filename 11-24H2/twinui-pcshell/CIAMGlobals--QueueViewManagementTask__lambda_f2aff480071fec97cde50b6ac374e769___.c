/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_f2aff480071fec97cde50b6ac374e769___ @ 0x1802E2944
 * Callers:
 *     _lambda_2cec81e5a08c64ba5d30bf166a2a5e31_::operator() @ 0x1802E38D0 (_lambda_2cec81e5a08c64ba5d30bf166a2a5e31_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_307174fcb64a847e01d6fb95f3bddf6e___ @ 0x1802E27A4 (Windows--Internal--ComTaskPool--QueueTask__lambda_307174fcb64a847e01d6fb95f3bddf6e___.c)
 *     _lambda_ab9f828b40129b4f40202efbf92da624_::__lambda_ab9f828b40129b4f40202efbf92da624_ @ 0x1802E2ECC (_lambda_ab9f828b40129b4f40202efbf92da624_--__lambda_ab9f828b40129b4f40202efbf92da624_.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_f2aff480071fec97cde50b6ac374e769___(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  PVOID Ptr; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( !CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
    return 2147943568LL;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
  v9 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_307174fcb64a847e01d6fb95f3bddf6e___(
         v6,
         v5,
         (unsigned int)v2[15].Ptr,
         &Ptr);
  lambda_ab9f828b40129b4f40202efbf92da624_::__lambda_ab9f828b40129b4f40202efbf92da624_(&Ptr);
  return v7;
}
