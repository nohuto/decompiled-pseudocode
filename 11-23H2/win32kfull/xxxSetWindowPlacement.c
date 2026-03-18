/*
 * XREFs of xxxSetWindowPlacement @ 0x1C00D87B8
 * Callers:
 *     NtUserSetWindowPlacement @ 0x1C00D8660 (NtUserSetWindowPlacement.c)
 * Callees:
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C000FEE4 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     ?_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z @ 0x1C0012F2C (-_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z.c)
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00AABCC (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     _MonitorFromRect @ 0x1C00AE960 (_MonitorFromRect.c)
 *     GetMonitorWorkRect @ 0x1C00D8B88 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C00D8BCC (GetMonitorRect.c)
 *     UpdateCheckpoint @ 0x1C00E1CF4 (UpdateCheckpoint.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     WPUpdateCheckPointSettings @ 0x1C01F2498 (WPUpdateCheckPointSettings.c)
 */

__int64 __fastcall xxxSetWindowPlacement(struct tagWND *a1, __int64 a2)
{
  struct tagMONITOR *v2; // rdi
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned __int8 v6; // al
  __int64 v7; // rdx
  int v8; // r12d
  __int64 DesktopWindow; // rax
  __int64 v10; // rdx
  __int128 *MonitorWorkRect; // rax
  struct tagPOINT v12; // rcx
  BOOL v13; // r14d
  struct tagPOINT v14; // rax
  int v15; // r15d
  __int64 v16; // rax
  int v17; // r13d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 updated; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int v23; // edx
  int v24; // ecx
  __int64 v25; // rcx
  int v26; // edi
  char v27; // al
  int v28; // edi
  struct tagPOINT v30; // [rsp+40h] [rbp-29h] BYREF
  struct tagPOINT v31; // [rsp+48h] [rbp-21h] BYREF
  __int128 v32; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v33[16]; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT v34; // [rsp+70h] [rbp+7h] BYREF

  v2 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  v6 = ShouldVirtualizeWindowRect(a1, CurrentThreadDpiAwarenessContext);
  v7 = *((_QWORD *)a1 + 13);
  v8 = v6;
  v34 = *(struct tagRECT *)(a2 + 28);
  DesktopWindow = GetDesktopWindow(a1, v7);
  if ( v10 == DesktopWindow )
  {
    v2 = (struct tagMONITOR *)MonitorFromRect((__int64)&v34, 1LL, 0LL);
    MonitorWorkRect = (__int128 *)GetMonitorWorkRect(&v32, v2);
    v10 = *((_QWORD *)a1 + 13);
    v32 = *MonitorWorkRect;
  }
  v12 = *(struct tagPOINT *)(a2 + 12);
  v30 = v12;
  v13 = v12.x != -1 && v12.y != -1;
  v14 = *(struct tagPOINT *)(a2 + 20);
  v31 = v14;
  if ( v14.x == -1 || v14.y == -1 )
    v15 = 0;
  else
    v15 = 64;
  v16 = GetDesktopWindow(a1, v10);
  v17 = DWORD1(v32);
  if ( v18 == v16 && *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
  {
    v19 = *(_QWORD *)GetMonitorRect(v33, v2);
    v34.bottom += v17 - HIDWORD(v19);
    v34.left += v32 - v19;
    v34.right += v32 - v19;
    v34.top += v17 - HIDWORD(v19);
    if ( v13 )
    {
      v30.x += v32 - v19;
      v30.y += v17 - HIDWORD(v19);
    }
    CheckPlacementBounds(&v34, &v30, &v31, v2);
  }
  if ( v8 )
    TransformRectBetweenCoordinateSpaces(&v34, &v34, a1, 0LL);
  updated = UpdateCheckpoint(a1);
  v22 = updated;
  if ( updated )
  {
    v23 = *(_DWORD *)(updated + 48) & 0xFFFFFFDF;
    *(struct tagRECT *)updated = v34;
    *(struct tagPOINT *)(updated + 32) = v30;
    v21 = (32 * v13) | v23;
    *(_DWORD *)(updated + 48) = v21;
    v24 = v21 ^ (*(_DWORD *)(a2 + 4) ^ v21) & 1;
    *(_DWORD *)(updated + 48) = v24;
    *(struct tagPOINT *)(updated + 40) = v31;
    *(_DWORD *)(updated + 48) = v15 & 0xFFFFFFFD | v24 & 0xFFFFFFBD;
  }
  v25 = *((_QWORD *)a1 + 5);
  v26 = ((*(_DWORD *)(a2 + 4) & 4) << 12) | 0x14;
  v27 = *(_BYTE *)(v25 + 31);
  if ( (v27 & 0x20) != 0 )
  {
    if ( (!v22 || (*(_DWORD *)(v22 + 48) & 1) != 0) && v13 )
    {
      if ( v8 )
        TransformPointBetweenCoordinateSpaces(&v30, &v30, a1, 0LL);
      xxxSetWindowPos(a1, 0LL, (unsigned int)v30.x, (unsigned int)v30.y, 0, 0, v26 | 1);
    }
  }
  else if ( (v27 & 1) != 0 )
  {
    if ( v22 )
    {
      if ( (*(_BYTE *)(v25 + 19) & 0x40) != 0 )
        *(_DWORD *)(v22 + 48) &= ~0x40u;
      if ( (*(_DWORD *)(v22 + 48) & 0x40) != 0 )
      {
        if ( *((_QWORD *)a1 + 13) == GetDesktopWindow(a1, v21) )
        {
          v31.x += v32;
          v31.y += v17;
        }
        if ( v8 )
          TransformPointBetweenCoordinateSpaces(&v31, &v31, a1, 0LL);
        xxxSetWindowPos(a1, 0LL, (unsigned int)v31.x, (unsigned int)v31.y, 0, 0, v26 | 1);
      }
    }
  }
  else
  {
    xxxSetWindowPos(
      a1,
      0LL,
      (unsigned int)v34.left,
      (unsigned int)v34.top,
      v34.right - v34.left,
      v34.bottom - v34.top,
      v26);
  }
  if ( (*(_DWORD *)(a2 + 4) & 4) == 0 || *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == *(_QWORD *)(gptiCurrent + 432LL) )
  {
    v28 = 0;
    xxxShowWindowEx(a1, *(_WORD *)(a2 + 8), 0);
  }
  else
  {
    _ShowWindowAsync((struct tagTHREADINFO **)a1, 0, *(_DWORD *)(a2 + 8), *(unsigned int *)(a2 + 4));
    v28 = 1;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 && !v28 )
    WPUpdateCheckPointSettings(a1, *(unsigned int *)(a2 + 4));
  return 1LL;
}
