/*
 * XREFs of ?v_OnWindowSet@UwpWindowWrapper@@EEAAXXZ @ 0x1801C7440
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18001AF9C (-OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Intern.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindow@UwpWindowWrapperBase@@UEAAJPEAPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801C74D0 (-GetWindow@UwpWindowWrapperBase@@UEAAJPEAPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall UwpWindowWrapper::v_OnWindowSet(UwpWindowWrapper *this)
{
  int Window; // eax
  const char *v3; // r9
  struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *v4; // rbx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  Window = UwpWindowWrapperBase::GetWindow((UwpWindowWrapper *)((char *)this + 16), &v7);
  try
  {
    if ( Window < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xF5,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)Window,
        v5);
    v4 = v7;
    if ( v7 && *((_DWORD *)this + 74) )
      UwpWindowWrapper::OnSetWindowInternal((UwpWindowWrapper *)((char *)this - 8), v7);
    if ( v4 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xFC,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      v3);
  }
}
