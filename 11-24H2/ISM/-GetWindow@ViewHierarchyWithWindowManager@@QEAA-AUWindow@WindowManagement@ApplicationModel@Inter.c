/*
 * XREFs of ?GetWindow@ViewHierarchyWithWindowManager@@QEAA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@I@Z @ 0x180026620
 * Callers:
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x180026598 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18002724C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall ViewHierarchyWithWindowManager::GetWindow(_QWORD *a1, _QWORD *a2, int a3)
{
  unsigned __int64 v4; // r10
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 *v14; // rax
  char v15; // di
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF
  int v19; // [rsp+50h] [rbp+18h]

  v19 = a3;
  LODWORD(v17) = 0;
  v4 = 0LL;
  v6 = 0xCBF29CE484222325uLL;
  do
  {
    v7 = *((unsigned __int8 *)&v19 + v4++);
    v6 = 0x100000001B3LL * (v7 ^ v6);
  }
  while ( v4 < 4 );
  v8 = a1[18];
  v9 = v6 & a1[21];
  v10 = a1[16];
  v11 = 2 * v9;
  v12 = *(_QWORD *)(v8 + 8 * v11 + 8);
  if ( v12 == v10 )
  {
LABEL_4:
    v12 = 0LL;
  }
  else
  {
    while ( a3 != *(_DWORD *)(v12 + 16) )
    {
      if ( v12 == *(_QWORD *)(v8 + 8 * v11) )
        goto LABEL_4;
      v12 = *(_QWORD *)(v12 + 8);
    }
  }
  if ( !v12 )
    v12 = a1[16];
  if ( v12 == v10 )
  {
    v13 = 0LL;
    v14 = &v18;
    v15 = 2;
  }
  else
  {
    v13 = *(_QWORD *)(v12 + 24);
    v17 = v13;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = &v17;
    v15 = 1;
  }
  *v14 = 0LL;
  *a2 = v13;
  if ( (v15 & 2) != 0 )
  {
    v15 &= ~2u;
    if ( v18 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v18);
  }
  if ( (v15 & 1) != 0 && v17 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v17);
  return a2;
}
