/*
 * XREFs of ?IsScreenReaderProcess@CProcess@@UEAA_NXZ @ 0x1800169C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __std_find_trivial_4 @ 0x18001FC10 (__std_find_trivial_4.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18003ED14 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 */

char __fastcall CProcess::IsScreenReaderProcess(CProcess *this)
{
  unsigned int v1; // ebp
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  DWORD v3; // edi
  char v4; // bl
  __int64 v5; // rcx
  unsigned __int64 i; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  struct TSSession *v12; // rdi
  bool v13; // di
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v16; // [rsp+50h] [rbp+8h]
  struct TSSession *v17; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+60h] [rbp+18h] BYREF

  v1 = *((_DWORD *)this + 40);
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  v3 = *((_DWORD *)this + 41);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v4 = 0;
  v16 = v3;
  v17 = 0LL;
  EnterCriticalSection(&stru_180064A78);
  v5 = 0xCBF29CE484222325uLL;
  v18 = &stru_180064A78;
  for ( i = 0LL; i < 4; ++i )
  {
    v7 = *((unsigned __int8 *)&v16 + i);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  v8 = 2 * (qword_180064AD0 & v5);
  v9 = *(_QWORD *)(qword_180064AB8 + 8 * v8 + 8);
  if ( v9 == qword_180064AA8 )
  {
LABEL_7:
    v9 = 0LL;
  }
  else
  {
    while ( v3 != *(_DWORD *)(v9 + 16) )
    {
      if ( v9 == *(_QWORD *)(qword_180064AB8 + 8 * v8) )
        goto LABEL_7;
      v9 = *(_QWORD *)(v9 + 8);
    }
  }
  v10 = qword_180064AA8;
  if ( v9 )
    v10 = v9;
  if ( v10 == qword_180064AA8 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
    v11 = TsSessionCreate(v3, &v17);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43A,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v11);
      if ( v2 )
        LeaveCriticalSection(v2);
      return v4;
    }
    v12 = v17;
  }
  else
  {
    v12 = *(struct TSSession **)(v10 + 24);
    LeaveCriticalSection(&stru_180064A78);
  }
  v13 = _std_find_trivial_4(*((_QWORD *)v12 + 123), *((_QWORD *)v12 + 124), v1) != *((_QWORD *)v12 + 124);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v13;
}
