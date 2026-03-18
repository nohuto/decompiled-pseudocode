/*
 * XREFs of xxxMenuDraw @ 0x14006938C
 * Callers:
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxPaintMenuBar @ 0x1401D8150 (xxxPaintMenuBar.c)
 *     xxxMenuBarDraw @ 0x1401FBF4C (xxxMenuBarDraw.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1402BD38C (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032E40 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GreSelectFont @ 0x1400377A0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1400379A0 (GreSetBkMode.c)
 *     DrawEdge @ 0x140037D18 (DrawEdge.c)
 *     GreSetTextAlign @ 0x140038C8C (GreSetTextAlign.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140046B4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x140068C50 (-IsInsideUserApiHook@@YAHXZ.c)
 *     xxxDrawMenuItem @ 0x140069860 (xxxDrawMenuItem.c)
 *     MNGetpItemFromIndex @ 0x14006B178 (MNGetpItemFromIndex.c)
 *     MNIspItemValid @ 0x14006B1A4 (MNIspItemValid.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x14006B644 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     xxxSendUAHInitMenuMessage @ 0x14006BAE0 (xxxSendUAHInitMenuMessage.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400726AC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendUAHMenuMessage @ 0x1401D8418 (xxxSendUAHMenuMessage.c)
 *     GreSetViewportOrg @ 0x1401DA5E8 (GreSetViewportOrg.c)
 *     GreGetTextAlign @ 0x1401F1C90 (GreGetTextAlign.c)
 *     ?CalcbfExtra@@YAIXZ @ 0x1402184E8 (-CalcbfExtra@@YAIXZ.c)
 *     GetDpiMetricsForWindow @ 0x1402F1798 (GetDpiMetricsForWindow.c)
 */

HFONT __fastcall xxxMenuDraw(HDC a1, struct tagMENU *a2, __int64 a3)
{
  char v3; // r14
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rdx
  int v9; // r13d
  int v10; // r15d
  __int64 v11; // rcx
  __int64 DpiMetricsForWindow; // rax
  int TextAlign; // eax
  _DWORD **v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagITEM *v22; // r14
  unsigned int v23; // r15d
  unsigned int v24; // r12d
  int v25; // r13d
  int v26; // eax
  int v27; // ecx
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // rcx
  struct tagTHREADINFO *v31; // rax
  HFONT result; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct tagTHREADINFO *v35; // rax
  bool v36; // r15
  int v37; // ecx
  int *v38; // r8
  int v39; // ecx
  struct _POINTL v40; // [rsp+30h] [rbp-49h] BYREF
  __m128i v41; // [rsp+38h] [rbp-41h] BYREF
  int v42; // [rsp+48h] [rbp-31h]
  int v43; // [rsp+4Ch] [rbp-2Dh]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-29h] BYREF
  __m128i v45; // [rsp+60h] [rbp-19h] BYREF
  struct tagTHREADINFO *v46; // [rsp+78h] [rbp-1h]
  HFONT v47; // [rsp+80h] [rbp+7h]
  _QWORD v48[9]; // [rsp+88h] [rbp+Fh] BYREF
  int v49; // [rsp+E8h] [rbp+6Fh]
  unsigned int v50; // [rsp+F8h] [rbp+7Fh]

  v3 = 0;
  v41 = 0LL;
  v7 = PtiCurrent((__int64)a1, (__int64)a2);
  v8 = *((_QWORD *)a2 + 5);
  v9 = 0;
  v46 = v7;
  v40 = 0LL;
  v49 = 0;
  v10 = *(_DWORD *)(v8 + 40) & 1;
  v42 = v10;
  if ( !IsInsideUserApiHook(v11, v8) || !a3 )
    a3 = *((_QWORD *)a2 + 10);
  GreGetDCPoint(a1, 4u, &v40);
  DpiMetricsForWindow = GetDpiMetricsForWindow(a3);
  v47 = GreSelectFont(a1, *(HFONT *)(DpiMetricsForWindow + 8));
  TextAlign = GreGetTextAlign(a1);
  v14 = (_DWORD **)*((_QWORD *)a2 + 11);
  v43 = TextAlign;
  if ( v14 && (**v14 & 0x2000) != 0 )
    GreSetTextAlign(a1, TextAlign | 0x100);
  v50 = CalcbfExtra();
  v17 = PtiCurrent(v16, v15);
  Win32HM_LockIntoThread<1>(v17, a3, BugCheckParameter3);
  v19 = *((_QWORD *)a2 + 5);
  if ( *(_QWORD *)(v19 + 24) )
    goto LABEL_5;
  if ( !IsInsideUserApiHook(v19, v18) || !v10 )
    goto LABEL_6;
  v36 = 0;
  if ( a3 )
  {
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(&v45, (__int64)a2);
    v3 = 1;
    if ( (unsigned int)xxxSendUAHInitMenuMessage(a3, &v45, a1) )
      v36 = 1;
  }
  if ( (v3 & 1) != 0 )
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v45);
  if ( v36 )
  {
    xxxSendUAHMenuMessage(a3, 145LL, a2, a1);
LABEL_5:
    v9 = GreSetBkMode(a1, 1);
    v49 = v9;
    goto LABEL_6;
  }
  a3 = *((_QWORD *)a2 + 10);
  Win32HM_ExchangeThreadLock<1>(a3, (__int64)BugCheckParameter3);
LABEL_6:
  if ( (*((_DWORD *)a2 + 31) & 3) != 0 )
  {
    v22 = (struct tagITEM *)MNGetpItemFromIndex(a2, *((unsigned int *)a2 + 29));
    GreSetViewportOrg(a1);
    v23 = *((_DWORD *)a2 + 29);
  }
  else
  {
    v22 = (struct tagITEM *)*((_QWORD *)a2 + 11);
    v23 = 0;
  }
  v24 = 0;
  if ( v23 < *(_DWORD *)(*((_QWORD *)a2 + 5) + 44LL) )
  {
    v25 = v42;
    v20 = 1024LL;
    while ( 1 )
    {
      if ( !v22 )
      {
LABEL_22:
        v9 = v49;
        break;
      }
      v26 = **(_DWORD **)v22;
      if ( (v26 & 0x20) != 0 && v25 )
      {
        if ( (v26 & 0x2000) != 0 && v23 )
          v37 = *(_DWORD *)(*((_QWORD *)v22 - 12) + 64LL);
        else
          v37 = *(_DWORD *)(*(_QWORD *)v22 + 64LL);
        v41.m128i_i64[0] = (unsigned int)(v37 - 3);
        v41.m128i_i32[2] = v37 - 1;
        v41.m128i_i32[3] = *((_DWORD *)a2 + 17);
        DrawEdge(a1, &v41, 2u, v50 | 5);
      }
      v27 = **(_DWORD **)v22;
      if ( (v27 & 0x800) == 0 || (v27 & 0x100) != 0 && *((_WORD *)v46 + 336) >= 0x400u || (unsigned int)MNIsUAHMenu(a2) )
      {
        SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v48, (__int64)a2);
        if ( a3 )
        {
          v28 = *(_QWORD *)(a3 + 40);
          v29 = *(_DWORD *)(v28 + 288) & 0xF;
          if ( v29 != 3 && (*(_DWORD *)(v28 + 232) & 0x400) != 0 )
            GetWindowDpiLastNotify(a3);
        }
        else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        {
          PsGetCurrentProcessWin32Process(v30);
        }
        xxxDrawMenuItem(a1, 0, a3);
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v48);
        if ( !(unsigned __int8)MNIspItemValid(a2, v22) )
          goto LABEL_21;
      }
      else
      {
        v38 = *(int **)v22;
        v39 = *(_DWORD *)(*(_QWORD *)v22 + 64LL);
        v45.m128i_i32[1] = (*(_DWORD *)(*(_QWORD *)v22 + 76LL) >> 1) - 1 + *(_DWORD *)(*(_QWORD *)v22 + 68LL);
        v45.m128i_i32[0] = v39 + 1;
        v45.m128i_i32[2] = v38[18] - 1 + v39;
        v45.m128i_i32[3] = v45.m128i_i32[1] + 2;
        DrawEdge(a1, &v45, 2u, v50 | 0xA);
        MNDrawInsertionBar(a1, v22);
      }
      if ( (*((_DWORD *)a2 + 31) & 3) != 0 )
      {
        v24 += *(_DWORD *)(*(_QWORD *)v22 + 76LL);
        if ( v24 > *((_DWORD *)a2 + 17) )
          goto LABEL_22;
      }
LABEL_21:
      v22 = (struct tagITEM *)MNGetpItemFromIndex(a2, ++v23);
      v20 = 1024LL;
      if ( v23 >= *(_DWORD *)(*((_QWORD *)a2 + 5) + 44LL) )
        goto LABEL_22;
    }
  }
  v31 = PtiCurrent(v21, v20);
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v31, BugCheckParameter3);
  BugCheckParameter3[1] = 0LL;
  BugCheckParameter3[0] = -1LL;
  if ( v9 )
    GreSetBkMode(a1, v9);
  GreSetViewportOrg(a1);
  GreSetTextAlign(a1, v43);
  result = GreSelectFont(a1, v47);
  if ( BugCheckParameter3[0] != -1LL )
  {
    v35 = PtiCurrent(v34, v33);
    return (HFONT)Win32HM_UnlockFromThread<1>((ULONG_PTR)v35, BugCheckParameter3);
  }
  return result;
}
