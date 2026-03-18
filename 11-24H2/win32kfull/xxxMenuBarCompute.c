/*
 * XREFs of xxxMenuBarCompute @ 0x140069184
 * Callers:
 *     xxxCalcMenuBar @ 0x1400338E4 (xxxCalcMenuBar.c)
 *     xxxCalcClientRect @ 0x1400712A8 (xxxCalcClientRect.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1401B1824 (xxxMNRecomputeBarIfNeeded.c)
 *     xxxPaintMenuBar @ 0x1401D8150 (xxxPaintMenuBar.c)
 *     xxxMenuBarDraw @ 0x1401FBF4C (xxxMenuBarDraw.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     xxxMNCompute @ 0x14006A318 (xxxMNCompute.c)
 *     ?MBC_RightJustifyMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1401CE8C8 (-MBC_RightJustifyMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     MNClearCachedPopupSizes @ 0x1401F815C (MNClearCachedPopupSizes.c)
 */

__int64 __fastcall xxxMenuBarCompute(__int64 **a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int16 WindowDpiLastNotify; // bx
  __int64 v13; // rax
  int v14; // ebp
  int v15; // ebx
  __int64 result; // rax
  __int64 *v17; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = 0;
  if ( a2 )
  {
    v9 = *(_QWORD *)(a2 + 40);
    v10 = *(_DWORD *)(v9 + 288) & 0xF;
    if ( (_DWORD)v10 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v9 + 288) >> 8) & 0x1FF;
      goto LABEL_10;
    }
    if ( (*(_DWORD *)(v9 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a2);
      goto LABEL_10;
    }
    if ( (_DWORD)v10
      || (v11 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 496LL)) == 0
      || (v10 = **(_QWORD **)(v11 + 8), (*(_DWORD *)(v10 + 64) & 1) == 0) )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 464LL);
      WindowDpiLastNotify = *(_WORD *)(v10 + 272);
      goto LABEL_10;
    }
LABEL_9:
    WindowDpiLastNotify = 96;
    goto LABEL_10;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
    goto LABEL_9;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
  if ( CurrentProcessWin32Process )
  {
    v10 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  WindowDpiLastNotify = *(_WORD *)(CurrentProcessWin32Process + 272);
LABEL_10:
  if ( (*(_DWORD *)(a2 + 380) & 0x80000) != 0 )
    goto LABEL_22;
  v13 = PsGetCurrentProcessWin32Process(v10);
  if ( v13 )
    v13 &= -(__int64)(*(_QWORD *)v13 != 0LL);
  if ( (*(_DWORD *)(v13 + 816) & 0x100000) != 0 )
  {
LABEL_22:
    if ( *(_WORD *)(**a1 + 76) != WindowDpiLastNotify )
    {
      v17 = a1[2];
      if ( !v17 )
        v17 = (__int64 *)**a1;
      MNClearCachedPopupSizes(v17);
      *(_WORD *)(**a1 + 76) = WindowDpiLastNotify;
    }
  }
  v14 = a5;
  v15 = xxxMNCompute((_DWORD)a1, a2, a2, a3, a4, a5, (__int64)&v19);
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 1) == 0 )
  {
    if ( v19 )
      v15 = xxxMNCompute((_DWORD)a1, a2, a2, a3, a4, v14, (__int64)&v19);
    MBC_RightJustifyMenu(a1);
  }
  result = (unsigned int)(v15 + 1);
  if ( !v15 )
    return 0LL;
  return result;
}
