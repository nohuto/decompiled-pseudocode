/*
 * XREFs of ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0200550
 * Callers:
 *     xxxDesktopPaintCallback @ 0x1C00985F0 (xxxDesktopPaintCallback.c)
 * Callees:
 *     GreSetTextColor @ 0x1C0042038 (GreSetTextColor.c)
 *     GreExtTextOutW @ 0x1C007F960 (GreExtTextOutW.c)
 *     GetDPIServerInfo @ 0x1C00899B8 (GetDPIServerInfo.c)
 *     GreTextInitialized @ 0x1C00CD5A0 (GreTextInitialized.c)
 *     GreGetTextExtentW @ 0x1C00CD5F8 (GreGetTextExtentW.c)
 *     GreSetBkMode @ 0x1C0116984 (GreSetBkMode.c)
 *     GreSelectFontInternal @ 0x1C011A874 (GreSelectFontInternal.c)
 */

void __fastcall PaintWatermark(HDC a1, const struct tagRECT *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 DPIServerInfo; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // ebp
  int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct tagSIZE v21; // [rsp+70h] [rbp+18h] BYREF

  v21 = 0LL;
  v4 = 0LL;
  if ( (unsigned int)GreTextInitialized((__int64)a1) && *(_DWORD *)(gpsi + 2164LL) )
  {
    DPIServerInfo = GetDPIServerInfo(v5);
    v7 = *(_QWORD *)(DPIServerInfo + 8);
    if ( v7 )
      v4 = GreSelectFontInternal((__int64)a1, v7, 1);
    EnterRenderBlock();
    UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
    EnterSharedCrit(v13, v12, v14);
    EnterSharedRenderCrit();
    v15 = GreSetBkMode(a1, 1);
    v16 = GreSetTextColor((__int64)a1, 0xFFFFFF);
    if ( (unsigned int)GreGetTextExtentW(a1, gwszSafeModeStr, gSafeModeStrLen, &v21) )
    {
      GreExtTextOutW((__int64)a1, a2->left, a2->top, 0, 0LL, (__int64)gwszSafeModeStr, gSafeModeStrLen);
      GreExtTextOutW((__int64)a1, a2->right - v21.cx, a2->top, 0, 0LL, (__int64)gwszSafeModeStr, gSafeModeStrLen);
      GreExtTextOutW(
        (__int64)a1,
        a2->right - v21.cx,
        a2->bottom - *(_DWORD *)(DPIServerInfo + 40),
        0,
        0LL,
        (__int64)gwszSafeModeStr,
        gSafeModeStrLen);
      GreExtTextOutW(
        (__int64)a1,
        a2->left,
        a2->bottom - *(_DWORD *)(DPIServerInfo + 40),
        0,
        0LL,
        (__int64)gwszSafeModeStr,
        gSafeModeStrLen);
    }
    GreSetBkMode(a1, v15);
    GreSetTextColor((__int64)a1, v16);
    LeaveRenderBlock();
    LeaveRenderCrit();
    UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
    EnterCrit(1LL, 0LL);
    if ( v4 )
      GreSelectFontInternal((__int64)a1, v4, 1);
  }
}
