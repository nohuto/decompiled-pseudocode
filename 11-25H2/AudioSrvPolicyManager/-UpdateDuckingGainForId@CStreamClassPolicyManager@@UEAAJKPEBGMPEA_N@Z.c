/*
 * XREFs of ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x180014080
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B218 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180041534 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamClassPolicyManager::UpdateDuckingGainForId(
        CStreamClassPolicyManager *this,
        DWORD a2,
        const unsigned __int16 *a3,
        float a4,
        bool *a5)
{
  bool *v7; // rsi
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 i; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct TSSession *v20; // rbx
  _QWORD *j; // rbx
  _QWORD *v22; // rcx
  int v24[2]; // [rsp+20h] [rbp-48h] BYREF
  struct TSSession *v25; // [rsp+28h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  DWORD v28; // [rsp+80h] [rbp+18h]

  v7 = a5;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  *(_QWORD *)v24 = v8;
  if ( !a3 )
  {
    v9 = -2147024809;
    v10 = 2174LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)v9);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v24);
    return v9;
  }
  v28 = a2;
  v25 = 0LL;
  EnterCriticalSection(&stru_180067AF8);
  v26 = &stru_180067AF8;
  v11 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v11 = 0x100000001B3LL * (*((unsigned __int8 *)&v28 + i) ^ (unsigned __int64)v11);
  v13 = 2 * (qword_180067B50 & v11);
  v14 = *(_QWORD *)(qword_180067B38 + 8 * v13 + 8);
  if ( v14 == qword_180067B28 )
  {
LABEL_10:
    v14 = 0LL;
  }
  else
  {
    while ( a2 != *(_DWORD *)(v14 + 16) )
    {
      if ( v14 == *(_QWORD *)(qword_180067B38 + 8 * v13) )
        goto LABEL_10;
      v14 = *(_QWORD *)(v14 + 8);
    }
  }
  v15 = qword_180067B28;
  if ( v14 )
    v15 = v14;
  if ( v15 == qword_180067B28 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v26);
    v16 = TsSessionCreate(a2, &v25);
    v9 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43A,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v16);
      v10 = 2177LL;
      goto LABEL_3;
    }
    v20 = v25;
  }
  else
  {
    v20 = *(struct TSSession **)(v15 + 24);
    LeaveCriticalSection(&stru_180067AF8);
  }
  for ( j = (_QWORD *)*((_QWORD *)v20 + 133); j; j = (_QWORD *)*j )
  {
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(j[1], v17, v18, v19) )
      v22 = (_QWORD *)*v22;
    if ( !(unsigned int)_o__wcsicmp(v22, a3) )
    {
      if ( *(float *)(*(_QWORD *)(j[1] + 32LL) + 8LL) == a4 )
      {
        *v7 = 0;
      }
      else
      {
        *v7 = 1;
        *(float *)(*(_QWORD *)(j[1] + 32LL) + 8LL) = a4;
      }
      if ( v8 )
        LeaveCriticalSection(v8);
      return 0;
    }
  }
  v9 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x886,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)0x80070057LL);
  if ( v8 )
    LeaveCriticalSection(v8);
  return v9;
}
