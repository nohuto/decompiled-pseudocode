/*
 * XREFs of ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F04DC
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00AABCC (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1C021E7F8 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x1C023C82C (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1C023D090 (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x1C005BF54 (--1CSaveRestoreCheckPoint@@QEAA@XZ.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005E89C (GetMonitorWorkRectForWindow.c)
 *     _MonitorFromRect @ 0x1C00AE960 (_MonitorFromRect.c)
 *     IntersectRect @ 0x1C00AEB30 (IntersectRect.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00B04A0 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     CkptRestore @ 0x1C00E1D4C (CkptRestore.c)
 *     GetRect @ 0x1C00E1ED0 (GetRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00EA700 (xxxInitSendValidateMinMaxInfoEx.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ArrangementStyleFromOverlap@@YA?AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z @ 0x1C01E89A4 (-ArrangementStyleFromOverlap@@YA-AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C01E8FDC (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?GetFrameBoundsOverlapInfo@@YA?AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z @ 0x1C01E904C (-GetFrameBoundsOverlapInfo@@YA-AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z.c)
 *     ?TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOverlapInfo@@PEAUtagRECT@@@Z @ 0x1C01EA4B4 (-TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOve.c)
 *     ?UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z @ 0x1C01EA7E4 (-UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C021C580 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C021D528 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C021D7B8 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z.c)
 *     ?MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C023B054 (-MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023B1B4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 */

char __fastcall WindowArrangement::xxxSetSnapArrangementPos(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  unsigned int v5; // r13d
  unsigned int v8; // edi
  const struct tagWND *v9; // r14
  _WORD *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r15
  _OWORD *MonitorWorkRectForWindow; // rax
  int FrameBoundsOverlapInfo; // r13d
  int v18; // eax
  char v19; // r14
  __int64 v20; // r9
  unsigned int v21; // edi
  const struct tagWND *v22; // rcx
  __int128 *Prop; // rax
  __int128 v24; // xmm0
  __int64 v25; // rdx
  __int128 v26; // xmm0
  __int64 v27; // r15
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v28; // r8
  __int64 v29; // rcx
  struct tagWND *v30; // rax
  struct tagMONITOR *v31; // r8
  __int64 v32; // rsi
  unsigned int v33; // r8d
  struct tagWND *v34; // rdx
  bool v35; // r8
  __int128 v37; // [rsp+38h] [rbp-71h] BYREF
  __int64 v38; // [rsp+48h] [rbp-61h]
  _BYTE v39[24]; // [rsp+50h] [rbp-59h] BYREF
  __int128 v40; // [rsp+68h] [rbp-41h] BYREF
  __int128 v41; // [rsp+78h] [rbp-31h] BYREF
  __int128 v42; // [rsp+88h] [rbp-21h] BYREF
  __int64 v43; // [rsp+98h] [rbp-11h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-9h] BYREF
  int v45; // [rsp+A8h] [rbp-1h]
  int v46; // [rsp+ACh] [rbp+3h]
  __int128 v47; // [rsp+B0h] [rbp+7h]
  unsigned int v48; // [rsp+C0h] [rbp+17h]

  v5 = a4;
  v8 = 0;
  v9 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 456LL) + 328LL);
  if ( !v9 )
    return 0;
  v37 = 0LL;
  v38 = 0LL;
  ThreadLock(v9, &v37);
  v13 = 0LL;
  if ( !*(_QWORD *)(gptiCurrent + 672LL) )
  {
    v14 = MonitorFromRect(a2, 0LL, 18LL);
    v15 = v14;
    if ( v14 )
    {
      MonitorWorkRectForWindow = (_OWORD *)GetMonitorWorkRectForWindow((__int64)v39, v14, v9);
      v40 = 0LL;
      *(_OWORD *)v39 = *MonitorWorkRectForWindow;
      if ( (unsigned int)IntersectRect(&v40, (int *)a2, (int *)v39) )
      {
        v13 = v40 - *(_QWORD *)a2;
        if ( (_QWORD)v40 == *(_QWORD *)a2 )
          v13 = *((_QWORD *)&v40 + 1) - *(_QWORD *)(a2 + 8);
        if ( !v13 )
        {
          FrameBoundsOverlapInfo = GetFrameBoundsOverlapInfo(v39, (_DWORD *)a2, 1);
          v18 = ArrangementStyleFromOverlap(FrameBoundsOverlapInfo);
          v19 = v18;
          if ( !v18
            || (v12 = *(_QWORD *)(a1 + 40), (*(_BYTE *)(v12 + 30) & 4) == 0)
            || (v11 = *(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL), v13 = gpsi, *v11 == *(_WORD *)(gpsi + 900LL))
            || (unsigned int)EvaluateArrangeState(a1) == 6 )
          {
            v5 = a4;
          }
          else
          {
            v21 = (gdwPUDFlags & 0x10000 | 0x4000u) >> 7;
            if ( (a3 & 1) != 0 )
            {
              v21 |= 0x20u;
            }
            else if ( (a3 & 2) != 0 )
            {
              v21 |= 1u;
            }
            if ( (*(_BYTE *)(v12 + 31) & 0x21) != 0 )
            {
              v21 |= 8u;
            }
            else if ( IsSemiMaximized((const struct tagWND *)a1) )
            {
              *(_DWORD *)(a1 + 320) &= 0xF3FFFFFF;
            }
            else
            {
              *(_OWORD *)v39 = 0LL;
              GetRect(v22, (__int64)v39, 66);
              CkptRestore((struct tagWND *)a1, v39);
            }
            *(_QWORD *)v39 = *(_QWORD *)a1;
            Prop = (__int128 *)GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.AlignmentRequirement + 2), 1LL, v20);
            if ( Prop )
              v24 = *Prop;
            else
              v24 = 0LL;
            *(_OWORD *)&v39[8] = v24;
            v43 = 0LL;
            v41 = 0LL;
            v42 = 0LL;
            xxxInitSendValidateMinMaxInfoEx((struct tagWND *)a1, (__int64)&v41, 0LL);
            TransformShellProvidedRectangle(a1, (int *)&v43, (int *)&v42 + 2, v15, FrameBoundsOverlapInfo, a2);
            UpdateDwmSnapArrangedInitiated((struct tagWND *)a1, v25);
            v26 = *(_OWORD *)a2;
            v5 = a4;
            v27 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 256LL);
            v44 = 0LL;
            v45 = 0;
            v46 = v21 | 0x140;
            v47 = v26;
            v48 = a4;
            AdvancedWindowPos::xxxApplyWindowPos((AdvancedWindowPos *)a1, (struct tagWND *)&v44, v28);
            if ( (v19 & 1) != 0 )
              *(_DWORD *)(a1 + 320) |= 0x4000000u;
            if ( (v19 & 2) != 0 )
              *(_DWORD *)(a1 + 320) |= 0x8000000u;
            CSaveRestoreCheckPoint::~CSaveRestoreCheckPoint((CSaveRestoreCheckPoint *)v39);
            v29 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 256LL);
            if ( v27 != v29 )
            {
              v30 = (struct tagWND *)ValidateHmonitorNoRip(v29);
              AdvancedWindowPos::MigrateCheckpoint((AdvancedWindowPos *)a1, v30, v31);
            }
            if ( !IsSemiMaximized((const struct tagWND *)a1) )
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7567);
            v8 = 1;
          }
        }
      }
    }
  }
  v32 = ThreadUnlock1(v13, v11, v12);
  if ( v32 )
  {
    if ( v8 )
      NotifyShell::ArrangementCompleted(a1, v5, v8);
    if ( (a3 & 1) != 0 )
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v32 + 16), 0);
    if ( ShellWindowManagement::WindowSubjectToBehavior((ShellWindowManagement *)a1, (const struct tagWND *)0x10, v33) )
    {
      LOBYTE(v34) = 1;
      NotifyShell::TrackedWindowPosChanged((NotifyShell *)a1, v34, v35);
    }
  }
  return v8;
}
