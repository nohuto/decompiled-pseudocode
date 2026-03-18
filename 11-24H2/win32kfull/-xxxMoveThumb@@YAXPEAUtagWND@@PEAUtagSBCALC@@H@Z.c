/*
 * XREFs of ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402E1D78
 * Callers:
 *     ?xxxTrackThumb@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402E2A70 (-xxxTrackThumb@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 * Callees:
 *     xxxDefWindowProc @ 0x14007E7C0 (xxxDefWindowProc.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1401162C8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140211468 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     ?DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z @ 0x140257074 (-DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z.c)
 *     ?SBPosFromPx@@YAHPEAUtagSBCALC@@H@Z @ 0x1402E194C (-SBPosFromPx@@YAHPEAUtagSBCALC@@H@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402E1AD0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddddddddddddd @ 0x1402E3F20 (WPP_RECORDER_AND_TRACE_SF_qddddddddddddd.c)
 */

void __fastcall xxxMoveThumb(struct tagWND *a1, struct tagSBCALC *a2, int a3)
{
  int v3; // esi
  struct tagSBCALC *v4; // r13
  struct tagWND *v5; // r14
  char v6; // di
  char v7; // al
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rbx
  __int64 v12; // rdx
  struct tagTHREADINFO **v13; // rdx
  int v14; // eax
  HWND DCEx; // rbp
  unsigned int *v16; // rcx
  char v17; // r12
  struct tagTHREADINFO *v18; // rbx
  __int64 v19; // rax
  HBRUSH v20; // r12
  __int64 v21; // r8
  __int64 v22; // rdx
  _DWORD *v23; // rbx
  bool v24; // bl
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  bool v28; // si
  struct tagTHREADINFO *v29; // rbx
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int64 v33; // r8
  char v34; // bp
  struct tagTHREADINFO *v35; // rbx
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  bool v39; // [rsp+B0h] [rbp-68h]
  char v41; // [rsp+120h] [rbp+8h]
  __int64 v42; // [rsp+120h] [rbp+8h]
  char v45; // [rsp+138h] [rbp+20h]
  int v46; // [rsp+138h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
    || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v7 = 0;
  }
  v45 = v7;
  v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v9) = v39;
    LOBYTE(v10) = v45;
    v3 = a3;
    WPP_RECORDER_AND_TRACE_SF_qddddddddddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69416));
    v4 = a2;
    v5 = a1;
    v6 = 1;
  }
  v11 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 752LL);
  if ( !v11 || v3 == *(_DWORD *)(v11 + 76) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || (v34 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v34 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v6 = 0;
    }
    if ( v34 || v6 )
    {
      v35 = *(struct tagTHREADINFO **)v5;
      v36 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v37) = v6;
      LOBYTE(v38) = v34;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v38,
        v37,
        *(_QWORD *)(v36 + 69416),
        5,
        9,
        38,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        (char)v35,
        v3);
    }
  }
  else
  {
    v12 = (unsigned int)v3;
    while ( 1 )
    {
      v14 = SBPosFromPx(v4, v12);
      *(_DWORD *)(v11 + 84) = v14;
      if ( v14 == *(_DWORD *)(v11 + 80) )
      {
LABEL_18:
        DCEx = (HWND)_GetDCEx(v5, 0LL, 65537LL);
        *((_DWORD *)v4 + 13) = v3;
        v46 = v3 + *((_DWORD *)v4 + 8);
        *((_DWORD *)v4 + 12) = v46;
        v16 = &WPP_GLOBAL_Control;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
          || (LOBYTE(v16) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          LOBYTE(v16) = 0;
        }
        v41 = (char)v16;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v17 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v17 = 0;
        }
        if ( (_BYTE)v16 || v17 )
        {
          v18 = *(struct tagTHREADINFO **)v5;
          v19 = W32GetUserSessionState(v16, &WPP_RECORDER_INITIALIZED);
          WPP_RECORDER_AND_TRACE_SF_qdd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v41,
            v17,
            *(_QWORD *)(v19 + 69416),
            5u,
            9u,
            0x28u,
            (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
            v18,
            v3,
            v46);
        }
        v20 = (HBRUSH)xxxDefWindowProc((struct tagTHREADINFO **)v5, 311LL, DCEx, *(struct tagDRAWITEMSTRUCT **)v5);
        v42 = GreSelectBrush(DCEx, v20, v21);
        v23 = *(_DWORD **)(*((_QWORD *)v5 + 2) + 752LL);
        if ( v23 )
        {
          DrawThumb2(v5, v4, (HDC)DCEx, v20, (*v23 >> 1) & 1, 0);
          GreSelectBrush(DCEx, v42, v33);
          _ReleaseDC(DCEx);
          v23[19] = v3;
        }
        else
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
          {
            v6 = 0;
          }
          v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v25 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
            LOBYTE(v26) = v24;
            LOBYTE(v27) = v6;
            WPP_RECORDER_AND_TRACE_SF_q(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v27,
              v26,
              *(_QWORD *)(v25 + 69416),
              2,
              9,
              41,
              (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
              (char)DCEx);
          }
          _ReleaseDC(DCEx);
        }
        return;
      }
      v13 = *(struct tagTHREADINFO ***)(v11 + 24);
      if ( v13 )
        xxxDoScroll(
          *(struct tagDRAWITEMSTRUCT ***)(v11 + 16),
          v13,
          5u,
          *(_DWORD *)(v11 + 84),
          (*(_DWORD *)v11 >> 1) & 1);
      v11 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 752LL);
      if ( !v11 || !*(_QWORD *)(v11 + 48) )
        break;
      *(_DWORD *)(v11 + 80) = *(_DWORD *)(v11 + 84);
      v12 = (unsigned int)(*((_DWORD *)v4 + 14) + *((_DWORD *)v4 + 15));
      if ( v3 < (int)v12 )
        goto LABEL_18;
      v3 = *((_DWORD *)v4 + 14) + *((_DWORD *)v4 + 15);
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v6 = 0;
    }
    v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v29 = *(struct tagTHREADINFO **)v5;
      v30 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v31) = v28;
      LOBYTE(v32) = v6;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v32,
        v31,
        *(_QWORD *)(v30 + 69416),
        3,
        9,
        39,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        (char)v29);
    }
  }
}
