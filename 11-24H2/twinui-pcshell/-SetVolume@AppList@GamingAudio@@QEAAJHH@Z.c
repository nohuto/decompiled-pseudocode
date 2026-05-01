/*
 * XREFs of ?SetVolume@AppList@GamingAudio@@QEAAJHH@Z @ 0x180368524
 * Callers:
 *     ?SetVolume@GamingOverlayExperienceManager@@UEAAJHH@Z @ 0x18035A930 (-SetVolume@GamingOverlayExperienceManager@@UEAAJHH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18017E03C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180187DA4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingAudio::AppList::SetVolume(GamingAudio::AppList *this, int a2)
{
  __int64 v4; // rdx
  __int64 *v5; // rdi
  __int64 *v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v14 = 0LL;
  wil::EnterCriticalSection(&v14, (struct _RTL_CRITICAL_SECTION *)((char *)this + 112));
  v5 = (__int64 *)*((_QWORD *)this + 20);
  v6 = (__int64 *)*((_QWORD *)this + 21);
  if ( v5 != v6 )
  {
    v7 = -2147467261;
    while ( 1 )
    {
      if ( !*v5 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1E8,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
          (const char *)0x80004003LL);
      v8 = *v5;
      if ( *v5 )
      {
        if ( a2 == *(_DWORD *)(v8 + 48) )
          break;
      }
      if ( ++v5 == v6 )
        goto LABEL_8;
    }
    v10 = *(_QWORD *)(v8 + 744);
    if ( !v10 )
    {
      v11 = 2147500035LL;
      v12 = 221LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
        (const char *)v11);
      goto LABEL_9;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v10 + 24LL))(v10, v4, 0LL);
    v7 = v13;
    if ( v13 < 0 )
    {
      v11 = (unsigned int)v13;
      v12 = 223LL;
      goto LABEL_12;
    }
  }
LABEL_8:
  v7 = 0;
LABEL_9:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
  return v7;
}
