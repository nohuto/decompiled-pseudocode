/*
 * XREFs of ?SetUwpWindowContext@UwpWindowWrapperBase@@UEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18044BA80
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::SetUwpWindowContext(
        UwpWindowWrapperBase *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *, GUID *, char *))
{
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *, GUID *, char *); // rbx
  int v6; // eax
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 33);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 224LL))(v4);
    v5 = **a2;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 12);
    v6 = v5(
           (struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *)a2,
           &GUID_fc760dc3_9c96_583d_ac66_3103a9e1c1c0,
           (char *)this + 96);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6EF,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v6,
        v10);
    v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 12) + 48LL))(
           *((_QWORD *)this + 12),
           (char *)this + 336);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6F0,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v7,
        v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6F3,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v8);
  }
  return result;
}
