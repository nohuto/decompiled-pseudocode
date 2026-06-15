/*
 * XREFs of ?GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z @ 0x180015360
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180041534 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CProcess::GetEndpointVolumeOverridePolicyVolume(CProcess *this, const unsigned __int16 *a2)
{
  DWORD v3; // ebx
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rcx
  unsigned __int64 i; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  float v12; // xmm6_4
  struct TSSession *v13; // rbx
  double v14; // xmm0_8
  int v16[2]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD v18; // [rsp+60h] [rbp+8h]
  struct TSSession *v19; // [rsp+70h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+78h] [rbp+20h] BYREF

  v3 = *((_DWORD *)this + 41);
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v19 = 0LL;
  *(_QWORD *)v16 = v4;
  v18 = v3;
  EnterCriticalSection(&stru_180067AF8);
  v5 = 0xCBF29CE484222325uLL;
  v20 = &stru_180067AF8;
  for ( i = 0LL; i < 4; ++i )
  {
    v7 = *((unsigned __int8 *)&v18 + i);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  v8 = 2 * (qword_180067B50 & v5);
  v9 = *(_QWORD *)(qword_180067B38 + 8 * v8 + 8);
  if ( v9 == qword_180067B28 )
  {
LABEL_7:
    v9 = 0LL;
  }
  else
  {
    while ( v3 != *(_DWORD *)(v9 + 16) )
    {
      if ( v9 == *(_QWORD *)(qword_180067B38 + 8 * v8) )
        goto LABEL_7;
      v9 = *(_QWORD *)(v9 + 8);
    }
  }
  v10 = qword_180067B28;
  if ( v9 )
    v10 = v9;
  if ( v10 == qword_180067B28 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v20);
    v11 = TsSessionCreate(v3, &v19);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43A,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v11);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v16);
      return FLOAT_1_0;
    }
    v13 = v19;
  }
  else
  {
    v13 = *(struct TSSession **)(v10 + 24);
    LeaveCriticalSection(&stru_180067AF8);
  }
  v14 = (*(double (__fastcall **)(_QWORD, const unsigned __int16 *))(**((_QWORD **)v13 + 130) + 24LL))(
          *((_QWORD *)v13 + 130),
          a2);
  v12 = *(float *)&v14;
  if ( v4 )
    LeaveCriticalSection(v4);
  return v12;
}
