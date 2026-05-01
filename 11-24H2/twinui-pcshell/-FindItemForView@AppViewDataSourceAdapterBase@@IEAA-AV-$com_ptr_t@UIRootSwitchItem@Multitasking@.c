/*
 * XREFs of ?FindItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180175694
 * Callers:
 *     ?InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18002BD38 (-InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?GetSwitchItemForApplicationView@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1801755E0 (-GetSwitchItemForApplicationView@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@AEBU_GUID@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall AppViewDataSourceAdapterBase::FindItemForView(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // rbx
  __int64 v9; // rcx

  if ( a3 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)a3 + 8LL))(a3);
  v6 = *(__int64 **)(*(_QWORD *)(a1 + 96) + 8LL);
  v7 = 0LL;
  v8 = *(__int64 **)(a1 + 96);
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( v6[4] < a3 )
    {
      v6 = (__int64 *)v6[2];
    }
    else
    {
      v8 = v6;
      v6 = (__int64 *)*v6;
    }
  }
  if ( *((_BYTE *)v8 + 25) || a3 < v8[4] )
    v8 = *(__int64 **)(a1 + 96);
  if ( a3 )
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)a3 + 16LL))(a3, 0LL);
  if ( v8 == *(__int64 **)(a1 + 96) )
  {
    *a2 = 0LL;
  }
  else
  {
    v9 = v8[5];
    *a2 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, v7);
  }
  return a2;
}
