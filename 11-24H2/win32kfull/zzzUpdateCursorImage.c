/*
 * XREFs of zzzUpdateCursorImage @ 0x140075AF0
 * Callers:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1400759F4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x140076860 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     _anonymous_namespace_::HandlePointerCursorSideOp @ 0x140092420 (_anonymous_namespace_--HandlePointerCursorSideOp.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x140092F08 (-zzzShowCursor@@YAH_N@Z.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x140094048 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1401347D8 (-zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z.c)
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 *     zzzCalcStartCursorHide @ 0x14023E640 (zzzCalcStartCursorHide.c)
 *     HideAutorunCursor @ 0x1402717B0 (HideAutorunCursor.c)
 * Callees:
 *     FindTimer @ 0x14005FED0 (FindTimer.c)
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x140076A4C (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x140076ADC (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x140131520 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1401317DC (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x140131A04 (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 *     IsRemoteConnection @ 0x140131CF0 (IsRemoteConnection.c)
 *     ?FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z @ 0x140131D1C (-FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x140131D7C (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     PtiMouseFromQ @ 0x140131DA8 (PtiMouseFromQ.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1401725DC (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     SetRITTimer @ 0x1401BDAB0 (SetRITTimer.c)
 *     ?IsCursorImageSuppressed@@YA_NXZ @ 0x14027135C (-IsCursorImageSuppressed@@YA_NXZ.c)
 *     ?zzzSendCursorChangeWinEvent@@YAXPEAUtagCURSOR@@0@Z @ 0x1402715E0 (-zzzSendCursorChangeWinEvent@@YAXPEAUtagCURSOR@@0@Z.c)
 */

void __fastcall zzzUpdateCursorImage(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v3; // rbp
  unsigned int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct tagCURSOR *v41; // rax
  struct tagCURSOR *CurrentCursorFrame; // r15
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r13
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // ebx
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // edi
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned int v58; // r12d
  CursorApiRouter *v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  unsigned int v62; // r9d
  __int64 v63; // rdx
  __int64 v64; // rcx
  int v65; // ebx
  __int64 v66; // rax
  unsigned int CurrentCursorSize; // eax
  __int64 v68; // rax
  __int64 v69; // [rsp+60h] [rbp+8h]

  v2 = 0;
  v3 = 0LL;
  v4 = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18944)
    || (UserSessionState = W32GetUserSessionState(v6, v5),
        v8 = (struct tagTHREADINFO *)PtiMouseFromQ(*(_QWORD *)(UserSessionState + 18944)),
        !TestRawInputModeCaptureMouse(v8))
    || (v6 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18944), *(int *)(v6 + 432) >= 0) )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v6, v5) + 19232) )
      return;
    if ( IsCursorImageSuppressed() )
    {
      v4 = 7;
    }
    else
    {
      v6 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19232);
      if ( *(int *)(v6 + 432) >= 0 )
      {
        v4 = 3;
        v9 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19232);
        v3 = *(_QWORD *)(v9 + 424);
        if ( *(_DWORD *)(W32GetUserSessionState(v9, v10) + 36304) || *(_QWORD *)(W32GetUserSessionState(v6, v5) + 62752) )
        {
          v11 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19232);
          if ( *(_QWORD *)(v11 + 424) == *(_QWORD *)(W32GetUserSessionState(v13, v12) + 21936)
            || (v14 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19232),
                *(_QWORD *)(v14 + 424) == *(_QWORD *)(W32GetUserSessionState(v16, v15) + 30768))
            || (v17 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19232),
                *(_QWORD *)(v17 + 424) == *(_QWORD *)(W32GetUserSessionState(v19, v18) + 28008)) )
          {
            if ( *(_QWORD *)(W32GetUserSessionState(v6, v5) + 62752) )
            {
              v4 = 1;
              v3 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 30768);
            }
            else if ( !(unsigned __int8)isChildPartition() )
            {
              v4 = 2;
              v3 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 28008);
            }
          }
        }
      }
      else
      {
        v4 = 4;
      }
    }
  }
  v69 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 36376);
  if ( v3 != *(_QWORD *)(W32GetUserSessionState(v23, v22) + 36376) )
  {
    v27 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 36328);
    if ( v3 && (*(_DWORD *)(v3 + 80) & 8) != 0 && *(_QWORD *)(v3 + 112) )
    {
      if ( !v27 )
      {
        *(_DWORD *)(v3 + 120) = 0;
        v28 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_DWORD *)(W32GetUserSessionState(0xFFFFF78000000004uLL, v26) + 36392) = v28;
        v29 = (unsigned int)(100 * **(_DWORD **)(v3 + 112));
        LODWORD(v30) = (2863311531u * (unsigned __int64)(unsigned int)v29) >> 32;
        LODWORD(v28) = (unsigned int)v29 / 6;
        v31 = W32GetUserSessionState(v29, v30);
        v32 = SetRITTimer(*(_QWORD *)(v31 + 36328), (unsigned int)v28, zzzAnimateCursor, 1LL);
        *(_QWORD *)(W32GetUserSessionState(v34, v33) + 36328) = v32;
      }
    }
    else if ( v27 )
    {
      v35 = W32GetUserSessionState(v27, v26);
      FindTimer(0LL, *(_QWORD *)(v35 + 36328), 4u, 1, 0LL);
      *(_QWORD *)(W32GetUserSessionState(v37, v36) + 36328) = 0LL;
    }
    v38 = W32GetUserSessionState(v27, v26);
    EtwTraceWaitCursor(v3, *(_QWORD *)(v38 + 36376));
    *(_QWORD *)(W32GetUserSessionState(v40, v39) + 36376) = v3;
  }
  v41 = FixupCursorForMonitor((struct tagCURSOR *)v3);
  CurrentCursorFrame = GetCurrentCursorFrame(v41);
  if ( *(struct tagCURSOR **)(W32GetUserSessionState(v44, v43) + 36384) != CurrentCursorFrame )
  {
    v47 = *(_QWORD *)(W32GetUserSessionState(v46, v45) + 36384);
    *(_QWORD *)(W32GetUserSessionState(v49, v48) + 36384) = CurrentCursorFrame;
    if ( !CurrentCursorFrame )
    {
      SetPointerInternal(0LL, v4);
      goto LABEL_44;
    }
    v52 = *(_DWORD *)(v3 + 80) & 8;
    v55 = v52 | 0x10;
    if ( !FCursorShadowed((struct _CURSINFO *)(v3 + 80)) )
      v55 = v52;
    v58 = v55 | 0x20;
    if ( *(_DWORD *)(W32GetUserSessionState(v54, v53) + 36348) != 1 )
      v58 = v55;
    v59 = *(CursorApiRouter **)(W32GetUserSessionState(v57, v56) + 36360);
    if ( (unsigned int)IsRemoteConnection() )
      v62 = 0;
    else
      v62 = *(_DWORD *)(W32GetUserSessionState(v61, v60) + 16296);
    CursorApiRouter::SetPointerShape(v59, (struct tagCURSOR *)((char *)CurrentCursorFrame + 80), v58, v62, 0x32u);
    if ( v69 == v3 )
    {
      if ( *((_DWORD *)CurrentCursorFrame + 19) == *(_DWORD *)(v47 + 76) )
      {
LABEL_44:
        LOBYTE(v46) = *(_QWORD *)(W32GetUserSessionState(v51, v50) + 36384) != 0LL;
        LOBYTE(v2) = v47 != 0;
        if ( (unsigned __int8)v46 != v2 )
          SendVisibilityChanged();
        goto LABEL_46;
      }
      v4 = 5;
    }
    if ( (unsigned int)IsRemoteConnection() )
      v65 = 0;
    else
      v65 = *(_DWORD *)(W32GetUserSessionState(v64, v63) + 16296);
    v66 = W32GetUserSessionState(v64, v63);
    CurrentCursorSize = CCursorSizes::GetCurrentCursorSize(*(CCursorSizes **)(v66 + 36400));
    InputTraceLogging::Cursor::SetCursorImage(CurrentCursorFrame, v3, CurrentCursorSize, v4, v58, v65);
    goto LABEL_44;
  }
LABEL_46:
  v68 = W32GetUserSessionState(v46, v45);
  zzzSendCursorChangeWinEvent(*(struct tagCURSOR **)(v68 + 36384), CurrentCursorFrame);
}
