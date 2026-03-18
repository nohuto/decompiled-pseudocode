/*
 * XREFs of ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402E2314
 * Callers:
 *     xxxSBTrackInit @ 0x1402E6E60 (xxxSBTrackInit.c)
 * Callees:
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     xxxCallMsgFilter @ 0x1400655D0 (xxxCallMsgFilter.c)
 *     xxxTranslateMessage @ 0x14006742C (xxxTranslateMessage.c)
 *     SystoChar @ 0x14009D1D8 (SystoChar.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     xxxInternalGetMessage @ 0x140107C10 (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1401095B8 (xxxDispatchMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140211468 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     GetMouseMessageString @ 0x1402E33A8 (GetMouseMessageString.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsDdd @ 0x1402E5738 (WPP_RECORDER_AND_TRACE_SF_qsDdd.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall xxxSBTrackLoop(struct tagWND *a1, __int64 a2, struct tagSBCALC *a3)
{
  __int64 v5; // rcx
  unsigned int *v6; // rdx
  char v7; // si
  char v8; // r14
  char v9; // r15
  __int64 UserSessionState; // rax
  __int64 v11; // rbx
  void (__fastcall *v12)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *); // r12
  struct tagTHREADINFO *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct tagWND *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // r9
  void (__fastcall *v31)(struct tagWND *, _QWORD, _QWORD, __int64, struct tagSBCALC *); // r10
  __int64 v32; // rdx
  bool v33; // r14
  __int64 MouseMessageString; // rax
  __int64 v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  bool v42; // r14
  __int64 v43; // rbx
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  bool v47; // bl
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  unsigned __int64 v51; // [rsp+28h] [rbp-49h]
  int v52; // [rsp+30h] [rbp-41h]
  int v53; // [rsp+40h] [rbp-31h]
  __int128 v54; // [rsp+78h] [rbp+7h] BYREF
  __int128 v55; // [rsp+88h] [rbp+17h]
  __int128 v56; // [rsp+98h] [rbp+27h]

  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v5 = *(_QWORD *)&WPP_GLOBAL_Control;
  v6 = &WPP_GLOBAL_Control;
  v7 = 1;
  v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_qdd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v8,
      v9,
      *(_QWORD *)(UserSessionState + 69416),
      4u,
      9u,
      0x30u,
      (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids);
    v6 = &WPP_GLOBAL_Control;
  }
  v11 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 752LL);
  if ( v11
    && (v12 = *(void (__fastcall **)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *))(v11 + 48)) != 0LL )
  {
    if ( (*(_DWORD *)v11 & 2) != 0 )
      SetOrClrWF(1, a1, 0x620u, 1);
    v13 = PtiCurrent(v5, (__int64)v6);
    if ( !*(_QWORD *)(W32GetUserSessionState(v15, v14) + 18944) )
      goto LABEL_22;
    v19 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18944);
    if ( !*(_QWORD *)(v19 + 120) )
      goto LABEL_22;
    v21 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 18944);
    if ( v21 != *((_QWORD *)v13 + 59) )
      goto LABEL_22;
    v23 = 33;
    if ( *(struct tagTHREADINFO **)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v21, v20) + 18944) + 120LL) + 16LL) != v13 )
      v23 = 49;
    v25 = *(_QWORD *)(W32GetUserSessionState(49LL, v22) + 18944);
    v26 = *(struct tagTHREADINFO **)(*(_QWORD *)(v25 + 120) + 16LL) == v13
        ? a1
        : *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v25, v24) + 18944) + 120LL);
    xxxWindowEvent(0x80000004, v26, 0, 3u, v23);
    if ( v11 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 752LL) )
    {
LABEL_22:
      xxxWindowEvent(0x12u, a1, ((*(_DWORD *)v11 & 2) != 0) | 0xFFFFFFFA, 0, 0);
      v12(a1, 513LL, 0LL, a2, a3);
      while ( *(struct tagWND **)(*((_QWORD *)v13 + 59) + 112LL) == a1 )
      {
        LODWORD(v51) = 1;
        if ( !(unsigned int)xxxInternalGetMessage((__int64)&v54, 0LL, 0, 0, v51, 1) )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
          {
            v7 = 0;
          }
          v42 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v43 = *(_QWORD *)a1;
            v44 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v27);
            LOBYTE(v45) = v42;
            LOBYTE(v46) = v7;
            WPP_RECORDER_AND_TRACE_SF_q(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v46,
              v45,
              *(_QWORD *)(v44 + 69416),
              4,
              9,
              50,
              (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
              v43);
          }
          return;
        }
        if ( !(unsigned int)xxxCallMsgFilter((__int64)&v54, 5LL) )
        {
          if ( (_QWORD)v54 == *(_QWORD *)a1
            && ((unsigned int)(DWORD2(v54) - 512) <= 0xE || (unsigned int)(DWORD2(v54) - 256) <= 9) )
          {
            v28 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 752LL);
            if ( !v28 || !*(_QWORD *)(v28 + 48) )
            {
              if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
                || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
              {
                v7 = 0;
              }
              v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                MouseMessageString = GetMouseMessageString(DWORD2(v54));
                v35 = *(_QWORD *)a1;
                v36 = MouseMessageString;
                v39 = W32GetUserSessionState(v38, v37);
                LOBYTE(v40) = v33;
                LOBYTE(v41) = v7;
                WPP_RECORDER_AND_TRACE_SF_qsDdd(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                  v41,
                  v40,
                  *(_QWORD *)(v39 + 69416),
                  v51,
                  v52,
                  51,
                  v53,
                  v35,
                  v36,
                  SBYTE8(v54),
                  SBYTE8(v55),
                  SBYTE10(v55));
              }
              return;
            }
            v29 = SystoChar(DWORD2(v54), SDWORD2(v55));
            v31(a1, v29, v55, v30, a3);
          }
          else
          {
            xxxTranslateMessage((__int64)&v54, 0LL);
            xxxDispatchMessage((struct tagMSG *)&v54, v32);
          }
        }
      }
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v7 = 0;
    }
    v47 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v48 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v49) = v47;
      LOBYTE(v50) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v50,
        v49,
        *(_QWORD *)(v48 + 69416),
        4,
        9,
        49,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids);
    }
  }
}
