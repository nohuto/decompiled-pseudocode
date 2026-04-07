/*
 * XREFs of ?CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z @ 0x1800D9A3C
 * Callers:
 *     ?_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E1E80 (-_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ.c)
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180013CEC (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180055EE4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPVLTarget@CLauncherLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800DA1E0 (-GetPVLTarget@CLauncherLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DCCA8 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x1800DD804 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 */

__int64 __fastcall CLauncherLaunch::CommonAnimate(
        CLauncherLaunch *this,
        struct CWindowData *a2,
        struct CAnimationComponent **a3)
{
  int v3; // ebx
  __int128 *v4; // r15
  const struct tagRECT *v8; // rdx
  int PVLTarget; // ecx
  int v10; // eax
  int v11; // edi
  CBaseObject *v12; // rbx
  __int128 v13; // xmm0
  int v14; // eax
  __int64 v15; // rax
  CVisual *v16; // rcx
  int v17; // eax
  struct tagRECT **v19; // [rsp+28h] [rbp-41h]
  CBaseObject *v20; // [rsp+50h] [rbp-19h] BYREF
  struct tagRECT *v21; // [rsp+58h] [rbp-11h] BYREF
  struct tagRECT v22; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT v23; // [rsp+70h] [rbp+7h] BYREF

  v3 = *((_DWORD *)a2 + 33);
  v4 = (__int128 *)((char *)this + 128);
  v20 = 0LL;
  v21 = 0LL;
  v8 = (const struct tagRECT *)((char *)this + 128);
  if ( v3 != 1 )
    v8 = 0LL;
  CStoryboard::_GetIdealRects(a2, v8, &v23, &v21, &v22, v19);
  PVLTarget = CLauncherLaunch::GetPVLTarget(this, *((unsigned int *)a2 + 170));
  if ( v3 == 1 )
  {
    v10 = CStoryboard::_CreateAndAddDesktopAnimationComponent(this, a2, PVLTarget, &v23, 0, &v20);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0xAB8u);
LABEL_6:
      v12 = v20;
      goto LABEL_14;
    }
    v12 = v20;
    if ( *((_DWORD *)v20 + 17) != 2 )
    {
      v13 = *v4;
      *((_DWORD *)v20 + 17) = 2;
      *(_OWORD *)((char *)v12 + 104) = v13;
    }
  }
  else
  {
    v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 0, PVLTarget, v21, 0LL, 17, 1, &v20);
    v11 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, 0xAC2u);
      goto LABEL_6;
    }
    v12 = v20;
  }
  CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v12 + 5), &v23);
  v15 = *((_QWORD *)v12 + 5);
  v16 = (CVisual *)(v15 + 8);
  *(struct tagRECT *)(v15 + 872) = v22;
  v17 = *(_DWORD *)(v15 + 96);
  if ( (v17 & 0x1000) == 0 )
  {
    *((_DWORD *)v16 + 22) = v17 | 0x1000;
    CVisual::PropagateDirtyChildren(v16);
  }
LABEL_14:
  if ( a3 )
  {
    if ( v11 < 0 )
    {
      *a3 = 0LL;
    }
    else
    {
      *a3 = v12;
      if ( !v12 )
        return (unsigned int)v11;
      _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
      v12 = v20;
    }
  }
  if ( v12 )
    CBaseObject::Release(v12);
  return (unsigned int)v11;
}
