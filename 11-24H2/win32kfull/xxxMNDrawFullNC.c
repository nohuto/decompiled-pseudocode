/*
 * XREFs of xxxMNDrawFullNC @ 0x1402E951C
 * Callers:
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxMNSetTop @ 0x1402BE960 (xxxMNSetTop.c)
 * Callees:
 *     DrawEdge @ 0x140037D18 (DrawEdge.c)
 *     GreSetBrushOrg @ 0x1400384E8 (GreSetBrushOrg.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x14006B178 (MNGetpItemFromIndex.c)
 *     MNIsFlatMenu @ 0x14006B254 (MNIsFlatMenu.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400726AC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     GrePatBlt @ 0x1400C4060 (GrePatBlt.c)
 *     xxxSendUAHMenuMessage @ 0x1401D8418 (xxxSendUAHMenuMessage.c)
 *     DrawFrame @ 0x1401EA350 (DrawFrame.c)
 *     GreGetBrushOrg @ 0x1402024B8 (GreGetBrushOrg.c)
 *     MNDrawEdge @ 0x14020BC9C (MNDrawEdge.c)
 *     MNDrawArrow @ 0x1402E9214 (MNDrawArrow.c)
 *     GetDpiMetricsForWindow @ 0x1402F1798 (GetDpiMetricsForWindow.c)
 */

__int64 __fastcall xxxMNDrawFullNC(__int64 a1, HDC a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // ebx
  HDC DCEx; // rsi
  __int64 v9; // rdx
  _DWORD *v10; // rdx
  __int32 v11; // r12d
  unsigned int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // ebx
  __int64 DpiMetricsForWindow; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  __m128i v23; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v25; // [rsp+90h] [rbp+40h] BYREF
  __int64 v26; // [rsp+98h] [rbp+48h]

  result = *(_QWORD *)a3;
  v4 = 0;
  v25 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)result + 40LL) )
  {
    if ( a2 )
      DCEx = a2;
    else
      DCEx = (HDC)_GetDCEx(a1, 0LL, 66561LL);
    result = MNIsUAHMenu(*(struct tagMENU **)(**(_QWORD **)a3 + 40LL), (__int64)a2);
    if ( (_DWORD)result )
    {
      result = *(_QWORD *)a3;
      if ( *(_QWORD *)(**(_QWORD **)a3 + 16LL) )
      {
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(
          BugCheckParameter3,
          *(_QWORD *)(**(_QWORD **)a3 + 16LL));
        v4 = xxxSendUAHMenuMessage(*(struct tagWND **)(**(_QWORD **)a3 + 16LL), 0x95u);
        result = Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v9);
      }
    }
    if ( *(_QWORD *)(**(_QWORD **)a3 + 40LL) )
    {
      if ( v4 )
      {
        MNDrawArrow(DCEx, a3, -3);
        result = MNDrawArrow(DCEx, a3, -4);
      }
      else
      {
        v10 = *(_DWORD **)(a1 + 40);
        v23.m128i_i64[0] = 0LL;
        v23.m128i_i32[2] = v10[24] - v10[22];
        v23.m128i_i32[3] = v10[25] - v10[23];
        if ( MNIsFlatMenu(v23.m128i_u32[3], (__int64)v10) )
        {
          MNDrawEdge(*(_QWORD *)(**(_QWORD **)a3 + 40LL), a2, &v23, 0x2000);
          v11 = v23.m128i_i32[3];
        }
        else
        {
          DrawEdge(DCEx, &v23, 5u, 8207);
          DrawFrame(DCEx, v23.m128i_i32, 1, 120);
          ++v23.m128i_i32[0];
          --v23.m128i_i32[2];
          ++v23.m128i_i32[1];
          v11 = v23.m128i_i32[3] - 1;
        }
        v12 = v11 - *(_DWORD *)(GetDpiMetricsForWindow(a1) + 36);
        GreGetBrushOrg(DCEx, &v25);
        v14 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a3 + 40LL) + 40LL);
        if ( *(_QWORD *)(v14 + 24) )
        {
          v15 = MNGetpItemFromIndex(
                  *(_QWORD *)(**(_QWORD **)a3 + 40LL),
                  *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a3 + 40LL) + 116LL));
          GreSetBrushOrg(DCEx, 0, -*(_DWORD *)(*(_QWORD *)v15 + 68LL), 0LL);
          v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a3 + 40LL) + 40LL) + 24LL);
        }
        else
        {
          v17 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v13) + 19928) + 4728LL);
        }
        v18 = GreSelectBrush(DCEx, v17, v16);
        v19 = v23.m128i_i32[2] - v23.m128i_i32[0];
        v26 = v18;
        DpiMetricsForWindow = GetDpiMetricsForWindow(a1);
        GrePatBlt(DCEx, v23.m128i_i32[0], v23.m128i_u32[1], v19, *(_DWORD *)(DpiMetricsForWindow + 36), 15728673);
        MNDrawArrow(DCEx, a3, -3);
        v21 = GetDpiMetricsForWindow(a1);
        GrePatBlt(DCEx, v23.m128i_i32[0], v12, v19, *(_DWORD *)(v21 + 36), 15728673);
        MNDrawArrow(DCEx, a3, -4);
        GreSetBrushOrg(DCEx, v25, SHIDWORD(v25), 0LL);
        result = GreSelectBrush(DCEx, v26, v22);
      }
      if ( !a2 )
        return _ReleaseDC(DCEx);
    }
    else if ( !a2 && DCEx )
    {
      return _ReleaseDC(DCEx);
    }
  }
  return result;
}
