/*
 * XREFs of ?UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z @ 0x1402A6960
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z @ 0x1402A5850 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x140072D0C (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014C21C (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?GetFrameBoundsOverlapInfo@@YA?AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z @ 0x1402245CC (-GetFrameBoundsOverlapInfo@@YA-AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z.c)
 *     Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline @ 0x1402AA9F8 (Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall UpdateDragRectForSizingAway(__int64 a1, _DWORD *a2, _DWORD *a3, char a4)
{
  __int64 v8; // rdx
  int v9; // edi
  int v10; // eax
  __int64 result; // rax
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // ecx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v17; // rax
  int DpiDependentMetric; // eax
  const struct tagWND *v19; // r10
  int v20; // ebx
  __int64 v21; // rdx
  int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // rax
  bool v25; // bp
  bool v26; // r14
  __int64 UserSessionState; // rax
  int v28; // edx
  int v29; // r8d
  char FrameBoundsOverlapInfo; // r11
  char v31; // r14
  char v32; // r15
  int v33; // edi
  int v34; // ebp
  int v35; // ebx
  int v36; // esi
  __int64 v37; // rax
  __int16 v38; // [rsp+30h] [rbp-68h]
  struct tagRECT v39; // [rsp+70h] [rbp-28h] BYREF

  if ( (unsigned int)Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline() )
  {
    v9 = a3[2] - *a3;
    v10 = *(_DWORD *)(a1 + 176);
    if ( v10 == 3 && (a4 & 8) != 0 || v10 == 6 && (a4 & 2) != 0 )
    {
      v8 = (unsigned int)((a2[3] - a2[1]) >> 31);
      result = (unsigned int)((a2[3] - a2[1]) / 2);
      v12 = result;
      if ( (int)result >= *(_DWORD *)(a1 + 108) )
      {
        v25 = 0;
        if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
        {
          result = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
          if ( (result & 1) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
            v25 = 1;
        }
        v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
          v38 = 36;
          goto LABEL_33;
        }
      }
      else
      {
        v13 = *(_QWORD *)(a1 + 16);
        v14 = *(_QWORD *)(v13 + 40);
        v15 = *(_DWORD *)(v14 + 288) & 0xF;
        if ( v15 == 3 )
        {
          WindowDpiLastNotify = (*(_DWORD *)(v14 + 288) >> 8) & 0x1FF;
        }
        else if ( _bittest((const signed __int32 *)(v14 + 232), 0xAu) )
        {
          WindowDpiLastNotify = GetWindowDpiLastNotify(*(_QWORD *)(a1 + 16));
        }
        else if ( !v15
               && (v17 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 496LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v17 + 8) + 64LL) & 1) != 0 )
        {
          WindowDpiLastNotify = 96;
        }
        else
        {
          WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 464LL) + 272LL);
        }
        DpiDependentMetric = GetDpiDependentMetric(22, WindowDpiLastNotify);
        v19 = *(const struct tagWND **)(a1 + 16);
        v20 = DpiDependentMetric;
        v21 = *((_QWORD *)v19 + 5);
        v22 = *(_DWORD *)(v21 + 288) & 0xF;
        if ( v22 == 3 )
        {
          v23 = (*(_DWORD *)(v21 + 288) >> 8) & 0x1FF;
        }
        else if ( _bittest((const signed __int32 *)(v21 + 232), 0xAu) )
        {
          v23 = GetWindowDpiLastNotify(*(_QWORD *)(a1 + 16));
        }
        else if ( !v22
               && (v24 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 496LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v24 + 8) + 64LL) & 1) != 0 )
        {
          v23 = 96;
        }
        else
        {
          v21 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 464LL);
          v23 = *(unsigned __int16 *)(v21 + 272);
        }
        result = GetWindowBordersWithDpiAwareness(v19, v21, 1, v23);
        v12 = *(_DWORD *)(a1 + 108) + result + v20;
        v25 = 0;
        if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
        {
          result = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
          if ( (result & 1) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
            v25 = 1;
        }
        v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
          v38 = 35;
LABEL_33:
          LOBYTE(v29) = v26;
          LOBYTE(v28) = v25;
          result = WPP_RECORDER_AND_TRACE_SF_(
                     *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                     v28,
                     v29,
                     *(_QWORD *)(UserSessionState + 69416),
                     4,
                     1,
                     v38,
                     (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
        }
      }
    }
    else
    {
      result = (unsigned int)a3[1];
      v12 = a3[3] - result;
      v25 = 0;
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
      {
        result = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
        if ( (result & 1) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
          v25 = 1;
      }
      v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
        v38 = 37;
        goto LABEL_33;
      }
    }
  }
  else
  {
    v39 = *WindowMargins::ReduceRect(
             (WindowMargins *)&v39,
             *(struct tagRECT **)(a1 + 16),
             (const struct tagWND *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL) + 88LL),
             (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 224) + 40LL) + 60LL));
    FrameBoundsOverlapInfo = GetFrameBoundsOverlapInfo(a2, &v39, 0);
    if ( (FrameBoundsOverlapInfo & 5) == 5 )
    {
      v8 = (unsigned int)((a2[2] - *a2) >> 31);
      v9 = (a2[2] - *a2) / 2;
    }
    else
    {
      v9 = a3[2] - *a3;
    }
    if ( (FrameBoundsOverlapInfo & 0xA) == 0xA )
    {
      v8 = (unsigned int)((a2[3] - a2[1]) >> 31);
      result = (unsigned int)((a2[3] - a2[1]) / 2);
      v12 = (a2[3] - a2[1]) / 2;
    }
    else
    {
      result = (unsigned int)a3[1];
      v12 = a3[3] - result;
    }
  }
  switch ( *(_DWORD *)(a1 + 176) )
  {
    case 1:
LABEL_67:
      *(_DWORD *)(a1 + 48) = v9 + *(_DWORD *)(a1 + 40);
      break;
    case 2:
LABEL_65:
      result = (unsigned int)(*(_DWORD *)(a1 + 48) - v9);
      *(_DWORD *)(a1 + 40) = result;
      break;
    case 3:
      *(_DWORD *)(a1 + 52) = v12 + *(_DWORD *)(a1 + 44);
      break;
    case 4:
      *(_DWORD *)(a1 + 52) = v12 + *(_DWORD *)(a1 + 44);
      goto LABEL_67;
    case 5:
      *(_DWORD *)(a1 + 52) = v12 + *(_DWORD *)(a1 + 44);
      goto LABEL_65;
    case 6:
      result = (unsigned int)(*(_DWORD *)(a1 + 52) - v12);
      *(_DWORD *)(a1 + 44) = result;
      break;
    case 7:
      result = (unsigned int)(*(_DWORD *)(a1 + 52) - v12);
      *(_DWORD *)(a1 + 44) = result;
      goto LABEL_67;
    case 8:
      *(_DWORD *)(a1 + 44) = *(_DWORD *)(a1 + 52) - v12;
      goto LABEL_65;
  }
  v31 = 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
  {
    result = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
    if ( (result & 1) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
      v31 = 1;
  }
  v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v31 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v33 = *(_DWORD *)(a1 + 52);
    v34 = *(_DWORD *)(a1 + 44);
    v35 = *(_DWORD *)(a1 + 48);
    v36 = *(_DWORD *)(a1 + 40);
    v37 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
    return (__int64)WPP_RECORDER_AND_TRACE_SF_dddddd(
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                      v31,
                      v32,
                      *(_QWORD *)(v37 + 69416),
                      4u,
                      1u,
                      0x26u,
                      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
                      v36,
                      v34,
                      v35,
                      v33,
                      v35 - v36,
                      v33 - v34);
  }
  return result;
}
