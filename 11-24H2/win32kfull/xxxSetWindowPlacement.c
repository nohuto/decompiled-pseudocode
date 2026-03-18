/*
 * XREFs of xxxSetWindowPlacement @ 0x140086334
 * Callers:
 *     NtUserSetWindowPlacement @ 0x1400861F0 (NtUserSetWindowPlacement.c)
 * Callees:
 *     UpdateCheckpoint @ 0x140025F7C (UpdateCheckpoint.c)
 *     GetMonitorWorkRect @ 0x1400267BC (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x140026800 (GetMonitorRect.c)
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z @ 0x1401176EC (-_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1401E7800 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     ?IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z @ 0x14026C524 (-IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z.c)
 *     WPUpdateCheckPointSettings @ 0x1402AB184 (WPUpdateCheckPointSettings.c)
 *     ?xxxInterceptSetWindowPlacement@WindowActions@@YAXPEAUtagWND@@_NIAEBUtagRECT@@@Z @ 0x1402D02C4 (-xxxInterceptSetWindowPlacement@WindowActions@@YAXPEAUtagWND@@_NIAEBUtagRECT@@@Z.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x1402DB324 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetWindowPlacement(struct tagWND *a1, __int64 a2)
{
  struct tagMONITOR *v2; // r14
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  char v6; // al
  const struct tagWND *v7; // rdx
  char v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int128 *MonitorWorkRect; // rax
  struct tagPOINT v13; // rcx
  int v14; // r12d
  struct tagPOINT v15; // rax
  int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 *MonitorRect; // rax
  __int64 v20; // rcx
  int v21; // edx
  WindowActions *v22; // rcx
  struct tagWND *v23; // rdx
  __int64 v24; // rdx
  char v25; // bl
  bool v26; // di
  __int64 UserSessionState; // rax
  int v28; // r8d
  int v29; // edx
  CHECKPOINT *updated; // rax
  __int64 v31; // rdx
  struct tagPOINT *v32; // r15
  _DWORD *v33; // r14
  unsigned int v34; // ecx
  int v35; // edx
  __int64 v36; // rcx
  int v37; // edi
  char v38; // al
  struct tagTHREADINFO *v39; // rax
  int v40; // edi
  __int64 v41; // rax
  __int64 v42; // rdx
  const struct tagRECT *v44; // [rsp+20h] [rbp-49h]
  struct tagPOINT v45; // [rsp+40h] [rbp-29h] BYREF
  struct tagPOINT v46; // [rsp+48h] [rbp-21h] BYREF
  int v47; // [rsp+50h] [rbp-19h]
  __int128 v48; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v49[16]; // [rsp+68h] [rbp-1h] BYREF
  struct tagRECT v50; // [rsp+78h] [rbp+Fh] BYREF

  v2 = 0LL;
  v45 = 0LL;
  v50 = 0LL;
  v46 = 0LL;
  v48 = 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  v6 = ShouldVirtualizeWindowRect(a1, CurrentThreadDpiAwarenessContext);
  v7 = (const struct tagWND *)*((_QWORD *)a1 + 3);
  v8 = v6;
  v9 = 0LL;
  v50 = *(struct tagRECT *)(a2 + 28);
  if ( v7 )
  {
    v10 = *((_QWORD *)v7 + 1);
    if ( v10 )
      v9 = *(_QWORD *)(v10 + 24);
  }
  v11 = *((_QWORD *)a1 + 13);
  if ( v11 == v9 )
  {
    v2 = (struct tagMONITOR *)MonitorFromRect(&v50.left, 1u, 0);
    MonitorWorkRect = (__int128 *)GetMonitorWorkRect((__int64)&v48, (__int64)v2);
    v7 = (const struct tagWND *)*((_QWORD *)a1 + 3);
    v11 = *((_QWORD *)a1 + 13);
    v48 = *MonitorWorkRect;
  }
  v13 = *(struct tagPOINT *)(a2 + 12);
  v45 = v13;
  if ( v13.x == -1 || (v14 = 1, v13.y == -1) )
    v14 = 0;
  v15 = *(struct tagPOINT *)(a2 + 20);
  v46 = v15;
  if ( v15.x == -1 || v15.y == -1 )
  {
    v16 = 0;
    v47 = 0;
  }
  else
  {
    v16 = 1;
    v47 = 32;
  }
  v17 = 0LL;
  if ( v7 )
  {
    v18 = *((_QWORD *)v7 + 1);
    if ( v18 )
      v17 = *(_QWORD *)(v18 + 24);
  }
  if ( v11 == v17 && *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
  {
    MonitorRect = (__int64 *)GetMonitorRect((__int64)v49, (__int64)v2);
    v20 = *MonitorRect;
    v21 = DWORD1(v48) - HIDWORD(*MonitorRect);
    v50.bottom += v21;
    v50.left += v48 - v20;
    v50.right += v48 - v20;
    v50.top += v21;
    if ( v14 )
    {
      v45.x += v48 - v20;
      v45.y += v21;
    }
    CheckPlacementBounds(&v50, &v45, &v46, v2);
  }
  if ( v8 )
    TransformRectBetweenCoordinateSpaces(&v50, &v50, a1, 0LL);
  if ( WindowActions::IsInterceptWindow(a1, v7) )
  {
    v23 = (struct tagWND *)(*(_DWORD *)(a2 + 4) >> 1);
    LOBYTE(v23) = (*(_DWORD *)(a2 + 4) & 2) != 0;
    WindowActions::xxxInterceptSetWindowPlacement(v22, v23, *(_DWORD *)(a2 + 8), (unsigned int)&v50, v44);
    if ( v14 || v16 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v25 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
      {
        v25 = 0;
      }
      v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24);
        LOBYTE(v28) = v26;
        LOBYTE(v29) = v25;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v29,
          v28,
          *(_QWORD *)(UserSessionState + 69416),
          3,
          4,
          10,
          (__int64)&WPP_867488863ffe3093fa9718447395f37e_Traceguids);
      }
    }
  }
  else
  {
    updated = UpdateCheckpoint(v22);
    v32 = (struct tagPOINT *)updated;
    v33 = (_DWORD *)((char *)updated + 16);
    if ( updated )
    {
      CHECKPOINT::SetNormalRect(updated, a1, &v50, 0);
      *v32 = v45;
      v34 = (16 * v14) | *v33 & 0xFFFFFFEF;
      *v33 = v34;
      v35 = v34 ^ (*(_DWORD *)(a2 + 4) ^ v34) & 1;
      *v33 = v35;
      v31 = v47 & 0xFFFFFFFD | v35 & 0xFFFFFFDD;
      v32[1] = v46;
      *v33 = v31;
    }
    v36 = *((_QWORD *)a1 + 5);
    v37 = ((*(_DWORD *)(a2 + 4) & 4) << 12) | 0x14;
    v38 = *(_BYTE *)(v36 + 31);
    if ( (v38 & 0x20) != 0 )
    {
      if ( (!v32 || (*v33 & 1) != 0) && v14 )
      {
        if ( v8 )
          TransformPointBetweenCoordinateSpaces(&v45, &v45, a1, 0LL);
        xxxSetWindowPos(a1, 0LL, (unsigned int)v45.x, (unsigned int)v45.y, 0, 0, v37 | 1);
      }
    }
    else if ( (v38 & 1) != 0 )
    {
      if ( v32 )
      {
        if ( (*(_BYTE *)(v36 + 19) & 0x40) != 0 )
          *v33 &= ~0x20u;
        if ( (*v33 & 0x20) != 0 )
        {
          if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
          {
            v46.x += v48;
            v46.y += DWORD1(v48);
          }
          if ( v8 )
            TransformPointBetweenCoordinateSpaces(&v46, &v46, a1, 0LL);
          xxxSetWindowPos(a1, 0LL, (unsigned int)v46.x, (unsigned int)v46.y, 0, 0, v37 | 1);
        }
      }
    }
    else
    {
      xxxSetWindowPos(
        a1,
        0LL,
        (unsigned int)v50.left,
        (unsigned int)v50.top,
        v50.right - v50.left,
        v50.bottom - v50.top,
        v37);
    }
    if ( (*(_DWORD *)(a2 + 4) & 4) == 0
      || (v39 = PtiCurrent(v36, v31), v36 = *((_QWORD *)a1 + 2), *(_QWORD *)(v36 + 472) == *((_QWORD *)v39 + 59)) )
    {
      v40 = 0;
      v41 = W32GetUserSessionState(v36, v31);
      LOBYTE(v42) = *(_BYTE *)(a2 + 8);
      xxxShowWindowEx(a1, v42, *(_DWORD *)(v41 + 67056) & 0x10000);
    }
    else
    {
      _ShowWindowAsync(a1, 0LL, *(unsigned int *)(a2 + 8), *(unsigned int *)(a2 + 4));
      v40 = 1;
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 && !v40 )
      WPUpdateCheckPointSettings(a1, *(unsigned int *)(a2 + 4));
  }
  return 1LL;
}
