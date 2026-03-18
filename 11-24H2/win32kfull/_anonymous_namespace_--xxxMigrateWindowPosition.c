/*
 * XREFs of _anonymous_namespace_::xxxMigrateWindowPosition @ 0x140223790
 * Callers:
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x1402D6EA4 (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 * Callees:
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x140068654 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _anonymous_namespace_::TestFeature @ 0x1401494EC (_anonymous_namespace_--TestFeature.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14014A0D8 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x14014ACFC (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14014E948 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14014E984 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x14014EAE0 (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxAwpMinMaximizeEx @ 0x14015022C (_anonymous_namespace_--xxxAwpMinMaximizeEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x140189B00 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_ssdddddd @ 0x1401D8A0C (WPP_RECORDER_AND_TRACE_SF_ssdddddd.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x140222848 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x140251FB8 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x140269B3C (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::GetArrangedOptions @ 0x1402D2B94 (_anonymous_namespace_--GetArrangedOptions.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

char __fastcall anonymous_namespace_::xxxMigrateWindowPosition(
        AdvancedWindowPos *this,
        __int64 a2,
        CMonitorTopology *a3,
        struct tagRECT *a4,
        unsigned int a5,
        unsigned int a6,
        struct tagRECT *a7)
{
  struct tagRECT *v7; // r12
  struct tagRECT v10; // xmm1
  char v11; // si
  char v12; // di
  __int64 UserSessionState; // rax
  const struct CMonitorTopology::MonitorData *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r14
  char v17; // bl
  int v18; // r15d
  __int64 v19; // rdx
  unsigned __int16 v20; // ax
  __int64 v21; // rsi
  char v22; // si
  char v23; // r12
  __int64 v24; // rax
  char v25; // si
  char v26; // bl
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // rcx
  char v31; // si
  bool v32; // r14
  const char *StateString; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  __int64 v39; // rax
  __int64 Prop; // rax
  __int64 v41; // rdx
  char v42; // r14
  char v43; // si
  __int64 v44; // rax
  const struct CMonitorTopology::MonitorData *v45; // rax
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v46; // r8
  struct tagRECT v47; // xmm0
  __int64 v48; // r8
  char v49; // si
  char v50; // di
  __int64 v51; // rax
  char v52; // r12
  int WindowState; // eax
  const char *v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  const char *v58; // r10
  int v60; // [rsp+20h] [rbp-E0h]
  int v61; // [rsp+28h] [rbp-D8h]
  int v62; // [rsp+30h] [rbp-D0h]
  int v63; // [rsp+38h] [rbp-C8h]
  __int64 v64; // [rsp+40h] [rbp-C0h]
  __int64 v65; // [rsp+48h] [rbp-B8h]
  __int64 v66; // [rsp+50h] [rbp-B0h]
  __int64 v67; // [rsp+58h] [rbp-A8h]
  __int64 v68; // [rsp+60h] [rbp-A0h]
  __int64 v69; // [rsp+68h] [rbp-98h]
  char v70; // [rsp+80h] [rbp-80h]
  char v71; // [rsp+81h] [rbp-7Fh]
  int v72; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v73; // [rsp+88h] [rbp-78h]
  int v74; // [rsp+90h] [rbp-70h]
  struct tagRECT *v75; // [rsp+98h] [rbp-68h]
  struct tagRECT v76; // [rsp+A0h] [rbp-60h] BYREF
  CMonitorTopology *v77; // [rsp+B0h] [rbp-50h]
  struct tagRECT v78; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v79; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v80[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v81; // [rsp+100h] [rbp+0h]
  struct tagRECT v82; // [rsp+110h] [rbp+10h] BYREF

  v7 = a7;
  v77 = a3;
  v73 = a2;
  v75 = a7;
  if ( !a4 )
    a4 = (struct tagRECT *)(*((_QWORD *)this + 5) + 88LL);
  v10 = *a4;
  v78 = *a4;
  if ( a7 )
    *a7 = 0LL;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v11 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v12 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v12 = 0;
  }
  if ( v11 || v12 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v11,
      v12,
      *(_QWORD *)(UserSessionState + 69416),
      5u,
      4u,
      0x22u,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      v78.left,
      v78.top,
      v78.right,
      v78.bottom,
      v78.right - v78.left,
      v78.bottom - v78.top);
    v10 = v78;
  }
  v79 = v10;
  v14 = CMonitorTopology::MonitorDataFromRect(a3, this, &v79);
  v16 = (__int64)v14;
  if ( !v14 )
    return (char)v14;
  v70 = 0;
  v74 = 524308;
  v17 = 0;
  v18 = 1;
  if ( !anonymous_namespace_::TestFeature(1LL, v15) || !IsArranged(this) )
    goto LABEL_28;
  v72 = 0;
  v70 = 1;
  v79 = 0LL;
  CMonitorTopology::MonitorData::LogicalWorkArea((CMonitorTopology::MonitorData *)v16, &v82, this);
  v20 = *(_WORD *)(v16 + 40);
  v76 = v78;
  v21 = v73;
  if ( CallShell::xxxMigrateWindowHandler(
         (struct tagRECT *)this,
         ((a5 >> 1) & 1) == 0,
         (__int64 *)(v16 + 24),
         (__int64 *)&v82.left,
         v20,
         (struct tagWND *)&v76,
         v73,
         (__m128i *)&v79,
         &v72,
         (int *)&a6) )
  {
    if ( v72 != 3 )
    {
      v30 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v31 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v31 = 0;
      }
      v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v31 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        StateString = AdvancedWindowPos::GetStateString(v72);
        v36 = W32GetUserSessionState(v35, v34);
        LOBYTE(v37) = v32;
        LOBYTE(v38) = v31;
        WPP_RECORDER_AND_TRACE_SF_s(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v38,
          v37,
          *(_QWORD *)(v36 + 69416),
          4,
          4,
          36,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          (__int64)StateString);
      }
      v39 = W32GetUserSessionState(v30, v19);
      Prop = GetProp((__int64)this, *(unsigned __int16 *)(v39 + 41398), 1u);
      if ( Prop )
      {
        v78 = *(struct tagRECT *)(Prop + 20);
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v42 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v42 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v43 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v43 = 0;
        }
        if ( v42 || v43 )
        {
          v44 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v41);
          LODWORD(v69) = v78.bottom - v78.top;
          LODWORD(v68) = v78.right - v78.left;
          LODWORD(v67) = v78.bottom;
          LODWORD(v66) = v78.right;
          LODWORD(v65) = v78.top;
          LODWORD(v64) = v78.left;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v42,
            v43,
            *(_QWORD *)(v44 + 69416),
            5u,
            4u,
            0x25u,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69);
        }
      }
      v76 = v78;
      v45 = CMonitorTopology::MonitorDataFromRect(v77, this, &v76);
      if ( v45 )
      {
        v47 = *(struct tagRECT *)anonymous_namespace_::xxxNormalizeRect(
                                   (__int64)&v76,
                                   this,
                                   (__int64)&v78,
                                   v73,
                                   (__int64)v45,
                                   1);
        v78 = v47;
      }
      else
      {
        v47 = v78;
      }
      DWORD2(v80[0]) = v72;
      *(_QWORD *)&v80[0] = 0LL;
      HIDWORD(v80[0]) = ((a5 & 4) << 7) | 0x5F;
      v80[1] = v47;
      LODWORD(v81) = a6;
      AdvancedWindowPos::xxxApplyWindowPos(this, (struct tagRECT *)v80, v46);
      v48 = 2LL;
      goto LABEL_90;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v22 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v22 = 0;
    }
    v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
      LODWORD(v69) = v79.bottom - v79.top;
      LODWORD(v68) = v79.right - v79.left;
      LODWORD(v67) = v79.bottom;
      LODWORD(v66) = v79.right;
      LODWORD(v65) = v79.top;
      LODWORD(v64) = v79.left;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v22,
        v23,
        *(_QWORD *)(v24 + 69416),
        4u,
        4u,
        0x23u,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
    }
    v17 = 1;
    v7 = v75;
    v78 = v79;
    v74 = 13107220;
LABEL_28:
    v21 = v73;
    goto LABEL_29;
  }
  v18 = anonymous_namespace_::GetArrangedOptions((struct tagWND *)&v78, this, (CMonitorTopology::MonitorData *)v16) | 1;
LABEL_29:
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 1) != 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v25 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v25 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v26 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v26 = 0;
    }
    if ( v25 || v26 )
    {
      v27 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
      LOBYTE(v28) = v26;
      LOBYTE(v29) = v25;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v29,
        v28,
        *(_QWORD *)(v27 + 69416),
        5,
        4,
        38,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    *(_QWORD *)&v80[0] = v73;
    memset((char *)v80 + 8, 0, 21);
    v81 = 0LL;
    anonymous_namespace_::xxxAwpMinMaximizeEx((__int64)this, 3LL, ((a5 & 4) << 14) | 0x56, (__int64)v80);
  }
  else
  {
    if ( !v17 )
      v78 = *(struct tagRECT *)anonymous_namespace_::xxxNormalizeRect((__int64)&v82, this, (__int64)&v78, v21, v16, v18);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v49 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v49 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v50 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v50 = 0;
    }
    if ( v49 || v50 )
    {
      v51 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
      LODWORD(v69) = v78.bottom - v78.top;
      LODWORD(v68) = v78.right - v78.left;
      LODWORD(v67) = v78.bottom;
      LODWORD(v66) = v78.right;
      LODWORD(v65) = v78.top;
      LODWORD(v64) = v78.left;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v49,
        v50,
        *(_QWORD *)(v51 + 69416),
        5u,
        4u,
        0x27u,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
    }
    if ( v7 )
      *v7 = v78;
    else
      xxxSetWindowPos(
        this,
        0LL,
        (unsigned int)v78.left,
        (unsigned int)v78.top,
        v78.right - v78.left,
        v78.bottom - v78.top,
        v74);
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v52 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v52 = 0;
  }
  LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  v71 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v52 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WindowState = AdvancedWindowPos::GetWindowState(this);
    v54 = AdvancedWindowPos::GetStateString(WindowState);
    v57 = W32GetUserSessionState(v56, v55);
    v58 = "Migration rect";
    if ( !v75 )
      v58 = "Final window state";
    LOBYTE(v14) = (unsigned __int8)WPP_RECORDER_AND_TRACE_SF_ssdddddd(
                                     *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                                     v52,
                                     v71,
                                     *(_QWORD *)(v57 + 69416),
                                     v60,
                                     v61,
                                     v62,
                                     v63,
                                     v58,
                                     v54);
  }
  if ( v70 )
  {
    v48 = 1LL;
LABEL_90:
    LOBYTE(v14) = NotifyShell::ArrangementCompleted(this, a6, v48);
  }
  return (char)v14;
}
