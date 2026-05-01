/*
 * XREFs of ?GetCurrentDisplayCoordinates@GamingOverlayExperienceManager@@UEAAJPEAH000@Z @ 0x18034ECF0
 * Callers:
 *     ?ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180359500 (-ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ @ 0x1803596B0 (-ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18017E03C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180187DA4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetDisplayMonitors@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAH@Z @ 0x18023DD00 (-GetDisplayMonitors@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAU-$IVectorView@PEAUHSTRING__@@@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetCurrentDisplayCoordinates(
        GamingOverlayExperienceManager *this,
        int *a2,
        int *a3,
        int *a4,
        int *a5)
{
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r9
  int DisplayMonitors; // eax
  __int64 v14; // rax
  unsigned __int64 v15; // xmm0_8
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( a2 )
  {
    if ( !a3 )
    {
      v9 = 550LL;
      goto LABEL_3;
    }
    if ( !a4 )
    {
      v9 = 551LL;
      goto LABEL_3;
    }
    if ( !a5 )
    {
      v9 = 552LL;
      goto LABEL_3;
    }
    v17 = 0LL;
    wil::EnterCriticalSection(&v17, (struct _RTL_CRITICAL_SECTION *)((char *)this + 456));
    if ( *((_QWORD *)this + 36) )
    {
      if ( *((_DWORD *)this + 346) != -1
        || (DisplayMonitors = GamingOverlayExperienceManager::GetDisplayMonitors(
                                (__int64)this,
                                *((HWND *)this + 177),
                                0LL,
                                0LL),
            v10 = DisplayMonitors,
            DisplayMonitors >= 0) )
      {
        v14 = *(_QWORD *)((char *)this + 1388);
        v15 = _mm_srli_si128(*(__m128i *)((char *)this + 1388), 8).m128i_u64[0];
        *a2 = v14;
        *a3 = HIDWORD(v14);
        *a4 = v15;
        *a5 = HIDWORD(v15);
        v10 = 0;
        goto LABEL_17;
      }
      v12 = (unsigned int)DisplayMonitors;
      v11 = 562LL;
    }
    else
    {
      v10 = -2147418113;
      v11 = 556LL;
      v12 = 2147549183LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)v12);
LABEL_17:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
    return v10;
  }
  v9 = 549LL;
LABEL_3:
  v10 = -2147467261;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)0x80004003LL);
  return v10;
}
