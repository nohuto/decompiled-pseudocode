/*
 * XREFs of ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x140257BE8
 * Callers:
 *     xxxDrawScrollBar @ 0x1402E695C (xxxDrawScrollBar.c)
 * Callees:
 *     DrawFrameControl @ 0x1400373A4 (DrawFrameControl.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     GreSetTextColor @ 0x14007A278 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x14007A308 (GreSetBkColor.c)
 *     BitBltSysBmp @ 0x14007B288 (BitBltSysBmp.c)
 *     xxxDefWindowProc @ 0x14007E7C0 (xxxDefWindowProc.c)
 *     GreGetTextColor @ 0x14021820C (GreGetTextColor.c)
 *     GreGetBkColor @ 0x140220C6C (GreGetBkColor.c)
 *     ?DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z @ 0x140257074 (-DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qlDddddddddd @ 0x1402E465C (WPP_RECORDER_AND_TRACE_SF_qlDddddddddd.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall xxxDrawSB2(struct tagTHREADINFO **a1, struct tagSBCALC *a2, HDC a3, int a4, char a5)
{
  int v7; // ebx
  int v10; // r14d
  unsigned int DpiForSystem; // eax
  struct tagRECT *p_top; // rdx
  struct tagRECT *v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // r8
  __int64 v16; // rcx
  char v17; // al
  LONG bottom; // r12d
  LONG right; // r13d
  __int64 v20; // rsi
  __int64 v21; // rax
  LONG top; // edx
  int v23; // r8d
  unsigned int v24; // eax
  __int64 v25; // r8
  int v26; // r9d
  unsigned int v27; // eax
  LONG v28; // ebx
  __int64 v29; // rbx
  __int64 v30; // r8
  char v31; // [rsp+A0h] [rbp-41h]
  char v32; // [rsp+A1h] [rbp-40h]
  int DpiDependentMetric; // [rsp+A4h] [rbp-3Dh]
  int BkColor; // [rsp+B0h] [rbp-31h]
  int TextColor; // [rsp+B4h] [rbp-2Dh]
  __int64 v38; // [rsp+C0h] [rbp-21h]
  HBRUSH v39; // [rsp+C8h] [rbp-19h]
  struct tagRECT v41; // [rsp+E0h] [rbp-1h] BYREF

  v7 = *((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 6);
  v10 = (*((_DWORD *)a2 + 5) - *((_DWORD *)a2 + 4)) / 2;
  v41 = 0LL;
  if ( v10 > 0 && v7 > 0 )
  {
    DpiForSystem = GetDpiForSystem((__int64)a1);
    DpiDependentMetric = GetDpiDependentMetric(11 - (unsigned int)(a4 != 0), DpiForSystem);
    BkColor = GreGetBkColor(a3);
    TextColor = GreGetTextColor(a3);
    v39 = (HBRUSH)xxxDefWindowProc(a1, 311LL, (HWND)a3, *a1);
    p_top = (struct tagRECT *)&v41.top;
    v13 = &v41;
    if ( v10 > DpiDependentMetric )
      v10 = DpiDependentMetric;
    if ( !a4 )
    {
      p_top = &v41;
      v13 = (struct tagRECT *)&v41.top;
    }
    v13->left = *((_DWORD *)a2 + 6);
    p_top->left = *((_DWORD *)a2 + 4);
    v13->right = *((_DWORD *)a2 + 7);
    p_top->right = *((_DWORD *)a2 + 5);
    UserSessionState = W32GetUserSessionState(v13, p_top);
    v38 = GreSelectBrush(a3, *(_QWORD *)(*(_QWORD *)(UserSessionState + 19928) + 4840LL), v15);
    LOBYTE(v16) = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
               && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) != 0
               && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    v32 = v16;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v17 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v17 = 0;
    }
    bottom = v41.bottom;
    right = v41.right;
    v20 = *(_QWORD *)&v41.left;
    v31 = v17;
    if ( (_BYTE)v16 || v17 )
    {
      v21 = W32GetUserSessionState(v16, *(_QWORD *)&WPP_GLOBAL_Control);
      top = v41.top;
      v23 = DpiDependentMetric;
      LOBYTE(v23) = v31;
      LOBYTE(top) = v32;
      WPP_RECORDER_AND_TRACE_SF_qlDddddddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        top,
        v23,
        *(_QWORD *)(v21 + 69416));
    }
    if ( a4 )
    {
      if ( v10 == DpiDependentMetric )
      {
        v24 = GetDpiForSystem(v16);
        if ( v7 == (unsigned int)GetDpiDependentMetric(0, v24) )
        {
          BitBltSysBmp(a3, v20, v41.top, (a5 & 1) != 0 ? 49 : 46, 1);
          BitBltSysBmp(a3, v20, bottom - v10, (a5 & 2) != 0 ? 53 : 50, 1);
LABEL_28:
          v29 = GreSelectBrush(a3, v38, v25);
          DrawThumb2((struct tagWND *)a1, a2, a3, v39, a4, a5);
          GreSelectBrush(a3, v29, v30);
          GreSetBkColor(a3, BkColor);
          GreSetTextColor(a3, TextColor);
          return;
        }
      }
      v41.bottom = v10 + HIDWORD(v20);
      DrawFrameControl(a3, &v41, 3u, (a5 & 1) << 8);
      v41.bottom = bottom;
      v26 = ((a5 & 2) << 7) | 1;
      v41.top = bottom - v10;
    }
    else
    {
      if ( v10 == DpiDependentMetric )
      {
        v27 = GetDpiForSystem(v16);
        if ( v7 == (unsigned int)GetDpiDependentMetric(1, v27) )
        {
          v28 = v41.top;
          BitBltSysBmp(a3, v20, v41.top, (a5 & 1) != 0 ? 61 : 58, 1);
          BitBltSysBmp(a3, right - v10, v28, (a5 & 2) != 0 ? 57 : 54, 1);
          goto LABEL_28;
        }
      }
      v41.right = v20 + v10;
      DrawFrameControl(a3, &v41, 3u, ((a5 & 1) << 8) | 2);
      v41.right = right;
      v26 = ((a5 & 2) << 7) | 3;
      v41.left = right - v10;
    }
    DrawFrameControl(a3, &v41, 3u, v26);
    goto LABEL_28;
  }
}
