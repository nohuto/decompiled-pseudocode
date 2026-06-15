/*
 * XREFs of ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18000C8A8
 * Callers:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180033D04 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x1800359F0 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18003A724 (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     __std_find_trivial_8 @ 0x18001FC20 (__std_find_trivial_8.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x180043298 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 *     memmove_0 @ 0x18004B3D8 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdRemoveActiveMediaApp(int a1, struct CApplication *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rdx
  unsigned __int64 i; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  struct TSSession *v11; // rdi
  __int64 trivial_8; // rax
  __int64 v13; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v15; // [rsp+40h] [rbp+8h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+58h] [rbp+20h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v17 = v4;
  v15 = a1;
  EnterCriticalSection(&stru_180067AF8);
  v16 = &stru_180067AF8;
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v5 = 0x100000001B3LL * (*((unsigned __int8 *)&v15 + i) ^ (unsigned __int64)v5);
  v7 = 2 * (qword_180067B50 & v5);
  v8 = *(_QWORD *)(qword_180067B38 + 8 * v7 + 8);
  if ( v8 == qword_180067B28 )
  {
LABEL_7:
    v8 = 0LL;
  }
  else
  {
    while ( a1 != *(_DWORD *)(v8 + 16) )
    {
      if ( v8 == *(_QWORD *)(qword_180067B38 + 8 * v7) )
        goto LABEL_7;
      v8 = *(_QWORD *)(v8 + 8);
    }
  }
  v9 = qword_180067B28;
  if ( v8 )
    v9 = v8;
  if ( v9 == qword_180067B28 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52E,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070490LL);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 2147943568LL;
  }
  else
  {
    v11 = *(struct TSSession **)(v9 + 24);
    LeaveCriticalSection(&stru_180067AF8);
    trivial_8 = _std_find_trivial_8(*((_QWORD *)v11 + 6), *((_QWORD *)v11 + 7), a2);
    v13 = *((_QWORD *)v11 + 7);
    if ( trivial_8 != v13 )
    {
      memmove_0((void *)trivial_8, (const void *)(trivial_8 + 8), v13 - (trivial_8 + 8));
      *((_QWORD *)v11 + 7) -= 8LL;
      TsSessionSendAppManagerNotification(v11);
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
}
