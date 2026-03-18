/*
 * XREFs of ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14003F500
 * Callers:
 *     ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14003F498 (-xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1401EF67C (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1400223EC (-DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140063510 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsCompositionInputWindowForHitTest@@YA_NPEAUtagWND@@@Z @ 0x1400651C0 (-IsCompositionInputWindowForHitTest@@YA_NPEAUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140066FA0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     DwmSyncHitTestQuery @ 0x14010B378 (DwmSyncHitTestQuery.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x140153DE0 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x140159B58 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddd @ 0x140165FF4 (WPP_RECORDER_AND_TRACE_SF_qddd.c)
 *     SizeBoxHwnd @ 0x140220CB8 (SizeBoxHwnd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddq @ 0x140227524 (WPP_RECORDER_AND_TRACE_SF_ddq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddds @ 0x140267E4C (WPP_RECORDER_AND_TRACE_SF_ddds.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddqd @ 0x14026977C (WPP_RECORDER_AND_TRACE_SF_ddqd.c)
 */

__int64 __fastcall xxxDCEWindowHitTestIndirect(
        struct tagWND *a1,
        struct tagPOINT a2,
        char a3,
        struct tagDCE_WINDOW_HIT_TEST_ARGS *a4)
{
  struct tagWND *v6; // rsi
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v8; // rdx
  bool v9; // r15
  bool v10; // r14
  __int64 v11; // rbx
  __int64 UserSessionState; // rax
  struct tagWND *v13; // rdx
  ULONG_PTR v14; // r12
  int v15; // r13d
  int v16; // ebx
  struct tagWND *v17; // r8
  ULONG_PTR *CurrentThreadWin32Thread; // rax
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v19; // rdx
  bool v20; // di
  __int64 v21; // rax
  bool v22; // bl
  __int64 v23; // rdx
  bool v24; // r14
  bool v25; // bl
  __int64 v26; // r9
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  bool v30; // r14
  bool v31; // bl
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  char v41; // bl
  void *v42; // r14
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  ULONG_PTR *v46; // rax
  ULONG_PTR v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  bool v50; // r15
  bool v51; // r14
  int v52; // r12d
  const char *v53; // rbx
  __int64 v54; // rax
  struct tagTHREADINFO *v55; // rax
  __int64 *v56; // rax
  __int64 v57; // rcx
  ULONG_PTR *v58; // rax
  ULONG_PTR v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  bool v62; // r15
  bool v63; // r14
  __int64 v64; // rbx
  __int64 v65; // rax
  ULONG_PTR *v66; // rax
  bool v67; // bl
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v68; // r14
  __int64 v69; // rdx
  __int64 v70; // rcx
  struct tagWND *i; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned int v75; // r8d
  int v76; // edx
  int v77; // eax
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rax
  const struct _D3DMATRIX *v81; // rdx
  _DWORD *v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  bool v86; // bl
  __int64 v87; // rax
  int *v88; // rax
  int v89; // ecx
  unsigned __int8 *v90; // rdx
  __int64 v91; // rax
  bool v92; // di
  bool v93; // r14
  __int64 v94; // rbx
  __int64 v95; // rax
  bool v97; // di
  bool v98; // r14
  __int64 v99; // rbx
  __int64 v100; // rax
  ULONG_PTR *v101; // rax
  bool v102; // di
  bool v103; // r14
  __int64 v104; // rbx
  __int64 v105; // rax
  ULONG_PTR *v106; // rax
  bool v107; // di
  __int64 v108; // rax
  int v109; // [rsp+20h] [rbp-69h]
  int v110; // [rsp+20h] [rbp-69h]
  int v111; // [rsp+28h] [rbp-61h]
  int v112; // [rsp+28h] [rbp-61h]
  int v113; // [rsp+30h] [rbp-59h]
  int v114; // [rsp+30h] [rbp-59h]
  int v115; // [rsp+38h] [rbp-51h]
  int v116; // [rsp+38h] [rbp-51h]
  struct tagWND *v117; // [rsp+60h] [rbp-29h]
  struct tagPOINT v118; // [rsp+68h] [rbp-21h] BYREF
  struct tagWND *v119; // [rsp+70h] [rbp-19h]
  struct tagPOINT v120; // [rsp+78h] [rbp-11h] BYREF
  int v121; // [rsp+80h] [rbp-9h] BYREF
  int v122; // [rsp+84h] [rbp-5h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp-1h] BYREF
  struct tagWND *v124; // [rsp+90h] [rbp+7h]
  ULONG_PTR v125; // [rsp+98h] [rbp+Fh] BYREF
  struct tagWND *v126; // [rsp+A0h] [rbp+17h]
  unsigned int v127; // [rsp+A8h] [rbp+1Fh]
  char v128; // [rsp+F0h] [rbp+67h]

  v6 = a1;
  if ( !a1 )
    return 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v8 = *((unsigned int *)a4 + 8);
  v127 = CurrentThreadDpiAwarenessContext;
  v120 = a2;
  if ( (v8 & 2) != 0 )
    LogicalToPhysicalDPIPoint(&v120, &v120, CurrentThreadDpiAwarenessContext, 0LL);
  v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  v10 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
     && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
  if ( v9 || v10 )
  {
    v11 = *(_QWORD *)v6;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
    WPP_RECORDER_AND_TRACE_SF_ddq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v10,
      *(_QWORD *)(UserSessionState + 69416),
      5,
      15,
      10,
      (__int64)&WPP_1b25774d2ec6355ca4d29f861006c482_Traceguids,
      v120.x,
      v120.y,
      v11);
  }
  v13 = (struct tagWND *)*((_QWORD *)v6 + 13);
  v14 = 0LL;
  v118 = v120;
  v15 = -2;
  v119 = v13;
  v128 = 0;
  v16 = 0;
  v17 = 0LL;
  v117 = 0LL;
  while ( 1 )
  {
    if ( !v16 )
    {
      v67 = IsCompositionInputWindowForHitTest(v6);
      if ( v67 )
      {
        v68 = a4;
        if ( (*((_DWORD *)a4 + 8) & 4) == 0 )
          goto LABEL_142;
        v69 = *((_QWORD *)v6 + 3);
        v70 = 0LL;
        if ( v69 )
          v70 = *(_QWORD *)(v69 + 112);
        if ( *((_QWORD *)v6 + 13) != v70 && (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0x10) == 0 )
        {
LABEL_142:
          v16 = 3;
          goto LABEL_202;
        }
      }
      else
      {
        if ( (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0x10) == 0 )
        {
          v16 = 3;
          goto LABEL_202;
        }
        v68 = a4;
      }
      if ( !(unsigned int)CoreWindowProp::IsComponent(v6) )
      {
        for ( i = v6; ; i = (struct tagWND *)*((_QWORD *)i + 13) )
        {
          v72 = *((_QWORD *)i + 13);
          if ( !v72 )
            break;
          v73 = *((_QWORD *)i + 3);
          if ( v73 )
          {
            v74 = *(_QWORD *)(v73 + 8);
            if ( v74 )
            {
              if ( v72 == *(_QWORD *)(v74 + 24) )
              {
                if ( i && *(char *)(*((_QWORD *)i + 5) + 233LL) < 0 )
                  goto LABEL_161;
                break;
              }
            }
          }
        }
        v75 = *(unsigned __int8 *)(*((_QWORD *)v6 + 5) + 233LL);
        v76 = (v75 >> 4) & 2 | 1;
        if ( (v75 & 0x40) == 0 )
          v76 = (v75 >> 4) & 2;
        v77 = v76 | 1;
        if ( (v75 & 0x80u) == 0 )
          v77 = v76;
        if ( v77 )
        {
          v16 = 3;
          goto LABEL_202;
        }
      }
LABEL_161:
      if ( (*((_DWORD *)v68 + 8) & 2) != 0
        && (v78 = *((_QWORD *)v6 + 13)) != 0
        && (v79 = *((_QWORD *)v6 + 3)) != 0
        && (v80 = *(_QWORD *)(v79 + 8)) != 0
        && v78 == *(_QWORD *)(v80 + 24)
        && (((unsigned __int16)(v127 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*((_QWORD *)v6 + 5) + 288LL) >> 8)) & 0x1FF) == 0 )
      {
        v118 = a2;
        v17 = v6;
        v117 = v6;
      }
      else
      {
        v17 = v117;
      }
      if ( !v67 )
      {
        v81 = (const struct _D3DMATRIX *)*((_QWORD *)v6 + 27);
        if ( !v81 || v6 == v17 )
        {
          v82 = (_DWORD *)*((_QWORD *)v6 + 5);
          if ( v118.x < v82[22] || v118.x >= v82[24] || v118.y < v82[23] || v118.y >= v82[25] )
          {
            v16 = 3;
            goto LABEL_203;
          }
        }
        else if ( !DCEHitTestWindow(
                     (const struct tagRECT *)(*((_QWORD *)v6 + 5) + 88LL),
                     v81,
                     &v118,
                     *((const struct _SUBPIXELS **)v68 + 5)) )
        {
          v16 = 3;
          goto LABEL_202;
        }
      }
      v83 = *(_QWORD *)(*((_QWORD *)v6 + 5) + 168LL);
      if ( !v83 || (unsigned int)GrePtInRegion(v83, (unsigned int)v118.x, (unsigned int)v118.y) )
      {
        v84 = *((_QWORD *)v6 + 5);
        if ( (*(_BYTE *)(v84 + 26) & 8) == 0 || (*(_DWORD *)(v84 + 232) & 2) != 0 || DCELayerHitTest(v6, v118) )
        {
          if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v6) && (*((_DWORD *)v68 + 8) & 1) != 0 )
          {
            if ( v67 || (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0xC0) != 0x40 )
              v16 = 4;
            else
              v16 = 3;
          }
          else
          {
            if ( !v67 )
            {
              v85 = *((_QWORD *)v6 + 5);
              if ( (*(_BYTE *)(v85 + 31) & 0x20) == 0
                && v118.x >= *(_DWORD *)(v85 + 104)
                && v118.x < *(_DWORD *)(v85 + 112)
                && v118.y >= *(_DWORD *)(v85 + 108)
                && v118.y < *(_DWORD *)(v85 + 116) )
              {
                v17 = v117;
                v13 = v119;
                if ( *((_QWORD *)v6 + 14) )
                {
                  v6 = (struct tagWND *)*((_QWORD *)v6 + 14);
                  v16 = 0;
                }
                else
                {
                  v16 = 2;
                }
                goto LABEL_204;
              }
            }
            v16 = 1;
          }
        }
        else
        {
          v16 = 3;
        }
      }
      else
      {
        v16 = 3;
      }
      goto LABEL_202;
    }
    if ( v16 == 1 || v16 == 2 )
    {
      v121 = -2;
      if ( IsCompositionInputWindowForHitTest(v6) )
      {
        v24 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
        v25 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
           && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
        if ( v24 || v25 )
        {
          v26 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23) + 69416);
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v24,
            v25,
            v26,
            5,
            15,
            11,
            (__int64)&WPP_1b25774d2ec6355ca4d29f861006c482_Traceguids);
        }
      }
      else
      {
        v27 = (__int64 *)((__int64 (*)(void))PsGetCurrentThreadWin32Thread)();
        if ( v27 )
          v29 = *v27;
        else
          v29 = 0LL;
        if ( *((_QWORD *)v6 + 2) == v29 )
        {
          v33 = *((_QWORD *)v6 + 13);
          if ( !v33 )
            goto LABEL_108;
          v34 = *((_QWORD *)v6 + 3);
          if ( !v34 )
            goto LABEL_108;
          v35 = *(_QWORD *)(v34 + 8);
          if ( !v35
            || v33 != *(_QWORD *)(v35 + 24)
            || !(unsigned int)IsWindowDesktopComposed(v6)
            || (*(_BYTE *)(*((_QWORD *)v6 + 5) + 26LL) & 8) == 0
            || v16 == 2 )
          {
            goto LABEL_108;
          }
          v36 = (__int64 *)((__int64 (*)(void))PsGetCurrentThreadWin32Thread)();
          if ( v36 )
            v37 = *v36;
          else
            v37 = 0LL;
          BugCheckParameter3 = *(_QWORD *)(v37 + 456);
          *(_QWORD *)(v37 + 456) = &BugCheckParameter3;
          v124 = v6;
          HMLockObject(v6);
          v40 = ReferenceDwmApiPort(v39, v38);
          v122 = 1;
          v41 = 0;
          v42 = (void *)v40;
          v45 = W32GetUserSessionState(v44, v43);
          if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(v45 + 16)) == 1 )
          {
            v41 = 1;
            LeaveMitRitHazardCrit();
          }
          UserSessionSwitchLeaveCrit();
          DwmSyncHitTestQuery(
            v42,
            *((_QWORD *)a4 + 1),
            (LOWORD(v118.y) << 16) | LOWORD(v118.x),
            -2,
            (__int64)&v121,
            (__int64)&v122);
          EnterCrit(1LL, 0LL);
          if ( v41 )
            EnterMitRitHazardCrit();
          v46 = (ULONG_PTR *)((__int64 (*)(void))PsGetCurrentThreadWin32Thread)();
          if ( v46 )
            v47 = *v46;
          else
            v47 = 0LL;
          v48 = Win32HM_UnlockFromThread<1>(v47, (ULONG_PTR)&BugCheckParameter3);
          v124 = 0LL;
          BugCheckParameter3 = -1LL;
          if ( !v48 || (*(_BYTE *)(_HMPheFromObject(v6) + 25) & 1) != 0 )
          {
            v97 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
               && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
               && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
            v98 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v97 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v99 = *(_QWORD *)v6;
              v100 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v49);
              WPP_RECORDER_AND_TRACE_SF_q(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v97,
                v98,
                *(_QWORD *)(v100 + 69416),
                3,
                15,
                13,
                (__int64)&WPP_1b25774d2ec6355ca4d29f861006c482_Traceguids,
                v99);
            }
            if ( BugCheckParameter3 != -1LL )
            {
              v101 = (ULONG_PTR *)((__int64 (*)(void))PsGetCurrentThreadWin32Thread)();
              if ( v101 )
                v14 = *v101;
              Win32HM_UnlockFromThread<1>(v14, (ULONG_PTR)&BugCheckParameter3);
            }
            return 0LL;
          }
          v50 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
          v51 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
             && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
          v15 = v121;
          v52 = v122;
          if ( v50 || v51 )
          {
            v53 = "no";
            if ( !v122 )
              v53 = "yes";
            v54 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v49);
            WPP_RECORDER_AND_TRACE_SF_ddds(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v50,
              v51,
              *(_QWORD *)(v54 + 69416),
              v109,
              v111,
              v113,
              v115,
              v118.x,
              v118.y,
              v15,
              (__int64)v53);
          }
          if ( BugCheckParameter3 != -1LL )
          {
            v55 = PtiCurrent();
            Win32HM_UnlockFromThread<1>((ULONG_PTR)v55, (ULONG_PTR)&BugCheckParameter3);
          }
          if ( v52 )
          {
            v14 = 0LL;
          }
          else
          {
            v14 = 0LL;
LABEL_108:
            v56 = (__int64 *)((__int64 (*)(void))PsGetCurrentThreadWin32Thread)();
            if ( v56 )
              v57 = *v56;
            else
              v57 = 0LL;
            v125 = *(_QWORD *)(v57 + 456);
            *(_QWORD *)(v57 + 456) = &v125;
            v126 = v6;
            HMLockObject(v6);
            v15 = xxxSendTransformableMessageTimeout(v6, 0x84u, 0, 0, 0LL, 1, 0);
            v58 = (ULONG_PTR *)((__int64 (*)(void))PsGetCurrentThreadWin32Thread)();
            if ( v58 )
              v59 = *v58;
            else
              v59 = 0LL;
            v60 = Win32HM_UnlockFromThread<1>(v59, (ULONG_PTR)&v125);
            v126 = 0LL;
            v125 = -1LL;
            if ( !v60 || (*(_BYTE *)(_HMPheFromObject(v6) + 25) & 1) != 0 )
            {
              v102 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                  && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
                  && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
              v103 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( v102 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                v104 = *(_QWORD *)v6;
                v105 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v61);
                WPP_RECORDER_AND_TRACE_SF_q(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                  v102,
                  v103,
                  *(_QWORD *)(v105 + 69416),
                  3,
                  15,
                  15,
                  (__int64)&WPP_1b25774d2ec6355ca4d29f861006c482_Traceguids,
                  v104);
              }
              if ( v125 != -1LL )
              {
                v106 = (ULONG_PTR *)((__int64 (*)(void))PsGetCurrentThreadWin32Thread)();
                if ( v106 )
                  v14 = *v106;
                Win32HM_UnlockFromThread<1>(v14, (ULONG_PTR)&v125);
              }
              return 0LL;
            }
            v62 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
               && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
               && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
            v63 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
               && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
            if ( v62 || v63 )
            {
              v64 = *(_QWORD *)v6;
              v65 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v61);
              WPP_RECORDER_AND_TRACE_SF_ddqd(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v62,
                v63,
                *(_QWORD *)(v65 + 69416),
                v110,
                v112,
                v114,
                v116,
                v118.x,
                v118.y,
                v64,
                v15);
            }
            if ( v125 != -1LL )
            {
              v66 = (ULONG_PTR *)((__int64 (*)(void))PsGetCurrentThreadWin32Thread)();
              if ( v66 )
                Win32HM_UnlockFromThread<1>(*v66, (ULONG_PTR)&v125);
              else
                Win32HM_UnlockFromThread<1>(0LL, (ULONG_PTR)&v125);
            }
          }
          v17 = v117;
          v13 = v119;
          if ( v15 == -1 )
          {
            v128 = 1;
            v16 = 3;
            v15 = -2;
          }
          else
          {
            v16 = 4;
          }
          goto LABEL_204;
        }
        v30 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
        v31 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
           && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
        if ( v30 || v31 )
        {
          v32 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v28) + 69416);
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v30,
            v31,
            v32,
            5,
            15,
            12,
            (__int64)&WPP_1b25774d2ec6355ca4d29f861006c482_Traceguids);
        }
      }
      v16 = 4;
      v15 = 1;
LABEL_202:
      v17 = v117;
LABEL_203:
      v13 = v119;
      goto LABEL_204;
    }
    if ( v16 != 3 )
      break;
    if ( *((_QWORD *)v6 + 27) || v6 == v17 )
    {
      v118 = v120;
      RestoreLogicalPoint(*((struct tagWND **)v6 + 13), &v118, a4);
      v13 = v119;
    }
    v21 = *((_QWORD *)v6 + 11);
    v17 = 0LL;
    v117 = 0LL;
    if ( v21 )
    {
      v16 = 0;
      v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
      if ( *(struct tagWND **)(v21 + 104) == v13 && a3 )
      {
LABEL_36:
        v22 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v107 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v108 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v22,
            v107,
            *(_QWORD *)(v108 + 69416),
            4,
            15,
            19,
            (__int64)&WPP_1b25774d2ec6355ca4d29f861006c482_Traceguids,
            v120.x,
            v120.y);
        }
        return 0LL;
      }
    }
    else
    {
      v6 = (struct tagWND *)*((_QWORD *)v6 + 13);
      v16 = 2;
    }
LABEL_204:
    if ( v6 == v13 )
      goto LABEL_36;
  }
  if ( v128 )
  {
    CurrentThreadWin32Thread = (ULONG_PTR *)PsGetCurrentThreadWin32Thread((unsigned int)(v16 - 3), v13, v17);
    if ( CurrentThreadWin32Thread )
      v14 = *CurrentThreadWin32Thread;
    v19 = a4;
    if ( *((_QWORD *)v6 + 2) != v14 && (*((_DWORD *)a4 + 8) & 8) != 0 )
    {
      v20 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
      v86 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
         && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
      if ( v20 || v86 )
      {
        v87 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a4);
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v20,
          v86,
          *(_QWORD *)(v87 + 69416),
          5,
          15,
          17,
          (__int64)&WPP_1b25774d2ec6355ca4d29f861006c482_Traceguids);
      }
      return 0LL;
    }
  }
  else
  {
    v19 = a4;
  }
  v88 = (int *)*((_QWORD *)v19 + 3);
  if ( v88 )
  {
    *v88 = v15;
    *((_BYTE *)v19 + 36) = 1;
  }
  if ( v118 != v120 )
  {
    v89 = LOWORD(v118.x) | (LOWORD(v118.y) << 16);
    *((_BYTE *)v19 + 48) = 1;
    *((_QWORD *)v19 + 2) = v89;
  }
  v90 = (unsigned __int8 *)*((_QWORD *)v6 + 5);
  if ( v15 == (((v90[25] ^ (unsigned int)(unsigned __int8)~v90[26]) >> 6) & 1) + 16 && (v90[30] & 4) == 0 )
  {
    v91 = SizeBoxHwnd(v6);
    if ( v91 )
      v6 = (struct tagWND *)v91;
  }
  v92 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v93 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v92 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v94 = *(_QWORD *)v6;
    v95 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v90);
    WPP_RECORDER_AND_TRACE_SF_qddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v92,
      v93,
      *(_QWORD *)(v95 + 69416),
      4,
      15,
      18,
      (__int64)&WPP_1b25774d2ec6355ca4d29f861006c482_Traceguids,
      v94,
      v118.x,
      v118.y,
      v15);
  }
  return *(_QWORD *)v6;
}
