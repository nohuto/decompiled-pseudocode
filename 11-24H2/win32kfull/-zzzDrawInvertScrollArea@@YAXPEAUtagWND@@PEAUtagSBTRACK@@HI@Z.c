/*
 * XREFs of ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402E2D6C
 * Callers:
 *     ?xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402E2820 (-xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 *     xxxEndScroll @ 0x1402E6AC0 (xxxEndScroll.c)
 * Callees:
 *     DrawFrameControl @ 0x1400373A4 (DrawFrameControl.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     BitBltSysBmp @ 0x14007B288 (BitBltSysBmp.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1402E15B0 (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402E1754 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     GetScrollRequestCodeString @ 0x1402E33E4 (GetScrollRequestCodeString.c)
 *     WPP_RECORDER_AND_TRACE_SF_qlsddddddll @ 0x1402E5184 (WPP_RECORDER_AND_TRACE_SF_qlsddddddll.c)
 */

void __fastcall zzzDrawInvertScrollArea(struct tagWND *a1, struct tagSBTRACK *a2, int a3, unsigned int a4)
{
  unsigned int v4; // esi
  int v5; // ebp
  struct tagWND *v7; // r15
  bool v8; // al
  unsigned int *v9; // rcx
  unsigned int v10; // r14d
  int v11; // r8d
  int v12; // edx
  int v13; // r9d
  unsigned int v14; // edi
  unsigned __int16 v15; // ax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  int v19; // r14d
  __int64 DCEx; // rax
  __int64 v21; // rcx
  HDC v22; // r12
  int v23; // ebx
  int v24; // r14d
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  __int64 v27; // rcx
  unsigned int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  unsigned int v32; // r9d
  unsigned __int16 v33; // ax
  __int64 v34; // rdx
  __int64 v35; // rcx
  bool v36; // [rsp+A0h] [rbp-58h]
  bool v37; // [rsp+A1h] [rbp-57h]
  struct tagRECT v38; // [rsp+A8h] [rbp-50h] BYREF

  v4 = a4;
  v5 = a3;
  v7 = a1;
  v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v9 = &WPP_RECORDER_INITIALIZED;
  v36 = v8;
  v37 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v10 = (*(_DWORD *)a2 >> 1) & 1;
    LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    W32GetUserSessionState(v9, *(_QWORD *)&WPP_GLOBAL_Control);
    GetScrollRequestCodeString(a4, v10);
    LOBYTE(v11) = v37;
    LOBYTE(v12) = v36;
    v5 = a3;
    WPP_RECORDER_AND_TRACE_SF_qlsddddddll(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL), v12, v11, v13);
    v4 = a4;
    v7 = a1;
  }
  v14 = 2;
  if ( v4 < 2 )
  {
    if ( (*(_DWORD *)a2 & 8) != 0 )
    {
      RecalcTrackRect(a2);
      *(_DWORD *)a2 &= ~8u;
    }
    v38 = (struct tagRECT)*((_OWORD *)a2 + 2);
    DCEx = _GetDCEx(v7, 0LL, 65537LL);
    v21 = *(unsigned int *)a2;
    v22 = (HDC)DCEx;
    if ( (v21 & 2) != 0 )
    {
      v23 = 0;
      v24 = 10;
    }
    else
    {
      v24 = 1;
      v23 = 11;
    }
    DpiForSystem = GetDpiForSystem(v21);
    DpiDependentMetric = GetDpiDependentMetric(v23, DpiForSystem);
    v28 = GetDpiForSystem(v27);
    v29 = GetDpiDependentMetric(v24, v28);
    v19 = 3;
    if ( DpiDependentMetric == v38.right - v38.left && v29 == v38.bottom - v38.top )
    {
      v30 = *(_DWORD *)a2;
      if ( v4 )
        v31 = ~(2 * (_BYTE)v30) & 4 | 0x32;
      else
        v31 = (v30 & 2) != 0 ? 46 : 58;
      v32 = v31 + 1;
      if ( !v5 )
        v32 = v31;
      BitBltSysBmp(v22, v38.left, v38.top, v32, 1);
    }
    else
    {
      DrawFrameControl(v22, &v38, 3u, (v4 != 0) | (v5 != 0 ? 0x4200 : 0) | ~*(_DWORD *)a2 & 2);
    }
    _ReleaseDC(v22);
    if ( v4 )
      v33 = 1544;
    else
      v33 = 1537;
    SetOrClrWF(v5 != 0, v7, v33, 1);
    UserSessionState = W32GetUserSessionState(v35, v34);
    v14 = v4 != 0 ? 5 : 1;
  }
  else
  {
    InvertScrollHilite(v7, a2);
    if ( v4 == 2 )
      v15 = 1538;
    else
      v15 = 1540;
    SetOrClrWF(v5 != 0, v7, v15, 1);
    UserSessionState = W32GetUserSessionState(v17, v16);
    if ( v4 != 2 )
      v14 = 4;
    v19 = 3;
  }
  if ( !*(_DWORD *)(UserSessionState + 70856) )
    v19 = 1;
  xxxWindowEvent(0x800Au, v7, ((*(_DWORD *)a2 & 2) != 0) | 0xFFFFFFFA, v14, v19);
}
