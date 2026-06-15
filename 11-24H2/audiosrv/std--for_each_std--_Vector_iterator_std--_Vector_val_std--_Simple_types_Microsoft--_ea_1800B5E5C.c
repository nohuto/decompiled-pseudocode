/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_64f1d33ea67811168a6f1a76ade7d933___ @ 0x1800B5E5C
 * Callers:
 *     ?FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIDeviceGraphObjectsStore@@@Z @ 0x180061720 (-FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA-AV-$uniqu.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_64f1d33ea67811168a6f1a76ade7d933___(
        __int64 a1,
        __int64 **a2,
        __int64 **a3)
{
  __int64 **i; // rdi
  __int64 *v6; // rcx
  __int64 v7; // rax
  _QWORD v9[8]; // [rsp+20h] [rbp-48h] BYREF

  for ( i = a2; i != a3; ++i )
  {
    v6 = *i;
    v7 = **i;
    v9[0] = off_18017AD08;
    v9[7] = v9;
    (*(void (__fastcall **)(__int64 *, _QWORD *))(v7 + 368))(v6, v9);
  }
  return a1;
}
