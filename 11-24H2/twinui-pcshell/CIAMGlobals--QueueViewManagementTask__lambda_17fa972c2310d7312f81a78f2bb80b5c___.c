/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_17fa972c2310d7312f81a78f2bb80b5c___ @ 0x1801AC574
 * Callers:
 *     ?RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1801AC504 (-RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_4d39dc8836a747feab7d20b0af3bfeac_::__lambda_4d39dc8836a747feab7d20b0af3bfeac_ @ 0x1801AC648 (_lambda_4d39dc8836a747feab7d20b0af3bfeac_--__lambda_4d39dc8836a747feab7d20b0af3bfeac_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4d39dc8836a747feab7d20b0af3bfeac___ @ 0x1801AC694 (Windows--Internal--ComTaskPool--QueueTask__lambda_4d39dc8836a747feab7d20b0af3bfeac___.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_17fa972c2310d7312f81a78f2bb80b5c___(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v2; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 Ptr_low; // r8
  unsigned int v9; // ebx
  PVOID Ptr; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h] BYREF
  int v12; // [rsp+30h] [rbp-18h]

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( !CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
    return 2147943568LL;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
  v11 = 0LL;
  if ( &v11 != a2 )
  {
    v7 = *a2;
    *a2 = 0LL;
    v11 = v7;
  }
  Ptr_low = LODWORD(v2[15].Ptr);
  v12 = *((_DWORD *)a2 + 2);
  v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_4d39dc8836a747feab7d20b0af3bfeac___(v6, v5, Ptr_low, &Ptr);
  lambda_4d39dc8836a747feab7d20b0af3bfeac_::__lambda_4d39dc8836a747feab7d20b0af3bfeac_(&Ptr);
  return v9;
}
