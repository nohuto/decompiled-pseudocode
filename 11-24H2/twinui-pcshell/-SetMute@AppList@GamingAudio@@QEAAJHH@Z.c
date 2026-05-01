/*
 * XREFs of ?SetMute@AppList@GamingAudio@@QEAAJHH@Z @ 0x1803683D8
 * Callers:
 *     ?SetMute@GamingOverlayExperienceManager@@UEAAJHH@Z @ 0x18035A860 (-SetMute@GamingOverlayExperienceManager@@UEAAJHH@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18017E03C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180187DA4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?SetMute@SessionInfoItem@GamingAudio@@QEAAJH@Z @ 0x180368494 (-SetMute@SessionInfoItem@GamingAudio@@QEAAJH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingAudio::AppList::SetMute(GamingAudio::AppList *this, int a2, int a3)
{
  GamingAudio::SessionInfoItem **v6; // rdi
  GamingAudio::SessionInfoItem **v7; // rbx
  GamingAudio::SessionInfoItem *v8; // rcx
  unsigned int v9; // ebx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v11 = 0LL;
  wil::EnterCriticalSection(&v11, (struct _RTL_CRITICAL_SECTION *)((char *)this + 112));
  v6 = (GamingAudio::SessionInfoItem **)*((_QWORD *)this + 20);
  v7 = (GamingAudio::SessionInfoItem **)*((_QWORD *)this + 21);
  while ( 1 )
  {
    if ( v6 == v7 )
    {
      v9 = 0;
      goto LABEL_9;
    }
    if ( !*v6 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x20D,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
        (const char *)0x80004003LL);
    v8 = *v6;
    if ( *v6 )
    {
      if ( a2 == *((_DWORD *)v8 + 12) )
        break;
    }
    ++v6;
  }
  v9 = GamingAudio::SessionInfoItem::SetMute(v8, a3);
LABEL_9:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
  return v9;
}
