/*
 * XREFs of ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1401EA0E8
 * Callers:
 *     xxxHotTrack @ 0x1401EA0C0 (xxxHotTrack.c)
 * Callees:
 *     GreSelectFont @ 0x1400377A0 (GreSelectFont.c)
 *     GreSetTextAlign @ 0x140038C8C (GreSetTextAlign.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x140046AF8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140046B4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     xxxDrawMenuItem @ 0x140069860 (xxxDrawMenuItem.c)
 *     MNGetpItemFromIndex @ 0x14006B178 (MNGetpItemFromIndex.c)
 *     MNIspItemValid @ 0x14006B1A4 (MNIspItemValid.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1401B1824 (xxxMNRecomputeBarIfNeeded.c)
 *     GreGetTextAlign @ 0x1401F1C90 (GreGetTextAlign.c)
 *     GetDpiMetricsForDpi @ 0x1402F16E0 (GetDpiMetricsForDpi.c)
 */

__int64 __fastcall xxxHotTrackMenu(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  struct tagITEM *v10; // r14
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // ecx
  unsigned int v16; // ecx
  HDC DCEx; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 UserSessionState; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // ecx
  unsigned __int16 WindowDpiLastNotify; // bx
  __int64 v25; // rax
  __int64 DpiMetricsForDpi; // rax
  int TextAlign; // edi
  __int64 v28; // rdx
  __int64 v29; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v32[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v33; // [rsp+50h] [rbp-10h]

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 1) == 0 )
    return 0LL;
  v6 = *((_QWORD *)a1 + 21);
  if ( !v6 )
    return 0LL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v32, v6);
  if ( v33 )
    v7 = v33;
  else
    v7 = *v32[0];
  v10 = (struct tagITEM *)MNGetpItemFromIndex(v7, a2);
  if ( !v10 )
  {
LABEL_30:
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v32, v8);
    return 0LL;
  }
  if ( !v9 )
    v9 = *v32[0];
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v9);
  xxxMNRecomputeBarIfNeeded((__int64)a1, v32, v11, v12);
  v13 = v33;
  if ( !v33 )
    v13 = *v32[0];
  if ( !MNIspItemValid(v13, (__int64)v10) )
    goto LABEL_29;
  v15 = *(_DWORD *)(*(_QWORD *)v10 + 4LL);
  if ( !a3 )
  {
    v16 = v15 & 0xFFFFFEFF;
    goto LABEL_16;
  }
  if ( (v15 & 1) != 0 )
  {
LABEL_29:
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v14);
    goto LABEL_30;
  }
  v16 = v15 | 0x100;
LABEL_16:
  *(_DWORD *)(*(_QWORD *)v10 + 4LL) = v16;
  DCEx = (HDC)_GetDCEx(a1, 0LL, 65539LL);
  UserSessionState = W32GetUserSessionState(v19, v18);
  GreSelectBrush(DCEx, *(_QWORD *)(*(_QWORD *)(UserSessionState + 19928) + 4752LL), v21);
  v22 = *((_QWORD *)a1 + 5);
  v23 = *(_DWORD *)(v22 + 288) & 0xF;
  if ( v23 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v22 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v22 + 232) & 0x400) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
  }
  else if ( !v23
         && (v25 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v25 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
  }
  DpiMetricsForDpi = GetDpiMetricsForDpi(WindowDpiLastNotify);
  GreSelectFont(DCEx, *(HFONT *)(DpiMetricsForDpi + 8));
  TextAlign = GreGetTextAlign(DCEx);
  if ( *(_QWORD *)(*v32[0] + 88) )
  {
    if ( (***(_DWORD ***)(*v32[0] + 88) & 0x2000) != 0 )
      GreSetTextAlign(DCEx, TextAlign | 0x100);
  }
  xxxDrawMenuItem(DCEx, WindowDpiLastNotify, (struct tagMENU ***)v32, v10, 0, 0LL);
  GreSetTextAlign(DCEx, TextAlign);
  _ReleaseDC(DCEx);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v28);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v32, v29);
  return 1LL;
}
