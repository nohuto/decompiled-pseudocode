/*
 * XREFs of ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x14008F1D0
 * Callers:
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x140237494 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     zzzReattachThreads @ 0x140237EEC (zzzReattachThreads.c)
 * Callees:
 *     SetWakeBit @ 0x1400456D0 (SetWakeBit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x14008EA90 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x14008EC50 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     IsProcessedByInputService @ 0x14008F9EC (IsProcessedByInputService.c)
 *     ?FreeQEntry@@YAXPEAUtagQMSG@@@Z @ 0x14008FA20 (-FreeQEntry@@YAXPEAUtagQMSG@@@Z.c)
 *     ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x14008FA88 (-UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     RedistributeDeferredMsgsOnQueue @ 0x140090D70 (RedistributeDeferredMsgsOnQueue.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400A4BAC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1401532E0 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     IsHiddenByInputService @ 0x140154910 (IsHiddenByInputService.c)
 *     ??BINTERLOCKEDINT@@QEBAHXZ @ 0x140272AEC (--BINTERLOCKEDINT@@QEBAHXZ.c)
 */

void __fastcall RedistributeInput(struct tagQMSG *a1, struct tagQ *a2, struct tagTHREADINFO *a3)
{
  struct tagTHREADINFO *v3; // rsi
  struct tagQMSG *v5; // r14
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // r10
  struct tagTHREADINFO *v8; // rdi
  __int64 v9; // rbx
  struct tagQMSG *v10; // r12
  __int64 v11; // rdx
  unsigned int *v12; // r11
  __int64 v13; // r8
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r10
  __int64 v18; // r11
  __int64 v19; // rbp
  struct tagQMSG *v20; // rcx
  struct tagQMSG *v21; // rcx
  __int64 v22; // rdx
  struct tagQMSG *v23; // rsi
  char v24; // r15
  char v25; // r12
  __int64 v26; // rax
  __int64 v27; // rdx
  struct tagQMSG *v28; // rbp
  struct tagQMSG *v29; // rsi
  int v30; // eax
  __int64 v31; // rax
  struct tagQ *v32; // rax
  char v33; // r12
  char v34; // r15
  char v35; // si
  char v36; // di
  int v37; // eax
  struct tagQ *v38; // rdi
  __int64 v39; // rbp
  char v40; // bl
  bool v41; // si
  char v42; // bp
  __int64 v43; // r9
  __int64 UserSessionState; // rax
  int v45; // r8d
  int v46; // edx
  char v47; // di
  bool v48; // si
  __int64 v49; // rbx
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  char v53; // di
  char v54; // bl
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  __int64 v58; // rbx
  __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  __int64 v64; // rbx
  __int64 v65; // rax
  int v66; // r8d
  int v67; // edx
  __int64 v68; // [rsp+20h] [rbp-98h]
  __int64 v69; // [rsp+28h] [rbp-90h]
  char v70; // [rsp+50h] [rbp-68h]
  struct tagTHREADINFO *v71; // [rsp+70h] [rbp-48h]
  struct tagQMSG *v72; // [rsp+78h] [rbp-40h]
  __int64 v73; // [rsp+C0h] [rbp+8h]
  __int64 v75; // [rsp+D8h] [rbp+20h]

  v3 = a3;
  v5 = a1;
  v6 = PtiCurrent((__int64)a1, (__int64)a2);
  v7 = 0LL;
  v71 = v6;
  v75 = 0LL;
  v8 = v6;
  v9 = 0LL;
  v10 = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      v11 = *((_QWORD *)v5 + 13);
      v12 = &WPP_RECORDER_INITIALIZED;
      v13 = v11;
      if ( v11 && (*(_QWORD *)(v11 + 1360) & 0x20000000LL) != 0 && (unsigned int)IsHiddenByInputService(v5, v11, v11) )
      {
        *(_QWORD *)(v11 + 1360) = v43 & 0xFFFFFFFFDFFFFFFFuLL;
        v13 = *((_QWORD *)v5 + 13);
      }
      if ( (*((_DWORD *)v8 + 340) & 0x40000LL) != 0 )
      {
        v30 = *((_DWORD *)v5 + 6);
        if ( (struct tagTHREADINFO *)v13 == v8 )
        {
          v37 = v30 - 256;
          if ( (!v37 || (unsigned int)(v37 - 1) <= 1) && v3 )
            *((_QWORD *)v5 + 13) = v3;
        }
        else if ( v30 == 513 || v30 == 516 )
        {
          LOBYTE(v11) = 1;
          v31 = HMValidateHandleNoSecure(*((_QWORD *)v5 + 2), v11);
          v7 = 0LL;
          v12 = &WPP_RECORDER_INITIALIZED;
          if ( v31 )
          {
            if ( *(struct tagTHREADINFO **)(v31 + 16) == v8 )
              *((_QWORD *)v5 + 13) = v8;
          }
        }
      }
      v14 = *((_QWORD *)v5 + 13);
      v73 = v9;
      if ( v5 == *((struct tagQMSG **)a2 + 11) )
      {
        v38 = *(struct tagQ **)(v14 + 472);
        if ( a2 != v38 && *((_QWORD *)v38 + 9) == v7 )
        {
          v39 = *((_QWORD *)a2 + 9);
          if ( v39 )
          {
            if ( *(struct tagQ **)(v39 + 472) == v38 )
            {
              if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
                || (v40 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
              {
                v40 = v7;
              }
              v41 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)v12;
              if ( v40 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != v12 )
              {
                UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
                v70 = v39;
                v42 = (char)v71;
                LOBYTE(v45) = v41;
                LOBYTE(v46) = v40;
                WPP_RECORDER_AND_TRACE_SF_qqq(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                  v46,
                  v45,
                  *(_QWORD *)(UserSessionState + 69416),
                  4,
                  18,
                  37,
                  (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
                  (char)v38,
                  (char)v71,
                  v70);
                v7 = 0LL;
                v12 = &WPP_RECORDER_INITIALIZED;
              }
              else
              {
                v42 = (char)v71;
              }
              *(_QWORD *)(*(_QWORD *)(v14 + 472) + 72LL) = *((_QWORD *)a2 + 9);
              if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
                || (v47 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
              {
                v47 = v7;
              }
              v48 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)v12;
              if ( v47 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != v12 )
              {
                v49 = *((_QWORD *)a2 + 9);
                v50 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
                LOBYTE(v51) = v48;
                LOBYTE(v52) = v47;
                WPP_RECORDER_AND_TRACE_SF_qqq(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                  v52,
                  v51,
                  *(_QWORD *)(v50 + 69416),
                  4,
                  18,
                  38,
                  (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
                  (char)a2,
                  v42,
                  v49);
                v7 = 0LL;
              }
              v9 = v73;
              *((_QWORD *)a2 + 9) = v7;
            }
          }
        }
      }
      if ( *((_DWORD *)v5 + 24) == 4 )
        v14 = v7;
      v15 = IsProcessedByInputService(v5, v11, v13);
      v19 = v17;
      if ( !v15 )
        v19 = v14;
      if ( v19 )
      {
        if ( !v10 || v9 != v19 )
        {
          v27 = *(_QWORD *)(v19 + 472);
          v10 = *(struct tagQMSG **)(v27 + 32);
          if ( v10 && *((_DWORD *)v5 + 12) - *((_DWORD *)v10 + 12) >= 0 )
          {
            v75 = v27 + 24;
          }
          else
          {
            v10 = (struct tagQMSG *)(v27 + 24);
            v75 = v27 + 24;
          }
        }
        v20 = *(struct tagQMSG **)v10;
        if ( *(_QWORD *)v10 )
        {
          do
          {
            if ( *((_DWORD *)v5 + 12) - *((_DWORD *)v20 + 12) < 0 )
              break;
            v10 = v20;
            v20 = *(struct tagQMSG **)v20;
          }
          while ( v20 );
        }
        *((_DWORD *)v5 + 25) &= 0xFFFE1FFF;
        InputTraceLogging::Delivery::UpdateISODState(v5);
        v21 = v5;
        v22 = v75;
        v23 = v5;
        v5 = *(struct tagQMSG **)v5;
        v7 = 0LL;
        *(_QWORD *)v21 = *(_QWORD *)v10;
        if ( *(_QWORD *)v10 )
        {
          *((_QWORD *)v21 + 1) = *(_QWORD *)(*(_QWORD *)v10 + 8LL);
          *(_QWORD *)(*(_QWORD *)v10 + 8LL) = v23;
        }
        else
        {
          *((_QWORD *)v21 + 1) = *(_QWORD *)(v75 + 8);
          *(_QWORD *)(v75 + 8) = v21;
        }
        *(_QWORD *)v10 = v23;
        v72 = v23;
        ++*(_DWORD *)(v75 + 16);
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
          || (v24 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v24 = 0;
        }
        v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v24 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v26 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v75);
          WPP_RECORDER_AND_TRACE_SF_qiqdd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v24,
            v25,
            *(_QWORD *)(v26 + 69416),
            v68,
            v69,
            0x28u,
            (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids);
          v7 = 0LL;
        }
        if ( *((_DWORD *)v23 + 24) && (INTERLOCKEDINT::operator int(*(_QWORD *)(v19 + 488) + 8LL) & 0x2000) == 0 )
        {
          SetWakeBit(v19, 8256LL);
          v7 = 0LL;
        }
        if ( v23 == *((struct tagQMSG **)a2 + 11) )
        {
          v32 = *(struct tagQ **)(v19 + 472);
          if ( a2 != v32 )
          {
            if ( *((_QWORD *)v32 + 11) == v7 )
            {
              if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
                || (v33 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
              {
                v33 = v7;
              }
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                || (v34 = 1, *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) == (_WORD)v7) )
              {
                v34 = v7;
              }
              if ( v33 || v34 )
              {
                v58 = *((_QWORD *)v32 + 11);
                v59 = *(_QWORD *)(v19 + 472);
                v60 = *((_QWORD *)a2 + 11);
                v61 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
                LOBYTE(v62) = v34;
                LOBYTE(v63) = v33;
                WPP_RECORDER_AND_TRACE_SF_qqq(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                  v63,
                  v62,
                  *(_QWORD *)(v61 + 69416),
                  5,
                  18,
                  41,
                  (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
                  v60,
                  v59,
                  v58);
                v7 = 0LL;
              }
              *(_QWORD *)(*(_QWORD *)(v19 + 472) + 88LL) = *((_QWORD *)a2 + 11);
            }
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
              || (v35 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
            {
              v35 = v7;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || (v36 = 1, *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) == (_WORD)v7) )
            {
              v36 = v7;
            }
            if ( v35 || v36 )
            {
              v64 = *((_QWORD *)a2 + 11);
              v65 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
              LOBYTE(v66) = v36;
              LOBYTE(v67) = v35;
              WPP_RECORDER_AND_TRACE_SF_qq(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v67,
                v66,
                *(_QWORD *)(v65 + 69416),
                5,
                18,
                42,
                (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
                (char)a2,
                v64);
              v7 = 0LL;
            }
            *((_QWORD *)a2 + 11) = v7;
          }
        }
        if ( !v5 )
          break;
        v10 = v72;
        v9 = v19;
        *((_QWORD *)v5 + 1) = v7;
      }
      else
      {
        if ( *(_QWORD *)v5 )
          *(_QWORD *)(*(_QWORD *)v5 + 8LL) = v17;
        v28 = (struct tagQMSG *)*((_QWORD *)a2 + 11);
        v29 = v5;
        v5 = *(struct tagQMSG **)v5;
        if ( v29 == v28 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
            || (v53 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v53 = v17;
          }
          if ( *(_QWORD *)&WPP_RECORDER_INITIALIZED == v18
            || (v54 = 1, *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) == (_WORD)v17) )
          {
            v54 = v17;
          }
          if ( v53 || v54 )
          {
            v55 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
            LOBYTE(v56) = v54;
            LOBYTE(v57) = v53;
            WPP_RECORDER_AND_TRACE_SF_qq(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v57,
              v56,
              *(_QWORD *)(v55 + 69416),
              5,
              18,
              39,
              (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
              (char)a2,
              (char)v28);
            v17 = 0LL;
          }
          *((_QWORD *)a2 + 11) = v17;
        }
        CleanEventMessage(v29);
        FreeQEntry(v29);
        v7 = 0LL;
        if ( !v5 )
          break;
        v9 = v73;
      }
      v8 = v71;
      v3 = a3;
    }
  }
  RedistributeDeferredMsgsOnQueue(a2);
}
