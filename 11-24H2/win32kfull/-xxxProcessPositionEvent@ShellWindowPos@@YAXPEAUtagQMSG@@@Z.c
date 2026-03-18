/*
 * XREFs of ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402C1474
 * Callers:
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400A4BAC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1401574A0 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     GetThreadDesktopWindow @ 0x140176140 (GetThreadDesktopWindow.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x1401D3670 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140210C38 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ??0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x14021FFE4 (--0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x140222848 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ShellWindowPos::_anonymous_namespace_::AWPSOptionFromShellRequest @ 0x1402BFEA4 (ShellWindowPos--_anonymous_namespace_--AWPSOptionFromShellRequest.c)
 *     ?FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402BFF58 (-FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1402C1A28 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?UnreserveSystemOperationDataSlot@WindowActions@@YAXPEAUtagWND@@@Z @ 0x1402CB470 (-UnreserveSystemOperationDataSlot@WindowActions@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x1402D6EA4 (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall ShellWindowPos::xxxProcessPositionEvent(ShellWindowPos *this, struct tagQMSG *a2)
{
  ShellWindowPos *v2; // r13
  char v3; // si
  __int64 v4; // rax
  struct tagQMSG *v5; // rdx
  __int64 v6; // r14
  struct tagWND *v7; // rdx
  int v8; // eax
  __int64 v9; // rdi
  bool v10; // bl
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rcx
  bool v15; // al
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  struct tagTHREADINFO *v21; // rax
  __int64 v22; // rdx
  struct tagWND *ThreadDesktopWindow; // rax
  struct tagBWL *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *v28; // r13
  struct tagWND *v29; // rax
  struct tagWND *v30; // rdi
  __int64 v31; // rcx
  bool v32; // al
  __int64 v33; // rbx
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  __int64 v37; // rdx
  bool v38; // di
  __int64 v39; // rbx
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  LONG v46; // edx
  LONG v47; // eax
  struct tagRECT *v48; // rcx
  struct tagRECT v49; // xmm0
  LONG left; // eax
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v51; // r8
  bool v52; // [rsp+58h] [rbp-59h]
  bool v53; // [rsp+58h] [rbp-59h]
  bool v54; // [rsp+59h] [rbp-58h]
  bool v55; // [rsp+59h] [rbp-58h]
  int v56; // [rsp+5Ch] [rbp-55h] BYREF
  struct tagWND *v57; // [rsp+60h] [rbp-51h]
  __int64 v58; // [rsp+68h] [rbp-49h]
  struct tagBWL *v59; // [rsp+70h] [rbp-41h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+78h] [rbp-39h] BYREF
  ShellWindowPos *v61; // [rsp+88h] [rbp-29h]
  ULONG_PTR v62[2]; // [rsp+90h] [rbp-21h] BYREF
  ULONG_PTR v63[2]; // [rsp+A0h] [rbp-11h] BYREF
  struct tagRECT v64[2]; // [rsp+B0h] [rbp-1h] BYREF
  LONG v65; // [rsp+D0h] [rbp+1Fh]

  v2 = this;
  v61 = this;
  v3 = 1;
  LOBYTE(a2) = 1;
  v4 = HMValidateHandleNoSecure(*((_QWORD *)this + 2), (__int64)a2);
  v6 = v4;
  if ( v4 )
  {
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v63, v4);
    v8 = *((_DWORD *)v2 + 8);
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        v9 = *((_QWORD *)v2 + 5);
        v58 = v9;
        v57 = (struct tagWND *)ValidateHmonitor(*(_QWORD *)v9);
        v7 = v57;
        if ( v57 )
        {
          v14 = *(_QWORD *)&WPP_GLOBAL_Control;
          v15 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
          v52 = v15;
          LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          v54 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v16 = *(_QWORD *)v57;
            v17 = *(_QWORD *)v6;
            UserSessionState = W32GetUserSessionState(v14, v57);
            LOBYTE(v19) = v54;
            LOBYTE(v20) = v52;
            WPP_RECORDER_AND_TRACE_SF_qq(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v20,
              v19,
              *(_QWORD *)(UserSessionState + 69416),
              4,
              4,
              18,
              (__int64)&WPP_6b95c0fab1563d858a8149a35fde60c5_Traceguids,
              v17,
              v16);
            v9 = v58;
          }
          v21 = PtiCurrent(v14, (__int64)v7);
          Win32HM_LockIntoThread<1>((__int64)v21, (__int64)v57, (__int64 *)v62);
          ThreadDesktopWindow = (struct tagWND *)GetThreadDesktopWindow(*(_QWORD *)(v6 + 16), v22);
          v24 = BuildHwndList(ThreadDesktopWindow, 2LL, 0LL, 1);
          v59 = v24;
          if ( v24 )
          {
            v56 = *(_DWORD *)(v9 + 8);
            CThreadLockedCurrentMonitorTopologyPtr::CThreadLockedCurrentMonitorTopologyPtr(
              (CThreadLockedCurrentMonitorTopologyPtr *)v64,
              v25);
            BugCheckParameter3[0] = (ULONG_PTR)v59 + 32;
            v27 = *((_QWORD *)v59 + 4);
            if ( v27 != 1 )
            {
              v28 = (__int64 *)BugCheckParameter3[0];
              do
              {
                LOBYTE(v26) = 1;
                v29 = (struct tagWND *)HMValidateHandleNoSecure(v27, v26);
                v30 = v29;
                if ( v29 == (struct tagWND *)v6 )
                  break;
                if ( v29 && GetRootOwner(v29) == (struct tagWND *)v6 )
                {
                  v31 = *(_QWORD *)&WPP_GLOBAL_Control;
                  v32 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
                     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
                  v53 = v32;
                  v55 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                  if ( v32 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    v33 = *(_QWORD *)v30;
                    LOBYTE(v31) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                    v34 = W32GetUserSessionState(v31, v26);
                    LOBYTE(v35) = v55;
                    LOBYTE(v36) = v53;
                    WPP_RECORDER_AND_TRACE_SF_q(
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                      v36,
                      v35,
                      *(_QWORD *)(v34 + 69416),
                      4,
                      4,
                      19,
                      (__int64)&WPP_6b95c0fab1563d858a8149a35fde60c5_Traceguids,
                      v33);
                  }
                  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v30);
                  AdvancedWindowPos::xxxMigrateWindow(v30, v57, *(_QWORD *)&v64[0].left, 0LL, 0LL, 0, &v56, 0LL);
                  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v37);
                }
                v27 = *++v28;
              }
              while ( *v28 != 1 );
              v2 = v61;
            }
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
              || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
            {
              v3 = 0;
            }
            v38 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v39 = *(_QWORD *)v6;
              v40 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
              LOBYTE(v41) = v38;
              LOBYTE(v42) = v3;
              WPP_RECORDER_AND_TRACE_SF_q(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v42,
                v41,
                *(_QWORD *)(v40 + 69416),
                4,
                4,
                20,
                (__int64)&WPP_6b95c0fab1563d858a8149a35fde60c5_Traceguids,
                v39);
            }
            AdvancedWindowPos::xxxMigrateWindow(v6, v57, *(_QWORD *)&v64[0].left, 0LL, 0LL, 0, &v56, 0LL);
            if ( v56 != *(_DWORD *)(v58 + 8) )
            {
              LODWORD(v57) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1401);
            }
            CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr(
              (CThreadLockedCurrentMonitorTopologyPtr *)v64,
              v43);
            v24 = v59;
          }
          FreeHwndList(v24, v25);
          Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(v62, v44);
        }
        else
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
          {
            v3 = 0;
          }
          v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v11 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
            LOBYTE(v12) = v10;
            LOBYTE(v13) = v3;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v13,
              v12,
              *(_QWORD *)(v11 + 69416),
              3,
              4,
              17,
              (__int64)&WPP_6b95c0fab1563d858a8149a35fde60c5_Traceguids);
          }
        }
      }
    }
    else
    {
      if ( (*(_DWORD *)(v6 + 384) & 0x10) != 0 )
        WindowActions::UnreserveSystemOperationDataSlot((WindowActions *)v6, v7);
      v45 = *((_QWORD *)v2 + 5);
      v46 = *(_DWORD *)(v45 + 24);
      if ( v46 == 3 )
      {
        ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow((struct tagWND *)v6, *((struct tagRECT **)v2 + 5));
      }
      else
      {
        *(_QWORD *)&v64[0].left = *(_QWORD *)(v45 + 16);
        v64[0].right = v46;
        v47 = ShellWindowPos::_anonymous_namespace_::AWPSOptionFromShellRequest((const struct tagRECT *)v45);
        v49 = *v48;
        v64[0].bottom = v47;
        left = v48[2].left;
        v64[1] = v49;
        v65 = left;
        AdvancedWindowPos::xxxApplyWindowPos((AdvancedWindowPos *)v6, v64, v51);
      }
    }
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v63, (__int64)v7);
  }
  ShellWindowPos::FreePositionEvent((void **)v2, v5);
}
