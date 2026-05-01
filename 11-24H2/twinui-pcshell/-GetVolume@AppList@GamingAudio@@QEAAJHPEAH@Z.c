/*
 * XREFs of ?GetVolume@AppList@GamingAudio@@QEAAJHPEAH@Z @ 0x180367574
 * Callers:
 *     ?GetVolume@GamingOverlayExperienceManager@@UEAAJHPEAH@Z @ 0x180350FF0 (-GetVolume@GamingOverlayExperienceManager@@UEAAJHPEAH@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18017E03C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180187DA4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall GamingAudio::AppList::GetVolume(GamingAudio::AppList *this, int a2, int *a3)
{
  __int64 *v6; // rdi
  __int64 *v7; // rbx
  __int64 v8; // rax
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v10 = 0LL;
  wil::EnterCriticalSection(&v10, (struct _RTL_CRITICAL_SECTION *)((char *)this + 112));
  v6 = (__int64 *)*((_QWORD *)this + 20);
  v7 = (__int64 *)*((_QWORD *)this + 21);
  while ( v6 != v7 )
  {
    if ( !*v6 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D5,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
        (const char *)0x80004003LL);
    v8 = *v6;
    if ( *v6 && a2 == *(_DWORD *)(v8 + 48) )
    {
      *a3 = (int)(float)(*(float *)(v8 + 64) * 100.0);
      break;
    }
    ++v6;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v10);
  return 0LL;
}
