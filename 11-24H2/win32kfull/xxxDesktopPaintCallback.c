/*
 * XREFs of xxxDesktopPaintCallback @ 0x1401FA6B0
 * Callers:
 *     NtUserPaintMonitor @ 0x14029A240 (NtUserPaintMonitor.c)
 * Callees:
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x14002699C (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetMonitorWorkRectForDpi @ 0x1400269FC (GetMonitorWorkRectForDpi.c)
 *     GetStyleWindow @ 0x14002F5E0 (GetStyleWindow.c)
 *     FillRect @ 0x140038250 (FillRect.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z @ 0x14012B2E0 (-_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402B5C10 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 */

_BOOL8 __fastcall xxxDesktopPaintCallback(__int64 a1, HDC a2, const RECT *a3, __int64 a4)
{
  int v5; // edi
  __int64 StyleWindow; // rsi
  unsigned int CurrentThreadCompositedDpiContext; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  BOOL v32; // esi
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // ebx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // edx
  int v43; // r8d
  __int64 v44; // rdx
  __int64 v45; // rcx
  struct tagTHREADINFO *v46; // rax
  struct tagRECT v47; // [rsp+20h] [rbp-20h] BYREF
  __m128i v48; // [rsp+30h] [rbp-10h] BYREF
  char v49; // [rsp+78h] [rbp+38h] BYREF
  char v50; // [rsp+88h] [rbp+48h] BYREF

  v5 = 0;
  StyleWindow = 0LL;
  if ( *(_QWORD *)(a4 + 8) )
    a2 = *(HDC *)(a4 + 8);
  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
  GetMonitorWorkRectForDpi(&v48, a1, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
  v47 = (struct tagRECT)v48;
  if ( a2 )
  {
    UserSessionState = W32GetUserSessionState(v11, v10);
    GreLockVisRgnShared(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
    v13 = LookupDC(a2, 0LL);
    v16 = v13;
    if ( v13 )
    {
      v17 = *(_QWORD *)(v13 + 80);
      v18 = v17;
      if ( v17 )
      {
        v15 = *(_WORD *)(*(_QWORD *)(v17 + 40) + 42LL) & 0x2FFF;
        if ( (_DWORD)v15 == 669 )
        {
          v19 = W32GetUserSessionState(v15, v14);
          v18 = *(_QWORD *)(v16 + 80);
          v14 = *(_QWORD *)(v19 + 63016);
          if ( *(_QWORD *)(v18 + 24) == v14 )
            v5 = 1;
        }
      }
      if ( (*(_DWORD *)(v16 + 48) & 0x4000) != 0 )
        StyleWindow = GetStyleWindow(v18, 2848);
    }
    v20 = W32GetUserSessionState(v15, v14);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v20 + 57008) + 48LL));
    if ( StyleWindow )
    {
      v41 = *(_QWORD *)(StyleWindow + 40);
      v42 = *(_DWORD *)(v41 + 88);
      v43 = -*(_DWORD *)(v41 + 92);
      v47.bottom -= *(_DWORD *)(v41 + 92);
      v10 = (unsigned int)-v42;
      v47.right += v10;
      v11 = (unsigned int)(v10 + v48.m128i_i32[0]);
      v47.top += v43;
      v47.left = v10 + v48.m128i_i32[0];
    }
  }
  v22 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19928);
  if ( *(_DWORD *)(v22 + 2164) || v5 )
  {
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v49, 1);
    EnterLeaveCritShared::EnterLeaveCritShared(&v50, 1LL);
    EnterSharedRenderCrit(v23);
    v26 = W32GetUserSessionState(v25, v24);
    v27 = FillRect(a2, a3, *(HBRUSH *)(v26 + 43096));
    LeaveRenderCrit(v28);
    UserSessionSwitchLeaveCrit(v29);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v49);
    v32 = v27 != 0;
    if ( v5 )
      return v32;
  }
  else if ( *(_DWORD *)(W32GetUserSessionState(v22, v21) + 62872) )
  {
    v32 = 0;
  }
  else
  {
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v49, 1);
    EnterLeaveCritShared::EnterLeaveCritShared(&v50, 1LL);
    EnterSharedRenderCrit(v34);
    v37 = W32GetUserSessionState(v36, v35);
    v38 = FillRect(a2, a3, *(HBRUSH *)(*(_QWORD *)(v37 + 19928) + 4704LL));
    LeaveRenderCrit(v39);
    UserSessionSwitchLeaveCrit(v40);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v49);
    v32 = v38 != 0;
  }
  v44 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 19928);
  if ( *(_DWORD *)(v44 + 2164) )
  {
    v46 = PtiCurrent(v45, v44);
    if ( !_GetShellWindow(*((struct tagDESKTOP **)v46 + 62)) )
      PaintWatermark(a2, &v47);
  }
  return v32;
}
