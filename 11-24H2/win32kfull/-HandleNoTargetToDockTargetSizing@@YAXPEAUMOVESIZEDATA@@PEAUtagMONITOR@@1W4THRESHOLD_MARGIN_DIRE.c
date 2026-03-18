/*
 * XREFs of ?HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1402A5614
 * Callers:
 *     ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x14020B8C8 (-SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x14026C4B0 (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SetDragInToDragOutThreshold@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A6868 (-SetDragInToDragOutThreshold@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1402A6F48 (-VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTIO.c)
 */

void __fastcall HandleNoTargetToDockTargetSizing(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  int v5; // edi
  bool v9; // si
  bool v10; // r14
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r9
  int v14; // eax
  __int128 v15; // xmm6
  const struct tagWND *v16; // rdx
  __int16 v17; // [rsp+30h] [rbp-28h]

  v5 = 0;
  if ( a4 == 3 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 176) - 3) <= 2 )
    {
      v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_35;
      v13 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2) + 69416);
      v17 = 41;
      goto LABEL_21;
    }
  }
  else if ( !a4 && (unsigned int)(*(_DWORD *)(a1 + 176) - 6) <= 2 )
  {
    v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_35;
    v13 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2) + 69416);
    v17 = 42;
LABEL_21:
    LOBYTE(v12) = v10;
    LOBYTE(v11) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v11,
      v12,
      v13,
      4,
      1,
      v17,
      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
LABEL_35:
    *(_QWORD *)(a1 + 240) = a2;
    return;
  }
  v14 = *(_DWORD *)(a1 + 200);
  v15 = *(_OWORD *)(a1 + 40);
  if ( (v14 & 0x80000) == 0 )
  {
    v5 = 1;
    *(_DWORD *)(a1 + 200) = v14 | 0x80000;
  }
  if ( !(unsigned int)VerticalSizeRectFromHitTarget(a1, a2, a4) )
  {
    *(_DWORD *)(a1 + 200) &= ~0x80000u;
    *(_DWORD *)(a1 + 248) = a4;
    *(_OWORD *)(a1 + 40) = v15;
    goto LABEL_35;
  }
  if ( v5 && a5 )
    *a5 |= 2u;
  if ( !a4 || a4 == 3 )
  {
    *(_DWORD *)(a1 + 200) |= 0x10000000u;
    if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
      MakeArrangedStateObservable((const struct MOVESIZEDATA *)a1, v16);
    SetDragInToDragOutThreshold((struct MOVESIZEDATA *)a1);
    *(_DWORD *)(a1 + 248) = a4;
    if ( (*(_DWORD *)(a1 + 200) & 0x80000) == 0 )
      *(_QWORD *)(a1 + 216) = a2;
    goto LABEL_35;
  }
}
