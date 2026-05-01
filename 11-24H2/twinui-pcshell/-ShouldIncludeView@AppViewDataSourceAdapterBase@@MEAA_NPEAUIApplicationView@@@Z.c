/*
 * XREFs of ?ShouldIncludeView@AppViewDataSourceAdapterBase@@MEAA_NPEAUIApplicationView@@@Z @ 0x18007DFA0
 * Callers:
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x18007DDC0 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall AppViewDataSourceAdapterBase::ShouldIncludeView(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2)
{
  __int64 v2; // rax
  char v3; // bl
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)a2;
  v3 = 0;
  v5 = 0;
  if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(v2 + 216))(a2, &v5) >= 0 )
    return v5 != 0;
  return v3;
}
