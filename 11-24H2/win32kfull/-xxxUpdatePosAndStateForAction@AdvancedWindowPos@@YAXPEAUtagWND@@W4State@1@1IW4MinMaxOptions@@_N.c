/*
 * XREFs of ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402D8B48
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     _MonitorFromPoint @ 0x140027270 (_MonitorFromPoint.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x14006E488 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 *     PWInsertAfter @ 0x14008C888 (PWInsertAfter.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     InternalBeginDeferWindowPos @ 0x1400F4B34 (InternalBeginDeferWindowPos.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1400F4FF8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z @ 0x140183E08 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ @ 0x1401AA454 (--1-$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x140269110 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ??1DwmNotifyMoveReason@@QEAA@XZ @ 0x1402A5138 (--1DwmNotifyMoveReason@@QEAA@XZ.c)
 *     ?MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D3344 (-MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall AdvancedWindowPos::xxxUpdatePosAndStateForAction(
        __int64 a1,
        struct tagWND *a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned __int8 a6,
        ULONG_PTR a7,
        char a8,
        struct tagRECT *a9,
        __int64 a10)
{
  struct tagWND *v10; // rsi
  int v12; // r12d
  int v13; // eax
  int v14; // r13d
  char v15; // bl
  __int64 v16; // rdx
  int v17; // edi
  char v18; // r14
  char v19; // si
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  __int64 v23; // rdx
  bool v24; // cl
  struct tagRECT *v25; // r12
  bool v26; // al
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdi
  _OWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  char v37; // si
  char v38; // di
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  bool v42; // di
  __int64 v43; // rax
  int v44; // edx
  int v45; // r8d
  unsigned int v46; // r13d
  char v47; // r12
  char v48; // si
  __int64 v49; // rax
  int v50; // edx
  int v51; // r8d
  struct tagMONITOR *v52; // rsi
  __int64 v53; // rax
  char v54; // r12
  char v55; // si
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  INT *p_left; // rcx
  unsigned int v60; // r8d
  __int64 v61; // rdx
  int v62; // eax
  __int16 v63; // [rsp+30h] [rbp-A9h]
  __int16 v64; // [rsp+30h] [rbp-A9h]
  int v65; // [rsp+50h] [rbp-89h]
  unsigned int v66; // [rsp+50h] [rbp-89h]
  struct tagRECT v69; // [rsp+60h] [rbp-79h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+70h] [rbp-69h] BYREF
  __int64 v71; // [rsp+80h] [rbp-59h] BYREF
  __int16 v72; // [rsp+88h] [rbp-51h]
  ULONG_PTR v73[2]; // [rsp+90h] [rbp-49h] BYREF
  struct tagMONITOR *v74; // [rsp+A0h] [rbp-39h] BYREF
  ULONG_PTR v75; // [rsp+A8h] [rbp-31h]
  __int64 v76; // [rsp+B0h] [rbp-29h]
  int v77; // [rsp+B8h] [rbp-21h]
  char v78; // [rsp+BCh] [rbp-1Dh]
  __int128 v79; // [rsp+C0h] [rbp-19h]

  v10 = (struct tagWND *)a1;
  v12 = (int)a2;
  v13 = *(_DWORD *)(a10 + 4);
  BugCheckParameter3[0] = a7;
  v14 = v13 & 0x20000;
  v71 = a1;
  v72 = 0;
  v15 = 1;
  if ( (v13 & 0x1000) != 0 )
  {
    *(_DWORD *)(a1 + 380) |= 0x200u;
    HIBYTE(v72) = 1;
  }
  if ( a3 == 3 )
  {
    if ( !v14 )
    {
      *(_DWORD *)(a1 + 380) |= 0x200000u;
      LOBYTE(v72) = 1;
    }
    AdvancedWindowPos::MarkWindowAsArranged((AdvancedWindowPos *)a1, a2);
    if ( !v12 )
      CHECKPOINT::Restore(v10, a9);
  }
  if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
    || (*(_DWORD *)(a10 + 4) & 1) == 0 )
  {
    v17 = a5;
  }
  else
  {
    v65 = a4 | 0x400000;
    v17 = a5 | 0x100;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v18 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v18 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v19 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v19 = 0;
    }
    if ( v18 || v19 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v18;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v22,
        v21,
        *(_QWORD *)(UserSessionState + 69416),
        5,
        4,
        87,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    v10 = (struct tagWND *)a1;
    a4 = v65;
  }
  v23 = a3;
  v24 = a3 != v12 && (a3 != 3 || v12);
  v25 = (struct tagRECT *)BugCheckParameter3[0];
  v26 = a3 == 1 && (BugCheckParameter3[0] || a8);
  if ( v24 || v26 )
  {
    if ( !v14 )
      v17 |= 0x10000u;
    v76 = *(_QWORD *)(a10 + 32);
    v75 = 0LL;
    v77 = 0;
    v78 = 0;
    v79 = 0LL;
    if ( BugCheckParameter3[0] )
    {
      v75 = BugCheckParameter3[0];
      if ( a3 == 3 )
      {
        v17 |= 8u;
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
          v17 |= 0x800000u;
        goto LABEL_78;
      }
      v17 |= 0x200000u;
    }
    else if ( a8 )
    {
      if ( !a3 )
      {
        v17 |= 8u;
        v75 = (ULONG_PTR)a9;
        goto LABEL_78;
      }
LABEL_94:
      if ( a3 != 3 )
      {
        if ( a3 == 1 )
        {
          v66 = 3;
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v54 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v54 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v55 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
          {
            v55 = 0;
          }
          if ( v54 || v55 )
          {
            v56 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a3);
            LOBYTE(v57) = v55;
            LOBYTE(v58) = v54;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v58,
              v57,
              *(_QWORD *)(v56 + 69416),
              5,
              4,
              89,
              (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
          }
          v17 |= 2u;
        }
        else
        {
          v66 = 6;
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
            v49 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a3);
            v64 = 90;
            goto LABEL_88;
          }
        }
LABEL_89:
        v73[0] = -1LL;
        v46 = a3;
        v52 = 0LL;
        v73[1] = 0LL;
        if ( a3 != 2 )
        {
          if ( (*(_DWORD *)a10 & 0x100) != 0 )
          {
            v53 = MonitorFromPoint(*(_QWORD *)(a10 + 100), 2u, 0x12u);
          }
          else
          {
            p_left = (INT *)BugCheckParameter3[0];
            if ( BugCheckParameter3[0] )
            {
              v60 = 18;
            }
            else
            {
              if ( a3 != 1 || !a8 )
                goto LABEL_127;
              p_left = &a9->left;
              v60 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
            }
            v53 = MonitorFromRect(p_left, 2u, v60);
          }
          v52 = (struct tagMONITOR *)v53;
        }
LABEL_127:
        if ( (*(_DWORD *)(a10 + 4) & 0x200) != 0 )
        {
          v52 = (struct tagMONITOR *)MonitorFromPoint(*(_QWORD *)(a10 + 100), 2u, 0x12u);
          if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
            v17 |= 0x80u;
        }
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() && v52 )
          v17 |= 0x80u;
        Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)v73, (__int64)v52);
        v74 = v52;
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
          v77 = *(_DWORD *)(a10 + 132);
        v10 = (struct tagWND *)a1;
        xxxMinMaximizeEx(a1, v66, v17, &v74);
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() && v78 )
        {
          *(_DWORD *)a10 |= 0x400u;
          v62 = v77;
          *(_DWORD *)(a10 + 108) |= 2u;
          *(_DWORD *)(a10 + 132) = v62;
        }
        Win32HMThreadLockBase<tagMONITOR,1,1>::~Win32HMThreadLockBase<tagMONITOR,1,1>(v73, v61);
        goto LABEL_139;
      }
LABEL_78:
      v66 = 9;
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
        v49 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23);
        v64 = 88;
LABEL_88:
        LOBYTE(v51) = v48;
        LOBYTE(v50) = v47;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v50,
          v51,
          *(_QWORD *)(v49 + 69416),
          5,
          4,
          v64,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
        goto LABEL_89;
      }
      goto LABEL_89;
    }
    if ( !a3 )
      goto LABEL_78;
    goto LABEL_94;
  }
  v27 = PWInsertAfter(*(_QWORD *)(a10 + 32), a3);
  v29 = v27;
  BugCheckParameter3[0] = -1LL;
  BugCheckParameter3[1] = 0LL;
  if ( (unsigned __int64)(v27 - 2) <= 0xFFFFFFFFFFFFFFFBuLL )
    Win32HMThreadLockBase<tagWND,0,1>::ManualLock<void>(BugCheckParameter3, v27);
  v69 = *a9;
  if ( v25 )
    v69 = *v25;
  v30 = InternalBeginDeferWindowPos(1LL, v28);
  if ( !v30
    || (v32 = _DeferWindowPos(
                (__int64)v30,
                (__int64)v10,
                v29,
                v69.left,
                v69.top,
                v69.right - v69.left,
                v69.bottom - v69.top,
                a4,
                0),
        (v33 = v32) == 0) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v15 = 0;
    }
    v42 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_71;
    v43 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v31);
    v63 = 93;
    goto LABEL_70;
  }
  *(_DWORD *)(*(_QWORD *)(v32 + 40) + 156LL) = *(_DWORD *)(*(_QWORD *)(v32 + 40) + 156LL) & 0xFFFFFBFF | (a6 << 10);
  if ( (*(_DWORD *)(a10 + 4) & 0x200) != 0 )
  {
    v34 = MonitorFromPoint(*(_QWORD *)(a10 + 100), 2u, 0x12u);
    v36 = 0LL;
    if ( v34 )
      v36 = *(_QWORD *)MonitorFromPoint(*(_QWORD *)(a10 + 100), 2u, 0x12u);
    *(_QWORD *)(*(_QWORD *)(v33 + 40) + 128LL) = v36;
    *(_DWORD *)(*(_QWORD *)(v33 + 40) + 156LL) |= 0x200u;
    *(_DWORD *)(*(_QWORD *)(v33 + 40) + 32LL) |= 0x80000u;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v37 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v37 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v38 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v38 = 0;
    }
    if ( v37 || v38 )
    {
      v39 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v35);
      LOBYTE(v40) = v38;
      LOBYTE(v41) = v37;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v41,
        v40,
        *(_QWORD *)(v39 + 69416),
        5,
        4,
        91,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    v10 = (struct tagWND *)a1;
  }
  if ( !(unsigned int)xxxEndDeferWindowPosEx((struct tagSMWP *)v33, 0LL) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v15 = 0;
    }
    v42 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_71;
    v43 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v31);
    v63 = 92;
LABEL_70:
    LOBYTE(v45) = v42;
    LOBYTE(v44) = v15;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v44,
      v45,
      *(_QWORD *)(v43 + 69416),
      2,
      4,
      v63,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
LABEL_71:
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v31);
    goto LABEL_142;
  }
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v31);
  v46 = a3;
LABEL_139:
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() && v46 == 3 )
    *((_DWORD *)v10 + 95) |= 0x4000000u;
LABEL_142:
  DwmNotifyMoveReason::~DwmNotifyMoveReason((DwmNotifyMoveReason *)&v71);
}
