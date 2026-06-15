/*
 * XREFs of ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18000C620
 * Callers:
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x1800359F0 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?OnPlayToStreamStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0006@@@Z @ 0x18003ABE8 (-OnPlayToStreamStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv.c)
 *     ?ReevaluateActiveMediaAppStatusForApplication@CApplicationManager@@IEAAXPEAVCApplication@@@Z @ 0x18003B334 (-ReevaluateActiveMediaAppStatusForApplication@CApplicationManager@@IEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     ?HasPlayToStreams@CApplication@@QEAAHXZ @ 0x180003F74 (-HasPlayToStreams@CApplication@@QEAAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180013D00 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     __std_find_trivial_8 @ 0x18001FC20 (__std_find_trivial_8.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180041BE8 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x180043298 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 *     memmove_0 @ 0x18004B3D8 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CApplicationManager::UpdateActiveMediaAppForSession(
        CApplicationManager *this,
        struct CApplication *a2,
        int a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // r14
  unsigned int v6; // ebp
  int v7; // esi
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  int v10; // esi
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  int v13; // ebx
  int HasPlayToStreams; // eax
  struct _RTL_CRITICAL_SECTION *v15; // rbx
  __int64 v16; // rcx
  unsigned __int64 i; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  struct TSSession *v21; // rsi
  __int64 trivial_8; // rax
  __int64 v23; // r8
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v25; // [rsp+60h] [rbp+8h]
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+68h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+78h] [rbp+20h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v27 = v5;
  v6 = *((_DWORD *)a2 + 53);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
  v7 = 0;
  v8 = (_QWORD *)*((_QWORD *)a2 + 9);
  while ( v8 )
  {
    v9 = v8[2];
    v8 = (_QWORD *)*v8;
    if ( !*(_DWORD *)(v9 + 416) && *(_DWORD *)(v9 + 496) )
    {
      v7 = 1;
      break;
    }
  }
  if ( a2 != (struct CApplication *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
  if ( v7 && *((_DWORD *)a2 + 52) )
    goto LABEL_19;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
  v10 = 0;
  v11 = (_QWORD *)*((_QWORD *)a2 + 9);
  while ( v11 )
  {
    v12 = v11[2];
    v11 = (_QWORD *)*v11;
    if ( !*(_DWORD *)(v12 + 416) && *(_DWORD *)(v12 + 500) )
    {
      v10 = 1;
      break;
    }
  }
  if ( a2 != (struct CApplication *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
  if ( v10 && (unsigned int)CApplication::IsBackgroundAudioCapable(a2) )
LABEL_19:
    v13 = 1;
  else
    v13 = 0;
  if ( a3 || (HasPlayToStreams = CApplication::HasPlayToStreams(a2)) != 0 )
    HasPlayToStreams = 1;
  if ( !v13 || HasPlayToStreams )
  {
    v15 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    v25 = v6;
    EnterCriticalSection(&stru_180067AF8);
    v26 = &stru_180067AF8;
    v16 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 4; ++i )
      v16 = 0x100000001B3LL * (*((unsigned __int8 *)&v25 + i) ^ (unsigned __int64)v16);
    v18 = 2 * (qword_180067B50 & v16);
    v19 = *(_QWORD *)(qword_180067B38 + 8 * v18 + 8);
    if ( v19 == qword_180067B28 )
    {
LABEL_33:
      v19 = 0LL;
    }
    else
    {
      while ( v6 != *(_DWORD *)(v19 + 16) )
      {
        if ( v19 == *(_QWORD *)(qword_180067B38 + 8 * v18) )
          goto LABEL_33;
        v19 = *(_QWORD *)(v19 + 8);
      }
    }
    v20 = qword_180067B28;
    if ( v19 )
      v20 = v19;
    if ( v20 == qword_180067B28 )
    {
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v26);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x52E,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)0x80070490LL);
    }
    else
    {
      v21 = *(struct TSSession **)(v20 + 24);
      LeaveCriticalSection(&stru_180067AF8);
      trivial_8 = _std_find_trivial_8(*((_QWORD *)v21 + 6), *((_QWORD *)v21 + 7), a2);
      v23 = *((_QWORD *)v21 + 7);
      if ( trivial_8 != v23 )
      {
        memmove_0((void *)trivial_8, (const void *)(trivial_8 + 8), v23 - (trivial_8 + 8));
        *((_QWORD *)v21 + 7) -= 8LL;
        TsSessionSendAppManagerNotification(v21);
      }
    }
    if ( v15 )
      LeaveCriticalSection(v15);
  }
  else
  {
    TsSessionIdAddActiveMediaApp(v6, a2);
  }
  if ( v5 )
    LeaveCriticalSection(v5);
}
