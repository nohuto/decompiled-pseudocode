/*
 * XREFs of ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402E1754
 * Callers:
 *     ?DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z @ 0x140257074 (-DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1402E15B0 (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402E2820 (-xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 *     ?xxxTrackThumb@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402E2A70 (-xxxTrackThumb@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402E2D6C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 * Callees:
 *     CalcSBStuff @ 0x140258028 (CalcSBStuff.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402E0EC8 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     GetScrollRequestCodeString @ 0x1402E33E4 (GetScrollRequestCodeString.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsdddddd @ 0x1402E5ED4 (WPP_RECORDER_AND_TRACE_SF_qsdddddd.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall RecalcTrackRect(struct tagSBTRACK *a1)
{
  unsigned int v1; // r8d
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int128 *v5; // rcx
  __int128 *v6; // r8
  _DWORD *v7; // rdx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // r8d
  bool v14; // r12
  bool v15; // r13
  __int64 v16; // rdx
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  __int128 v20; // [rsp+80h] [rbp-48h] BYREF

  v1 = *(_DWORD *)a1;
  v3 = *((_QWORD *)a1 + 12);
  v4 = *((_QWORD *)a1 + 1);
  v20 = 0LL;
  CalcSBStuff(v4, v3, (v1 >> 1) & 1);
  v5 = &v20;
  v6 = (__int128 *)((char *)&v20 + 4);
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    v5 = (__int128 *)((char *)&v20 + 4);
    v6 = &v20;
  }
  v7 = (_DWORD *)*((_QWORD *)a1 + 12);
  *(_DWORD *)v5 = v7[6];
  *(_DWORD *)v6 = v7[4];
  *((_DWORD *)v5 + 2) = v7[7];
  v8 = *((_DWORD *)a1 + 14);
  *((_DWORD *)v6 + 2) = v7[5];
  if ( !v8 )
  {
    v12 = v7[9];
    goto LABEL_13;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    *(_DWORD *)v6 = v7[10];
    goto LABEL_14;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    *(_DWORD *)v6 = v7[9];
    v12 = v7[13];
    goto LABEL_13;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    *(_DWORD *)v6 = v7[12];
    v12 = v7[10];
LABEL_13:
    *((_DWORD *)v6 + 2) = v12;
    goto LABEL_14;
  }
  if ( v11 == 1 )
    CalcTrackDragRect(a1);
LABEL_14:
  v13 = *((_DWORD *)a1 + 14);
  if ( v13 != 4 )
    *((_OWORD *)a1 + 2) = v20;
  v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    GetScrollRequestCodeString(v13, (*(_DWORD *)a1 >> 1) & 1);
    UserSessionState = W32GetUserSessionState(*((_QWORD *)a1 + 1), v16);
    LOBYTE(v18) = v15;
    LOBYTE(v19) = v14;
    WPP_RECORDER_AND_TRACE_SF_qsdddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v19,
      v18,
      *(_QWORD *)(UserSessionState + 69416));
  }
}
