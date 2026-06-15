/*
 * XREFs of ?FindReusableGroupingParam@CProcess@@UEAA?AU_GUID@@PEBU2@@Z @ 0x180031E30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002B05C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ForEachSession@UIAudioSessionInfo@@@CProcess@@IEAAJ$$QEAV?$function@$$A6AXPEAUIAudioSessionInfo@@PEA_N@Z@std@@@Z @ 0x18002F63C (--$ForEachSession@UIAudioSessionInfo@@@CProcess@@IEAAJ$$QEAV-$function@$$A6AXPEAUIAudioSessionIn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _GUID *__fastcall CProcess::FindReusableGroupingParam(
        CProcess *this,
        struct _GUID *__return_ptr retstr,
        const struct _GUID *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v7; // r8
  const char *v8; // r9
  __int64 v9; // rcx
  int v10; // eax
  __int64 (__fastcall ***v11)(); // rdx
  GUID v12; // xmm0
  unsigned int v14; // [rsp+20h] [rbp-39h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+28h] [rbp-31h] BYREF
  __int128 v16; // [rsp+30h] [rbp-29h]
  GUID v17; // [rsp+40h] [rbp-19h] BYREF
  __int64 (__fastcall **v18)(); // [rsp+50h] [rbp-9h] BYREF
  __int128 v19; // [rsp+58h] [rbp-1h]
  __int64 (__fastcall ***v20)(); // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v15 = v3;
  v9 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 - *(_QWORD *)&a3->Data1;
  if ( *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 == *(_QWORD *)&a3->Data1 )
    v9 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 - *(_QWORD *)a3->Data4;
  v17 = GUID_00000000_0000_0000_0000_000000000000;
  v14 = v9 != 0;
  *(_QWORD *)&v16 = &v14;
  *((_QWORD *)&v16 + 1) = &v17;
  v18 = off_180050B28;
  v20 = &v18;
  v19 = v16;
  v10 = CProcess::ForEachSession<IAudioSessionInfo>((__int64)this, (__int64)&v18, v7, v8);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      4415LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v10);
  if ( v20 )
  {
    v11 = &v18;
    LOBYTE(v11) = v20 != &v18;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v20)[4])(v20, v11);
  }
  if ( v14 > 1 )
    v12 = GUID_00000000_0000_0000_0000_000000000000;
  else
    v12 = v17;
  *retstr = v12;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v15);
  return retstr;
}
