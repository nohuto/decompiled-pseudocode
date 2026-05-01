/*
 * XREFs of ?GetFlyoutRectForLocationAndBorderFlag@CPeopleBarFlyoutExperienceManager@@AEAAJUPoint@Foundation@Windows@@PEAUtagRECT@@PEAW4Border@CSingleViewShellExperience@@@Z @ 0x180388440
 * Callers:
 *     ?UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x18038A4D0 (-UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z @ 0x1803881E0 (-AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPeopleBarFlyoutExperienceManager::GetFlyoutRectForLocationAndBorderFlag(
        __int64 a1,
        SIZE a2,
        RECT *a3,
        _DWORD *a4)
{
  LONG v6; // r15d
  LONG v7; // r12d
  HMONITOR v8; // r14
  unsigned int LastError; // ebx
  HRESULT v10; // eax
  __int64 v11; // rdx
  LPVOID v12; // rbx
  __int64 (__fastcall *v13)(LPVOID, SID *, GUID *, __int64 *); // rdi
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, HMONITOR, SID *, GUID *, int *); // rdi
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // eax
  CPeopleBarFlyoutExperienceManager *v20; // rcx
  UINT v21; // ebx
  signed int Error; // eax
  const char *v23; // r9
  RECT rcWork; // xmm6
  LONG v25; // eax
  LONG v26; // r8d
  LONG top; // ecx
  LONG v28; // eax
  int v30[2]; // [rsp+38h] [rbp-79h] BYREF
  SIZE windowSize; // [rsp+40h] [rbp-71h] BYREF
  int v32; // [rsp+48h] [rbp-69h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-61h] BYREF
  __int64 v34; // [rsp+58h] [rbp-59h] BYREF
  POINT anchorPoint; // [rsp+60h] [rbp-51h] BYREF
  RECT popupWindowPosition; // [rsp+68h] [rbp-49h] BYREF
  RECT rc; // [rsp+78h] [rbp-39h] BYREF
  RECT excludeRect; // [rsp+88h] [rbp-29h] BYREF
  struct tagMONITORINFO mi; // [rsp+98h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  windowSize = a2;
  *a3 = 0LL;
  v6 = (int)*(float *)&a2.cx;
  v7 = (int)*(float *)&a2.cy;
  rc.left = (int)*(float *)&a2.cx;
  rc.top = (int)*(float *)&a2.cy;
  rc.right = (int)*(float *)&a2.cx;
  rc.bottom = (int)*(float *)&a2.cy;
  v8 = MonitorFromRect(&rc, 0);
  if ( !v8 )
  {
    LastError = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x254,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
    return LastError;
  }
  *(_QWORD *)v30 = 0LL;
  v34 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  v10 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 0x404u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
  LastError = v10;
  if ( v10 < 0 )
  {
    v11 = 605LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
LABEL_38:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v30);
    return LastError;
  }
  v12 = ppv;
  v13 = *(__int64 (__fastcall **)(LPVOID, SID *, GUID *, __int64 *))(*(_QWORD *)ppv + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
  v10 = v13(v12, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v34);
  LastError = v10;
  if ( v10 < 0 )
  {
    v11 = 606LL;
    goto LABEL_9;
  }
  v14 = v34;
  v15 = *(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v34 + 72LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v30);
  v10 = v15(v14, v8, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, v30);
  LastError = v10;
  if ( v10 < 0 )
  {
    v11 = 609LL;
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
  v32 = 0;
  excludeRect = 0LL;
  v16 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v30 + 80LL))(*(_QWORD *)v30, &v32);
  LastError = v16;
  if ( v16 < 0 )
  {
    v17 = (unsigned int)v16;
    v18 = 616LL;
    goto LABEL_37;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, RECT *))(**(_QWORD **)v30 + 168LL))(*(_QWORD *)v30, &excludeRect);
  LastError = v19;
  if ( v19 < 0 )
  {
    v17 = (unsigned int)v19;
    v18 = 617LL;
    goto LABEL_37;
  }
  *a4 = 0;
  popupWindowPosition = 0LL;
  if ( v32 == -1 )
    goto LABEL_36;
  if ( v32 )
  {
    switch ( v32 )
    {
      case 1:
        v21 = 65540;
        *a4 = 13;
        break;
      case 2:
        v21 = 65560;
        *a4 = 11;
        break;
      case 3:
        v21 = 65572;
        *a4 = 7;
        break;
      default:
LABEL_36:
        LastError = -2147467263;
        v17 = 2147500033LL;
        v18 = 664LL;
        goto LABEL_37;
    }
  }
  else
  {
    v21 = 65552;
    *a4 = 14;
  }
  anchorPoint.x = v6;
  anchorPoint.y = v7;
  windowSize.cx = 320;
  windowSize.cy = 616;
  CPeopleBarFlyoutExperienceManager::AdjustSizeForScale(v20, &windowSize);
  if ( !CalculatePopupWindowPosition(&anchorPoint, &windowSize, v21, &excludeRect, &popupWindowPosition) )
  {
    Error = ResultFromKnownLastError();
    LastError = Error;
    if ( Error >= 0 )
      goto LABEL_38;
    v17 = (unsigned int)Error;
    v18 = 674LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)v17);
    goto LABEL_38;
  }
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  if ( !GetMonitorInfoW(v8, &mi) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x2A7,
                  (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
                  v23);
    goto LABEL_38;
  }
  rcWork = mi.rcWork;
  if ( popupWindowPosition.top >= mi.rcWork.top )
  {
    v26 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)mi.rcWork, 12));
    if ( popupWindowPosition.bottom > v26 )
    {
      OffsetRect(&popupWindowPosition, 0, v26 - popupWindowPosition.bottom);
      top = popupWindowPosition.top;
      v28 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcWork, 4));
      if ( popupWindowPosition.top < v28 )
        top = v28;
      popupWindowPosition.top = top;
    }
  }
  else
  {
    OffsetRect(&popupWindowPosition, 0, mi.rcWork.top - popupWindowPosition.top);
    v25 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcWork, 12));
    if ( popupWindowPosition.bottom > v25 )
      popupWindowPosition.bottom = v25;
  }
  *a3 = popupWindowPosition;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v30);
  return 0LL;
}
