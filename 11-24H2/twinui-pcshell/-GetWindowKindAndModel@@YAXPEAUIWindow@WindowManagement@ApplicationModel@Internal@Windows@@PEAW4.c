/*
 * XREFs of ?GetWindowKindAndModel@@YAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x1800D5D90
 * Callers:
 *     ?UwpWindowShowRequested@UwpWindowEventDispatcher@@UEAAJPEAUIShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800D51D0 (-UwpWindowShowRequested@UwpWindowEventDispatcher@@UEAAJPEAUIShowRequestedEventArgs@WindowManagem.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall GetWindowKindAndModel(
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *a1,
        enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel **a3)
{
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v8; // rax
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v9; // rcx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v12; // [rsp+30h] [rbp+8h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v13; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
    *(_DWORD *)a2 = 1;
  if ( a3 )
    *a3 = 0LL;
  v5 = *(_QWORD *)a1;
  v13 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel **))(v5 + 48))(
         a1,
         &v13);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C6,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)(unsigned int)v6,
      v10);
  v12 = 0;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *, int *))(*(_QWORD *)v13 + 56LL))(
         v13,
         &v12);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1CC,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)(unsigned int)v7,
      v10);
  if ( a2 )
    *(_DWORD *)a2 = v12;
  if ( a3 )
  {
    v8 = v13;
    v9 = 0LL;
    v13 = 0LL;
    *a3 = v8;
  }
  else
  {
    v9 = v13;
  }
  if ( v9 )
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *))(*(_QWORD *)v9 + 16LL))(v9);
}
