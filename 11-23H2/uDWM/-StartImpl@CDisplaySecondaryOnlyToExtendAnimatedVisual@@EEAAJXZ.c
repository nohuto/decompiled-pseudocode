/*
 * XREFs of ?StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BF010
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ @ 0x180018CE0 (-EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x1800289EC (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180046D50 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180055EE4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18005AF50 (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x18005B788 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B6F44 (--1-$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B7168 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B7DC0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::StartImpl(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  struct tagPOINT **v5; // r14
  int PrimaryDisplay; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  CDWMDisplay *v9; // rbx
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rax
  struct tagPOINT *v11; // rax
  CVisual *v12; // rcx
  LONG x; // eax
  int updated; // edi
  __int64 v15; // rdx
  CDWMDisplay *v16; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT v18; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  if ( *((_QWORD *)this + 42) - *((_QWORD *)this + 41) < 8uLL )
  {
    v2 = -2147418113;
    v3 = 47LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
      (const char *)v2);
    return v2;
  }
  v17 = 0LL;
  GetDesktopID(1LL, &v17);
  v18.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
  v18.right = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 99) + v18.left;
  v18.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
  v18.bottom = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 100) + v18.top;
  v5 = (struct tagPOINT **)((char *)this + 440);
  if ( !*((_QWORD *)this + 55) )
  {
    *v5 = 0LL;
    v2 = CDisplayAnimatedVisual::CaptureAndAddVisual(
           this,
           v17,
           &v18,
           &v18,
           (struct CAnimatedTransitionVisual **)this + 55);
    if ( (v2 & 0x80000000) != 0 )
    {
      v3 = 57LL;
      goto LABEL_3;
    }
  }
  v16 = 0LL;
  PrimaryDisplay = CDWMDisplaySet::GetPrimaryDisplay(*((CDWMDisplaySet **)this + 40), &v16);
  v2 = PrimaryDisplay;
  if ( PrimaryDisplay < 0 )
  {
    v7 = (unsigned int)PrimaryDisplay;
    v8 = 64LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
      (const char *)v7);
LABEL_22:
    wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v16);
    return v2;
  }
  v9 = v16;
  MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(
                                  *((CDWMDisplaySet **)CDesktopManager::s_pDesktopManagerInstance + 18),
                                  v16);
  if ( !MatchedPhysicalDisplayNoRef )
  {
    v2 = -2147467259;
    v7 = 2147500037LL;
    v8 = 72LL;
    goto LABEL_12;
  }
  *(_OWORD *)((char *)this + 500) = *(_OWORD *)((char *)MatchedPhysicalDisplayNoRef + 56);
  CAnimatedTransitionVisual::SetBeginRect(*v5, (const struct tagRECT *)((char *)this + 500));
  v11 = *v5;
  *(_OWORD *)&v11[109].x = *(_OWORD *)((char *)this + 500);
  v12 = (CVisual *)&v11[1];
  x = v11[12].x;
  if ( (x & 0x1000) == 0 )
  {
    *((_DWORD *)v12 + 22) = x | 0x1000;
    CVisual::PropagateDirtyChildren(v12);
  }
  updated = CDisplayAnimatedVisual::ScheduleAnimation(
              (CDisplaySecondaryOnlyToExtendAnimatedVisual *)((char *)this + 288),
              (struct CAnimatedTransitionVisual *)*v5,
              (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
              *((unsigned int *)this + 88),
              *((_DWORD *)this + 90),
              (unsigned int *)this + 118);
  if ( updated < 0 )
  {
    v15 = 86LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
      (const char *)(unsigned int)updated);
    v2 = updated;
    goto LABEL_22;
  }
  *((_BYTE *)this + 434) = 1;
  updated = CDisplayAnimatedVisual::EnsureGlobalTimeChangeNotificationRegistered(this);
  if ( updated < 0 )
  {
    v15 = 88LL;
    goto LABEL_21;
  }
  updated = CWindowList::ForceUpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54));
  if ( updated < 0 )
  {
    v15 = 91LL;
    goto LABEL_21;
  }
  *(_OWORD *)((char *)this + 484) = *(_OWORD *)(**((_QWORD **)this + 41) + 56LL);
  if ( v9 )
    CDWMDisplay::Release(v9);
  return 0LL;
}
