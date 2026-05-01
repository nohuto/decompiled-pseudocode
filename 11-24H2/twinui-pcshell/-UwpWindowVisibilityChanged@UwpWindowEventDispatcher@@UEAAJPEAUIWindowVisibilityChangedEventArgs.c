/*
 * XREFs of ?UwpWindowVisibilityChanged@UwpWindowEventDispatcher@@UEAAJPEAUIWindowVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180185930
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall UwpWindowEventDispatcher::UwpWindowVisibilityChanged(
        UwpWindowEventDispatcher *this,
        __int64 (***a2)(void))
{
  __int64 (**v4)(void); // rax
  __int64 (*v5)(void); // rax
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64 *); // rdi
  int v14; // eax
  int v15; // eax
  RTL_SRWLOCK *v16; // rbx
  int v17; // edi
  __int64 v18; // rsi
  _QWORD *v19; // r14
  _QWORD *v20; // r15
  __int64 v21; // rcx
  const char *v22; // r9
  __int64 result; // rax
  __int64 v24; // [rsp+20h] [rbp-68h] BYREF
  __int64 v25; // [rsp+28h] [rbp-60h] BYREF
  int v26; // [rsp+30h] [rbp-58h]
  __int64 *v27; // [rsp+38h] [rbp-50h]
  __int64 v28; // [rsp+40h] [rbp-48h] BYREF
  __int64 v29; // [rsp+48h] [rbp-40h]
  __int64 v30; // [rsp+50h] [rbp-38h]
  char *v31; // [rsp+58h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v33; // [rsp+98h] [rbp+10h] BYREF
  int v34; // [rsp+A0h] [rbp+18h] BYREF
  int v35; // [rsp+A8h] [rbp+20h] BYREF

  v26 = 0;
  v4 = *a2;
  v27 = 0LL;
  v5 = *v4;
  try
  {
    v6 = v5();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x546,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        v24);
    v25 = 0LL;
    v7 = *v27;
    v25 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 48))(v27, &v25);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x549,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v8,
        v24);
    v35 = 0;
    v9 = ((__int64 (__fastcall *)(__int64 (***)(void), int *))(*a2)[6])(a2, &v35);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x54C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v9,
        v24);
    v33 = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v25 + 80LL))(v25, &v33);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x54F,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v10,
        v24);
    v24 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 38) + 56LL))(*((_QWORD *)this + 38), &v28);
    v12 = *(_QWORD *)v11;
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(**(_QWORD **)v11 + 112LL);
    v24 = 0LL;
    v14 = v13(v12, v33, &v24);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x552,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v14,
        v24);
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    if ( !v24 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x553,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)0x80070057LL,
        0);
    v34 = 0;
    v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 48LL))(v24, &v34);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x556,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v15,
        v24);
    v30 = 0LL;
    v16 = (RTL_SRWLOCK *)((char *)this + 472);
    AcquireSRWLockShared((PSRWLOCK)this + 59);
    v31 = (char *)this + 472;
    v17 = v34;
    v18 = 0LL;
    v29 = 0LL;
    v26 = 2;
    v19 = (_QWORD *)*((_QWORD *)this + 46);
    v20 = (_QWORD *)*((_QWORD *)this + 47);
    while ( v19 != v20 )
    {
      if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v19 + 288LL))(*v19, &v28) == v17 )
      {
        v21 = *v19;
        v18 = v21;
        v29 = *v19;
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
        break;
      }
      ++v19;
    }
    v30 = v18;
    if ( !v18 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x55C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)0x80070490LL,
        v24);
    if ( v16 )
      ReleaseSRWLockShared(v16);
    (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)v18 + 320LL))(v18, 1LL, v35 == 1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v27 )
      (*(void (__fastcall **)(__int64 *))(*v27 + 16))(v27);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x564,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v22);
  }
  return result;
}
