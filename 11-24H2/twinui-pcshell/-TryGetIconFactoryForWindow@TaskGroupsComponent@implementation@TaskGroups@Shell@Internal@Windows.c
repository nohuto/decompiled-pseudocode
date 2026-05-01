/*
 * XREFs of ?TryGetIconFactoryForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AUIIconFactory@Multitasking@ComposableShell@567@UWindowId@WindowManagement@ApplicationModel@567@@Z @ 0x180588FB0
 * Callers:
 *     ?TryGetIconFactoryForWindow@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEAPEAX@Z @ 0x180588F60 (-TryGetIconFactoryForWindow@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Inter.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x180299F78 (-CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEB.c)
 *     ??$as@UIIconFactory@Multitasking@ComposableShell@Internal@Windows@winrt@@U12345@$0A@@impl@winrt@@YA?AUIIconFactory@Multitasking@ComposableShell@Internal@Windows@1@PEAU23456@@Z @ 0x1802CAD74 (--$as@UIIconFactory@Multitasking@ComposableShell@Internal@Windows@winrt@@U12345@$0A@@impl@winrt@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TryGetIconFactoryForWindow(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3)
{
  __int64 v6; // rsi
  int (__fastcall *v7)(__int64, _QWORD, struct IApplicationView **); // rdi
  const struct _GUID *v8; // r8
  int v9; // eax
  void *v10; // rbx
  int v12; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IApplicationView *v14; // [rsp+50h] [rbp+8h] BYREF
  void *v15; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0LL;
  v6 = *(_QWORD *)(a1 + 136);
  v7 = *(int (__fastcall **)(__int64, _QWORD, struct IApplicationView **))(*(_QWORD *)v6 + 48LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v14);
  if ( v7(v6, a3, &v14) >= 0 )
  {
    v15 = 0LL;
    v9 = AppViewIconFactory::CreateInstance(v14, *(struct IApplicationViewIconLoader **)(a1 + 144), v8, &v15);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x203,
        (int)"pcshell\\twinui\\taskgroups\\lib\\taskgroupscomponent.cpp",
        (const char *)(unsigned int)v9,
        v12);
    v10 = v15;
    winrt::impl::as<winrt::Windows::Internal::ComposableShell::Multitasking::IIconFactory,Windows::Internal::ComposableShell::Multitasking::IIconFactory,0>(
      a2,
      (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v15);
    if ( v10 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v15);
  }
  else
  {
    *a2 = 0LL;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
  return a2;
}
