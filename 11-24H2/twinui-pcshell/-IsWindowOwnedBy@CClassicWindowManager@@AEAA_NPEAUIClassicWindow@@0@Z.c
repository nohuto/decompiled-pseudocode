/*
 * XREFs of ?IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z @ 0x180133F84
 * Callers:
 *     CClassicWindowManager::ForEachWindow__lambda_dd5c7d1e09e00632b28aad397ffb0028___ @ 0x1802F2074 (CClassicWindowManager--ForEachWindow__lambda_dd5c7d1e09e00632b28aad397ffb0028___.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::IsWindowOwnedBy(
        CClassicWindowManager *this,
        struct IClassicWindow *a2,
        struct IClassicWindow *a3)
{
  struct IClassicWindow **v5; // rax
  struct IClassicWindow *v6; // rbx
  struct IClassicWindow *v7; // rsi
  __int64 v8; // rax
  struct IClassicWindow **v9; // rax
  struct IClassicWindow *v10; // rdi

  v5 = (struct IClassicWindow **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 96LL))(a2);
  v6 = *v5;
  if ( *v5 )
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v6 + 8LL))(*v5);
  while ( 1 )
  {
    v7 = v6;
    if ( !v6 || a2 == v6 )
      break;
    v8 = *(_QWORD *)v6;
    if ( v6 == a3 )
    {
      (*(void (__fastcall **)(struct IClassicWindow *))(v8 + 16))(v6);
      return 1;
    }
    v9 = (struct IClassicWindow **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(v8 + 96))(v6);
    v10 = *v9;
    if ( v6 != *v9 )
    {
      if ( v10 )
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v10 + 8LL))(*v9);
      v6 = v10;
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v6 + 16LL))(v6);
  return 0;
}
