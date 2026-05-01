/*
 * XREFs of ?GetWindow@WindowWrapperBase@@UEAAJPEAPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804409C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowWrapperBase::GetWindow(
        WindowWrapperBase *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindow **a2)
{
  __int64 v4; // rcx
  const char *v5; // r9
  struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *v6; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 33);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 224LL))(v4);
    v6 = (struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *)*((_QWORD *)this + 14);
    if ( v6 )
    {
      *a2 = v6;
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    else
    {
      *a2 = 0LL;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6A4,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return result;
}
