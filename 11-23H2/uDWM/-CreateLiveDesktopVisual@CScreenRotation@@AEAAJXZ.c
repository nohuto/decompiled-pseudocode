/*
 * XREFs of ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800D6E9C
 * Callers:
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D714C (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 * Callees:
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001DF78 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004DAFC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180055584 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180055AB4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180055EE4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180058514 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D7C74 (-Stop@CScreenRotation@@QEAAX_N0@Z.c)
 */

__int64 __fastcall CScreenRotation::CreateLiveDesktopVisual(struct CAnimatedTransitionVisual **this)
{
  struct CBaseImageProxy ***v2; // rdi
  struct CVisual *RootVisualForDesktop; // r13
  int v4; // r15d
  int v5; // r12d
  int v6; // r8d
  int v7; // eax
  int v8; // r9d
  int v9; // eax
  int v10; // eax
  unsigned int v11; // esi
  int v12; // r9d
  unsigned int v13; // eax
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rcx
  CVisual *v17; // rcx
  int v18; // eax
  unsigned int v20; // [rsp+20h] [rbp-40h]
  _DWORD v21[2]; // [rsp+30h] [rbp-30h] BYREF
  struct CBaseImageProxy *v22; // [rsp+38h] [rbp-28h]
  unsigned __int64 v23; // [rsp+40h] [rbp-20h] BYREF
  struct tagRECT v24; // [rsp+48h] [rbp-18h] BYREF

  GetDesktopID(1LL, &v23);
  v2 = (struct CBaseImageProxy ***)(this + 41);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                           v23);
  v4 = 0;
  v5 = 0;
  v24.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
  v6 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 99);
  v24.right = v6 + v24.left;
  v7 = v6;
  v24.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
  v8 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 100);
  v24.bottom = v8 + v24.top;
  if ( v6 >= 0 )
    v4 = v6;
  else
    v7 = 0;
  LODWORD(v22) = v7;
  v9 = v8;
  if ( v8 >= 0 )
    v5 = v8;
  else
    v9 = 0;
  HIDWORD(v22) = v9;
  v10 = CAnimatedTransitionVisual::Create(this + 41);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = v10;
    v13 = 570;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, v13);
    CScreenRotation::Stop((CScreenRotation *)this, 0, 0);
    return v11;
  }
  VisualCollection::InsertRelative(
    (VisualCollection *)(this + 4),
    (unsigned __int64)(*v2 + 1) & -(__int64)(*v2 != 0LL),
    (struct CVisual *)(((unsigned __int64)this[40] + 8) & -(__int64)(this[40] != 0LL)),
    1u,
    v20);
  v14 = CAnimatedTransitionVisual::SetVisual(*v2, RootVisualForDesktop, 0, &v24);
  v11 = v14;
  v12 = v14;
  if ( v14 < 0 )
  {
    v13 = 572;
    goto LABEL_11;
  }
  v16 = (__int64)(*v2 + 1);
  v21[0] = v4;
  v21[1] = v5;
  (*(void (__fastcall **)(__int64, _DWORD *, __int64, _QWORD))(*(_QWORD *)v16 + 104LL))(
    v16,
    v21,
    v15,
    (unsigned int)v14);
  (*v2)[119] = v22;
  CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v2, &v24);
  v17 = (CVisual *)(*v2 + 1);
  *(struct tagRECT *)(*v2 + 109) = v24;
  v18 = *((_DWORD *)v17 + 22);
  if ( (v18 & 0x1000) == 0 )
  {
    *((_DWORD *)v17 + 22) = v18 | 0x1000;
    CVisual::PropagateDirtyChildren(v17);
  }
  CAnimatedTransitionVisual::SetBeginAlpha((CAnimatedTransitionVisual *)*v2, 0.0);
  CVisual::SetInterpolationMode((unsigned int *)*v2 + 2, 1u);
  return v11;
}
