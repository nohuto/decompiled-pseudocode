/*
 * XREFs of InitializeMonitorInfo @ 0x1400259E8
 * Callers:
 *     UpdateWindowSpriteMonitor @ 0x140025828 (UpdateWindowSpriteMonitor.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401EDE40 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x140026844 (GetMonitorRectForDpi.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14004544C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     GetAppCompatFlags2QuadWord @ 0x140046CB0 (GetAppCompatFlags2QuadWord.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     ?_IsModernAppTopLevelWindow@@YAHQEAUtagWND@@@Z @ 0x1402AB08C (-_IsModernAppTopLevelWindow@@YAHQEAUtagWND@@@Z.c)
 */

__int64 __fastcall InitializeMonitorInfo(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  int v8; // r15d
  INT ScaledLogPixels; // ebp
  double v10; // xmm1_8
  int v11; // ecx
  __int64 result; // rax
  INT v13; // eax
  INT v14; // ecx
  __int64 UserSessionState; // rax
  double v16; // xmm1_8
  int v17; // ecx
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  v8 = *(unsigned __int16 *)(a3[5] + 60LL);
  LOWORD(ScaledLogPixels) = (a2 >> 8) & 0x1FF;
  *(_DWORD *)(a1 + 8) = v8;
  *(_DWORD *)(a1 + 12) = v8;
  GetMonitorRectForDpi(v18, a3, (unsigned __int16)ScaledLogPixels);
  *(_QWORD *)(a1 + 16) = v18[0];
  GetMonitorRectForDpi(v18, a3, 0LL);
  *(_DWORD *)(a1 + 36) &= 0xFFFFFFFA;
  *(_QWORD *)(a1 + 24) = v18[0];
  if ( v8 != 96
    && PtiCurrent()
    && *((_QWORD *)PtiCurrent() + 62)
    && (*(_BYTE *)(**(_QWORD **)(*((_QWORD *)PtiCurrent() + 62) + 8LL) + 64LL) & 1) != 0
    && (a2 & 0x4000000F) == 0x40000000 )
  {
    ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels((unsigned __int16)v8);
    v13 = EngMulDiv(*(_DWORD *)(a1 + 16), ScaledLogPixels, 96);
    v14 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 16) = v13;
    *(_DWORD *)(a1 + 20) = EngMulDiv(v14, ScaledLogPixels, 96);
  }
  *(_DWORD *)(a1 + 32) = (unsigned __int16)ScaledLogPixels;
  if ( (_WORD)ScaledLogPixels )
  {
    UserSessionState = W32GetUserSessionState();
    if ( (unsigned int)DrvIsUniformSpaceMapping(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 16LL))
      && a4
      && (unsigned int)IsTopLevelWindow(a4) )
    {
      v17 = *(unsigned __int16 *)(a3[5] + 64LL);
      *(_DWORD *)(a1 + 36) |= 1u;
      *(_DWORD *)(a1 + 12) = v17;
      v16 = (double)*(unsigned __int16 *)(a3[5] + 64LL);
    }
    else
    {
      v16 = (double)v8;
    }
    v10 = v16 / (double)(unsigned __int16)ScaledLogPixels;
  }
  else
  {
    if ( a4 && (*(_DWORD *)(a4 + 380) & 0x80000) == 0 )
      *(_DWORD *)(a1 + 12) = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a4 + 16) + 464LL) + 272LL);
    v10 = DOUBLE_1_0;
  }
  *(double *)a1 = v10;
  if ( a4 && IsChildWindowDpiBoundary((const struct tagWND *)a4) )
    *(_DWORD *)(a1 + 36) |= 4u;
  *(_QWORD *)(a1 + 48) = *a3;
  if ( a4
    && (GetAppCompatFlags2QuadWord(*(_QWORD *)(a4 + 16)) & 0x8400000000000000uLL) == 0x8000000000000000uLL
    && ((unsigned int)IsTopLevelWindow(a4) || (unsigned int)_IsModernAppTopLevelWindow((struct tagWND *const)a4)) )
  {
    v11 = 8;
  }
  else
  {
    v11 = 0;
  }
  *(_DWORD *)(a1 + 36) = v11 | *(_DWORD *)(a1 + 36) & 0xFFFFFFF7;
  result = DrvGetWDDMAdapterInfo(a3[10], 0LL, a1 + 56, a1 + 64);
  if ( !(_DWORD)result )
  {
    result = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_DWORD *)(a1 + 64) = -1;
  }
  return result;
}
