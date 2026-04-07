/*
 * XREFs of ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x1800139EC
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x1800141DC (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x1800149FC (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18001512C (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18000B21C (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x1800125DC (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800154D4 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x18001DB30 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x18001DB64 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002B8A0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800EBC10 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 */

__int64 __fastcall CTransitionVisualController::RemoveTargetsForStoryboard(
        CTransitionVisualController *this,
        struct CStoryboard *a2,
        char a3,
        int a4)
{
  struct CStoryboard *v4; // r14
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdx
  char v7; // bp
  struct _LIST_ENTRY *WindowListForDesktop; // r15
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v11; // rax
  int v12; // r13d
  __int64 v13; // r14
  CTransitionVisualController *Blink_low; // rcx
  HWND v16; // rdx
  int SnapshotIndex; // eax
  CTransitionVisualController *v18; // rcx
  struct CVisual *v19; // rbp
  int v20; // eax
  int v21; // eax
  int inserted; // eax
  bool v23; // [rsp+20h] [rbp-68h]
  struct CTransitionWindowSnapshot *v24; // [rsp+30h] [rbp-58h] BYREF
  __int64 i; // [rsp+38h] [rbp-50h]
  unsigned __int64 v26; // [rsp+90h] [rbp+8h] BYREF
  struct CStoryboard *v27; // [rsp+98h] [rbp+10h]
  char v28; // [rsp+A0h] [rbp+18h]
  int v29; // [rsp+A8h] [rbp+20h]

  v29 = a4;
  v28 = a3;
  v27 = a2;
  v4 = a2;
  v5 = 0;
  v6 = *((_QWORD *)this + 12);
  v7 = a3;
  v26 = v6;
  if ( v6 == -1LL )
  {
    if ( !(unsigned int)GetDesktopID(1LL, &v26) )
      return (unsigned int)-2147467259;
    v6 = v26;
  }
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                           v6);
  Blink = WindowListForDesktop->Blink;
  if ( Blink != WindowListForDesktop )
  {
    while ( 1 )
    {
      v11 = (*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v4 + 16LL))(v4);
      v12 = (int)Blink[42].Blink;
      v13 = 0LL;
      for ( i = v11; (unsigned int)v13 < *(_DWORD *)(i + 4); v13 = (unsigned int)(v13 + 1) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v11 + 8) + 4 * v13) & 0xFFF) == (v12 & 0xFFF) )
        {
          Blink_low = (CTransitionVisualController *)LODWORD(Blink[42].Blink);
          if ( ((unsigned int)Blink_low & 0x40000000) == 0 )
            LODWORD(Blink[42].Blink) = (unsigned int)Blink_low & (v29 | 0x2000000) | 0xFFF;
          if ( v7 )
          {
            CTransitionVisualController::_StopAnimations(Blink_low, (HWND *)Blink);
            if ( (v12 & 0x20100000) == 0x20100000 )
            {
              v16 = (HWND)Blink[2].Blink;
              v24 = 0LL;
              SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(this, v16);
              if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v18, SnapshotIndex, &v24) >= 0 )
              {
                if ( !CAnimationScheduler::IsWindowCurrentlyAnimating(
                        *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
                        (HWND)Blink[2].Blink,
                        -1,
                        0) )
                  CTransitionVisualController::RestoreWindow(this, (struct CWindowData *)Blink, (v12 & 0x10000000) != 0);
                v19 = v24;
                v20 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v24 + 3) + 32LL), v24);
                v5 = v20;
                if ( v20 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2u,
                    v20,
                    0x23Eu,
                    0LL);
                  return v5;
                }
                v21 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
                v5 = v21;
                if ( v21 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2u,
                    v21,
                    0x23Fu,
                    0LL);
                  return v5;
                }
                inserted = VisualCollection::InsertRelative(
                             (VisualCollection *)(*((_QWORD *)this + 18) + 32LL),
                             v19,
                             0LL,
                             0,
                             v23);
                v5 = inserted;
                if ( inserted < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2u,
                    inserted,
                    0x240u,
                    0LL);
                  return v5;
                }
                v7 = v28;
              }
            }
          }
        }
        v11 = i;
      }
      Blink = Blink->Blink;
      if ( Blink == WindowListForDesktop )
        break;
      v4 = v27;
    }
  }
  return v5;
}
