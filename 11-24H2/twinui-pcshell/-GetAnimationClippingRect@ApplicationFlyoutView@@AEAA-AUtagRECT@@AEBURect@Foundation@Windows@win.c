/*
 * XREFs of ?GetAnimationClippingRect@ApplicationFlyoutView@@AEAA?AUtagRECT@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x1805FADE0
 * Callers:
 *     ?TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z @ 0x1805FC028 (-TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031DBA0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct tagRECT *__fastcall ApplicationFlyoutView::GetAnimationClippingRect(
        ApplicationFlyoutView *this,
        struct tagRECT *__return_ptr retstr,
        const struct winrt::Windows::Foundation::Rect *a3)
{
  float v4; // xmm1_4
  float v6; // xmm0_4
  LONG v7; // eax
  float v8; // xmm1_4
  HMONITOR v9; // rax
  const char *v10; // r9
  __int64 v11; // rcx
  int v12; // eax
  int v14; // [rsp+20h] [rbp-60h] BYREF
  RECT rc; // [rsp+28h] [rbp-58h] BYREF
  RECT v16; // [rsp+38h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+48h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v4 = *((float *)a3 + 1);
  v6 = *(float *)a3 + *((float *)a3 + 2);
  rc.left = (int)*(float *)a3;
  v7 = (int)v4;
  v8 = v4 + *((float *)a3 + 3);
  rc.top = v7;
  rc.right = (int)v6;
  rc.bottom = (int)v8;
  v9 = MonitorFromRect(&rc, 1u);
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  if ( !GetMonitorInfoW(v9, &mi) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x162,
      (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
      v10);
  *retstr = 0LL;
  if ( !CopyRect(retstr, &mi.rcWork) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x165,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
      (const char *)0x80004005LL,
      v14);
  v11 = *((_QWORD *)this + 2);
  v14 = 0;
  v16 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, RECT *, int *))(*(_QWORD *)v11 + 40LL))(v11, &v16, &v14);
  if ( v12 >= 0 )
  {
    if ( !IsRectEmpty(&v16) && retstr->bottom > v16.top && ((v14 - 1) & 0xFFFFFFFD) == 0 )
      retstr->bottom = v16.top;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x169,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
      (const char *)(unsigned int)v12);
  }
  return retstr;
}
