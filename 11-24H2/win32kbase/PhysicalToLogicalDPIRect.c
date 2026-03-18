/*
 * XREFs of PhysicalToLogicalDPIRect @ 0x1400453C0
 * Callers:
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1400464E8 (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     NtUserGetClipCursor @ 0x140046AE0 (NtUserGetClipCursor.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x140047880 (TransformRectBetweenCoordinateSpaces.c)
 *     TransformOffscreenAdjacentRect @ 0x140110088 (TransformOffscreenAdjacentRect.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140045170 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetMonitorRectForDpi @ 0x1400458A8 (GetMonitorRectForDpi.c)
 *     Is_MonitorFromRectSupported @ 0x140045BA0 (Is_MonitorFromRectSupported.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PhysicalToLogicalDPIRect(__int64 a1, _OWORD *a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(_OWORD *, __int64, __int64); // rax
  unsigned __int16 v11; // di
  unsigned int v12; // ebx
  unsigned __int64 v13; // r11
  __int128 v14; // xmm1
  int v15; // r8d
  int v16; // eax
  int v17; // ecx
  signed int v18; // r10d
  unsigned __int64 v19; // rax
  int v20; // ecx
  int v21; // ecx
  signed int v22; // r10d
  unsigned __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rsi
  int v26; // ecx
  signed int v27; // ebx
  unsigned __int64 v28; // rax
  int v29; // r10d
  int v30; // ecx
  int v31; // edx
  signed int v32; // r10d
  unsigned __int64 v33; // rax
  int v34; // [rsp+28h] [rbp-40h] BYREF
  int v35; // [rsp+2Ch] [rbp-3Ch]
  _DWORD v36[4]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v37; // [rsp+48h] [rbp-20h]

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 || (int)Is_MonitorFromRectSupported() < 0 )
  {
    result = 0LL;
    *(_OWORD *)a1 = *a2;
  }
  else
  {
    if ( a4 && (v9 = *a4) != 0
      || ((v10 = *(__int64 (__fastcall **)(_OWORD *, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48)
                                                                      + 3960LL)) == 0LL
        ? (v9 = 0LL)
        : (v9 = v10(a2, 2LL, 18LL)),
          a4) )
    {
      *a4 = v9;
    }
    v11 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    v12 = *(unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 60LL);
    GetMonitorRectForDpi(&v34, v9, 0LL);
    GetMonitorRectForDpi(v36, v9, v11);
    v13 = v12;
    v14 = *a2;
    v15 = 0x80000000;
    v16 = *a2 - v34;
    v17 = v34 - *a2;
    v18 = (v16 >> 31) & 0xFFFFFFFE;
    v37 = *a2;
    if ( v16 >= 0 )
      v17 = v16;
    if ( v12
      && (v19 = (__int64)(((unsigned __int64)v12 >> 1) + v17 * (unsigned __int64)v11) / (int)v12,
          v20 = v19,
          v19 <= 0x7FFFFFFF) )
    {
      if ( v18 <= -1 )
        v20 = -(int)v19;
    }
    else
    {
      v20 = 0x80000000;
      if ( v18 > -1 )
        v20 = 0x7FFFFFFF;
    }
    *(_DWORD *)a1 = v36[0] + v20;
    v21 = v35 - DWORD1(v14);
    v22 = ((DWORD1(v14) - v35) >> 31) & 0xFFFFFFFE;
    if ( DWORD1(v14) - v35 >= 0 )
      v21 = DWORD1(v14) - v35;
    if ( v12
      && (v23 = (__int64)(((unsigned __int64)v12 >> 1) + v21 * (unsigned __int64)v11) / (int)v12,
          v24 = v23,
          v23 <= 0x7FFFFFFF) )
    {
      if ( v22 <= -1 )
        v24 = -(int)v23;
    }
    else
    {
      v24 = 0x80000000;
      if ( v22 > -1 )
        v24 = 0x7FFFFFFF;
    }
    v25 = *((_QWORD *)&v37 + 1);
    *(_DWORD *)(a1 + 4) = v36[1] + v24;
    v26 = v14 - v25;
    v27 = (((int)v25 - (int)v14) >> 31) & 0xFFFFFFFE;
    if ( (int)v25 - (int)v14 >= 0 )
      v26 = v25 - v14;
    if ( (_DWORD)v13
      && (v28 = (__int64)((v13 >> 1) + v26 * (unsigned __int64)v11) / (int)v13, v29 = v28, v28 <= 0x7FFFFFFF) )
    {
      if ( v27 <= -1 )
        v29 = -(int)v28;
    }
    else
    {
      v29 = 0x80000000;
      if ( v27 > -1 )
        v29 = 0x7FFFFFFF;
    }
    v30 = DWORD1(v14) - HIDWORD(v25);
    v31 = v29 + *(_DWORD *)a1;
    v32 = ((HIDWORD(v25) - DWORD1(v14)) >> 31) & 0xFFFFFFFE;
    *(_DWORD *)(a1 + 8) = v31;
    if ( HIDWORD(v25) - DWORD1(v14) >= 0 )
      v30 = HIDWORD(v25) - DWORD1(v14);
    if ( (_DWORD)v13 && (v33 = (__int64)((v13 >> 1) + v30 * (unsigned __int64)v11) / (__int64)v13, v33 <= 0x7FFFFFFF) )
    {
      v15 = (__int64)((v13 >> 1) + v30 * (unsigned __int64)v11) / (__int64)v13;
      if ( v32 <= -1 )
        v15 = -(int)v33;
    }
    else if ( v32 > -1 )
    {
      v15 = 0x7FFFFFFF;
    }
    *(_DWORD *)(a1 + 12) = v15 + *(_DWORD *)(a1 + 4);
    return 1LL;
  }
  return result;
}
