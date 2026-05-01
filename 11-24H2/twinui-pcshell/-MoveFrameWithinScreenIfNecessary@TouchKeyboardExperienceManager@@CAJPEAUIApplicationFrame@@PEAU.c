/*
 * XREFs of ?MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAUIApplicationFrameWrapper@@_N@Z @ 0x18047250C
 * Callers:
 *     _lambda_0181179693446beb1d5841bdc72a572d_::operator() @ 0x18046D3B4 (_lambda_0181179693446beb1d5841bdc72a572d_--operator().c)
 *     _lambda_3f93e84ee3927ec557523765ee2fe070_::operator() @ 0x18046DB9C (_lambda_3f93e84ee3927ec557523765ee2fe070_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     KeyboardHosting::ForceToFitRectWithinMonitorRect @ 0x1802192AC (KeyboardHosting--ForceToFitRectWithinMonitorRect.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@UtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@$$QEAUtagRECT@@@Z @ 0x1803232A0 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@UtagRECT@@@Deta.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::MoveFrameWithinScreenIfNecessary(
        struct IApplicationFrame *a1,
        struct IApplicationFrameWrapper *a2,
        char a3)
{
  __int64 v5; // rdx
  unsigned int v6; // ebx
  const char *v8; // r9
  LONG right; // edx
  LONG left; // eax
  LONG bottom; // edx
  LONG top; // eax
  HMONITOR v13; // rax
  RECT *p_rcMonitor; // rax
  RECT v15; // xmm1
  unsigned __int64 v16; // rdx
  LONG v17; // eax
  LONG v18; // eax
  unsigned __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // [rsp+28h] [rbp-39h] BYREF
  LONG v23; // [rsp+30h] [rbp-31h]
  LONG v24; // [rsp+34h] [rbp-2Dh]
  HWND hWnd; // [rsp+38h] [rbp-29h] BYREF
  __int128 v26; // [rsp+40h] [rbp-21h] BYREF
  RECT rc; // [rsp+50h] [rbp-11h] BYREF
  __int128 v28; // [rsp+60h] [rbp-1h] BYREF
  struct tagRECT Rect; // [rsp+70h] [rbp+Fh] BYREF
  struct tagMONITORINFO mi; // [rsp+80h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  if ( !a1 )
  {
    v5 = 3604LL;
LABEL_3:
    v6 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v6);
    return v6;
  }
  if ( !a2 )
  {
    v5 = 3605LL;
    goto LABEL_3;
  }
  hWnd = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)a1 + 24LL))(a1, &hWnd);
  if ( (v6 & 0x80000000) != 0 )
  {
    v5 = 3608LL;
    goto LABEL_4;
  }
  Rect = 0LL;
  if ( !GetWindowRect(hWnd, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xE1A,
             (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             v8);
  right = Rect.right;
  left = Rect.right;
  if ( Rect.left < Rect.right )
    left = Rect.left;
  rc.left = left;
  if ( Rect.left > Rect.right )
    right = Rect.left;
  rc.right = right;
  bottom = Rect.bottom;
  top = Rect.bottom;
  if ( Rect.top < Rect.bottom )
    top = Rect.top;
  rc.top = top;
  if ( Rect.top > Rect.bottom )
    bottom = Rect.top;
  rc.bottom = bottom;
  v13 = MonitorFromRect(&rc, 2u);
  if ( !v13 )
  {
    v6 = -2147418113;
    v5 = 3620LL;
    goto LABEL_4;
  }
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( !GetMonitorInfoW(v13, &mi) )
  {
    v6 = -2147467259;
    v5 = 3623LL;
    goto LABEL_4;
  }
  p_rcMonitor = &mi.rcMonitor;
  if ( a3 )
    p_rcMonitor = &mi.rcWork;
  v15 = *p_rcMonitor;
  v16 = *(_QWORD *)&p_rcMonitor->right;
  v17 = v16;
  if ( v15.left < (int)v16 )
    v17 = v15.left;
  LODWORD(v22) = v17;
  v18 = v16;
  if ( v15.left > (int)v16 )
    v18 = v15.left;
  v23 = v18;
  v19 = HIDWORD(v16);
  if ( v15.top >= (int)v19 )
  {
    HIDWORD(v22) = v19;
    v24 = v15.top;
    if ( v15.top > (int)v19 )
      goto LABEL_34;
  }
  else
  {
    HIDWORD(v22) = v15.top;
  }
  v24 = v19;
LABEL_34:
  v28 = 0LL;
  *(float *)&v26 = (float)rc.left;
  *((float *)&v26 + 1) = (float)rc.top;
  *((float *)&v26 + 2) = (float)(rc.right - rc.left);
  *((float *)&v26 + 3) = (float)(rc.bottom - rc.top);
  if ( KeyboardHosting::ForceToFitRectWithinMonitorRect((__int64)&v26, (int *)&v22, &v28) )
  {
    v22 = 0LL;
    LODWORD(v26) = (int)*(float *)&v28;
    DWORD1(v26) = (int)*((float *)&v28 + 1);
    DWORD2(v26) = (int)(float)(*((float *)&v28 + 2) + *(float *)&v28);
    HIDWORD(v26) = (int)(float)(*((float *)&v28 + 3) + *((float *)&v28 + 1));
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    v20 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT>(
            &v22,
            &v26);
    v6 = v20;
    if ( v20 < 0 )
    {
      v21 = 3638LL;
LABEL_39:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v20);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
      return v6;
    }
    v20 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, __int64))(*(_QWORD *)a1 + 32LL))(a1, v22);
    v6 = v20;
    if ( v20 < 0 )
    {
      v21 = 3639LL;
      goto LABEL_39;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  }
  return 0LL;
}
