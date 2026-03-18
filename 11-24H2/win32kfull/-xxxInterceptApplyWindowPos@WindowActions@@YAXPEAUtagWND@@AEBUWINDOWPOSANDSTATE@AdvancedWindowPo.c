/*
 * XREFs of ?xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPos@@@Z @ 0x1402CD9E0
 * Callers:
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x140222848 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140032E18 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1401EB664 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     ?MaxStateFromAwpState@@YA?AW4_WINDOW_PLACEMENT_STATE@@W4State@AdvancedWindowPos@@@Z @ 0x1402C9DE4 (-MaxStateFromAwpState@@YA-AW4_WINDOW_PLACEMENT_STATE@@W4State@AdvancedWindowPos@@@Z.c)
 *     ?SaveShellRequestedOperationData@@YA_NPEAUtagWND@@AEBUtagRECT@@W4State@AdvancedWindowPos@@K@Z @ 0x1402CAEB0 (-SaveShellRequestedOperationData@@YA_NPEAUtagWND@@AEBUtagRECT@@W4State@AdvancedWindowPos@@K@Z.c)
 *     ?SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z @ 0x1402CB230 (-SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptApplyWindowPos(
        WindowActions *this,
        const struct tagRECT *a2,
        const struct AdvancedWindowPos::WINDOWPOSANDSTATE *a3)
{
  char v5; // r14
  char v6; // di
  __int64 v7; // rbx
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  int right; // ecx
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // rdx
  char v15; // r14
  char v16; // di
  const wchar_t *v17; // rbx
  __int64 v18; // rax
  LONG bottom; // eax
  char v20; // di
  char v21; // bl
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // rax
  char v26; // di
  char v27; // bl
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  int *v31; // rcx
  int v32; // ecx
  LONG top; // edx
  LONG v34; // eax
  int v35; // eax
  char v36; // r15
  char v37; // r14
  __int64 v38; // rax
  char v39; // di
  char v40; // bl
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  LONG v44; // eax
  struct tagRECT v45; // xmm0
  char v46; // r15
  char v47; // r14
  __int64 v48; // rax
  INT *p_left; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  char v52; // di
  char v53; // bl
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  const struct tagMONITOR *v57; // rax
  int v58[2]; // [rsp+40h] [rbp-79h]
  int v59; // [rsp+70h] [rbp-49h] BYREF
  int v60; // [rsp+74h] [rbp-45h] BYREF
  int v61; // [rsp+7Ch] [rbp-3Dh]
  LONG v62; // [rsp+80h] [rbp-39h]
  int v63; // [rsp+84h] [rbp-35h]
  int v64; // [rsp+88h] [rbp-31h]
  __int64 v65; // [rsp+90h] [rbp-29h]
  int v66; // [rsp+98h] [rbp-21h]
  struct tagRECT v67; // [rsp+9Ch] [rbp-1Dh] BYREF
  int v68; // [rsp+BCh] [rbp+3h]

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
    v7 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v9) = v6;
    LOBYTE(v10) = v5;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69416),
      5,
      4,
      54,
      (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
      v7);
  }
  memset_0(&v60, 0, 0x5CuLL);
  right = a2->right;
  v59 = 32;
  v13 = MaxStateFromAwpState(right);
  v66 = v13;
  v14 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (v12 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v12 & 8) == 0)
    || (v15 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v15 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v16 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v16 = 0;
  }
  if ( v15 || v16 )
  {
    if ( v13 == 1 )
    {
      v17 = L"WPS_MAXIMIZED";
    }
    else
    {
      v17 = L"WPS_MINIMIZED";
      if ( v13 != 2 )
        v17 = L"WPS_NORMAL";
    }
    v18 = W32GetUserSessionState(v12, *(_QWORD *)&WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v16,
      *(_QWORD *)(v18 + 69416),
      5u,
      4u,
      0x37u,
      (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
      (const char *)v17);
    v13 = v66;
  }
  bottom = a2->bottom;
  if ( (bottom & 1) != 0 )
  {
    if ( (bottom & 2) == 0 )
    {
      v25 = *(_QWORD *)&a2->left;
      v59 |= 8u;
      v65 = v25;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
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
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v30,
          v29,
          *(_QWORD *)(v28 + 69416),
          5,
          4,
          57,
          (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
          v65);
        goto LABEL_47;
      }
    }
  }
  else
  {
    v59 |= 0x10u;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v20 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v20 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v21 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v21 = 0;
    }
    if ( v20 || v21 )
    {
      v22 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
      LOBYTE(v23) = v21;
      LOBYTE(v24) = v20;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v24,
        v23,
        *(_QWORD *)(v22 + 69416),
        5,
        4,
        56,
        (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids);
LABEL_47:
      v13 = v66;
    }
  }
  if ( v13 )
  {
    v44 = a2->bottom;
    if ( (v44 & 8) != 0 )
    {
      v45 = a2[1];
      v59 |= 0x40u;
      v67 = v45;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v46 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v46 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v47 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v47 = 0;
      }
      if ( v46 || v47 )
      {
        v48 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
        v58[0] = v67.left;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v46,
          v47,
          *(_QWORD *)(v48 + 69416),
          5u,
          4u,
          0x3Cu,
          (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
          *(_QWORD *)v58,
          v67.top,
          v67.right,
          v67.bottom,
          v67.right - v67.left,
          v67.bottom - v67.top);
      }
    }
    else if ( (v44 & 4) != 0 )
    {
      v57 = (const struct tagMONITOR *)MonitorFromRect(&a2[1].left, 2u, 0x12u);
      SetMonitorMovePoint((struct _WINDOW_ACTION *)&v59, v57);
    }
  }
  else if ( !IsRectEmptyInl(a2 + 1) )
  {
    v32 = *v31;
    top = a2[1].top;
    v34 = a2[1].right;
    v59 |= 6u;
    v63 = v34 - v32;
    v35 = a2[1].bottom - top;
    v61 = v32;
    v64 = v35;
    v62 = top;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v36 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v36 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v37 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v37 = 0;
    }
    if ( v36 || v37 )
    {
      v38 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      v58[0] = v61;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v36,
        v37,
        *(_QWORD *)(v38 + 69416),
        5u,
        4u,
        0x3Au,
        (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
        *(_QWORD *)v58,
        v62,
        v63 + v61,
        v64 + v62,
        v63,
        v64);
    }
    if ( (a2->bottom & 0x100) == 0 )
    {
      v60 |= 1u;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v39 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v39 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v40 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v40 = 0;
      }
      if ( v39 || v40 )
      {
        v41 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        LOBYTE(v42) = v40;
        LOBYTE(v43) = v39;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v43,
          v42,
          *(_QWORD *)(v41 + 69416),
          5,
          4,
          59,
          (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids);
      }
    }
  }
  if ( (v59 & 0x42) != 0 )
  {
    p_left = &a2[1].left;
    if ( (v59 & 2) == 0 )
      p_left = (INT *)&v67;
    v50 = MonitorFromRect(p_left, 0, 0x12u);
    if ( v50 )
    {
      v60 |= 0x200u;
      v68 = *(unsigned __int16 *)(*(_QWORD *)(v50 + 40) + 60LL);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v52 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v52 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v53 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v53 = 0;
      }
      if ( v52 || v53 )
      {
        v54 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v51);
        LOBYTE(v55) = v53;
        LOBYTE(v56) = v52;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v56,
          v55,
          *(_QWORD *)(v54 + 69416),
          5,
          4,
          61,
          (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
          v68);
      }
    }
  }
  if ( (a2->bottom & 0x10) != 0 )
  {
    if ( !SaveShellRequestedOperationData(this, (__int128 *)&a2[1].left, a2->right, a2[2].left) )
      return;
    v59 |= 0x400u;
  }
  xxxSendTransformableMessageTimeout(
    (struct tagTHREADINFO **)this,
    838LL,
    0LL,
    (struct tagDRAWITEMSTRUCT *)&v59,
    0,
    0,
    0LL,
    1,
    1);
}
