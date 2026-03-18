/*
 * XREFs of xxxMNInvertItem @ 0x14006BB74
 * Callers:
 *     xxxMNSelectItem @ 0x14009DA30 (xxxMNSelectItem.c)
 *     xxxHiliteMenuItem @ 0x1402DFF5C (xxxHiliteMenuItem.c)
 * Callees:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1400322B0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     GreSelectFont @ 0x1400377A0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1400379A0 (GreSetBkMode.c)
 *     GreSetTextAlign @ 0x140038C8C (GreSetTextAlign.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxDrawMenuItem @ 0x140069860 (xxxDrawMenuItem.c)
 *     ?MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x14006B148 (-MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNGetpItemFromIndex @ 0x14006B178 (MNGetpItemFromIndex.c)
 *     MNIspItemValid @ 0x14006B1A4 (MNIspItemValid.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14006B83C (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     GetpwndNotifypMenuState @ 0x14006CDCC (GetpwndNotifypMenuState.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x14006E488 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140070890 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxGetSysMenuPtr @ 0x140070C28 (xxxGetSysMenuPtr.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     xxxSendMenuSelect @ 0x14009E36C (xxxSendMenuSelect.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1401D1AFC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     GreSetViewportOrg @ 0x1401DA5E8 (GreSetViewportOrg.c)
 *     GreGetTextAlign @ 0x1401F1C90 (GreGetTextAlign.c)
 *     MNPositionSysMenu @ 0x140202B2C (MNPositionSysMenu.c)
 *     xxxMNSetTop @ 0x1402BE960 (xxxMNSetTop.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1402E8FE0 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 *     MNDrawArrow @ 0x1402E9214 (MNDrawArrow.c)
 *     MNEraseBackground @ 0x1402E93D4 (MNEraseBackground.c)
 *     GetDpiMetricsForWindow @ 0x1402F1798 (GetDpiMetricsForWindow.c)
 */

struct tagITEM *__fastcall xxxMNInvertItem(__int64 **a1, __int64 **a2, signed int a3, struct tagWND *a4, int a5)
{
  struct tagITEM *v6; // r15
  signed int v8; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct tagWND *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // r12d
  __int64 v17; // rcx
  int v18; // edx
  int v19; // r8d
  HDC DC; // r14
  int TextAlign; // eax
  __int64 DpiMetricsForWindow; // rax
  int v23; // ecx
  unsigned int v24; // ecx
  __int64 v25; // rdx
  int v26; // ecx
  unsigned int v27; // eax
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rcx
  struct tagTHREADINFO *v31; // rax
  struct tagTHREADINFO *v33; // rax
  __int64 v34; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct tagMENU *v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r11
  int v39; // edx
  int v40; // r10d
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 DCEx; // rax
  __int64 v44; // rcx
  int v45; // edx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v47; // rax
  __int64 v48; // rdx
  int v49; // ecx
  unsigned int v50; // eax
  __int64 v51; // rax
  int DpiDependentMetric; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 UserSessionState; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  int v61; // [rsp+38h] [rbp-31h]
  int v62; // [rsp+38h] [rbp-31h]
  int v63; // [rsp+3Ch] [rbp-2Dh]
  int v64; // [rsp+40h] [rbp-29h]
  int v65; // [rsp+40h] [rbp-29h]
  int v66; // [rsp+44h] [rbp-25h]
  int v67; // [rsp+44h] [rbp-25h]
  int v68; // [rsp+48h] [rbp-21h]
  struct _POINTL v69; // [rsp+50h] [rbp-19h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+58h] [rbp-11h] BYREF
  unsigned int v71; // [rsp+68h] [rbp-1h]
  int v72; // [rsp+6Ch] [rbp+3h]
  HFONT v73; // [rsp+70h] [rbp+7h]
  _QWORD v74[4]; // [rsp+78h] [rbp+Fh] BYREF

  v63 = 0;
  v6 = 0LL;
  v8 = a3;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v74);
  BugCheckParameter3[0] = -1LL;
  v68 = 0;
  v69 = 0LL;
  BugCheckParameter3[1] = 0LL;
  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(a2) || !a4 )
  {
LABEL_40:
    if ( BugCheckParameter3[0] != -1LL )
    {
      v31 = PtiCurrent(v11, v10);
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v31, BugCheckParameter3);
    }
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v74);
    return 0LL;
  }
  if ( **a1 )
  {
    v12 = **a1;
    v13 = *(struct tagWND **)(v12 + 16);
    if ( v13 != a4 )
      Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>(BugCheckParameter3, *(_QWORD *)(v12 + 16));
  }
  else
  {
    v13 = a4;
  }
  if ( v8 < 0 )
  {
    if ( **a1 && (unsigned int)(v8 + 4) <= 1 )
      MNDrawArrow(0LL, a1, (unsigned int)v8);
LABEL_36:
    v28 = GetpwndNotifypMenuState(a4);
    xxxSendMenuSelect(v29, (_DWORD)v13, (_DWORD)a2, v8, v28);
    goto LABEL_37;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
  {
    xxxGetSysMenuPtr(a4);
    v74[2] = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v74);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(a2, v74) )
    {
      MNPositionSysMenu(a4);
      v63 = 1;
    }
  }
  v14 = (__int64)a2[2];
  if ( !v14 )
    v14 = **a2;
  v15 = MNGetpItemFromIndex(v14, v8);
  v6 = (struct tagITEM *)v15;
  if ( v15
    && ((*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) != 0 || (*(_BYTE *)(*((_QWORD *)a4 + 5) + 31LL) & 0x20) == 0) )
  {
    if ( (**(_DWORD **)v15 & 0x800) != 0 )
      goto LABEL_35;
    if ( (*(_DWORD *)(*(_QWORD *)v15 + 4LL) & 0x80) != a5 )
    {
      v16 = 96;
      if ( !a5 || !**a1 || (*(_DWORD *)(**a2 + 124) & 3) == 0 )
        goto LABEL_15;
      if ( a3 >= *(_DWORD *)(**a2 + 116) )
      {
        v37 = (__int64)a2[2];
        if ( !v37 )
          v37 = **a2;
        v38 = MNGetpItemFromIndex(v37, *(_DWORD *)(v37 + 116));
        v39 = *(_DWORD *)(**a2 + 116);
        v40 = *(_DWORD *)(*(_QWORD *)v6 + 68LL)
            + *(_DWORD *)(*(_QWORD *)v6 + 76LL)
            - *(_DWORD *)(**a2 + 68)
            - *(_DWORD *)(*(_QWORD *)v38 + 68LL);
        while ( v40 > 0 && v39 < *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
        {
          v41 = *(_QWORD *)v38;
          v38 += 96LL;
          v40 -= *(_DWORD *)(v41 + 76);
          ++v39;
        }
      }
      if ( (unsigned int)xxxMNSetTop(a1) )
        xxxInternalUpdateWindow(v13, 1u);
      v42 = (__int64)a2[2];
      if ( !v42 )
        v42 = **a2;
      if ( MNIspItemValid(v42, (__int64)v6) )
      {
LABEL_15:
        v17 = *(_QWORD *)v6;
        v18 = *(_DWORD *)(*(_QWORD *)v6 + 64LL);
        v19 = *(_DWORD *)(*(_QWORD *)v6 + 68LL);
        v71 = v18 + *(_DWORD *)(*(_QWORD *)v6 + 72LL);
        v66 = v18;
        v72 = v19 + *(_DWORD *)(v17 + 76);
        v64 = v19;
        if ( (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) != 0 )
        {
          DC = (HDC)_GetDC(v13);
        }
        else
        {
          DCEx = _GetDCEx(v13, 0LL, 65537LL);
          v44 = *((_QWORD *)v13 + 5);
          DC = (HDC)DCEx;
          if ( (*(_BYTE *)(v44 + 30) & 4) != 0 && !v63 )
          {
            v61 = *(_DWORD *)(v44 + 96) - *(_DWORD *)(v44 + 88);
            v45 = *(_DWORD *)(v44 + 288) & 0xF;
            if ( v45 == 3 )
            {
              WindowDpiLastNotify = (*(_DWORD *)(v44 + 288) >> 8) & 0x1FF;
            }
            else if ( (*(_DWORD *)(v44 + 232) & 0x400) != 0 )
            {
              WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v13);
            }
            else if ( !v45
                   && (v47 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 496LL)) != 0
                   && (*(_DWORD *)(**(_QWORD **)(v47 + 8) + 64LL) & 1) != 0 )
            {
              WindowDpiLastNotify = 96;
            }
            else
            {
              WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 464LL) + 272LL);
            }
            v62 = v61 - GetDpiDependentMetric(14LL, WindowDpiLastNotify);
            v48 = *((_QWORD *)v13 + 5);
            v49 = *(_DWORD *)(v48 + 288) & 0xF;
            if ( v49 == 3 )
            {
              v50 = (*(_DWORD *)(v48 + 288) >> 8) & 0x1FF;
            }
            else if ( (*(_DWORD *)(v48 + 232) & 0x400) != 0 )
            {
              v50 = GetWindowDpiLastNotify((__int64)v13);
            }
            else if ( !v49
                   && (v51 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 496LL)) != 0
                   && (*(_DWORD *)(**(_QWORD **)(v51 + 8) + 64LL) & 1) != 0 )
            {
              v50 = 96;
            }
            else
            {
              v50 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 464LL) + 272LL);
            }
            DpiDependentMetric = GetDpiDependentMetric(15LL, v50);
            v54 = v71;
            LODWORD(v73) = DpiDependentMetric;
            if ( (int)v71 > v62
              || (v54 = *((_QWORD *)v13 + 5), v72 > *(_DWORD *)(v54 + 100) - *(_DWORD *)(v54 + 92) - DpiDependentMetric) )
            {
              UserSessionState = W32GetUserSessionState(v54, v53);
              GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
              v68 = 1;
              GreIntersectVisRect(
                DC,
                (unsigned int)(*(_DWORD *)(*((_QWORD *)v13 + 5) + 88LL) + v66),
                (unsigned int)(*(_DWORD *)(*((_QWORD *)v13 + 5) + 92LL) + v64),
                (unsigned int)(*(_DWORD *)(*((_QWORD *)v13 + 5) + 88LL) + v62),
                *(_DWORD *)(*((_QWORD *)v13 + 5) + 100LL) - (_DWORD)v73);
              v58 = W32GetUserSessionState(v57, v56);
              GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v58 + 57008) + 48LL));
            }
          }
        }
        TextAlign = GreGetTextAlign(DC);
        v65 = TextAlign;
        if ( (**(_DWORD **)v6 & 0x2000) != 0 )
          GreSetTextAlign(DC, TextAlign | 0x100);
        DpiMetricsForWindow = GetDpiMetricsForWindow(v13);
        v73 = GreSelectFont(DC, *(HFONT *)(DpiMetricsForWindow + 8));
        GreGetDCPoint(DC, 4u, &v69);
        v23 = *(_DWORD *)(*(_QWORD *)v6 + 4LL);
        if ( a5 )
          v24 = v23 | 0x80;
        else
          v24 = v23 & 0xFFFFFF7F;
        *(_DWORD *)(*(_QWORD *)v6 + 4LL) = v24;
        if ( v63 || *(_QWORD *)(*(_QWORD *)v6 + 96LL) == 1LL && (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
          goto LABEL_32;
        if ( (*(_DWORD *)(**a2 + 124) & 3) != 0 )
        {
          v59 = (__int64)a2[2];
          if ( !v59 )
            v59 = **a2;
          MNGetpItemFromIndex(v59, *(_DWORD *)(v59 + 116));
          GreSetViewportOrg(DC);
        }
        if ( *(_QWORD *)(*(_QWORD *)(**a2 + 40) + 24LL) && !(unsigned int)MNDrawHilite((__int64)a2, v6) )
        {
          v36 = (struct tagMENU *)a2[2];
          if ( !v36 )
            v36 = (struct tagMENU *)**a2;
          if ( !(unsigned int)MNIsOwnerDrawItem(v36, v6) )
          {
            v67 = GreSetBkMode(DC, 1);
            MNEraseBackground(DC, *(_DWORD *)(*(_QWORD *)v6 + 72LL), *(_DWORD *)(*(_QWORD *)v6 + 76LL));
            GreSetBkMode(DC, v67);
          }
        }
        if ( !v13 )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v34);
            if ( CurrentProcessWin32Process )
              CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
            v16 = *(unsigned __int16 *)(CurrentProcessWin32Process + 272);
          }
          goto LABEL_31;
        }
        v25 = *((_QWORD *)v13 + 5);
        v26 = *(_DWORD *)(v25 + 288) & 0xF;
        if ( v26 == 3 )
        {
          v27 = (*(_DWORD *)(v25 + 288) >> 8) & 0x1FF;
        }
        else
        {
          if ( (*(_DWORD *)(v25 + 232) & 0x400) == 0 )
          {
            if ( v26
              || (v60 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 496LL)) == 0
              || (*(_DWORD *)(**(_QWORD **)(v60 + 8) + 64LL) & 1) == 0 )
            {
              v16 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 464LL) + 272LL);
            }
            goto LABEL_31;
          }
          v27 = GetWindowDpiLastNotify((__int64)v13);
        }
        v16 = v27;
LABEL_31:
        xxxDrawMenuItem(DC, v16, (struct tagMENU ***)a2, v6, 1, (__int64)v13);
LABEL_32:
        if ( v68 )
          RecalcDCVisRgn(DC);
        GreSelectFont(DC, v73);
        GreSetViewportOrg(DC);
        GreSetTextAlign(DC, v65);
        _ReleaseDC(DC);
        v8 = a3;
LABEL_35:
        if ( !a5 )
          goto LABEL_37;
        goto LABEL_36;
      }
    }
  }
LABEL_37:
  v30 = (__int64)a2[2];
  if ( !v30 )
    v30 = **a2;
  if ( !MNIspItemValid(v30, (__int64)v6) )
    goto LABEL_40;
  if ( BugCheckParameter3[0] != -1LL )
  {
    v33 = PtiCurrent(v11, v10);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v33, BugCheckParameter3);
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v74);
  return v6;
}
