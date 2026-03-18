/*
 * XREFs of ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x140264910
 * Callers:
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14006DDEC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1400987D8 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     GetDpiMetricsForCurrentThread @ 0x1402F1688 (GetDpiMetricsForCurrentThread.c)
 */

__int64 __fastcall MNCheckScroll(__int64 **a1, __int64 **a2, __int64 a3)
{
  __int64 *v4; // rdx
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 DpiMetricsForCurrentThread; // rax
  int v10; // r8d
  unsigned int v11; // ebx
  __int64 i; // rdx
  __int64 v13; // rax
  unsigned int v14; // r9d
  __int64 v15; // rdx
  __int64 j; // r8
  int v17; // r8d
  __int64 v18; // rcx
  bool v19; // zf
  int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rbx
  struct tagRECT v24; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v25[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = *a1;
  v24 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v25, *v4);
  MNGetPopupBoundsRect((__int64)v25, a3, &v24, 0);
  v7 = v24.bottom - v24.top;
  if ( *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 52LL) && *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 52LL) < v7 )
    v7 = *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 52LL);
  if ( *(_QWORD *)(**a2 + 88)
    && *(_DWORD *)(**(_QWORD **)(**a2 + 88) + 72LL) == *(_DWORD *)(**a2 + 64)
    && (v8 = **a2, *(_DWORD *)(v8 + 68) + 6 > v7) )
  {
    DpiMetricsForCurrentThread = GetDpiMetricsForCurrentThread(v8, v6);
    v10 = 0;
    v11 = -6 - 2 * *(_DWORD *)(DpiMetricsForCurrentThread + 36) + v7;
    for ( i = *(_QWORD *)(**a2 + 88); v10 < *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL); i += 96LL )
    {
      if ( *(_DWORD *)(*(_QWORD *)i + 68LL) > v11 )
        break;
      ++v10;
    }
    v13 = i - 96;
    if ( !v10 )
      v13 = i;
    v14 = 0;
    *(_DWORD *)(**a2 + 68) = *(_DWORD *)(*(_QWORD *)v13 + 68LL);
    v15 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) - 1);
    for ( j = *(_QWORD *)(**a2 + 88) + 96LL * (int)v15; (int)v15 >= 0; v15 = (unsigned int)(v15 - 1) )
    {
      v14 += *(_DWORD *)(*(_QWORD *)j + 76LL);
      if ( v14 > *(_DWORD *)(**a2 + 68) )
        break;
      j -= 96LL;
    }
    v17 = v15 + 1;
    if ( (_DWORD)v15 == *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) - 1 )
      v17 = v15;
    *(_DWORD *)(**a2 + 120) = v17;
    if ( *(_DWORD *)(**a2 + 116) > v17 )
      *(_DWORD *)(**a2 + 116) = v17;
    v18 = **a2;
    if ( *(_DWORD *)(v18 + 116) == v17 )
    {
      *(_DWORD *)(v18 + 124) |= 3u;
    }
    else
    {
      v19 = *(_DWORD *)(v18 + 116) == 0;
      v18 = **a2;
      v20 = *(_DWORD *)(v18 + 124);
      if ( v19 )
        v21 = v20 & 0xFFFFFFFC | 2;
      else
        v21 = v20 & 0xFFFFFFFC | 1;
      *(_DWORD *)(v18 + 124) = v21;
    }
    v22 = **a2;
    return (unsigned int)(2 * *(_DWORD *)(GetDpiMetricsForCurrentThread(v18, v15) + 36) + *(_DWORD *)(v22 + 68));
  }
  else
  {
    *(_DWORD *)(**a2 + 124) &= 0xFFFFFFFC;
    *(_DWORD *)(**a2 + 116) = 0;
    *(_DWORD *)(**a2 + 120) = 0;
    return *(unsigned int *)(**a2 + 68);
  }
}
