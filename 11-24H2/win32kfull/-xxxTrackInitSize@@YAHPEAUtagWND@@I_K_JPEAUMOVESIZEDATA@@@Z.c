/*
 * XREFs of ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1402278F8
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PtInRect @ 0x14006E460 (PtInRect.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1400759F4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxReleaseCapture @ 0x140089E6C (xxxReleaseCapture.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     bSetDevDragRect @ 0x1401D7390 (bSetDevDragRect.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x140211824 (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1402AAB08 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     _ClientToScreen @ 0x1402F1554 (_ClientToScreen.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxTrackInitSize(struct tagTHREADINFO **a1, __int64 a2, __int64 a3, int a4, struct MOVESIZEDATA *a5)
{
  int v7; // r14d
  char v9; // si
  char v10; // bl
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // esi
  unsigned int *v17; // r9
  char v18; // bp
  char v19; // bl
  int v20; // r12d
  int v21; // r13d
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // rcx
  char v26; // si
  char v27; // di
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  struct tagTHREADINFO *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v41; // eax
  __int64 v42; // rdx
  int v43; // esi
  int v44; // ebp
  char v45; // di
  char v46; // bl
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  int v50; // ecx
  int v51; // eax
  int v52; // r14d
  __int64 v53; // rax
  int v54; // esi
  int v55; // ebp
  char v56; // di
  char v57; // bl
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  char v65; // di
  char v66; // bl
  __int64 v67; // rax
  int v68; // r8d
  int v69; // edx
  int v70; // [rsp+20h] [rbp-88h]
  int v71; // [rsp+28h] [rbp-80h]
  int v72; // [rsp+38h] [rbp-70h]
  unsigned __int64 v73; // [rsp+60h] [rbp-48h] BYREF
  __int128 v74; // [rsp+68h] [rbp-40h] BYREF

  v7 = a2;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v9 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v9 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v10 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v10 = 0;
  }
  if ( v9 || v10 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69416),
      5,
      1,
      75,
      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
      v7);
  }
  if ( v7 != 256 && v7 != 512 && (unsigned int)(v7 - 513) > 1 )
    return 1LL;
  LODWORD(v73) = (__int16)a4;
  HIDWORD(v73) = SHIWORD(a4);
  ClientToScreen(a1, &v73);
  v16 = xxxSendTransformableMessageTimeout(
          a1,
          132LL,
          0LL,
          (struct tagDRAWITEMSTRUCT *)((unsigned __int16)v73 | (WORD2(v73) << 16)),
          0,
          0,
          0LL,
          1,
          0);
  v17 = &WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (v15 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v15 & 1) == 0)
    || (v18 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v18 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v19 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v19 = 0;
  }
  v20 = HIDWORD(v73);
  v21 = v73;
  if ( v18 || v19 )
  {
    v22 = W32GetUserSessionState(v15, v14);
    LOBYTE(v23) = v19;
    LOBYTE(v24) = v18;
    WPP_RECORDER_AND_TRACE_SF_ddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v24,
      v23,
      *(_QWORD *)(v22 + 69416),
      v70,
      v71,
      76,
      v72,
      v16,
      v21,
      v20);
    v17 = &WPP_GLOBAL_Control;
  }
  if ( v7 == 256 )
  {
    if ( *((_DWORD *)a5 + 44) == 9 )
      xxxSendMessage((struct tagWND *)a1, 0x20u);
    if ( a3 == 13 || a3 == 27 || a3 == 37 || a3 == 38 || (unsigned __int64)(a3 - 39) <= 1 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v65 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v65 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v66 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v66 = 0;
      }
      if ( v65 || v66 )
      {
        v67 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
        LOBYTE(v68) = v66;
        LOBYTE(v69) = v65;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v69,
          v68,
          *(_QWORD *)(v67 + 69416),
          5,
          1,
          77,
          (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
          a3);
      }
      *((_DWORD *)a5 + 50) &= ~1u;
    }
    return 1LL;
  }
  if ( v7 == 512 )
  {
    if ( a3 != 1 )
    {
      v74 = *(_OWORD *)((char *)a1[5] + 88);
      if ( PtInRect(&v74, v73) && (unsigned int)(v16 - 10) <= 7 )
      {
        xxxSendMessage((struct tagWND *)a1, 0x20u);
      }
      else
      {
        v63 = W32GetUserSessionState(v62, v61);
        zzzSetCursor(*(struct tagCURSOR **)(v63 + 26904), v64);
      }
      return 1LL;
    }
LABEL_44:
    v41 = *((_DWORD *)a5 + 44);
    if ( v41 )
    {
      if ( v41 == 9 && v16 == 2 )
      {
        xxxSendMessage((struct tagWND *)a1, 0x20u);
        v43 = *((_DWORD *)a5 + 30) - v21;
        v44 = *((_DWORD *)a5 + 31) - v20;
        *((_DWORD *)a5 + 42) = v43;
        *((_DWORD *)a5 + 50) &= ~1u;
        *((_DWORD *)a5 + 43) = v44;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
          || (v45 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v45 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v46 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v46 = 0;
        }
        if ( v45 || v46 )
        {
          v47 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v42);
          LOBYTE(v48) = v46;
          LOBYTE(v49) = v45;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v49,
            v48,
            *(_QWORD *)(v47 + 69416),
            5,
            1,
            79,
            (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
            v43,
            v44);
        }
      }
    }
    else if ( (unsigned int)(v16 - 10) <= 7 )
    {
      xxxSendMessage((struct tagWND *)a1, 0x20u);
      *((_DWORD *)a5 + 50) &= ~1u;
      v50 = dword_14035A62C[v16];
      v51 = *(_DWORD *)&aLeft[4 * v16 + 4];
      *((_DWORD *)a5 + 46) = v51;
      *((_DWORD *)a5 + 45) = v50;
      v52 = v51 + v50;
      *((_DWORD *)a5 + 44) = v51 + v50;
      v53 = dword_14035A690[v51 + v50];
      v54 = *((_DWORD *)a5 + dword_14035A6C0[v52] + 30) - v21;
      *((_DWORD *)a5 + 42) = v54;
      v55 = *((_DWORD *)a5 + v53 + 30) - v20;
      *((_DWORD *)a5 + 43) = v55;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v56 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v56 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v57 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v57 = 0;
      }
      if ( v56 || v57 )
      {
        v58 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0x140000000uLL);
        LOBYTE(v59) = v57;
        LOBYTE(v60) = v56;
        WPP_RECORDER_AND_TRACE_SF_ddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v60,
          v59,
          *(_QWORD *)(v58 + 69416),
          v70,
          v71,
          80,
          v72,
          v52,
          v54,
          v55);
      }
    }
    return 1LL;
  }
  if ( v7 != 513 )
  {
    if ( v7 == 514 )
      goto LABEL_28;
    return 1LL;
  }
  if ( PtInRect((_DWORD *)a5 + 6, v73) )
    goto LABEL_44;
LABEL_28:
  v25 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == v17
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v26 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v26 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v27 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v27 = 0;
  }
  if ( v26 || v27 )
  {
    v28 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
    LOBYTE(v29) = v27;
    LOBYTE(v30) = v26;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v30,
      v29,
      *(_QWORD *)(v28 + 69416),
      5,
      1,
      78,
      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
      v7);
  }
  v31 = PtiCurrent(v25, v14);
  v34 = W32GetUserSessionState(v33, v32);
  bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v34 + 57008) + 48LL), 0LL, 0LL, 0);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v31 + 132, 0, 0) & 0x10) != 0 )
  {
    xxxDrawDragRect(a5, 0LL, 2u);
    _InterlockedAnd((volatile signed __int32 *)v31 + 132, 0xFFFFFFEF);
  }
  *((_DWORD *)a5 + 50) &= ~1u;
  v37 = W32GetUserSessionState(v36, v35);
  CCursorClip::ClearClip(*(CCursorClip **)(v37 + 36296));
  xxxReleaseCapture(v39, v38);
  *((_DWORD *)a5 + 50) |= 8u;
  return 0LL;
}
