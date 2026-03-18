/*
 * XREFs of ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1C023D090
 * Callers:
 *     ?xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z @ 0x1C01EAE8C (-xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C005C7C8 (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x1C005DF34 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x1C005E8D8 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _MonitorFromRect @ 0x1C00AE960 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F04DC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C021BEF8 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 */

void __fastcall AdvancedWindowPos::xxxVerticalMaximize(struct tagRECT *retstr, struct tagWND *a2)
{
  __int64 v2; // rax
  __int64 v4; // r9
  __int64 v5; // r14
  char v6; // bl
  char v7; // bl
  CMonitorTopology *v8; // rsi
  CMonitorTopology::MonitorData *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  struct tagRECT v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // r9
  _BYTE v15[16]; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT v16; // [rsp+70h] [rbp-9h] BYREF
  _BYTE v17[16]; // [rsp+80h] [rbp+7h] BYREF
  struct tagRECT v18; // [rsp+90h] [rbp+17h] BYREF
  struct tagRECT v19; // [rsp+A0h] [rbp+27h] BYREF

  v2 = *(_QWORD *)&retstr[2].right;
  v19 = *(struct tagRECT *)(v2 + 88);
  v5 = MonitorFromRect((__int64)&v19, 0LL, *(unsigned int *)(v2 + 288));
  if ( v5 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v15);
    v7 = 1;
    _InterlockedAdd((volatile signed __int32 *)qword_1C035E320, 1u);
    v8 = qword_1C035E320;
    v16 = v19;
    v9 = CMonitorTopology::MonitorDataFromRect(qword_1C035E320, (const struct tagWND *)retstr, &v16);
    v19 = *(struct tagRECT *)anonymous_namespace_::xxxNormalizeRect(
                               (struct tagWND *)v17,
                               (struct tagWND *)retstr,
                               &v19.left,
                               v5,
                               v9,
                               20);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8, 0xFFFFFFFF) == 1 )
      Win32FreePool(v8);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v15, v10, v11);
    v12 = *WindowMargins::ReduceRect(&v18, retstr, (const struct tagWND *)&v19, 0LL);
    v13 = *(_QWORD *)&retstr[2].right;
    v19 = v12;
    LogicalToPhysicalDPIRect(&v19, &v19, *(unsigned int *)(v13 + 288), 0LL);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v7 = 0;
    }
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v7,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        v14,
        4u,
        4u,
        0x30u,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        v19.left,
        v19.top,
        v19.right,
        v19.bottom);
    WindowArrangement::xxxSetSnapArrangementPos((__int64)retstr, (__int64)&v19, 0, 0);
  }
  else
  {
    v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v6,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        v4,
        3u,
        4u,
        0x2Fu,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        v19.left,
        v19.top,
        v19.right,
        v19.bottom);
  }
}
