/*
 * XREFs of ?ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ @ 0x1803596B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18017E03C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180187DA4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180206804 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x1802150E0 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetCurrentDisplayCoordinates@GamingOverlayExperienceManager@@UEAAJPEAH000@Z @ 0x18034ECF0 (-GetCurrentDisplayCoordinates@GamingOverlayExperienceManager@@UEAAJPEAH000@Z.c)
 *     ?UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x18035CFBC (-UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::ResetWindowRegion(GamingOverlayExperienceManager *this)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r9
  int CurrentDisplayCoordinates; // eax
  HRGN RectRgn; // rax
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, __int64 *); // rdi
  int updated; // eax
  __int64 v10; // rdx
  __int64 v11; // r9
  int v13; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+34h] [rbp-3Ch] BYREF
  int v15; // [rsp+38h] [rbp-38h] BYREF
  int v16; // [rsp+3Ch] [rbp-34h] BYREF
  HWND hWnd; // [rsp+40h] [rbp-30h] BYREF
  HRGN hRgn; // [rsp+48h] [rbp-28h] BYREF
  __int64 v19; // [rsp+50h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v20 = 0LL;
  wil::EnterCriticalSection(&v20, (struct _RTL_CRITICAL_SECTION *)((char *)this + 456));
  if ( *((_QWORD *)this + 35) )
  {
    v16 = 0;
    v14 = 0;
    v15 = 0;
    v13 = 0;
    CurrentDisplayCoordinates = GamingOverlayExperienceManager::GetCurrentDisplayCoordinates(
                                  this,
                                  &v16,
                                  &v14,
                                  &v15,
                                  &v13);
    v2 = CurrentDisplayCoordinates;
    if ( CurrentDisplayCoordinates < 0 )
    {
      v4 = (unsigned int)CurrentDisplayCoordinates;
      v3 = 514LL;
      goto LABEL_5;
    }
    hRgn = 0LL;
    RectRgn = CreateRectRgn(0, 0, v15 - v16, v13 - v14);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&hRgn,
      RectRgn);
    if ( !hRgn )
    {
      v2 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x208,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)0x8007000ELL);
LABEL_8:
      wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hRgn);
      goto LABEL_22;
    }
    v7 = *((_QWORD *)this + 35);
    v19 = 0LL;
    v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    updated = v8(v7, &v19);
    v2 = updated;
    if ( updated >= 0 )
    {
      hWnd = 0LL;
      updated = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v19 + 24LL))(v19, &hWnd);
      v2 = updated;
      if ( updated >= 0 )
      {
        if ( !hWnd )
        {
          v2 = -2147418113;
          v10 = 529LL;
          v11 = 2147549183LL;
          goto LABEL_12;
        }
        if ( !SetWindowRgn(hWnd, hRgn, 1) )
        {
          v2 = -2147467259;
          v10 = 532LL;
          v11 = 2147500037LL;
          goto LABEL_12;
        }
        hRgn = 0LL;
        updated = GamingOverlayExperienceManager::UpdateOverlayDisplayModeFullscreen(
                    (GamingOverlayExperienceManager *)((char *)this - 136),
                    1);
        v2 = updated;
        if ( updated >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
          wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hRgn);
          v2 = 0;
          goto LABEL_22;
        }
        v10 = 537LL;
      }
      else
      {
        v10 = 528LL;
      }
    }
    else
    {
      v10 = 524LL;
    }
    v11 = (unsigned int)updated;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    goto LABEL_8;
  }
  v2 = -2147418113;
  v3 = 510LL;
  v4 = 2147549183LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)v4);
LABEL_22:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v20);
  return v2;
}
