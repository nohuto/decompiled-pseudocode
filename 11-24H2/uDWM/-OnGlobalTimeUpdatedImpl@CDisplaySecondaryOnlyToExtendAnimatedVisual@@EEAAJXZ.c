/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x180085720
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180015CB8 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180021728 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18003E04C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x18003FFA0 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800434E0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053BC4 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053C14 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ??4?$com_ptr_t@VCVisualGroupProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisualGroupProxy@@@Z @ 0x180064144 (--4-$com_ptr_t@VCVisualGroupProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisualGroup.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x18009522C (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18009A16C (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x18009AFA0 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@PEAPEAVCAnimatedTransitionVisua.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?ScheduleEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ @ 0x1800C2478 (-ScheduleEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::OnGlobalTimeUpdatedImpl(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this)
{
  int v2; // esi
  struct CAnimatedTransitionVisual **v3; // r15
  struct CVisual *v4; // rbx
  HWND ShellWindowForDesktop; // rax
  struct CWindowData *WindowDataByHwnd; // rax
  CMILRefCountBase *v7; // rdx
  int v8; // edx
  int v9; // eax
  struct CAnimatedTransitionVisual *v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // esi
  int v16; // edi
  int v17; // eax
  int v18; // r8d
  int v19; // eax
  struct tagPOINT **v20; // r15
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // edi
  int v25; // ebx
  int v26; // eax
  int v27; // r8d
  CTimelineBase *v28; // rcx
  int v29; // eax
  struct CVisual *v31; // [rsp+30h] [rbp-30h] BYREF
  struct tagPOINT v32; // [rsp+38h] [rbp-28h]
  unsigned __int64 v33; // [rsp+40h] [rbp-20h] BYREF
  struct tagRECT v34; // [rsp+48h] [rbp-18h] BYREF

  v2 = 0;
  v3 = (struct CAnimatedTransitionVisual **)((char *)this + 400);
  if ( !*((_QWORD *)this + 50) || !*((_QWORD *)this + 51) )
  {
    v33 = 0LL;
    GetDesktopID(1LL, &v33);
    if ( !*v3 )
    {
      v4 = 0LL;
      v31 = 0LL;
      ShellWindowForDesktop = (HWND)CWindowList::GetShellWindowForDesktop(
                                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                      v33);
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           ShellWindowForDesktop);
      if ( WindowDataByHwnd )
      {
        v7 = (CMILRefCountBase *)*((_QWORD *)WindowDataByHwnd + 55);
        if ( v7 )
        {
          wil::com_ptr_t<CVisualGroupProxy,wil::err_returncode_policy>::operator=(&v31, v7);
          v8 = 0;
          if ( *((_DWORD *)this + 65) - *((_DWORD *)this + 63) >= 0 )
            v8 = *((_DWORD *)this + 65) - *((_DWORD *)this + 63);
          v9 = 0;
          if ( *((_DWORD *)this + 64) - *((_DWORD *)this + 62) >= 0 )
            v9 = *((_DWORD *)this + 64) - *((_DWORD *)this + 62);
          v4 = v31;
          if ( *((_DWORD *)v31 + 18) == v9 && *((_DWORD *)v31 + 19) == v8 )
          {
            v34.left = *((_DWORD *)this + 109) - *((_DWORD *)v31 + 16);
            v34.top = *((_DWORD *)this + 110) - *((_DWORD *)v31 + 17);
            v34.right = *((_DWORD *)this + 111) - *((_DWORD *)v31 + 16);
            v34.bottom = *((_DWORD *)this + 112) - *((_DWORD *)v31 + 17);
            v10 = *v3;
            *v3 = 0LL;
            if ( v10 )
              CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v10 + 8));
            v11 = CAnimatedTransitionVisual::Create(v3);
            v2 = v11;
            if ( v11 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x113u, 0LL);
              goto LABEL_28;
            }
            v12 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)*v3, v4, 1, &v34);
            v2 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x114u, 0LL);
              goto LABEL_28;
            }
            v13 = *((_DWORD *)this + 111) - *((_DWORD *)this + 109);
            v14 = v13;
            if ( v13 < 0 )
              v14 = 0;
            v32.x = v14;
            v15 = 0;
            if ( v13 >= 0 )
              v15 = v13;
            v16 = *((_DWORD *)this + 112) - *((_DWORD *)this + 110);
            v17 = v16;
            if ( v16 < 0 )
              v17 = 0;
            v32.y = v17;
            CAnimatedTransitionVisual::SetBeginRect(
              (struct tagPOINT *)*v3,
              (const struct tagRECT *)((char *)this + 436));
            CAnimatedTransitionVisual::SetEndRect(*v3, (const struct tagRECT *)((char *)this + 436));
            v18 = 0;
            if ( v16 >= 0 )
              v18 = v16;
            CVisual::SetSize((struct CAnimatedTransitionVisual *)((char *)*v3 + 8), v15, v18);
            *((struct tagPOINT *)*v3 + 113) = v32;
            CVisual::SetInterpolationMode((__int64 *)*v3 + 1, 1);
            v19 = CContainerVisual::AddChild(
                    this,
                    (struct CVisual *)(((unsigned __int64)*v3 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)*v3 >> 64)));
            v2 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x11Eu, 0LL);
LABEL_28:
              wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v31);
LABEL_49:
              CDisplayAnimatedVisual::Stop(this, 0LL);
              return (unsigned int)v2;
            }
          }
        }
      }
      if ( v4 )
        CBaseObject::Release(v4);
    }
    v20 = (struct tagPOINT **)((char *)this + 408);
    if ( !*((_QWORD *)this + 51) )
    {
      *v20 = 0LL;
      v21 = CDisplayAnimatedVisual::CaptureAndAddVisual(
              this,
              v33,
              (const struct tagRECT *)((char *)this + 452),
              (struct CAnimatedTransitionVisual **)this + 51);
      v2 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x126u, 0LL);
        goto LABEL_49;
      }
      v22 = *((_DWORD *)this + 115) - *((_DWORD *)this + 113);
      v23 = v22;
      if ( v22 < 0 )
        v23 = 0;
      v32.x = v23;
      v24 = 0;
      if ( v22 >= 0 )
        v24 = v22;
      v25 = *((_DWORD *)this + 116) - *((_DWORD *)this + 114);
      v26 = v25;
      if ( v25 < 0 )
        v26 = 0;
      v32.y = v26;
      CAnimatedTransitionVisual::SetBeginRect(*v20, (const struct tagRECT *)((char *)this + 452));
      CAnimatedTransitionVisual::SetEndRect(
        (CAnimatedTransitionVisual *)*v20,
        (const struct tagRECT *)((char *)this + 452));
      v27 = 0;
      if ( v25 >= 0 )
        v27 = v25;
      CVisual::SetSize((CVisual *)&(*v20)[1], v24, v27);
      (*v20)[113] = v32;
    }
  }
  v28 = (CTimelineBase *)*((_QWORD *)this + 52);
  if ( v28 && *((_BYTE *)v28 + 72) )
  {
    *((_QWORD *)this + 52) = 0LL;
    CTimelineBase::Release(v28);
    v29 = CDisplaySecondaryOnlyToExtendAnimatedVisual::ScheduleEntranceAnimation(this);
    v2 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0x134u, 0LL);
      goto LABEL_49;
    }
  }
  else if ( v2 < 0 )
  {
    goto LABEL_49;
  }
  return (unsigned int)v2;
}
