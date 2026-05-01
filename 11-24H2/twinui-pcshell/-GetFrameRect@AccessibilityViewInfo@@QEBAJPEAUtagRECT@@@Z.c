/*
 * XREFs of ?GetFrameRect@AccessibilityViewInfo@@QEBAJPEAUtagRECT@@@Z @ 0x18048F594
 * Callers:
 *     ?OnChromeOffsetsChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1801E5AF0 (-OnChromeOffsetsChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnPositionChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18048FAB0 (-OnPositionChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibilityViewInfo::GetFrameRect(AccessibilityViewInfo *this, struct tagRECT *a2)
{
  __int64 v4; // rdi
  unsigned int LastError; // ebx
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  __int64 v8; // rdx
  const char *v9; // r9
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  HWND hWndFrom; // [rsp+28h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  struct tagPOINT Points[2]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  SetRectEmpty(a2);
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    v11 = 0LL;
    v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    v7 = v6(v4, &v11);
    LastError = v7;
    if ( v7 >= 0 )
    {
      hWndFrom = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v11 + 24LL))(v11, &hWndFrom);
      LastError = v7;
      if ( v7 >= 0 )
      {
        v13 = 0LL;
        v7 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 1) + 56LL))(
               *((_QWORD *)this + 1),
               &v13);
        LastError = v7;
        if ( v7 >= 0 )
        {
          *(_OWORD *)&Points[0].x = v13;
          if ( MapWindowPoints(hWndFrom, 0LL, Points, 2u) || !GetLastError() )
          {
            *a2 = *(struct tagRECT *)&Points[0].x;
            LastError = 0;
          }
          else
          {
            LastError = wil::details::in1diag3::Return_GetLastError(
                          retaddr,
                          (void *)0x36,
                          (unsigned int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\AccessibilityExperienceManager.h",
                          v9);
          }
          goto LABEL_14;
        }
        v8 = 48LL;
      }
      else
      {
        v8 = 45LL;
      }
    }
    else
    {
      v8 = 42LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\AccessibilityExperienceManager.h",
      (const char *)(unsigned int)v7);
LABEL_14:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    return LastError;
  }
  LastError = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27,
    (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\AccessibilityExperienceManager.h",
    (const char *)0x8000FFFFLL);
  return LastError;
}
