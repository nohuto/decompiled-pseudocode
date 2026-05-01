/*
 * XREFs of ?PushWindowVisibility@UwpWindowManagerBridge@@AEAAXPEAUIUwpWindowWrapperInternal@@_N@Z @ 0x18001A844
 * Callers:
 *     _lambda_39a728035cbc11bf105c92e6056dabb4_::operator() @ 0x18001FB28 (_lambda_39a728035cbc11bf105c92e6056dabb4_--operator().c)
 * Callees:
 *     ?IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18001AAA8 (-IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall UwpWindowManagerBridge::PushWindowVisibility(
        UwpWindowManagerBridge *this,
        struct IUwpWindowWrapperInternal *a2,
        unsigned __int8 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  unsigned int v7; // r15d
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD, _QWORD, __int64 *); // r14
  int v10; // eax
  Windows::Internal::ApplicationModel::WindowManagement *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, _QWORD, _QWORD, __int64 *); // rdi
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v23; // [rsp+78h] [rbp+38h] BYREF
  __int64 v24; // [rsp+88h] [rbp+48h] BYREF

  v3 = a3;
  v23 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 256LL))(a2);
  if ( !v23 )
  {
    v17 = *(_QWORD *)a2;
    v24 = 0LL;
    v18 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *, __int64 *))(v17 + 248))(a2, &v24);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x16E,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v18,
        v21);
    v19 = v24;
    if ( v24 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v24 + 80LL))(v24, &v23);
      if ( v20 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x172,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v20,
          v21);
      v19 = v24;
    }
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( v23 )
  {
    v6 = 0LL;
    v24 = 0LL;
    v7 = v3;
    v8 = *((_QWORD *)this + 21);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v6 = v24;
    }
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v8 + 136LL);
    v24 = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v10 = v9(v8, v23, v7, &v24);
    v11 = retaddr;
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x17A,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v10,
        v21);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( !Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagementInProcEnabled(v11)
      || (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 224LL))(a2) == 1 )
    {
      v12 = v24;
      v24 = 0LL;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v13 = *((_QWORD *)this + 6);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v14 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v13 + 224LL);
      v15 = v24;
      v24 = 0LL;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v16 = v14(v13, v23, v7, &v24);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x182,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v16,
          v21);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
}
