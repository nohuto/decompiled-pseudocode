/*
 * XREFs of ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14014DB80
 * Callers:
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x1401CC36C (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@.c)
 *     ?xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402C5934 (-xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x140068228 (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1401162C8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14014D0F4 (-ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x14014D534 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 *     ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14014E360 (--0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z.c)
 *     IsImmersiveBand @ 0x14014E660 (IsImmersiveBand.c)
 */

CRecalcState *__fastcall CRecalcState::CreateRecalcState(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  CRecalcState *v10; // rbp
  char v11; // r15
  char v12; // r14
  bool v14; // si
  bool v15; // bl
  char v16; // si
  char v17; // r14
  __int16 WindowDpiLastNotify; // ax
  __int64 v19; // rdx
  char v20; // si
  char v21; // bp
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // edx
  int v25; // r8d
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // edx
  int v32; // r8d
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int8 v36; // al
  __int64 v37; // rdi
  char v38; // bl
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 UserSessionState; // rax
  int v42; // r8d
  int v43; // edx
  __int64 v44; // rdx
  __int64 v45; // rcx
  char v46; // si
  char v47; // r14
  unsigned __int8 v48; // al
  __int64 v49; // rdi
  char v50; // bl
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  char v56; // si
  char v57; // r14
  unsigned __int8 v58; // al
  __int64 v59; // rdi
  char v60; // bl
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  __int16 v69; // [rsp+30h] [rbp-48h]
  __int16 v70; // [rsp+30h] [rbp-48h]
  __int64 v71; // [rsp+40h] [rbp-38h]
  __int64 v72; // [rsp+40h] [rbp-38h]
  char ThreadId; // [rsp+48h] [rbp-30h]
  char v74; // [rsp+48h] [rbp-30h]

  *a4 = 0;
  if ( !(unsigned int)IsImmersiveBand(a1) )
    goto LABEL_2;
  if ( !MonitorFromRect((INT *)(*(_QWORD *)(a1 + 40) + 88LL), 0, *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL)) )
  {
    v20 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v21 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v21 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v20 = 0;
    }
    if ( !v21 && !v20 )
      return 0LL;
    ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
    v71 = *(_QWORD *)a1;
    v26 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 69416);
    v69 = 21;
LABEL_42:
    LOBYTE(v25) = v20;
    LOBYTE(v24) = v21;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v24,
      v25,
      v26,
      5,
      7,
      v69,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v71,
      ThreadId);
    return 0LL;
  }
  WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  if ( *(_WORD *)(*(_QWORD *)(v19 + 40) + 60LL) == WindowDpiLastNotify )
  {
    v20 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v21 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v21 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v20 = 0;
    }
    if ( !v21 && !v20 )
      return 0LL;
    ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
    v71 = *(_QWORD *)a1;
    v26 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 69416);
    v69 = 22;
    goto LABEL_42;
  }
LABEL_2:
  v8 = Win32AllocPoolZInit(80LL, 1920168789LL);
  if ( v8 )
  {
    v10 = (CRecalcState *)CRecalcState::CRecalcState(v8, a1, a2, a3);
    if ( v10 )
    {
      if ( (unsigned int)IsImmersiveBand(a1) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
          || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v11 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v12 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v12 = 0;
        }
        if ( !v11 && !v12 )
          goto LABEL_14;
        v74 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
        v72 = *(_QWORD *)a1;
        v33 = *(_QWORD *)(W32GetUserSessionState(v30, v29) + 69416);
        v70 = 24;
      }
      else if ( a3 == 4 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
          || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v11 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v12 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v12 = 0;
        }
        if ( !v11 && !v12 )
          goto LABEL_14;
        v74 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
        v72 = *(_QWORD *)a1;
        v33 = *(_QWORD *)(W32GetUserSessionState(v35, v34) + 69416);
        v70 = 25;
      }
      else
      {
        if ( CRecalcState::ShouldDeferRecalc((__int64)v10, a1) )
        {
          v16 = 1;
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
            || (v17 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v17 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
          {
            v16 = 0;
          }
          if ( v17 || v16 )
          {
            v36 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
            v37 = *(_QWORD *)a1;
            v38 = v36;
            UserSessionState = W32GetUserSessionState(v40, v39);
            LOBYTE(v42) = v16;
            LOBYTE(v43) = v17;
            WPP_RECORDER_AND_TRACE_SF_qd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v43,
              v42,
              *(_QWORD *)(UserSessionState + 69416),
              5,
              7,
              26,
              (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
              v37,
              v38);
          }
          *a4 = 2;
          return v10;
        }
        if ( !CRecalcState::NeedsMigration(v10, (const struct tagWND *)a1) )
        {
          if ( CRecalcState::ShouldStoreAfterProcessing(v10, (const struct tagWND *)a1) )
          {
            v46 = 1;
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
              || (v47 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
            {
              v47 = 0;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
            {
              v46 = 0;
            }
            if ( v47 || v46 )
            {
              v48 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
              v49 = *(_QWORD *)a1;
              v50 = v48;
              v53 = W32GetUserSessionState(v52, v51);
              LOBYTE(v54) = v46;
              LOBYTE(v55) = v47;
              WPP_RECORDER_AND_TRACE_SF_qd(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v55,
                v54,
                *(_QWORD *)(v53 + 69416),
                5,
                7,
                28,
                (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
                v49,
                v50);
            }
            *a4 = 3;
          }
          else
          {
            v56 = 1;
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
              || (v57 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
            {
              v57 = 0;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
            {
              v56 = 0;
            }
            if ( v57 || v56 )
            {
              v58 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
              v59 = *(_QWORD *)a1;
              v60 = v58;
              v63 = W32GetUserSessionState(v62, v61);
              LOBYTE(v64) = v56;
              LOBYTE(v65) = v57;
              WPP_RECORDER_AND_TRACE_SF_qd(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v65,
                v64,
                *(_QWORD *)(v63 + 69416),
                5,
                7,
                29,
                (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
                v59,
                v60);
            }
          }
          return v10;
        }
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
          || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v11 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v12 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v12 = 0;
        }
        if ( !v11 && !v12 )
        {
LABEL_14:
          *a4 = 1;
          return v10;
        }
        v74 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
        v72 = *(_QWORD *)a1;
        v33 = *(_QWORD *)(W32GetUserSessionState(v45, v44) + 69416);
        v70 = 27;
      }
      LOBYTE(v32) = v12;
      LOBYTE(v31) = v11;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v31,
        v32,
        v33,
        5,
        7,
        v70,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v72,
        v74);
      goto LABEL_14;
    }
  }
  v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
  v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v66 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v9);
    LOBYTE(v67) = v15;
    LOBYTE(v68) = v14;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v68,
      v67,
      *(_QWORD *)(v66 + 69416),
      2,
      7,
      23,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
  }
  return 0LL;
}
