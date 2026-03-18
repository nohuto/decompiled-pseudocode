/*
 * XREFs of _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C005CB44
 * Callers:
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@W4MigrateWindowOptions@@PEAK@Z @ 0x1C005C088 (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C002F37C (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C005C7C8 (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x1C005DEC0 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x1C005DEF8 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x1C005DF34 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x1C0060344 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00B04A0 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x1C01A5C10 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C01F28A0 (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C021C580 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEAUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x1C021DA48 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     _anonymous_namespace_::GetArrangedOptions @ 0x1C023AE08 (_anonymous_namespace_--GetArrangedOptions.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023B1B4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     _anonymous_namespace_::xxxAwpMinMaximizeEx @ 0x1C023BFBC (_anonymous_namespace_--xxxAwpMinMaximizeEx.c)
 */

__int64 __fastcall anonymous_namespace_::xxxMigrateWindowPosition(
        struct tagWND *a1,
        __int64 a2,
        CMonitorTopology *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rax
  struct tagRECT v9; // xmm0
  char v10; // si
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // r9d
  CMonitorTopology::MonitorData *v15; // r14
  int v16; // esi
  int v17; // r15d
  char v18; // bl
  struct tagWND *v19; // rax
  char v20; // si
  PDEVICE_OBJECT v21; // rsi
  bool v22; // r14
  bool v23; // r15
  unsigned int WindowState; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _DWORD *v29; // rcx
  int v30; // edx
  int v31; // r11d
  int v32; // r8d
  unsigned __int64 v33; // r8
  __int16 v34; // ax
  char v35; // al
  LONG right; // r8d
  const char *StateString; // rax
  __int64 v38; // r10
  char v39; // dl
  char v40; // r8
  struct tagRECT *Prop; // rax
  int v42; // edx
  char v43; // si
  unsigned __int64 v44; // r8
  CMonitorTopology::MonitorData *v45; // rax
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v46; // r8
  struct tagRECT v47; // xmm0
  __int64 v48; // r8
  int v49; // r8d
  int v50; // [rsp+20h] [rbp-E0h]
  char v51; // [rsp+80h] [rbp-80h]
  unsigned int v52; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v53; // [rsp+88h] [rbp-78h]
  struct tagRECT v54; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v55; // [rsp+A0h] [rbp-60h] BYREF
  struct tagRECT v56; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v58[24]; // [rsp+C8h] [rbp-38h]
  __int128 v59; // [rsp+E0h] [rbp-20h]
  struct tagRECT v60; // [rsp+F0h] [rbp-10h] BYREF

  v5 = *((_QWORD *)a1 + 5);
  v53 = a2;
  v9 = *(struct tagRECT *)(v5 + 88);
  v55 = v9;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v10 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a2) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a2) = 0;
  }
  if ( v10 || (_BYTE)a2 )
  {
    v33 = HIDWORD(*(_QWORD *)&v55.left);
    LOBYTE(v33) = a2;
    LOBYTE(a2) = v10;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      v33,
      (_DWORD)gFullLog,
      5,
      4,
      40,
      (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
      v55.left,
      v55.top,
      v55.right,
      v55.bottom,
      LOBYTE(v55.right) - LOBYTE(v55.left),
      LOBYTE(v55.bottom) - LOBYTE(v55.top));
    v9 = v55;
  }
  v56 = v9;
  result = (__int64)CMonitorTopology::MonitorDataFromRect(a3, a1, &v56);
  v14 = 0;
  v15 = (CMonitorTopology::MonitorData *)result;
  if ( result )
  {
    LOBYTE(v16) = 1;
    v51 = 0;
    v17 = 524308;
    v18 = 0;
    if ( (dword_1C03591FC & 1) != 0 && IsSemiMaximized(a1) )
    {
      v52 = v14;
      v51 = 1;
      v56 = 0LL;
      CMonitorTopology::MonitorData::LogicalWorkArea(v15, &v60, a1);
      v34 = *((_WORD *)v15 + 20);
      v54 = v55;
      LOWORD(v50) = v34;
      v35 = CallShell::xxxMigrateWindowHandler(
              a1,
              ((a4 >> 1) & 1) == 0,
              (char *)v15 + 24,
              &v60,
              v50,
              &v54,
              v53,
              &v56,
              &v52,
              &a5);
      v14 = 0;
      if ( v35 )
      {
        if ( v52 != 3 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
            || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v12) = 0;
          }
          if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            StateString = (const char *)AdvancedWindowPos::GetStateString(v52, v12, v13, 0LL);
            WPP_RECORDER_AND_TRACE_SF_s(
              *(_QWORD *)(v38 + 24),
              v39,
              v40,
              (__int64)gFullLog,
              4u,
              4u,
              0x2Au,
              (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
              StateString);
          }
          Prop = (struct tagRECT *)GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.AlignmentRequirement + 2), 1LL);
          if ( Prop )
          {
            v55 = *Prop;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
              || (v43 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
            {
              v43 = 0;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              || (LOBYTE(v42) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
            {
              LOBYTE(v42) = 0;
            }
            if ( v43 || (_BYTE)v42 )
            {
              v44 = HIDWORD(*(_QWORD *)&v55.left);
              LOBYTE(v44) = v42;
              LOBYTE(v42) = v43;
              WPP_RECORDER_AND_TRACE_SF_dddddd(
                WPP_GLOBAL_Control->AttachedDevice,
                v42,
                v44,
                (_DWORD)gFullLog,
                5,
                4,
                43,
                (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
                v55.left,
                v55.top,
                v55.right,
                v55.bottom,
                LOBYTE(v55.right) - LOBYTE(v55.left),
                LOBYTE(v55.bottom) - LOBYTE(v55.top));
            }
          }
          v54 = v55;
          v45 = CMonitorTopology::MonitorDataFromRect(a3, a1, &v54);
          if ( v45 )
          {
            v47 = *(struct tagRECT *)anonymous_namespace_::xxxNormalizeRect(
                                       (struct tagWND *)&v54,
                                       a1,
                                       &v55.left,
                                       v53,
                                       v45,
                                       1);
            v55 = v47;
          }
          else
          {
            v47 = v55;
          }
          *(_DWORD *)v58 = v52;
          LODWORD(v59) = a5;
          v57 = 0LL;
          *(_DWORD *)&v58[4] = 95;
          *(struct tagRECT *)&v58[8] = v47;
          AdvancedWindowPos::xxxApplyWindowPos(a1, (struct tagWND *)&v57, v46);
          v48 = 2LL;
          return NotifyShell::ArrangementCompleted(a1, a5, v48);
        }
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
          || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v12) = 0;
        }
        if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          right = v56.right;
          LOBYTE(right) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            WPP_GLOBAL_Control->AttachedDevice,
            v12,
            right,
            (_DWORD)gFullLog,
            4,
            4,
            41,
            (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
            v56.left,
            v56.top,
            v56.right,
            v56.bottom,
            LOBYTE(v56.right) - LOBYTE(v56.left),
            LOBYTE(v56.bottom) - LOBYTE(v56.top));
          v14 = 0;
        }
        v17 = 13107220;
        v55 = v56;
        v18 = 1;
      }
      else
      {
        v16 = anonymous_namespace_::GetArrangedOptions((struct tagWND *)&v55, a1, v15) | 1;
        v14 = 0;
      }
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v12) = v14;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v13) = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v14) )
      {
        LOBYTE(v13) = v14;
      }
      if ( (_BYTE)v12 || (_BYTE)v13 )
      {
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v13,
          (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          5,
          4,
          44,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
        v14 = 0;
      }
      *(_DWORD *)&v58[16] = v14;
      v58[20] = v14;
      v57 = v53;
      *(_OWORD *)v58 = 0LL;
      v59 = 0LL;
      anonymous_namespace_::xxxAwpMinMaximizeEx(a1, 3LL, 86LL, &v57);
    }
    else
    {
      if ( !v18 )
      {
        v19 = anonymous_namespace_::xxxNormalizeRect((struct tagWND *)&v60, a1, &v55.left, v53, v15, v16);
        LOWORD(v14) = 0;
        v55 = *(struct tagRECT *)v19;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        v20 = v14;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v12) = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v14) )
      {
        LOBYTE(v12) = v14;
      }
      if ( v20 || (_BYTE)v12 )
      {
        v49 = v55.bottom - v55.top;
        LOBYTE(v49) = v12;
        LOBYTE(v12) = v20;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v49,
          (_DWORD)gFullLog,
          5,
          4,
          45,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          v55.left,
          v55.top,
          v55.right,
          v55.bottom,
          LOBYTE(v55.right) - LOBYTE(v55.left),
          LOBYTE(v55.bottom) - LOBYTE(v55.top));
      }
      xxxSetWindowPos(
        a1,
        0LL,
        (unsigned int)v55.left,
        (unsigned int)v55.top,
        v55.right - v55.left,
        v55.bottom - v55.top,
        v17);
    }
    v21 = WPP_GLOBAL_Control;
    result = (__int64)&WPP_GLOBAL_Control;
    v22 = 0;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      result = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( (result & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        v22 = 1;
    }
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WindowState = AdvancedWindowPos::GetWindowState(a1);
      v28 = AdvancedWindowPos::GetStateString(WindowState, v25, v26, v27);
      v29 = (_DWORD *)*((_QWORD *)a1 + 5);
      v30 = 46;
      v31 = v29[22];
      v32 = v29[24] - v31;
      LOBYTE(v32) = v23;
      LOBYTE(v30) = v22;
      result = WPP_RECORDER_AND_TRACE_SF_sdddddd(
                 v21->AttachedDevice,
                 v30,
                 v32,
                 (_DWORD)gFullLog,
                 4,
                 4,
                 46,
                 (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
                 v28,
                 v31,
                 v29[23],
                 v29[24],
                 v29[25],
                 *((_BYTE *)v29 + 96) - (unsigned __int8)v31,
                 (unsigned __int8)v29[25] - (unsigned __int8)v29[23]);
    }
    if ( !v51 )
      return result;
    v48 = 1LL;
    return NotifyShell::ArrangementCompleted(a1, a5, v48);
  }
  return result;
}
