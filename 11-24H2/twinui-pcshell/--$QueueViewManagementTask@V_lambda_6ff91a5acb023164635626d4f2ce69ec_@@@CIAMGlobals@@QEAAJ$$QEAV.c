/*
 * XREFs of ??$QueueViewManagementTask@V_lambda_6ff91a5acb023164635626d4f2ce69ec_@@@CIAMGlobals@@QEAAJ$$QEAV_lambda_6ff91a5acb023164635626d4f2ce69ec_@@@Z @ 0x1802C7760
 * Callers:
 *     ?RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z @ 0x180091900 (-RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$QueueTask@V_lambda_edcf8a708a912462aa4ae38346069636_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_edcf8a708a912462aa4ae38346069636_@@@Z @ 0x1801FB53C (--$QueueTask@V_lambda_edcf8a708a912462aa4ae38346069636_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     ??1_lambda_edcf8a708a912462aa4ae38346069636_@@QEAA@XZ @ 0x1802C4B28 (--1_lambda_edcf8a708a912462aa4ae38346069636_@@QEAA@XZ.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask<_lambda_6ff91a5acb023164635626d4f2ce69ec_>(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v2; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx
  PVOID Ptr; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( !CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
    return 2147943568LL;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
  v10 = 0LL;
  if ( &v10 != a2 )
  {
    v7 = *a2;
    *a2 = 0LL;
    v10 = v7;
  }
  v8 = Windows::Internal::ComTaskPool::QueueTask<_lambda_edcf8a708a912462aa4ae38346069636_>(
         v6,
         v5,
         (unsigned int)v2[15].Ptr,
         (__int64)&Ptr);
  _lambda_edcf8a708a912462aa4ae38346069636_::~_lambda_edcf8a708a912462aa4ae38346069636_((_lambda_edcf8a708a912462aa4ae38346069636_ *)&Ptr);
  return v8;
}
