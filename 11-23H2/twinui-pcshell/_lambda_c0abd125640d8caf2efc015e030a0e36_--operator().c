/*
 * XREFs of _lambda_c0abd125640d8caf2efc015e030a0e36_::operator() @ 0x1800EBB58
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c0abd125640d8caf2efc015e030a0e36___::Run @ 0x1800EBB30 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_c0abd125640d8caf2efc015e030a0e36___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009EEE0 (-CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel.c)
 *     ??$try_query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009F094 (--$try_query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_.c)
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1800A03FC (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800EBDE4 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_c0abd125640d8caf2efc015e030a0e36_::operator()(unsigned int **a1)
{
  int v2; // eax
  int v3; // eax
  unsigned int **v4; // rdi
  LayoutCompletedHelper *v6; // rsi
  unsigned int *v7; // r8
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  void (__fastcall ***v18)(_QWORD, GUID *, _QWORD *); // [rsp+20h] [rbp-38h] BYREF
  __int64 v19[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+68h] [rbp+10h] BYREF
  __int64 v23; // [rsp+70h] [rbp+18h] BYREF
  __int64 v24; // [rsp+78h] [rbp+20h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)*a1 + 14) + 80LL))(
         *((_QWORD *)*a1 + 14),
         *a1 + 30);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x83,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v2,
      (int)v18);
  v19[1] = 0LL;
  v3 = Windows::Internal::String::Initialize((Windows::Internal::String *)(*a1 + 78), (HSTRING *)a1[1]);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x86,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v3,
      (int)v18);
  v4 = a1 + 2;
  if ( *((_QWORD *)*a1 + 16) )
  {
    v6 = (LayoutCompletedHelper *)(int)**v4;
    EnumPropsExW((HWND)v6, (PROPENUMPROCEXW)LightweightPropertySet::s_PropEnumCallback, (LPARAM)(*a1 + 50));
    if ( IsWindowVisible((HWND)v6) )
    {
      v7 = *a1;
      v7[74] = **v4;
      UwpWindowReadyState::SetWindow((__int64)(v7 + 90), v6, *a1[3]);
    }
  }
  UwpWindowWrapperBase::CachePersistingStateName((__int64)*a1, **v4);
  if ( *a1[3] == 1 )
  {
    v8 = (__int64 *)*((_QWORD *)*a1 + 16);
    if ( v8 )
    {
      v18 = 0LL;
      v9 = *v8;
      v18 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64 *, void (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(v9 + 48))(v8, &v18);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x9E,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v10,
          (int)v18);
      wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::try_query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
        &v18,
        v19);
      if ( v19[0] )
      {
        v24 = 0LL;
        v11 = *(_QWORD *)v19[0];
        v24 = 0LL;
        v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v11 + 112))(v19[0], &v24);
        if ( v12 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xA5,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)(unsigned int)v12,
            (int)v18);
        v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 48LL))(v24, &v21);
        if ( v13 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xA8,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)(unsigned int)v13,
            (int)v18);
        if ( v21 )
        {
          v14 = (__int64)*a1;
          *(_DWORD *)(v14 + 472) = v21;
          *(_BYTE *)(v14 + 476) = 1;
        }
        v23 = 0LL;
        v15 = *(_QWORD *)v19[0];
        v23 = 0LL;
        v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v15 + 528))(v19[0], &v23);
        if ( v16 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xB1,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)(unsigned int)v16,
            (int)v18);
        v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 216LL))(v23, &v22);
        if ( v17 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xB4,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)(unsigned int)v17,
            (int)v18);
        if ( v22 )
          *(_WORD *)((char *)*a1 + 477) = 1;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v19);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
    }
  }
  WindowsDeleteString(0LL);
  return 0LL;
}
