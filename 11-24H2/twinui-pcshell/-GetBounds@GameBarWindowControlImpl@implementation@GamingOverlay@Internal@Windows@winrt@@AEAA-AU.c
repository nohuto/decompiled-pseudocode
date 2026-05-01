/*
 * XREFs of ?GetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA?AURect@Foundation@56@Uread_lock_required@wil@@@Z @ 0x1803624EC
 * Callers:
 *     ?Bounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA?AURect@Foundation@56@XZ @ 0x1803621A8 (-Bounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA-AURec.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z @ 0x180361AC4 (--$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
float *__fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::GetBounds(
        __int64 a1,
        float *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  DWORD LastError; // eax
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  int v14; // [rsp+20h] [rbp-60h]
  HWND hWnd; // [rsp+38h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-40h] BYREF
  __int128 v17; // [rsp+48h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+58h] [rbp-28h] BYREF
  __int128 v19; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    v17 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 56LL))(v4, &v17);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1D3,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v5,
        v14);
    v16 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40), &v16);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1D5,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v6,
        v14);
    v19 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v16 + 120LL))(v16, &v19);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1D7,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v7,
        v14);
    hWnd = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v16 + 24LL))(v16, &hWnd);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1D9,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v8,
        v14);
    Rect = 0LL;
    SetLastError(0);
    if ( !GetWindowRect(hWnd, &Rect) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1DC,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
        (const char *)0x80004005LL,
        v14);
    LastError = GetLastError();
    winrt::check_win32<unsigned long>((winrt::impl *)LastError);
    v10 = (float)SHIDWORD(v17);
    v11 = (float)SDWORD2(v17);
    v12 = (float)(DWORD1(v19) + Rect.top);
    *a2 = (float)(v19 + Rect.left);
    a2[1] = v12;
    a2[2] = v11;
    a2[3] = v10;
    if ( v16 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v16);
  }
  else if ( *(_BYTE *)(a1 + 124) )
  {
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 108);
  }
  else
  {
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
    a2[3] = 0.0;
  }
  return a2;
}
