/*
 * XREFs of _lambda_0190d4b48233ee3d7e5c167dfa5e03d8_::operator() @ 0x1801E8E4C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0190d4b48233ee3d7e5c167dfa5e03d8___::Run @ 0x1801EF030 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0190d4b48233ee3d7e5c167dfa5e03d8___--Run.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BA4B8 (-Stop@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     ??0UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@AEBV01@@Z @ 0x1800BA978 (--0UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@AEB.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800BAF48 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1800BB0EC (--1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800BBDE4 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x180197958 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_0190d4b48233ee3d7e5c167dfa5e03d8_::operator()(__int64 a1)
{
  HRGN RectRgnIndirect; // rax
  HRGN v3; // rax
  const char *v4; // r9
  int v5; // edx
  const char *v6; // r9
  HRGN hrgnDst; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v8[3]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+60h] [rbp-A0h]
  int v10; // [rsp+68h] [rbp-98h]
  __int64 v11; // [rsp+70h] [rbp-90h]
  _BYTE v12[48]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v13; // [rsp+B0h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::UndockedSearchAppExperienceManager_SetWindowRgn(
    (SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)v12,
    (const struct SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)(a1 + 40));
  if ( *v13 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v8,
      (struct wil::details::IFailureCallback *)v12,
      (const struct wil::details::StoredCallContextInfo *)(v13 + 10));
  }
  else
  {
    memset(v8, 0, sizeof(v8));
    v9 = 0LL;
    v10 = 0;
    v11 = 0LL;
  }
  hrgnDst = 0LL;
  RectRgnIndirect = CreateRectRgnIndirect((const RECT *)(a1 + 8));
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
    (void **)&hrgnDst,
    RectRgnIndirect);
  if ( !IsRectEmpty((const RECT *)(a1 + 8)) && !IsRectEmpty((const RECT *)(a1 + 24)) )
  {
    v3 = CreateRectRgnIndirect((const RECT *)(a1 + 24));
    if ( !CombineRgn(hrgnDst, hrgnDst, v3, 4) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x26E,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        v4);
  }
  if ( !SetWindowRgn(*(HWND *)a1, hrgnDst, 1) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x271,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v6);
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v12,
    v5);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v8);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::~UndockedSearchAppExperienceManager_SetWindowRgn((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)v12);
}
