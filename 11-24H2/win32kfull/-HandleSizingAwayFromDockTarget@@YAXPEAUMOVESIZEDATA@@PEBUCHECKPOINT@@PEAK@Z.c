/*
 * XREFs of ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z @ 0x1402A5850
 * Callers:
 *     ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x14020B8C8 (-SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x140025C9C (GetMonitorWorkRectForWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014C21C (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ @ 0x140220E20 (-SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ.c)
 *     ?GetFrameBoundsOverlapInfo@@YA?AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z @ 0x1402245CC (-GetFrameBoundsOverlapInfo@@YA-AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x14026C4B0 (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SetDragInThresholdAlways@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A681C (-SetDragInThresholdAlways@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?SetDragOutToDragInThreshold@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A68A0 (-SetDragOutToDragInThreshold@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z @ 0x1402A6960 (-UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z.c)
 *     Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline @ 0x1402AA9F8 (Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall HandleSizingAwayFromDockTarget(struct MOVESIZEDATA *a1, const struct CHECKPOINT *a2, unsigned int *a3)
{
  __int128 *MonitorWorkRectForWindow; // rax
  struct tagRECT *v7; // rdx
  __int128 v8; // xmm0
  __int64 v9; // rax
  struct tagRECT *v10; // rax
  unsigned int v11; // r14d
  bool v12; // r8
  int v13; // ecx
  __int64 v14; // rdx
  char v15; // di
  __int128 v16; // xmm0
  bool v17; // di
  bool v18; // si
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  bool v22; // si
  bool v23; // r15
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v28; // r9
  int v29; // eax
  int v30; // eax
  const struct tagWND *v31; // rdx
  struct tagRECT v32; // [rsp+40h] [rbp-29h] BYREF
  _OWORD v33[3]; // [rsp+50h] [rbp-19h] BYREF

  MonitorWorkRectForWindow = (__int128 *)GetMonitorWorkRectForWindow(
                                           (__int64)&v32,
                                           *((_QWORD *)a1 + 28),
                                           *((const struct tagWND **)a1 + 2));
  v7 = (struct tagRECT *)*((_QWORD *)a1 + 2);
  v8 = *MonitorWorkRectForWindow;
  v9 = *((_QWORD *)a1 + 28);
  v33[0] = v8;
  v10 = WindowMargins::ReduceRect(
          (WindowMargins *)&v32,
          v7,
          (struct MOVESIZEDATA *)((char *)a1 + 40),
          (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 60LL));
  v33[1] = _mm_load_si128((const __m128i *)&_xmm);
  v32 = *v10;
  v33[2] = _mm_load_si128((const __m128i *)&_xmm);
  v11 = ~*((_DWORD *)v33 + *((int *)a1 + 44) + 3) & GetFrameBoundsOverlapInfo(v33, &v32, 0);
  v12 = v11 && v11 != 15 && ((v11 - 1) & v11) != 0;
  v13 = *((_DWORD *)a1 + 50);
  v14 = v13 & 0x80000;
  if ( (v13 & 0x80000) != 0 || (v13 & 0x30000000) != 0x30000000 )
  {
    v15 = 0;
    if ( (_DWORD)v14 )
    {
      v16 = *(_OWORD *)((char *)a1 + 40);
      *((_DWORD *)a1 + 50) = v13 & 0xFFF7FFFF;
      *(_OWORD *)((char *)a1 + 72) = v16;
      if ( a3 )
        *a3 |= 1u;
    }
  }
  else
  {
    v15 = 1;
  }
  if ( v12 )
  {
    v17 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v17;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v21,
        v20,
        *(_QWORD *)(UserSessionState + 69416),
        4,
        1,
        39,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
    }
    *((_DWORD *)a1 + 50) |= 0x10000000u;
    SetDragOutToDragInThreshold(a1);
  }
  else
  {
    v22 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
      LOBYTE(v25) = v23;
      LOBYTE(v26) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v26,
        v25,
        *(_QWORD *)(v24 + 69416),
        4,
        1,
        40,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
    }
    if ( v15 )
    {
      IsEnabledDeviceUsageNoInline = Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline();
      v32 = *(struct tagRECT *)((char *)a2 + 20);
      v28 = IsEnabledDeviceUsageNoInline ? v11 : 0LL;
      UpdateDragRectForSizingAway(a1, v33, &v32, v28);
      SetDragInThresholdAlways(a1);
      if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
        || (*(_DWORD *)(*((_QWORD *)a1 + 2) + 384LL) & 0x10) != 0 )
      {
        v29 = *((_DWORD *)a1 + 50);
        if ( (v29 & 0x20) != 0 )
          *((_DWORD *)a1 + 50) = v29 | 0x40000000;
      }
    }
    *((_DWORD *)a1 + 50) &= ~0x10000000u;
    MOVESIZEDATA::SHData_ResetRuntimeState(a1, v14);
    v30 = *((_DWORD *)a1 + 50);
    if ( (v30 & 0x20000) != 0 )
    {
      v30 &= 0xFFFDFEFF;
      *((_DWORD *)a1 + 50) = v30;
    }
    if ( (v30 & 0x40000) != 0 )
      *((_DWORD *)a1 + 50) = v30 & 0xFFFBFDFF;
  }
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
    MakeArrangedStateObservable(a1, v31);
  *((_DWORD *)a1 + 62) = 4;
}
