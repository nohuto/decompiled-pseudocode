/*
 * XREFs of ?DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z @ 0x140257074
 * Callers:
 *     ?DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402574D0 (-DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x140257BE8 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402E1D78 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 * Callees:
 *     DrawPushButton @ 0x140037B70 (DrawPushButton.c)
 *     GrePatBlt @ 0x1400C4060 (GrePatBlt.c)
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1402E115C (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402E1754 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ql @ 0x1402E4580 (WPP_RECORDER_AND_TRACE_SF_ql.c)
 *     WPP_RECORDER_AND_TRACE_SF_qlDdddddddddddd @ 0x1402E48A0 (WPP_RECORDER_AND_TRACE_SF_qlDdddddddddddd.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall DrawThumb2(struct tagWND *a1, struct tagSBCALC *a2, HDC a3, HBRUSH a4, int a5, char a6)
{
  HBRUSH v6; // r13
  HDC v7; // r14
  struct tagSBCALC *v8; // rbx
  struct tagWND *v9; // r12
  char v10; // bp
  char v11; // al
  int v12; // esi
  char v13; // r15
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  RECT *p_top; // rax
  RECT *v19; // rdi
  LONG v20; // ecx
  LONG v21; // eax
  LONG v22; // eax
  LONG v23; // ecx
  __int64 v24; // rdi
  _DWORD *v25; // rdx
  bool v26; // di
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  char v30; // [rsp+C0h] [rbp-88h]
  char v31; // [rsp+C1h] [rbp-87h]
  struct tagSBCALC *v33; // [rsp+E0h] [rbp-68h]
  RECT v36; // [rsp+F8h] [rbp-50h] BYREF

  v36 = 0LL;
  v6 = a4;
  v7 = a3;
  v33 = a2;
  v8 = a2;
  v9 = a1;
  v10 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
    || (LOBYTE(a2) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  v31 = (char)a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v11 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v11 = 0;
  }
  v30 = v11;
  if ( (_BYTE)a2 || v11 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v15) = v30;
    LOBYTE(v16) = v31;
    v13 = a6;
    v12 = a5;
    WPP_RECORDER_AND_TRACE_SF_qlDdddddddddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v16,
      v15,
      *(_QWORD *)(UserSessionState + 69416));
    v8 = v33;
    v7 = a3;
    v9 = a1;
    v6 = a4;
    v10 = 1;
  }
  else
  {
    v12 = a5;
    v13 = a6;
  }
  if ( *((_DWORD *)v8 + 4) >= *((_DWORD *)v8 + 5)
    || (v17 = *((_DWORD *)v8 + 6), a2 = (struct tagSBCALC *)*((unsigned int *)v8 + 7), v17 >= (int)a2) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v10 = 0;
    }
    v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v27 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v28) = v26;
      LOBYTE(v29) = v10;
      WPP_RECORDER_AND_TRACE_SF_ql(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v29,
        v28,
        *(_QWORD *)(v27 + 69416),
        3);
    }
  }
  else
  {
    p_top = (RECT *)&v36.top;
    if ( v12 )
      p_top = &v36;
    v19 = &v36;
    if ( v12 )
      v19 = (RECT *)&v36.top;
    p_top->left = v17;
    p_top->right = (int)a2;
    if ( (v13 & 3) == 3 || (v20 = *((_DWORD *)v8 + 9), *((_DWORD *)v8 + 10) - v20 < *((_DWORD *)v8 + 8)) )
    {
      v19->left = *((_DWORD *)v8 + 9);
      v19->right = *((_DWORD *)v8 + 10);
      DrawGroove(v7, v6, &v36, v12);
    }
    else
    {
      v21 = *((_DWORD *)v8 + 13);
      if ( v20 < v21 )
      {
        v19->left = v20;
        v19->right = v21;
        DrawGroove(v7, v6, &v36, v12);
      }
      v22 = *((_DWORD *)v8 + 12);
      v23 = *((_DWORD *)v8 + 10);
      if ( v22 < v23 )
      {
        v19->right = v23;
        v19->left = v22;
        DrawGroove(v7, v6, &v36, v12);
      }
      v19->left = *((_DWORD *)v8 + 13);
      v19->right = *((_DWORD *)v8 + 12);
      DrawPushButton(v7, &v36, 0, 0);
      v24 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 752LL);
      if ( v24
        && (unsigned int)(*(_DWORD *)(v24 + 56) - 2) <= 1
        && v9 == *(struct tagWND **)(v24 + 8)
        && ((*(_DWORD *)v24 >> 1) & 1) == v12 )
      {
        if ( (*(_DWORD *)v24 & 8) != 0 )
        {
          RecalcTrackRect((struct tagSBTRACK *)v24);
          *(_DWORD *)v24 &= ~8u;
        }
        v25 = (_DWORD *)(v24 + 32);
        if ( v12 )
          v25 = (_DWORD *)(v24 + 36);
        if ( *(_DWORD *)(v24 + 56) == 2 )
          v25[2] = *((_DWORD *)v8 + 13);
        else
          *v25 = *((_DWORD *)v8 + 12);
        if ( *v25 < v25[2] )
          GrePatBlt(
            v7,
            *(_DWORD *)(v24 + 32),
            *(_DWORD *)(v24 + 36),
            *(_DWORD *)(v24 + 40) - *(_DWORD *)(v24 + 32),
            *(_DWORD *)(v24 + 44) - *(_DWORD *)(v24 + 36),
            5570569);
      }
    }
  }
}
