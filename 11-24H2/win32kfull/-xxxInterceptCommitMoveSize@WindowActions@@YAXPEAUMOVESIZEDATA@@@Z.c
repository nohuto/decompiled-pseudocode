/*
 * XREFs of ?xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402CE108
 * Callers:
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A7F9C (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z @ 0x140067FA4 (-IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x140189B00 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z @ 0x1402A6100 (-KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z.c)
 *     ?GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z @ 0x1402C9DA8 (-GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z.c)
 *     ?SaveSystemOperationData@@YA_NPEAUtagWND@@AEBUSystemOperationData@AdvancedWindowPos@@@Z @ 0x1402CAEEC (-SaveSystemOperationData@@YA_NPEAUtagWND@@AEBUSystemOperationData@AdvancedWindowPos@@@Z.c)
 *     ?SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z @ 0x1402CB230 (-SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptCommitMoveSize(WindowActions *this, struct MOVESIZEDATA *a2)
{
  struct tagWND *v2; // r15
  __int64 v4; // rdx
  char v5; // r14
  char v6; // di
  __int64 v7; // rbx
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  int v11; // eax
  const struct tagWND *v12; // rcx
  __int64 v13; // rdx
  BOOL v14; // ebx
  int v15; // edi
  char v16; // r15
  char v17; // r14
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  __int64 v21; // r9
  const char *v22; // rax
  struct tagWND *v23; // rcx
  int v24; // eax
  bool v25; // zf
  int v26; // ebx
  char v27; // r14
  char v28; // di
  const char *WindowActionStateString; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  int v35; // r12d
  __int64 v36; // rdx
  int v37; // r13d
  int v38; // r15d
  int v39; // eax
  int v40; // r12d
  char v41; // r14
  char v42; // di
  __int64 v43; // rax
  __int64 v44; // rdx
  struct tagTHREADINFO **v45; // r15
  __int128 v46; // xmm0
  char v47; // r15
  char v48; // r14
  __int64 v49; // rax
  __int64 v50; // rdx
  char v51; // di
  char v52; // bl
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  __int64 v56; // rsi
  int v57; // r8d
  __int64 v58; // rdx
  bool v59; // di
  char v60; // bl
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  char v64; // r14
  char v65; // si
  __int64 v66; // rax
  __int64 v67; // [rsp+48h] [rbp-C0h]
  __int64 v68; // [rsp+50h] [rbp-B8h]
  __int64 v69; // [rsp+58h] [rbp-B0h]
  __int64 v70; // [rsp+60h] [rbp-A8h]
  int v71; // [rsp+60h] [rbp-A8h]
  __int64 v72; // [rsp+68h] [rbp-A0h]
  __int64 v73; // [rsp+70h] [rbp-98h]
  int v74; // [rsp+78h] [rbp-90h]
  struct tagWND *v75; // [rsp+80h] [rbp-88h]
  __int64 v76; // [rsp+88h] [rbp-80h] BYREF
  __int128 v77; // [rsp+90h] [rbp-78h]
  int v78; // [rsp+A0h] [rbp-68h]
  BOOL v79; // [rsp+A4h] [rbp-64h]
  int v80; // [rsp+A8h] [rbp-60h]
  __int128 v81; // [rsp+B0h] [rbp-58h]
  int v82; // [rsp+C8h] [rbp-40h] BYREF
  int v83; // [rsp+CCh] [rbp-3Ch]
  int v84; // [rsp+D4h] [rbp-34h]
  int v85; // [rsp+D8h] [rbp-30h]
  int v86; // [rsp+DCh] [rbp-2Ch]
  int v87; // [rsp+E0h] [rbp-28h]
  int v88; // [rsp+F0h] [rbp-18h]
  __int128 v89; // [rsp+F4h] [rbp-14h] BYREF
  __int128 v90; // [rsp+104h] [rbp-4h]
  int v91; // [rsp+114h] [rbp+Ch]
  int v92; // [rsp+118h] [rbp+10h]
  int v93; // [rsp+11Ch] [rbp+14h]

  v2 = (struct tagWND *)*((_QWORD *)this + 2);
  v75 = v2;
  memset_0(&v82, 0, 0x60uLL);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v5 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v5 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v6 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v6 = 0;
  }
  if ( v5 || v6 )
  {
    v7 = *(_QWORD *)v2;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
    LOBYTE(v9) = v6;
    LOBYTE(v10) = v5;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69416),
      5,
      4,
      89,
      (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
      v7);
  }
  v11 = *((_DWORD *)this + 94);
  v12 = (const struct tagWND *)*((_QWORD *)this + 2);
  v82 |= 0x400u;
  v77 = 0LL;
  v76 = 0LL;
  v79 = 0;
  v78 = v11;
  if ( IsShellParticipatesInSizing(v12, v4) && (*((_DWORD *)this + 95) & 2) != 0 )
  {
    v14 = ((*((_DWORD *)this + 50) >> 15) & 1) == 0;
    v79 = v14;
    v15 = 8;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v16 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v16 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v17 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v17 = 0;
    }
    if ( v16 || v17 )
    {
      v18 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v16;
      v21 = *(_QWORD *)(v18 + 69416);
      v22 = "AWSR_CANCELED";
      if ( !v14 )
        v22 = "AWSR_SIZED";
      WPP_RECORDER_AND_TRACE_SF_s(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v20,
        v19,
        v21,
        5,
        4,
        90,
        (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
        (__int64)v22);
    }
    v2 = v75;
  }
  else
  {
    v15 = v76;
  }
  v23 = (struct tagWND *)*((_QWORD *)this + 2);
  v24 = 1;
  v25 = *((_DWORD *)this + 44) == 9;
  v26 = 3;
  LODWORD(v76) = v15 | 4;
  if ( v25 )
    v24 = 3;
  v80 = v24;
  if ( SaveSystemOperationData(v23, (const struct AdvancedWindowPos::SystemOperationData *)&v76) )
  {
    v82 |= 0x30u;
    if ( (*((_DWORD *)this + 50) & 0x10000000) == 0 )
    {
      if ( *((_DWORD *)this + 62) || (v26 = 1, (*(_BYTE *)(*((_QWORD *)v2 + 5) + 30LL) & 1) == 0) )
        v26 = 0;
    }
    v88 = v26;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v27 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v27 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v28 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v28 = 0;
    }
    if ( v27 || v28 )
    {
      WindowActionStateString = GetWindowActionStateString(v26);
      v32 = W32GetUserSessionState(v31, v30);
      LOBYTE(v33) = v28;
      LOBYTE(v34) = v27;
      WPP_RECORDER_AND_TRACE_SF_s(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v34,
        v33,
        *(_QWORD *)(v32 + 69416),
        5,
        4,
        91,
        (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
        (__int64)WindowActionStateString);
      v26 = v88;
    }
    v35 = *((_DWORD *)this + 8);
    v36 = 0LL;
    v74 = v35;
    v37 = _mm_cvtsi128_si32(*(__m128i *)((char *)this + 24));
    v81 = *(_OWORD *)((char *)this + 24);
    if ( v26 )
    {
      if ( v26 == 1 )
      {
        SetMonitorMovePoint((struct _WINDOW_ACTION *)&v82, *((const struct tagMONITOR **)this + 30));
        goto LABEL_58;
      }
      if ( v26 != 3 )
        goto LABEL_60;
    }
    v38 = DWORD1(v81);
    v39 = v35;
    v40 = HIDWORD(v81);
    v82 |= 6u;
    v86 = v39 - v37;
    v84 = v37;
    v87 = HIDWORD(v81) - DWORD1(v81);
    v85 = DWORD1(v81);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v41 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v41 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v42 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v42 = 0;
    }
    if ( !v41 && !v42 )
    {
      v35 = v74;
LABEL_60:
      if ( v26 )
      {
        v46 = *(_OWORD *)((char *)this + 152);
        v82 |= 0x40u;
        v89 = v46;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v47 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v47 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v48 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v48 = 0;
        }
        if ( v47 || v48 )
        {
          v49 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v36);
          LODWORD(v73) = HIDWORD(v89) - DWORD1(v89);
          LODWORD(v72) = DWORD2(v89) - v89;
          LODWORD(v70) = HIDWORD(v89);
          LODWORD(v69) = DWORD2(v89);
          LODWORD(v68) = DWORD1(v89);
          LODWORD(v67) = v89;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v47,
            v48,
            *(_QWORD *)(v49 + 69416),
            5u,
            4u,
            0x5Du,
            (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
            v67,
            v68,
            v69,
            v70,
            v72,
            v73);
        }
        if ( !KeepCheckpointLeftRightAligned(this) )
        {
          v45 = (struct tagTHREADINFO **)v75;
          v82 |= 0x100u;
          v56 = MonitorFromRect((INT *)&v89, 2u, *(_DWORD *)(*((_QWORD *)v75 + 5) + 288LL));
          v57 = v83 | 0x200;
          v83 |= 0x200u;
          v58 = *(unsigned __int16 *)(*(_QWORD *)(v56 + 40) + 60LL);
          v91 = *(unsigned __int16 *)(*(_QWORD *)(v56 + 40) + 60LL);
          v59 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v60 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
          {
            v60 = 0;
          }
          if ( v59 || v60 )
          {
            v61 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v58);
            LOBYTE(v62) = v60;
            LOBYTE(v63) = v59;
            WPP_RECORDER_AND_TRACE_SF_d(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v63,
              v62,
              *(_QWORD *)(v61 + 69416),
              5,
              4,
              95,
              (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
              v91);
            v57 = v83;
          }
          v83 = v57 | 0x100;
          v90 = *(_OWORD *)(*(_QWORD *)(v56 + 40) + 44LL);
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v64 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v64 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v65 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
          {
            v65 = 0;
          }
          if ( v64 || v65 )
          {
            v66 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v58);
            LODWORD(v73) = HIDWORD(v90) - DWORD1(v90);
            LODWORD(v72) = DWORD2(v90) - v90;
            LODWORD(v70) = HIDWORD(v90);
            LODWORD(v69) = DWORD2(v90);
            LODWORD(v68) = DWORD1(v90);
            LODWORD(v67) = v90;
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v64,
              v65,
              *(_QWORD *)(v66 + 69416),
              5u,
              4u,
              0x60u,
              (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
              v67,
              v68,
              v69,
              v70,
              v72,
              v73);
          }
          goto LABEL_63;
        }
        LODWORD(v89) = v37;
        DWORD2(v89) = v35;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v51 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v51 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v52 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v52 = 0;
        }
        if ( v51 || v52 )
        {
          v53 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v50);
          LOBYTE(v54) = v52;
          LOBYTE(v55) = v51;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v55,
            v54,
            *(_QWORD *)(v53 + 69416),
            5,
            4,
            94,
            (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids);
        }
      }
      else
      {
        v83 |= 0x400u;
        v44 = *((_QWORD *)this + 27);
        v92 = *(_DWORD *)(*(_QWORD *)(v44 + 40) + 44LL);
        v93 = *(_DWORD *)(*(_QWORD *)(v44 + 40) + 48LL);
      }
      v45 = (struct tagTHREADINFO **)v75;
LABEL_63:
      xxxSendTransformableMessageTimeout(v45, 838LL, 0LL, (struct tagDRAWITEMSTRUCT *)&v82, 0, 0, 0LL, 1, 1);
      return;
    }
    v43 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    v71 = v40;
    v35 = v74;
    LODWORD(v67) = v37;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v41,
      v42,
      *(_QWORD *)(v43 + 69416),
      5u,
      4u,
      0x5Cu,
      (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
      v67,
      v38,
      v74,
      v71,
      v86,
      v87);
LABEL_58:
    v26 = v88;
    goto LABEL_60;
  }
}
