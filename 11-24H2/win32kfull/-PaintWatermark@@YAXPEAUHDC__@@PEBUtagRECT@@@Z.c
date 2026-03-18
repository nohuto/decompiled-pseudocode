/*
 * XREFs of ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402B5C10
 * Callers:
 *     xxxDesktopPaintCallback @ 0x1401FA6B0 (xxxDesktopPaintCallback.c)
 * Callees:
 *     GreSelectFont @ 0x1400377A0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1400379A0 (GreSetBkMode.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     GreSetTextColor @ 0x14007A278 (GreSetTextColor.c)
 *     GreExtTextOutW @ 0x14007A7F4 (GreExtTextOutW.c)
 *     GreGetTextExtentW @ 0x14007E5DC (GreGetTextExtentW.c)
 *     GreTextInitialized @ 0x140113698 (GreTextInitialized.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     GetDpiServerInfoForCurrentThread @ 0x1402F189C (GetDpiServerInfoForCurrentThread.c)
 */

void __fastcall PaintWatermark(HDC a1, const struct tagRECT *a2, __int64 a3)
{
  HFONT v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 DpiServerInfoForCurrentThread; // rbp
  HFONT v9; // rdx
  __int64 v10; // rcx
  int v11; // r15d
  int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF
  char v20; // [rsp+90h] [rbp+18h] BYREF
  __int64 v21; // [rsp+98h] [rbp+20h] BYREF

  v21 = 0LL;
  v5 = 0LL;
  if ( (unsigned int)GreTextInitialized((__int64)a1, (__int64)a2, a3)
    && *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 19928) + 2164LL) )
  {
    DpiServerInfoForCurrentThread = GetDpiServerInfoForCurrentThread();
    v9 = *(HFONT *)(DpiServerInfoForCurrentThread + 8);
    if ( v9 )
      v5 = GreSelectFont(a1, v9);
    LOBYTE(v9) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v20, (__int64)v9);
    EnterLeaveCritShared::EnterLeaveCritShared(&v19, 1LL);
    EnterSharedRenderCrit(v10);
    v11 = GreSetBkMode(a1, 1);
    v12 = GreSetTextColor(a1, 0xFFFFFF);
    UserSessionState = W32GetUserSessionState(v14, v13);
    v16 = UserSessionState + 66528;
    if ( (unsigned int)GreGetTextExtentW(
                         a1,
                         UserSessionState + 66528,
                         *(unsigned int *)(UserSessionState + 66656),
                         (__int64)&v21) )
    {
      GreExtTextOutW(a1, a2->left, a2->top, 0, 0LL, v16, *(_DWORD *)(v16 + 128));
      GreExtTextOutW(a1, a2->right - v21, a2->top, 0, 0LL, v16, *(_DWORD *)(v16 + 128));
      GreExtTextOutW(
        a1,
        a2->right - v21,
        a2->bottom - *(_DWORD *)(DpiServerInfoForCurrentThread + 40),
        0,
        0LL,
        v16,
        *(_DWORD *)(v16 + 128));
      GreExtTextOutW(
        a1,
        a2->left,
        a2->bottom - *(_DWORD *)(DpiServerInfoForCurrentThread + 40),
        0,
        0LL,
        v16,
        *(_DWORD *)(v16 + 128));
    }
    GreSetBkMode(a1, v11);
    GreSetTextColor(a1, v12);
    LeaveRenderCrit(v17);
    UserSessionSwitchLeaveCrit(v18);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v20);
    if ( v5 )
      GreSelectFont(a1, v5);
  }
}
