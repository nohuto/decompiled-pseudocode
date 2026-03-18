/*
 * XREFs of ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402A9B34
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140205E28 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1402C1A28 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D93AC (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x140025C9C (GetMonitorWorkRectForWindow.c)
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     GetRect @ 0x1400355F0 (GetRect.c)
 *     IntersectRect @ 0x140035778 (IntersectRect.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140040808 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14004083C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x140068010 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x14006E488 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x140073DDC (xxxInitSendValidateMinMaxInfoEx.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x140088668 (--0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z.c)
 *     GetNormalRect @ 0x1400F8724 (GetNormalRect.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x14014EAE0 (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x14016DFE0 (-IsGhostWindowClass@@YA_NPEBUtagWND@@@Z.c)
 *     ?TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOverlapInfo@@PEAUtagRECT@@@Z @ 0x140186FEC (-TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOve.c)
 *     ?ArrangementStyleFromOverlap@@YA?AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z @ 0x140187104 (-ArrangementStyleFromOverlap@@YA-AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z.c)
 *     ??1CDwmNotifyBatch@@IEAA@XZ @ 0x1401A51F8 (--1CDwmNotifyBatch@@IEAA@XZ.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ @ 0x1401AA454 (--1-$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x1401D3670 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14021F87C (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x140222848 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?GetFrameBoundsOverlapInfo@@YA?AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z @ 0x1402245CC (-GetFrameBoundsOverlapInfo@@YA-AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x140251FB8 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x140269110 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x1402A50C0 (--1CSaveRestoreCheckPoint@@QEAA@XZ.c)
 *     ??1DwmNotifyMoveReason@@QEAA@XZ @ 0x1402A5138 (--1DwmNotifyMoveReason@@QEAA@XZ.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1402A55C8 (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1402C1030 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     ?xxxInterceptSetSnapArrangementPos@WindowActions@@YAXPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@WindowArrangement@@K@Z @ 0x1402D0024 (-xxxInterceptSetSnapArrangementPos@WindowActions@@YAXPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOp.c)
 *     ?MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D3344 (-MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

char __fastcall WindowArrangement::xxxSetSnapArrangementPos(__int64 a1, INT *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r13
  int v5; // ebx
  const struct tagWND *v9; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r12
  _OWORD *MonitorWorkRectForWindow; // rax
  __int64 v20; // rdx
  struct tagWND *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct tagWND *v24; // rbx
  __int64 v25; // r14
  struct tagTHREADINFO *v26; // rax
  struct tagMONITOR *v27; // r8
  __int64 v28; // rdx
  unsigned int v29; // ebx
  struct tagWND *v30; // rdx
  struct tagRECT v31; // xmm0
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v32; // r8
  __int64 v33; // rcx
  struct tagWND *v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct tagTHREADINFO *v37; // rax
  struct tagMONITOR *v38; // r8
  __int64 v39; // rdx
  struct tagWND *v40; // rdx
  __int64 v41; // rsi
  bool v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rdx
  int FrameBoundsOverlapInfo; // [rsp+30h] [rbp-D0h]
  ULONG_PTR v46[2]; // [rsp+38h] [rbp-C8h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v48[40]; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR v49[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v50; // [rsp+90h] [rbp-70h] BYREF
  __int128 v51; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v52; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v54[2]; // [rsp+C8h] [rbp-38h] BYREF
  int v55; // [rsp+E8h] [rbp-18h]
  __int64 v56; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v57; // [rsp+F8h] [rbp-8h]

  v4 = a4;
  v5 = 0;
  v9 = *(const struct tagWND **)(*((_QWORD *)PtiCurrent(a1, (__int64)a2) + 62) + 328LL);
  if ( !v9 )
    return 0;
  CDwmWindowNotifyBatch::CDwmWindowNotifyBatch((CDwmWindowNotifyBatch *)v48, (struct tagWND *)a1);
  v13 = PtiCurrent(v12, v11);
  Win32HM_LockIntoThread<1>((__int64)v13, (__int64)v9, (__int64 *)BugCheckParameter3);
  v46[0] = -1LL;
  v46[1] = 0LL;
  if ( !*((_QWORD *)PtiCurrent(v15, v14) + 89) )
  {
    v17 = MonitorFromRect(a2, 0, 0x12u);
    v18 = v17;
    if ( v17 )
    {
      Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)v46, v17);
      MonitorWorkRectForWindow = (_OWORD *)GetMonitorWorkRectForWindow((__int64)v49, v18, v9);
      v50 = 0LL;
      *(_OWORD *)v49 = *MonitorWorkRectForWindow;
      if ( (unsigned int)IntersectRect(&v50, a2, (int *)v49) )
      {
        if ( v50 == *(_OWORD *)a2 )
        {
          FrameBoundsOverlapInfo = GetFrameBoundsOverlapInfo(v49, a2, 1);
          if ( (unsigned int)ArrangementStyleFromOverlap(FrameBoundsOverlapInfo) )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 4) != 0
              && !IsGhostWindowClass((const struct tagWND *)a1, v20)
              && (unsigned int)EvaluateArrangeState(a1) != 4 )
            {
              if ( (*(_DWORD *)(a1 + 384) & 0x10) != 0 )
              {
                WindowActions::xxxInterceptSetSnapArrangementPos(a1, a2, a3, (unsigned int)v4);
              }
              else
              {
                if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x21) == 0 && !IsArranged((const struct tagWND *)a1) )
                {
                  *(_OWORD *)v49 = 0LL;
                  GetRect(a1, (__int64)v49, 66);
                  CHECKPOINT::Restore((struct tagWND *)a1, (const struct tagRECT *)v49);
                }
                v21 = (struct tagWND *)MonitorFromRect(a2, 2u, 0x12u);
                v23 = *(_QWORD *)(a1 + 40);
                v24 = v21;
                v25 = *(_QWORD *)v21;
                if ( *(_QWORD *)(v23 + 256) != *(_QWORD *)v21 )
                {
                  v26 = PtiCurrent(v23, v22);
                  Win32HM_LockIntoThread<1>((__int64)v26, (__int64)v24, (__int64 *)v49);
                  AdvancedWindowPos::xxxMigrateCheckpoint((struct tagRECT *)a1, v24, v27);
                  Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(v49, v28);
                }
                v29 = (*(_DWORD *)(W32GetUserSessionState(v23, v22) + 67056) & 0x10000 | 0x4000u) >> 7;
                if ( (a3 & 1) != 0 )
                {
                  v29 |= 0x20u;
                }
                else if ( (a3 & 2) != 0 )
                {
                  v29 |= 1u;
                }
                if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x21) != 0 )
                {
                  v29 |= 8u;
                }
                else if ( IsArranged((const struct tagWND *)a1) )
                {
                  *(_DWORD *)(a1 + 380) &= ~0x4000000u;
                }
                v56 = *(_QWORD *)a1;
                *(_OWORD *)v49 = 0LL;
                GetNormalRect((const struct tagWND *)a1, v49);
                v53 = 0LL;
                v57 = *(_OWORD *)v49;
                v51 = 0LL;
                v52 = 0LL;
                xxxInitSendValidateMinMaxInfoEx((struct tagWND *)a1, (__int64)&v51, 0LL);
                TransformShellProvidedRectangle(a1, (int *)&v53, (int *)&v52 + 2, v18, FrameBoundsOverlapInfo, a2);
                *(_DWORD *)(a1 + 380) |= 0x200000u;
                *(_QWORD *)&v50 = a1;
                WORD4(v50) = 1;
                AdvancedWindowPos::MarkWindowAsArranged((AdvancedWindowPos *)a1, v30);
                v31 = *(struct tagRECT *)a2;
                *(_QWORD *)&v54[0].left = 0LL;
                v54[0].right = 0;
                v54[0].bottom = v29 | 0x140;
                v54[1] = v31;
                v55 = v4;
                AdvancedWindowPos::xxxApplyWindowPos((AdvancedWindowPos *)a1, v54, v32);
                *(_DWORD *)(a1 + 380) |= 0x4000000u;
                DwmNotifyMoveReason::~DwmNotifyMoveReason((DwmNotifyMoveReason *)&v50);
                CSaveRestoreCheckPoint::~CSaveRestoreCheckPoint((CSaveRestoreCheckPoint *)&v56);
                v33 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 256LL);
                if ( v25 != v33 )
                {
                  v34 = (struct tagWND *)ValidateHmonitorNoRip(v33);
                  v37 = PtiCurrent(v36, v35);
                  Win32HM_LockIntoThread<1>((__int64)v37, (__int64)v34, (__int64 *)v49);
                  AdvancedWindowPos::xxxMigrateCheckpoint((struct tagRECT *)a1, v34, v38);
                  Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(v49, v39);
                }
                if ( !IsArranged((const struct tagWND *)a1) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7736);
                v5 = 1;
              }
            }
          }
        }
      }
      Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v46, v20);
    }
  }
  v41 = Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v16);
  if ( v41 )
  {
    if ( v5 )
      NotifyShell::ArrangementCompleted((__int64 *)a1, v4, v5);
    if ( (a3 & 1) != 0 )
      LastWokenThread::Set(*(_QWORD *)(v41 + 16), 1LL, 0LL);
    if ( ShellWindowManagement::WindowSubjectToBehavior(a1, 0x10u, 0, 1) )
    {
      LOBYTE(v40) = 1;
      NotifyShell::TrackedWindowPosChanged((NotifyShell *)a1, v40, v42);
    }
  }
  Win32HMThreadLockBase<tagMONITOR,1,1>::~Win32HMThreadLockBase<tagMONITOR,1,1>(v46, (__int64)v40);
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v43);
  CDwmNotifyBatch::~CDwmNotifyBatch((CDwmNotifyBatch *)v48, v44);
  return v5;
}
