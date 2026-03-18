/*
 * XREFs of ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1402E15B0
 * Callers:
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402E2D6C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140032E18 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GrePatBlt @ 0x1400C4060 (GrePatBlt.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402E1754 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qldddddd @ 0x1402E4B30 (WPP_RECORDER_AND_TRACE_SF_qldddddd.c)
 */

void __fastcall InvertScrollHilite(struct tagWND *a1, struct tagSBTRACK *a2)
{
  struct tagWND *v3; // rbx
  bool v4; // al
  unsigned int *v5; // rcx
  const struct tagRECT *v6; // r13
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  HDC DCEx; // rbx
  bool v12; // [rsp+C8h] [rbp+10h]
  bool v13; // [rsp+D0h] [rbp+18h]

  v3 = a1;
  v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v5 = &WPP_RECORDER_INITIALIZED;
  v12 = v4;
  v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v6 = (const struct tagRECT *)((char *)a2 + 32);
    LOBYTE(v5) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    UserSessionState = W32GetUserSessionState(v5, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v8) = v13;
    LOBYTE(v9) = v12;
    WPP_RECORDER_AND_TRACE_SF_qldddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69416));
    v3 = a1;
  }
  else
  {
    v6 = (const struct tagRECT *)((char *)a2 + 32);
  }
  if ( !IsRectEmptyInl(v6) )
  {
    if ( (*(_DWORD *)a2 & 8) != 0 )
    {
      RecalcTrackRect(a2);
      *(_DWORD *)a2 &= ~8u;
    }
    DCEx = (HDC)_GetDCEx(v3, 0LL, 65537LL);
    GrePatBlt(DCEx, v6->left, v6->top, v6->right - v6->left, v6->bottom - v6->top, 5570569);
    _ReleaseDC(DCEx);
  }
}
