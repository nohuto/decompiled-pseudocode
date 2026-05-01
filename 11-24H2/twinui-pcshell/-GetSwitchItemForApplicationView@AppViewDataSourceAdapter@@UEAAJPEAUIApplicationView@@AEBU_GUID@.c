/*
 * XREFs of ?GetSwitchItemForApplicationView@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1801755E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180175694 (-FindItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewDataSourceAdapter::GetSwitchItemForApplicationView(
        AppViewDataSourceAdapter *this,
        struct IApplicationView *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 (__fastcall ***v6)(_QWORD, const struct _GUID *, void **); // rbx
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v12)(_QWORD, const struct _GUID *, void **); // [rsp+30h] [rbp+8h] BYREF

  *a4 = 0LL;
  AppViewDataSourceAdapterBase::FindItemForView((char *)this - 128, &v12, a2);
  try
  {
    v6 = v12;
    if ( !v12 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xDD,
        (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)0x8002802BLL,
        v10);
    v7 = (**v12)(v12, a3, a4);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C60,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
        (const char *)(unsigned int)v7,
        v10);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **)))(*v6)[2])(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE1,
                           (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
                           v8);
  }
  return result;
}
