/*
 * XREFs of xxxDesktopPaintCallback @ 0x1C00985F0
 * Callers:
 *     NtUserPaintMonitor @ 0x1C01D78B0 (NtUserPaintMonitor.c)
 * Callees:
 *     FillRect @ 0x1C004579C (FillRect.c)
 *     ?_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z @ 0x1C006296C (-_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z.c)
 *     GetMonitorWorkRect @ 0x1C00D8B88 (GetMonitorWorkRect.c)
 *     GetStyleWindow @ 0x1C01199B0 (GetStyleWindow.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0200550 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 */

_BOOL8 __fastcall xxxDesktopPaintCallback(__int64 a1, HDC a2, const RECT *a3, __int64 a4)
{
  int v5; // ebx
  __int64 StyleWindow; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  BOOL v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // rax
  int v24; // ecx
  int v25; // edx
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  struct tagRECT v38; // [rsp+20h] [rbp-28h] BYREF
  __int64 v39; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  StyleWindow = 0LL;
  if ( *(_QWORD *)(a4 + 8) )
    a2 = *(HDC *)(a4 + 8);
  v38 = *(struct tagRECT *)GetMonitorWorkRect(&v39, a1);
  if ( a2 )
  {
    GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
    v8 = LookupDC(a2, 0LL);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 16);
      if ( v9 && (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF) == 0x29D && *(PVOID *)(v9 + 24) == grpdeskLogon )
        v5 = 1;
      if ( (*(_DWORD *)(v8 + 64) & 0x4000) != 0 )
        StyleWindow = GetStyleWindow(v9, 2848LL);
    }
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( StyleWindow )
    {
      v23 = *(_QWORD *)(StyleWindow + 40);
      v24 = *(_DWORD *)(v23 + 88);
      v25 = -*(_DWORD *)(v23 + 92);
      v38.bottom -= *(_DWORD *)(v23 + 92);
      v26 = -v24;
      v38.left += v26;
      v38.right += v26;
      v38.top += v25;
    }
  }
  if ( *(_DWORD *)(gpsi + 2164LL) || v5 )
  {
    EnterRenderBlock();
    UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
    EnterSharedCrit(v15, v14, v16);
    EnterSharedRenderCrit();
    v17 = FillRect(a2, a3, ghbrBlack) != 0;
    LeaveRenderBlock();
    LeaveRenderCrit();
    UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
    EnterCrit(1LL, 0LL);
    if ( v5 )
      return v17;
  }
  else if ( gbDesktopLocked )
  {
    v17 = 0;
  }
  else
  {
    EnterRenderBlock();
    UserSessionSwitchLeaveCrit(v28, v27, v29, v30);
    EnterSharedCrit(v32, v31, v33);
    EnterSharedRenderCrit();
    v17 = FillRect(a2, a3, *(HBRUSH *)(gpsi + 4704LL)) != 0;
    LeaveRenderBlock();
    LeaveRenderCrit();
    UserSessionSwitchLeaveCrit(v35, v34, v36, v37);
    EnterCrit(1LL, 0LL);
  }
  if ( *(_DWORD *)(gpsi + 2164LL) && !_GetShellWindow(*(struct tagDESKTOP **)(gptiCurrent + 456LL)) )
    PaintWatermark(a2, &v38);
  return v17;
}
