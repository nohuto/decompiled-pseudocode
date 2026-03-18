/*
 * XREFs of ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x140131520
 * Callers:
 *     zzzUpdateCursorImage @ 0x140075AF0 (zzzUpdateCursorImage.c)
 *     SetPointer @ 0x140131500 (SetPointer.c)
 *     ?ResetCursorPointerInternal@@YAXXZ @ 0x140131E14 (-ResetCursorPointerInternal@@YAXXZ.c)
 *     zzzEnableDwmPointerSupport @ 0x1401320A8 (zzzEnableDwmPointerSupport.c)
 *     xxxUserResetDisplayDevice @ 0x140135460 (xxxUserResetDisplayDevice.c)
 *     RemoteShadowCleanup @ 0x1401E0124 (RemoteShadowCleanup.c)
 * Callees:
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x140076A4C (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x140076ADC (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1401317DC (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?SetCursorImageNull@Cursor@InputTraceLogging@@SAXW4CursorImageReason@12@@Z @ 0x140131998 (-SetCursorImageNull@Cursor@InputTraceLogging@@SAXW4CursorImageReason@12@@Z.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x140131A04 (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 *     IsRemoteConnection @ 0x140131CF0 (IsRemoteConnection.c)
 *     ?FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z @ 0x140131D1C (-FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x140131D7C (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     PtiMouseFromQ @ 0x140131DA8 (PtiMouseFromQ.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1401725DC (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 */

char __fastcall SetPointerInternal(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  unsigned int v7; // r8d
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  struct tagCURSOR *CurrentCursorFrame; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int64 v23; // rdx
  struct tagCURSOR *v24; // rax
  struct tagCURSOR *v25; // r14
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // esi
  CursorApiRouter *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // r9d
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // ebx
  __int64 v39; // rax
  unsigned int CurrentCursorSize; // eax
  __int64 v41; // rax
  struct tagTHREADINFO *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx

  v2 = a2;
  if ( !(_BYTE)a1 )
  {
    v3 = *(_DWORD *)(W32GetUserSessionState(a1, a2) + 36348);
    UserSessionState = W32GetUserSessionState(v5, v4);
    v7 = 32;
    v8 = 1;
    if ( v3 != 1 )
      v7 = 0;
    CursorApiRouter::SetPointerShape(*(CursorApiRouter **)(UserSessionState + 36360), 0LL, v7, 0, 0);
    InputTraceLogging::Cursor::SetCursorImageNull(v2);
LABEL_19:
    LOBYTE(CurrentCursorFrame) = NotifySetPointerGraphicDevice(v8);
    return (char)CurrentCursorFrame;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18944)
    || (v41 = W32GetUserSessionState(v10, v9),
        v42 = (struct tagTHREADINFO *)PtiMouseFromQ(*(_QWORD *)(v41 + 18944)),
        v10 = *(_QWORD *)(W32GetUserSessionState(v44, v43) + 18944),
        *(int *)(v10 + 432) >= 0)
    || (LOBYTE(CurrentCursorFrame) = TestRawInputModeCaptureMouse(v42), !(_BYTE)CurrentCursorFrame) )
  {
    v11 = W32GetUserSessionState(v10, v9);
    v8 = *(_QWORD *)(v11 + 19232) == 0LL ? 3 : 0;
    CurrentCursorFrame = (struct tagCURSOR *)W32GetUserSessionState(-*(_QWORD *)(v11 + 19232), v12);
    if ( *((_QWORD *)CurrentCursorFrame + 2404) )
    {
      CurrentCursorFrame = (struct tagCURSOR *)W32GetUserSessionState(v15, v14);
      v17 = *((_QWORD *)CurrentCursorFrame + 2404);
      if ( *(int *)(v17 + 432) >= 0 )
      {
        CurrentCursorFrame = (struct tagCURSOR *)W32GetUserSessionState(v17, v16);
        v19 = *((_QWORD *)CurrentCursorFrame + 2404);
        if ( *(_QWORD *)(v19 + 424) )
        {
          CurrentCursorFrame = (struct tagCURSOR *)W32GetUserSessionState(v19, v18);
          v21 = *((_QWORD *)CurrentCursorFrame + 2491);
          if ( *(_DWORD *)(v21 + 1972) )
          {
            v22 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v21, v20) + 19232) + 424LL);
            v24 = FixupCursorForMonitor((struct tagCURSOR *)v22, v23);
            CurrentCursorFrame = GetCurrentCursorFrame(v24);
            v25 = CurrentCursorFrame;
            if ( CurrentCursorFrame )
            {
              v26 = 16 * FCursorShadowed((struct _CURSINFO *)(v22 + 80));
              v31 = v26 | 0x20;
              if ( *(_DWORD *)(W32GetUserSessionState(v28, v27) + 36348) != 1 )
                v31 = v26;
              v32 = *(CursorApiRouter **)(W32GetUserSessionState(v30, v29) + 36360);
              if ( (unsigned int)IsRemoteConnection() )
                v35 = 0;
              else
                v35 = *(_DWORD *)(W32GetUserSessionState(v34, v33) + 16296);
              CursorApiRouter::SetPointerShape(v32, (struct tagCURSOR *)((char *)v25 + 80), v31, v35, 0x32u);
              v8 = 2;
              if ( (unsigned int)IsRemoteConnection() )
                v38 = 0;
              else
                v38 = *(_DWORD *)(W32GetUserSessionState(v37, v36) + 16296);
              v39 = W32GetUserSessionState(v37, v36);
              CurrentCursorSize = CCursorSizes::GetCurrentCursorSize(*(CCursorSizes **)(v39 + 36400));
              LOBYTE(CurrentCursorFrame) = InputTraceLogging::Cursor::SetCursorImage(
                                             v25,
                                             v22,
                                             CurrentCursorSize,
                                             v2,
                                             v31,
                                             v38);
            }
          }
        }
      }
    }
    if ( v8 )
      goto LABEL_19;
  }
  return (char)CurrentCursorFrame;
}
