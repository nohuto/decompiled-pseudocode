/*
 * XREFs of ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180002250
 * Callers:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180031324 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180033010 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180038194 (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __std_find_trivial_8 @ 0x18001FCD0 (__std_find_trivial_8.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x180040A78 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 *     memmove_0 @ 0x180048BB8 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdRemoveActiveMediaApp(int a1, struct CApplication *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // r9
  __int64 v6; // rdx
  unsigned __int64 i; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct TSSession *v12; // rdi
  __int64 trivial_8; // rax
  __int64 v14; // r8
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v17; // [rsp+40h] [rbp+8h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+58h] [rbp+20h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v19 = v4;
  v17 = a1;
  EnterCriticalSection(&stru_180064A78);
  v18 = &stru_180064A78;
  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)&v17 + i) ^ (unsigned __int64)v6);
  v8 = 2 * (qword_180064AD0 & v6);
  v9 = *(_QWORD *)(qword_180064AB8 + 8 * v8 + 8);
  if ( v9 == qword_180064AA8 )
  {
LABEL_8:
    v9 = 0LL;
  }
  else
  {
    v5 = *(_QWORD *)(qword_180064AB8 + 8 * v8);
    while ( a1 != *(_DWORD *)(v9 + 16) )
    {
      if ( v9 == v5 )
        goto LABEL_8;
      v9 = *(_QWORD *)(v9 + 8);
    }
  }
  v10 = qword_180064AA8;
  if ( v9 )
    v10 = v9;
  if ( v10 == qword_180064AA8 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(
      &v18,
      v8,
      qword_180064AA8,
      v5);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52E,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070490LL,
      v15);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 2147943568LL;
  }
  else
  {
    v12 = *(struct TSSession **)(v10 + 24);
    LeaveCriticalSection(&stru_180064A78);
    trivial_8 = _std_find_trivial_8(*((_QWORD *)v12 + 6), *((_QWORD *)v12 + 7), a2);
    v14 = *((_QWORD *)v12 + 7);
    if ( trivial_8 != v14 )
    {
      memmove_0((void *)trivial_8, (const void *)(trivial_8 + 8), v14 - (trivial_8 + 8));
      *((_QWORD *)v12 + 7) -= 8LL;
      TsSessionSendAppManagerNotification(v12);
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
}
