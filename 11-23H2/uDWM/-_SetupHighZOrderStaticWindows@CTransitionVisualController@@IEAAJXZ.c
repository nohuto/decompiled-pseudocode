/*
 * XREFs of ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180003BA4
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180014E94 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800482A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18004E308 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x180003E74 (-_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180003FFC (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x180004190 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PEA_N@Z @ 0x18000A3F8 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PE.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18000B694 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180012434 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x180015CC0 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x180021304 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002B8A0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x1800C4500 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     McTemplateU0pp_EtwEventWriteTransfer @ 0x1800D886C (McTemplateU0pp_EtwEventWriteTransfer.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x1800EBE0C (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z @ 0x1800EC180 (-_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z.c)
 *     ?_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@@Z @ 0x1800EC328 (-_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@.c)
 */

__int64 __fastcall CTransitionVisualController::_SetupHighZOrderStaticWindows(CTransitionVisualController *this)
{
  bool v2; // zf
  unsigned int v3; // r14d
  __int64 *v4; // rbp
  unsigned int v5; // edx
  __int64 v6; // rax
  size_t v7; // rbx
  _BYTE *v8; // rax
  __int64 v9; // r12
  int v10; // r15d
  struct _LIST_ENTRY *v11; // rsi
  int v12; // eax
  struct _LIST_ENTRY *Blink; // rbx
  __int64 v14; // r13
  char v15; // bl
  HWND v16; // rcx
  __int64 v17; // rcx
  char v18; // bp
  __int64 v19; // rsi
  unsigned int v20; // eax
  int v21; // ecx
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned int Clone; // eax
  CTransitionVisualController *v27; // rcx
  char v28; // r8
  __int64 v29; // rbp
  __int64 v30; // rsi
  struct CVisual *v31; // rsi
  __int64 v32; // rcx
  bool ShouldMoveOriginalWindowOffscreenForClone; // al
  int v34; // eax
  __int64 v35; // r9
  bool v36; // [rsp+20h] [rbp-98h]
  __int64 v37; // [rsp+40h] [rbp-78h]
  struct CWindowData *v38; // [rsp+48h] [rbp-70h]
  char *v39; // [rsp+50h] [rbp-68h]
  size_t v40; // [rsp+58h] [rbp-60h]
  struct _LIST_ENTRY *WindowListForDesktop; // [rsp+60h] [rbp-58h]
  char v42; // [rsp+C0h] [rbp+8h]
  unsigned int v43; // [rsp+C8h] [rbp+10h]
  _BYTE *v44; // [rsp+D0h] [rbp+18h]
  CImmersiveState *v45; // [rsp+D8h] [rbp+20h] BYREF

  v2 = *((_QWORD *)this + 12) == -1LL;
  v3 = 0;
  v44 = 0LL;
  v45 = 0LL;
  if ( v2 )
    goto LABEL_38;
  v4 = (__int64 *)((char *)this + 24);
  v42 = 1;
  v5 = 0;
  v39 = (char *)this + 24;
  if ( *((_DWORD *)this + 12) )
  {
    do
    {
      v6 = v5++;
      *(_BYTE *)(*v4 + 24 * v6 + 17) = 0;
    }
    while ( v5 < *((_DWORD *)this + 12) );
  }
  else
  {
    v39 = (char *)this + 24;
  }
  v7 = *((int *)this + 34);
  v40 = v7;
  v8 = (_BYTE *)(*(__int64 (__fastcall **)(WPF::HeapBase *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                  WPF::g_pProcessHeap,
                  v7);
  v44 = v8;
  if ( !v8 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147024882,
      0x785u,
      0LL);
    goto LABEL_38;
  }
  memset_0(v8, 0, v7);
  v9 = (unsigned int)(v7 - 1);
  v10 = v7 - 1;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                           *((_QWORD *)this + 12));
  v11 = WindowListForDesktop;
  if ( !WindowListForDesktop )
    goto LABEL_32;
  v12 = CImmersiveState::Create(&v45, *((_QWORD *)this + 12));
  v43 = v12;
  v3 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v12,
      0x78Eu,
      0LL);
    goto LABEL_36;
  }
  Blink = WindowListForDesktop->Blink;
  v38 = (struct CWindowData *)Blink;
  if ( (int)v9 < 0 )
  {
LABEL_32:
    v22 = (unsigned int)(*((_DWORD *)this + 12) - 1);
    if ( (int)v22 >= 0 )
    {
      v23 = 24LL * (int)v22;
      do
      {
        v24 = *v4;
        if ( *(_BYTE *)(*v4 + v23 + 16) && !*(_BYTE *)(v24 + v23 + 17) )
        {
          CTransitionVisualController::_CleanupHighZOrderClone(
            this,
            (struct CTransitionVisualController::TlwPair *)(v24 + 24 * v22));
          DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt(v4, (unsigned int)v22);
        }
        v23 -= 24LL;
        v22 = (unsigned int)(v22 - 1);
      }
      while ( (int)v22 >= 0 );
    }
    goto LABEL_36;
  }
  v14 = (int)v9;
  v37 = (int)v9;
  while ( 2 )
  {
    if ( Blink == v11 || v10 < 0 )
    {
LABEL_30:
      if ( !v42 )
        goto LABEL_36;
      v4 = (__int64 *)v39;
      goto LABEL_32;
    }
    v15 = v42;
    while ( 1 )
    {
      v16 = *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v10) + 16LL);
      if ( v16 != HWND_MESSAGE|0x2LL )
        break;
LABEL_45:
      v44[v14--] = 1;
      v17 = -1LL;
      if ( --v10 < 0 )
        goto LABEL_14;
    }
    if ( !CTransitionVisualController::HasVisibleStyle(v16)
      && !CTransitionVisualController::_IsAnimationComponentVisible(
            (CTransitionVisualController *)v17,
            *(struct CAnimationComponent **)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v10)) )
    {
      v15 = CTransitionVisualController::HasVisibleStyle(*(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14)
                                                                             + 8LL * (unsigned int)v10)
                                                                 + 16LL))
          ? v15
          : 0;
      goto LABEL_45;
    }
LABEL_14:
    v3 = v43;
    v42 = v15;
    if ( v10 < 0 )
      goto LABEL_30;
    v18 = 0;
    v19 = v40 - 1;
    if ( (__int64)(v40 - 1) >= 0 )
    {
      do
      {
        if ( CTransitionVisualController::_IsAnimationComponentVisible(
               (CTransitionVisualController *)v17,
               *(struct CAnimationComponent **)(*((_QWORD *)this + 14) + 8 * v19)) )
        {
          v17 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v19);
          if ( *(_QWORD *)(v17 + 16) == *((_QWORD *)v38 + 5) )
          {
            v18 = 1;
            --v10;
            v44[v19] = 1;
            --v14;
          }
        }
        --v19;
      }
      while ( v19 >= 0 );
      v3 = v43;
      if ( v18 )
        goto LABEL_23;
    }
    if ( !*((_QWORD *)v38 + 3) )
      goto LABEL_23;
    if ( !*((_QWORD *)v38 + 55) )
      goto LABEL_23;
    if ( !CWindowData::IsWindowVisibleAndUncloaked(v38) )
      goto LABEL_23;
    if ( (*((_DWORD *)v38 + 29) & 0x20000000) != 0 )
      goto LABEL_23;
    v20 = *((_DWORD *)v38 + 33);
    if ( v20 <= 0xC )
    {
      v21 = 4162;
      if ( _bittest(&v21, v20) )
        goto LABEL_23;
    }
    if ( !CTransitionVisualController::ShouldCloneWindow(*((HWND *)v38 + 5))
      || CImmersiveState::IsLauncherShownAboveWindow(v45, v38)
      || CTransitionVisualController::_IsOwnedByVisibleAC(this, v38) )
    {
      goto LABEL_23;
    }
    Clone = CTransitionVisualController::_FindClone(this, v38, 1);
    if ( Clone >= *((_DWORD *)this + 12) )
    {
      v28 = 0;
    }
    else
    {
      v27 = (CTransitionVisualController *)*((_QWORD *)this + 3);
      *((_BYTE *)v27 + 24 * Clone + 17) = v28;
    }
    v29 = v37;
    if ( v37 >= 0 )
    {
      do
      {
        if ( !v44[v29] )
          break;
        v9 = (unsigned int)(v9 - 1);
        --v29;
      }
      while ( v29 >= 0 );
      v37 = v29;
    }
    if ( (int)v9 >= 0
      && (_mm_lfence(),
          v27 = *(CTransitionVisualController **)(*((_QWORD *)this + 14) + 8 * v9),
          (v30 = *((_QWORD *)v27 + 5)) != 0) )
    {
      v31 = (struct CVisual *)(v30 + 8);
    }
    else
    {
      v31 = 0LL;
    }
    if ( v28 )
    {
      VisualCollection::InsertRelative(
        (VisualCollection *)(*((_QWORD *)this + 2) + 32LL),
        *(struct CVisual **)(*((_QWORD *)this + 3) + 24LL * Clone + 8),
        v31,
        1,
        v36);
LABEL_64:
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        if ( (int)v9 < 0 )
        {
          v35 = 0LL;
        }
        else
        {
          _mm_lfence();
          v32 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v9);
          v35 = *(_QWORD *)(v32 + 16);
        }
        McTemplateU0pp_EtwEventWriteTransfer(v32, &UdwmSystemAnimation_ZOrderClone, *((_QWORD *)v38 + 5), v35);
      }
LABEL_23:
      Blink = (struct _LIST_ENTRY *)*((_QWORD *)v38 + 1);
      v38 = (struct CWindowData *)Blink;
      if ( v10 >= 0 )
      {
        v11 = WindowListForDesktop;
        continue;
      }
      goto LABEL_30;
    }
    break;
  }
  ShouldMoveOriginalWindowOffscreenForClone = CTransitionVisualController::_ShouldMoveOriginalWindowOffscreenForClone(
                                                v27,
                                                v38);
  v34 = CTransitionVisualController::_StageCloneRelative(
          this,
          *((struct CTopLevelWindow **)v38 + 55),
          *((struct CVisual **)this + 2),
          1,
          v31,
          1,
          ShouldMoveOriginalWindowOffscreenForClone,
          0LL);
  v43 = v34;
  v3 = v34;
  if ( v34 >= 0 )
    goto LABEL_64;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    v34,
    0x80Cu,
    0LL);
LABEL_36:
  if ( v45 )
    CBaseObject::Release(v45);
LABEL_38:
  (*(void (__fastcall **)(WPF::HeapBase *, _BYTE *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v44);
  return v3;
}
