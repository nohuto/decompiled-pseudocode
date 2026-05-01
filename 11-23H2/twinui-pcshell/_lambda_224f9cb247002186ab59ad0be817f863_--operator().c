/*
 * XREFs of _lambda_224f9cb247002186ab59ad0be817f863_::operator() @ 0x18008EFB8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_224f9cb247002186ab59ad0be817f863___::Run @ 0x18008EF90 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_224f9cb247002186ab59ad0be817f863___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_224f9cb247002186ab59ad0be817f863_::operator()(_DWORD **a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rsi
  __int64 v4; // rcx
  int v5; // eax
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  char v9; // di
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  _BYTE *v15; // rdx
  int v16; // eax
  int v17; // eax
  int v19; // eax
  int v20; // eax
  int v21; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v23; // [rsp+30h] [rbp+8h] BYREF
  __int64 v24; // [rsp+38h] [rbp+10h] BYREF

  v24 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*a1 + 10) + 32LL))(*((_QWORD *)*a1 + 10));
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL);
  v4 = v24;
  v24 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = v3(v2, &v24);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x78,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v5,
      v21);
  v23 = 0LL;
  v6 = (__int64 *)*((_QWORD *)*a1 + 8);
  v7 = *v6;
  v23 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 88))(v6, &v23);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7B,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v8,
      v21);
  v9 = 0;
  if ( (*a1[1] & 1) != ((*a1)[24] & 1) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 152LL))(v23);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x81,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v10,
        v21);
  }
  v11 = *a1[1] & 2;
  if ( ((*a1[1] & 2) != 0) != (((*a1)[24] >> 1) & 1) )
  {
    LOBYTE(v11) = (_DWORD)v11 != 0;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 56LL))(v23, v11);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x86,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v12,
        v21);
    v9 = 1;
  }
  v13 = *a1[1] & 4;
  if ( ((*a1[1] & 4) != 0) != (((*a1)[24] >> 2) & 1) )
  {
    LOBYTE(v13) = (_DWORD)v13 != 0;
    v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 136LL))(v23, v13);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x8C,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v19,
        v21);
  }
  v14 = *a1[1] & 8;
  if ( ((*a1[1] & 8) != 0) == (((*a1)[24] >> 3) & 1) )
  {
    if ( !v9 )
      goto LABEL_14;
  }
  else
  {
    LOBYTE(v14) = (_DWORD)v14 != 0;
    v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 104LL))(v23, v14);
    if ( v20 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x91,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v20,
        v21);
  }
  v15 = a1[1];
  LOBYTE(v15) = (*v15 & 0xA) == 10;
  v16 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v23 + 88LL))(v23, v15);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x98,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v16,
      v21);
LABEL_14:
  v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 56LL))(v24, v14);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9B,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v17,
      v21);
  (*a1)[24] = *a1[1];
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
  return 0LL;
}
