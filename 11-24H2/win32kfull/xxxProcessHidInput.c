/*
 * XREFs of xxxProcessHidInput @ 0x14004A660
 * Callers:
 *     ProcessHidRawInput @ 0x14004A480 (ProcessHidRawInput.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x140083108 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400A4BAC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     PtiKbdFromQ @ 0x1401534FC (PtiKbdFromQ.c)
 *     ?HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_TABLE@@@Z @ 0x140171AD8 (-HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_T.c)
 *     IsDeviceInputAllowed @ 0x1401B0D40 (IsDeviceInputAllowed.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z @ 0x140271E98 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDq @ 0x140272710 (WPP_RECORDER_AND_TRACE_SF_DDq.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxProcessHidInput(struct DEVICEINFO *a1, void *a2, unsigned int a3)
{
  char v3; // r15
  int v5; // r13d
  char v8; // si
  char v9; // di
  char v10; // bl
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // di
  __int16 v18; // bx
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  bool v25; // di
  char v26; // bl
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rcx
  struct tagPROCESS_HID_REQUEST *v34; // rbx
  __int64 v35; // rax
  struct tagWND *v36; // rbx
  const struct tagUIPI_INFO *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  const struct tagUIPI_INFO *v40; // r8
  UIPrivilegeIsolation *v41; // rcx
  char v42; // r14
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rax
  __int16 v46; // bx
  __int16 v47; // di
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  int *v53; // r12
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  struct tagPROCESS_HID_REQUEST *v58; // rax
  char v59; // r14
  struct tagWND *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rdx
  bool v65; // zf
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  const struct tagUIPI_INFO *v69; // r8
  __int64 v70; // rcx
  int v71; // ebx
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rbx
  __int64 v77; // rcx
  __int64 v78; // rsi
  __int64 v79; // rdx
  __int64 v80; // rcx
  const struct tagUIPI_INFO *v81; // r8
  UIPrivilegeIsolation *v82; // rcx
  bool v83; // si
  __int64 v84; // rbx
  __int64 v85; // rax
  int v86; // r8d
  int v87; // edx
  __int64 v88; // rax
  int v89; // [rsp+20h] [rbp-98h]
  __int64 v90; // [rsp+60h] [rbp-58h]
  __int64 v91; // [rsp+68h] [rbp-50h]
  __int64 v92; // [rsp+70h] [rbp-48h] BYREF
  int v93; // [rsp+78h] [rbp-40h]
  char v96; // [rsp+D8h] [rbp+20h] BYREF

  v3 = 0;
  v90 = 0LL;
  v5 = 0;
  v8 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
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
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69416),
      5,
      20,
      15,
      (__int64)&WPP_daaec9a2452c30258aeab0c9883363ec_Traceguids,
      (char)a1);
  }
  result = IsDeviceInputAllowed(a1);
  if ( !(_DWORD)result )
    return result;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v96);
  v16 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u )
  {
    v8 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v17 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v17 = 0;
  }
  if ( v8 || v17 )
  {
    v18 = *(_WORD *)(*((_QWORD *)a1 + 55) + 44LL);
    v19 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v15);
    LOBYTE(v20) = v17;
    LOBYTE(v21) = v8;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v21,
      v20,
      *(_QWORD *)(v19 + 69416),
      5,
      20,
      16,
      (__int64)&WPP_daaec9a2452c30258aeab0c9883363ec_Traceguids,
      v18,
      a3);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v16, v15) + 18944) )
  {
    v31 = W32GetUserSessionState(v23, v22);
    v32 = *(_QWORD *)(PtiKbdFromQ(*(_QWORD *)(v31 + 18944)) + 464);
    v90 = v32;
    v34 = HidIsRequestedByThisProcess(a1, *(struct tagPROCESS_HID_TABLE **)(v32 + 832));
    if ( v34 )
    {
      v35 = W32GetUserSessionState(v33, v22);
      v36 = (struct tagWND *)*((_QWORD *)v34 + 4);
      v22 = *(_QWORD *)(v35 + 18944);
      if ( v36 )
      {
        v30 = 1LL;
        v22 = *(_QWORD *)(*((_QWORD *)v36 + 2) + 472LL);
        if ( *(char *)(*((_QWORD *)v36 + 5) + 20LL) < 0 )
          goto LABEL_58;
      }
      if ( (*((_DWORD *)a1 + 42) & 0x20) == 0
        || (*(_DWORD *)(*((_QWORD *)a1 + 57) + 368LL) & 0x10) != 0
        || ((v37 = (const struct tagUIPI_INFO *)(v22 + 472), !(unsigned __int8)IsInputThread())
          ? (v41 = (UIPrivilegeIsolation *)(*((_QWORD *)PtiCurrent(v39, v38) + 58) + 872LL))
          : (v41 = (UIPrivilegeIsolation *)(*((_QWORD *)a1 + 57) + 952LL)),
            v30 = 1LL,
            UIPrivilegeIsolation::CheckAccess(v41, v37, v40)) )
      {
        v30 = 1LL;
        if ( (unsigned int)PostHidInput(a1, a2, a3, v36, 0LL) )
        {
          v5 = 1;
          v30 = 0LL;
        }
      }
    }
    else
    {
      v24 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
      {
        v3 = 1;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v42 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v42 = 0;
      }
      if ( v3 || v42 )
      {
        v43 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
        v44 = *(_QWORD *)(PtiKbdFromQ(*(_QWORD *)(v43 + 18944)) + 464);
        v45 = *((_QWORD *)a1 + 55);
        v46 = *(_WORD *)(v45 + 40);
        v47 = *(_WORD *)(v45 + 42);
        v50 = W32GetUserSessionState(v49, v48);
        LOBYTE(v51) = v42;
        LOBYTE(v52) = v3;
        WPP_RECORDER_AND_TRACE_SF_DDq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v52,
          v51,
          *(_QWORD *)(v50 + 69416),
          v89,
          20,
          18,
          (__int64)&WPP_daaec9a2452c30258aeab0c9883363ec_Traceguids,
          v47,
          v46,
          v44);
      }
      v30 = 1LL;
    }
  }
  else
  {
    v24 = *(_QWORD *)&WPP_GLOBAL_Control;
    v25 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v26 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v26 = 0;
    }
    if ( v25 || v26 )
    {
      v27 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
      LOBYTE(v28) = v26;
      LOBYTE(v29) = v25;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v29,
        v28,
        *(_QWORD *)(v27 + 69416),
        5,
        20,
        17,
        (__int64)&WPP_daaec9a2452c30258aeab0c9883363ec_Traceguids);
    }
    v30 = 1LL;
  }
  v32 = v90;
LABEL_58:
  v53 = *(int **)(W32GetUserSessionState(v24, v22) + 224);
  result = W32GetUserSessionState(v55, v54) + 224;
  if ( v53 != (int *)result )
  {
    while ( 1 )
    {
      if ( v53[20] <= 0 )
        goto LABEL_105;
      v58 = HidIsRequestedByThisProcess(a1, (struct tagPROCESS_HID_TABLE *)v53);
      if ( !v58 )
        goto LABEL_105;
      v57 = *((unsigned int *)v58 + 5);
      v59 = 1;
      if ( (v57 & 1) == 0 || (v57 & 2) != 0 && !v30 )
        goto LABEL_105;
      v56 = *((_QWORD *)v58 + 5);
      if ( v56 )
      {
        (*((void (__fastcall **)(struct DEVICEINFO *))v58 + 5))(a1);
        goto LABEL_105;
      }
      v60 = (struct tagWND *)*((_QWORD *)v58 + 4);
      if ( *(_QWORD *)(*((_QWORD *)v60 + 2) + 464LL) == v32 )
        goto LABEL_105;
      v57 = *(_QWORD *)(W32GetUserSessionState(v57, 0LL) + 19200);
      if ( *((_QWORD *)v60 + 3) != v57 )
        goto LABEL_105;
      v61 = *((_QWORD *)v60 + 5);
      if ( *(char *)(v61 + 20) < 0 || *(char *)(v61 + 19) < 0 )
        goto LABEL_105;
      v62 = *((_QWORD *)a1 + 56);
      v63 = *(unsigned __int16 *)(v62 + 16);
      v64 = *(unsigned __int16 *)(v62 + 18);
      if ( (_WORD)v63 == 12 )
        break;
      if ( (_WORD)v63 == 1 )
      {
        v65 = (_WORD)v64 == 9;
LABEL_72:
        if ( !v65 )
          goto LABEL_77;
        goto LABEL_92;
      }
      if ( (unsigned __int16)v63 < 0xFF00u )
      {
LABEL_77:
        if ( *(_QWORD *)(W32GetUserSessionState(v63, v64) + 18944) )
        {
          v68 = W32GetUserSessionState(v67, v66);
          if ( !UIPrivilegeIsolation::CheckAccess(
                  (UIPrivilegeIsolation *)(*(_QWORD *)(*((_QWORD *)v60 + 2) + 472LL) + 472LL),
                  (const struct tagUIPI_INFO *)(*(_QWORD *)(v68 + 18944) + 472LL),
                  v69) )
          {
            v67 = *(_QWORD *)(*((_QWORD *)v60 + 2) + 464LL);
            if ( *(int *)(v67 + 12) >= 0 )
            {
              v70 = *(_QWORD *)(W32GetUserSessionState(v67, v66) + 18944);
              v71 = *(_DWORD *)(v70 + 480);
              v91 = *(_QWORD *)(v70 + 472);
              v73 = W32GetUserSessionState(v70, v72);
              v74 = *((_QWORD *)v60 + 2);
              v92 = v91;
              v75 = *(_QWORD *)(v73 + 18944);
              v93 = v71;
              EtwTraceUIPIInputError(v74, 0LL, v75, &v92, 5);
              goto LABEL_105;
            }
          }
        }
        v76 = W32GetUserSessionState(v67, v66) + 56;
        RIMLockShared(v76);
        if ( (*((_DWORD *)a1 + 42) & 0x2000) != 0 )
        {
          v77 = *(_QWORD *)(*((_QWORD *)a1 + 46) + 88LL);
          if ( !v77
            || *(int *)(v77 + 12) >= 0
            && ((v78 = *(_QWORD *)(*((_QWORD *)v60 + 2) + 472LL), !(unsigned __int8)IsInputThread())
             || (*((_DWORD *)a1 + 46) & 0x80u) == 0
              ? (v82 = (UIPrivilegeIsolation *)(*((_QWORD *)PtiCurrent(v80, v79) + 58) + 872LL))
              : (v82 = (UIPrivilegeIsolation *)(*((_QWORD *)a1 + 57) + 952LL)),
                !UIPrivilegeIsolation::CheckAccess(v82, (const struct tagUIPI_INFO *)(v78 + 472), v81)) )
          {
            RIMUnlockShared(v76);
            goto LABEL_105;
          }
          v59 = 1;
        }
        RIMUnlockShared(v76);
      }
LABEL_92:
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u )
      {
        v59 = 0;
      }
      v83 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
         && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
      if ( v59 || v83 )
      {
        v84 = *(_QWORD *)(*((_QWORD *)v60 + 2) + 472LL);
        v85 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v64);
        LOBYTE(v86) = v83;
        LOBYTE(v87) = v59;
        WPP_RECORDER_AND_TRACE_SF_qq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v87,
          v86,
          *(_QWORD *)(v85 + 69416),
          5,
          20,
          19,
          (__int64)&WPP_daaec9a2452c30258aeab0c9883363ec_Traceguids,
          (char)v60,
          v84);
      }
      result = PostHidInput(a1, a2, a3, v60, 1uLL);
      if ( !(_DWORD)result )
        goto LABEL_106;
      v5 = 1;
LABEL_105:
      v53 = *(int **)v53;
      v32 = v90;
      result = W32GetUserSessionState(v57, v56) + 224;
      if ( v53 == (int *)result )
        goto LABEL_106;
    }
    v65 = (_WORD)v64 == 1;
    goto LABEL_72;
  }
LABEL_106:
  if ( v5 )
  {
    result = *((unsigned int *)a1 + 46);
    if ( (result & 0x40) == 0 )
    {
      v88 = W32GetUserSessionState(v57, v56);
      result = CInputGlobals::UpdateInputGlobals(
                 *(_QWORD *)(v88 + 3064),
                 (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                 4LL,
                 0LL,
                 0,
                 0);
    }
  }
  if ( !v96 )
    return UserSessionSwitchLeaveCritWithNonPaged();
  return result;
}
