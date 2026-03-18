/*
 * XREFs of GetNewMonitor @ 0x14008D07C
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x140034540 (NtUserUpdateLayeredWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x14008B5E8 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxInheritWindowMonitor @ 0x14008C114 (xxxInheritWindowMonitor.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14022B0AC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140032E18 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetInheritedMonitor @ 0x140048BE0 (GetInheritedMonitor.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400F74E0 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?HasMaximizedState@@YA_NPEBUtagWND@@@Z @ 0x14014EAA8 (-HasMaximizedState@@YA_NPEBUtagWND@@@Z.c)
 *     TransformRectAroundPoint @ 0x1401ECD0C (TransformRectAroundPoint.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1401F2474 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GetNewMonitor(struct tagWND *a1, INT *a2, struct tagRECT *a3)
{
  __int64 InheritedMonitor; // rbx
  struct tagRECT si128; // xmm7
  __int64 v8; // r14
  bool v9; // r12
  struct tagRECT v10; // xmm6
  __int64 v11; // rcx
  _DWORD *v12; // r9
  bool v13; // dl
  unsigned __int64 v14; // r8
  struct tagMONITOR *v15; // rax
  struct tagMONITOR *v16; // rax
  __int64 v17; // r9
  struct tagRECT v19; // [rsp+30h] [rbp-50h] BYREF
  struct tagRECT v20; // [rsp+40h] [rbp-40h] BYREF

  InheritedMonitor = 0LL;
  si128 = 0LL;
  v8 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  v19 = 0LL;
  v9 = HasMaximizedState(a1);
  v10 = *(struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  v20 = v10;
  if ( a2 )
  {
    v10 = *(struct tagRECT *)a2;
    v20 = *(struct tagRECT *)a2;
  }
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
  {
    v11 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 712LL);
    if ( (*((_DWORD *)a1 + 96) & 0x10) == 0 && v11 && *(struct tagWND **)(v11 + 16) == a1 )
    {
      v12 = (_DWORD *)(v11 + 200);
      v13 = (*(_DWORD *)(v11 + 200) & 0x800000) != 0;
      if ( a2 )
      {
        v14 = *(_QWORD *)(v11 + 24) - *(_QWORD *)&v10.left;
        if ( !v14 )
          v14 = *(_QWORD *)(v11 + 32) - _mm_srli_si128((__m128i)v10, 8).m128i_u64[0];
        if ( v14 )
        {
          *v12 |= 0x200000u;
        }
        else
        {
          InheritedMonitor = *(_QWORD *)(v11 + 216);
          v13 = (*v12 & 8) != 0;
        }
      }
      if ( v13 )
      {
        si128 = *(struct tagRECT *)(v11 + 24);
        v19 = si128;
        if ( a2 )
          *(struct tagRECT *)a2 = si128;
      }
    }
  }
  if ( a3 )
    *a3 = v10;
  if ( !InheritedMonitor )
  {
    InheritedMonitor = GetInheritedMonitor(a1);
    if ( !InheritedMonitor )
    {
      v15 = a2
          ? (struct tagMONITOR *)MonitorFromRect(a2, 0, *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL))
          : _MonitorFromWindowInternal(a1, 0, 1);
      InheritedMonitor = (__int64)v15;
      if ( !v15 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
        {
          v16 = (struct tagMONITOR *)MonitorFromRect(&v20.left, 2u, 0);
          v10 = v20;
        }
        else
        {
          v16 = _MonitorFromWindowInternal(a1, 2u, 1);
        }
        InheritedMonitor = (__int64)v16;
      }
    }
  }
  if ( a3
    && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2
    && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 688LL) & 0x2000000) == 0
    && v8
    && v8 != InheritedMonitor
    && IsTopLevelWindow((__int64)a1) )
  {
    if ( IsRectEmptyInl(&v19) )
    {
      if ( !v9 )
      {
        TransformRectAroundPoint(
          (unsigned int)&v20,
          *(unsigned __int16 *)(*(_QWORD *)(v8 + 40) + 60LL),
          (_DWORD)a2,
          (unsigned int)&v19,
          *(_WORD *)(*(_QWORD *)(InheritedMonitor + 40) + 60LL),
          *(_QWORD *)(v17 + 88));
        si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&v19);
      }
      if ( !IsRectEmptyInl(&v19)
        && !(unsigned int)IsNewMonitorRectMostOccupied(
                            &v19,
                            (const struct tagRECT *)(*(_QWORD *)(InheritedMonitor + 40) + 28LL),
                            (const struct tagRECT *)(*(_QWORD *)(v8 + 40) + 28LL)) )
      {
        InheritedMonitor = v8;
        v19 = v10;
        si128 = v10;
      }
    }
    if ( !IsRectEmptyInl(&v19) )
      *a3 = si128;
  }
  return InheritedMonitor;
}
