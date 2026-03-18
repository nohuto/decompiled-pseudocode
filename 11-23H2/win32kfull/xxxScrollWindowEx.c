/*
 * XREFs of xxxScrollWindowEx @ 0x1C022E570
 * Callers:
 *     NtUserScrollWindowEx @ 0x1C0154720 (NtUserScrollWindowEx.c)
 *     xxxMNSetTop @ 0x1C0219924 (xxxMNSetTop.c)
 *     xxxMNUpdateShownMenu @ 0x1C0230C20 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     zzzInternalShowCaret @ 0x1C00062D4 (zzzInternalShowCaret.c)
 *     GreTransformPoints @ 0x1C0006CF4 (GreTransformPoints.c)
 *     SpbCheckRect @ 0x1C000BF1C (SpbCheckRect.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxRedrawWindow @ 0x1C004E1B4 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004E3A0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxInternalInvalidate @ 0x1C004FB80 (xxxInternalInvalidate.c)
 *     zzzInternalHideCaret @ 0x1C0062CA4 (zzzInternalHideCaret.c)
 *     MirrorRegion @ 0x1C0063B98 (MirrorRegion.c)
 *     ThreadLockExchangeAlways @ 0x1C0073040 (ThreadLockExchangeAlways.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UnionRect @ 0x1C00ABC9C (UnionRect.c)
 *     IntersectRect @ 0x1C00AEB30 (IntersectRect.c)
 *     _IsDescendant @ 0x1C00B31F8 (_IsDescendant.c)
 *     OffsetChildren @ 0x1C00B5A7C (OffsetChildren.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00B7028 (zzzEndDeferWinEventNotify.c)
 *     GetRect @ 0x1C00E1ED0 (GetRect.c)
 *     IsVisible @ 0x1C00E2A5C (IsVisible.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     GetDCOrgOnScreen @ 0x1C01BD424 (GetDCOrgOnScreen.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C022D7DC (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxScrollWindowEx(
        struct tagWND *a1,
        int a2,
        int a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        __int64 a6,
        struct tagRECT *a7,
        __int16 a8)
{
  int v8; // r10d
  HRGN v9; // r11
  __int64 v10; // r14
  int v11; // r12d
  struct tagWND *v12; // rbx
  __int64 v14; // rax
  int v15; // edx
  int v16; // edx
  __int64 v17; // r9
  __int16 v18; // si
  int v19; // edi
  int v21; // eax
  unsigned int v22; // edi
  HDC DCEx; // r15
  unsigned int v24; // r15d
  unsigned int v25; // r12d
  int v26; // edi
  HDC v27; // rdi
  __int64 v28; // rax
  HRGN v29; // rcx
  __int64 v30; // rcx
  unsigned int v31; // edx
  unsigned int v32; // eax
  struct tagRECT *v33; // r13
  bool v34; // zf
  __int64 v35; // rdx
  int v36; // edx
  LONG v37; // eax
  LONG v38; // edx
  int v39; // eax
  struct tagRECT *v40; // r13
  __int128 v41; // xmm0
  int v42; // r8d
  __int64 v43; // rax
  int v44; // ecx
  int v45; // edx
  int v46; // edi
  int v47; // edx
  int v48; // ecx
  __int64 v49; // rax
  int v50; // edx
  int v51; // r8d
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 DesktopWindow; // rax
  unsigned int v58; // ecx
  __int64 v59; // rcx
  __int64 v60; // rcx
  unsigned __int64 *i; // rdi
  unsigned __int64 *v62; // rsi
  int v63; // r9d
  int v64; // eax
  __int64 v65; // rdx
  int v66; // [rsp+50h] [rbp-B0h]
  _BYTE v67[4]; // [rsp+54h] [rbp-ACh] BYREF
  int v68; // [rsp+58h] [rbp-A8h]
  int v69; // [rsp+5Ch] [rbp-A4h]
  int v70; // [rsp+60h] [rbp-A0h]
  struct tagRECT *v71; // [rsp+68h] [rbp-98h]
  HRGN v72; // [rsp+70h] [rbp-90h]
  HDC v73[2]; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT *v74[2]; // [rsp+90h] [rbp-70h] BYREF
  int v75; // [rsp+A0h] [rbp-60h]
  unsigned int v76; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v77; // [rsp+ACh] [rbp-54h]
  struct _POINTL v78; // [rsp+B0h] [rbp-50h] BYREF
  int v79; // [rsp+B8h] [rbp-48h]
  unsigned int v80; // [rsp+BCh] [rbp-44h]
  int v81; // [rsp+C0h] [rbp-40h]
  int v82; // [rsp+C4h] [rbp-3Ch]
  struct tagRECT *v83[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v84; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v85; // [rsp+E8h] [rbp-18h]
  __int128 v86; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v87; // [rsp+100h] [rbp+0h]
  __int128 v88; // [rsp+110h] [rbp+10h] BYREF
  struct tagRECT *v89[2]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v90; // [rsp+130h] [rbp+30h] BYREF
  __int128 v91; // [rsp+140h] [rbp+40h] BYREF

  v70 = 0;
  v8 = 0;
  v76 = 0;
  v77 = 0;
  v9 = (HRGN)a6;
  v10 = 0LL;
  v11 = a2;
  v87 = 0LL;
  v12 = a1;
  v85 = 0LL;
  v71 = a4;
  v69 = a3;
  v68 = a2;
  v83[0] = a4;
  v89[0] = a5;
  v72 = (HRGN)a6;
  v74[0] = a7;
  v66 = 0;
  v88 = 0LL;
  v90 = 0LL;
  v86 = 0LL;
  v84 = 0LL;
  if ( !a1 )
  {
    v14 = *(_QWORD *)(gptiCurrent + 456LL);
    v70 = 1;
    v12 = *(struct tagWND **)(*(_QWORD *)(v14 + 8) + 24LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)v12 + 5) + 26LL) & 0x40) != 0 )
  {
    v11 = -a2;
    v68 = -a2;
    MirrorRegion((__int64)v12, a6, 1);
    if ( a4 )
    {
      v15 = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a4->left;
      a4->left = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a4->right;
      a4->right = v15;
    }
    v9 = v72;
    v8 = 0;
    if ( a5 )
    {
      v16 = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a5->left;
      a5->left = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a5->right;
      a5->right = v16;
    }
  }
  if ( !(v11 | v69) )
    goto LABEL_25;
  if ( (unsigned int)IsVisible((__int64)v12) )
  {
    v18 = a8;
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 0x20) != 0 )
  {
LABEL_25:
    v18 = a8;
  }
  else
  {
    v18 = a8;
    if ( (a8 & 1) != 0 && !v17 )
    {
      v8 = 1;
      v18 = a8 & 0xFFFD;
      v66 = 1;
    }
  }
  if ( v9 )
  {
    SetEmptyRgn(v9);
    v8 = v66;
  }
  if ( a7 )
    *a7 = 0LL;
  if ( !v8 )
    return 1LL;
LABEL_15:
  ++gdwDeferWinEvent;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v67);
  v75 = 0;
  if ( v70 )
    ThreadLock(v12, &v86);
  if ( !v66 )
  {
    v10 = *(_QWORD *)(gptiCurrent + 432LL) + 304LL;
    if ( *(_QWORD *)v10 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)v10, (__int64)v12) )
      {
        v75 = 1;
        zzzInternalHideCaret();
      }
    }
  }
  v81 = v18 & 1;
  if ( v18 < 0 )
  {
    v19 = (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v12 + 17) + 8LL) + 8LL) & 0x60) != 0 ? 0x10000 : 65538;
    if ( (v18 & 1) != 0 && (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 2) != 0 )
      v19 = 589826;
  }
  else
  {
    v21 = 65538;
    if ( (v18 & 1) != 0 )
      v21 = 589826;
    v19 = v21;
  }
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v22 = v19 | 0x40000000;
  DCEx = (HDC)_GetDCEx(v12, 0LL, v22);
  v73[0] = DCEx;
  v82 = v18 & 2;
  if ( (v18 & 2) != 0 )
  {
    GetDCOrgOnScreen((__int64)DCEx, &v76);
    if ( !v72 )
      v72 = (HRGN)ghrgnSW;
  }
  if ( !v71 )
  {
    v83[0] = (struct tagRECT *)&v90;
    GetRect(v12, (__int64)&v90, 17);
    if ( (v22 & 2) == 0 )
      GreTransformPoints(DCEx, (struct _POINTL *)&v90, (struct _POINTFIX *)&v90, 2, 0);
  }
  v24 = v11;
  v25 = v69;
  v88 = (__int128)*v83[0];
  v26 = v22 & 2;
  if ( !v26 )
  {
    GreTransformPoints(v73[0], (struct _POINTL *)&v88, (struct _POINTFIX *)&v88, 2, 1);
    v78.y = 0;
    v78.x = 0;
    v79 = v68;
    v80 = v25;
    GreTransformPoints(v73[0], &v78, (struct _POINTFIX *)&v78, 2, 1);
    v24 = v79 - v78.x;
    v25 = v80 - v78.y;
  }
  if ( v66 )
  {
    v27 = v73[0];
    v68 = 1;
  }
  else
  {
    v28 = *((_QWORD *)v12 + 5);
    v29 = *(HRGN *)(v28 + 136);
    if ( v18 < 0 && (*(_BYTE *)(v28 + 21) & 1) == 0 )
    {
      if ( (unsigned __int64)v29 > 1 )
      {
        v91 = 0LL;
        if ( (unsigned int)GreGetRgnBox(v29, &v91) )
        {
          v30 = *((_QWORD *)v12 + 5);
          v31 = v25 - *(_DWORD *)(v30 + 108);
          v32 = v24 - *(_DWORD *)(v30 + 104);
          HIDWORD(v91) += v31;
          DWORD1(v91) += v31;
          LODWORD(v91) = v32 + v91;
          DWORD2(v91) += v32;
          xxxRedrawWindow(v12, (__int64)&v91, 0LL, 133);
        }
      }
      v29 = 0LL;
    }
    v33 = v74[0];
    v34 = v26 == 0;
    v27 = v73[0];
    v68 = InternalScrollDC(v12, v73[0], v68, v69, v83[0], v89[0], v29, v72, v74[0], v34);
    if ( v33 )
    {
      v35 = *((_QWORD *)v12 + 5);
      if ( (*(_BYTE *)(v35 + 26) & 0x40) != 0 )
      {
        v36 = *(_DWORD *)(v35 + 112) - *(_DWORD *)(v35 + 104);
        v37 = v36 - v33->right;
        v38 = v36 - v33->left;
        v33->left = v37;
        v33->right = v38;
      }
    }
  }
  _ReleaseDC(v27);
  v39 = v66;
  v40 = v71;
  if ( !v66 )
  {
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
    {
      if ( v71 )
      {
        if ( v12 == (struct tagWND *)GetDesktopWindow((__int64)v12) )
        {
          v41 = v88;
          v90 = v88;
          v42 = v88;
        }
        else
        {
          v43 = *((_QWORD *)v12 + 5);
          v44 = *(_DWORD *)(v43 + 104);
          v42 = v44 + v88;
          v45 = *(_DWORD *)(v43 + 108);
          DWORD2(v90) = DWORD2(v88) + v44;
          LODWORD(v90) = v44 + v88;
          DWORD1(v90) = v45 + DWORD1(v88);
          HIDWORD(v90) = v45 + HIDWORD(v88);
          v41 = v90;
        }
        LODWORD(v74[1]) = v24 + DWORD2(v41);
        HIDWORD(v74[1]) = v25 + HIDWORD(v41);
        HIDWORD(v74[0]) = v25 + DWORD1(v41);
        LODWORD(v74[0]) = v42 + v24;
        UnionRect(v74, (int *)v74, (int *)&v90);
      }
      else
      {
        *(_OWORD *)v74 = *(_OWORD *)(*((_QWORD *)v12 + 5) + 104LL);
      }
      SpbCheckRect(v12, (struct tagRECT *)v74, 0);
    }
    v39 = 0;
  }
  v46 = v81;
  if ( !v81 )
    goto LABEL_76;
  *(_OWORD *)v89 = 0LL;
  if ( v39 || v12 != *(struct tagWND **)v10 )
  {
LABEL_70:
    if ( !v40 )
      goto LABEL_74;
    goto LABEL_71;
  }
  if ( !v40
    || (v47 = *(_DWORD *)(v10 + 24),
        LODWORD(v89[0]) = *(_DWORD *)(v10 + 20),
        LODWORD(v89[1]) = *(_DWORD *)(v10 + 32) + LODWORD(v89[0]),
        v48 = *(_DWORD *)(v10 + 28),
        HIDWORD(v89[0]) = v47,
        HIDWORD(v89[1]) = v47 + v48,
        (unsigned int)IntersectRect(v89, (int *)v89, (int *)&v88)) )
  {
    *(_DWORD *)(v10 + 20) += v24;
    *(_DWORD *)(v10 + 24) += v25;
    goto LABEL_70;
  }
LABEL_71:
  if ( v12 == (struct tagWND *)GetDesktopWindow((__int64)v12) )
  {
    *(_OWORD *)v89 = v88;
  }
  else
  {
    v49 = *((_QWORD *)v12 + 5);
    v50 = *(_DWORD *)(v49 + 104);
    v51 = *(_DWORD *)(v49 + 108);
    LODWORD(v89[0]) = v50 + v88;
    LODWORD(v89[1]) = v50 + DWORD2(v88);
    HIDWORD(v89[0]) = v51 + DWORD1(v88);
    HIDWORD(v89[1]) = v51 + HIDWORD(v88);
  }
LABEL_74:
  if ( *((_QWORD *)v12 + 14) )
  {
    OffsetChildren(v12, v24, v25, (int *)((unsigned __int64)v89 & -(__int64)(v40 != 0LL)));
    zzzLockDisplayAreaAndInvalidateDCCache(
      (__int64)v12,
      (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 2) != 0 ? 4 : 2,
      0LL);
  }
LABEL_76:
  if ( v82 )
  {
    if ( v72 != (HRGN)ghrgnSW )
      GreCombineRgn(ghrgnSW, v72, 0LL, 5LL);
    GreOffsetRgn(ghrgnSW, v76, v77);
    xxxInternalInvalidate(v12, ghrgnSW, v18 & 4 | 0x81);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v67, v52, v53);
  zzzEndDeferWinEventNotify();
  if ( v46 )
  {
    *(_OWORD *)v83 = 0LL;
    *(_OWORD *)v73 = 0LL;
    if ( v40 )
    {
      DesktopWindow = GetDesktopWindow((__int64)v12);
      if ( v54 == DesktopWindow )
      {
        LODWORD(v73[0]) = v24 + v88;
        LODWORD(v73[1]) = v24 + DWORD2(v88);
        HIDWORD(v73[0]) = v25 + DWORD1(v88);
        v58 = v25 + HIDWORD(v88);
      }
      else
      {
        v59 = *(_QWORD *)(v54 + 40);
        v54 = v24 + *(_DWORD *)(v59 + 104);
        v56 = v25 + *(_DWORD *)(v59 + 108);
        LODWORD(v73[0]) = v54 + v88;
        LODWORD(v73[1]) = v54 + DWORD2(v88);
        HIDWORD(v73[0]) = v56 + DWORD1(v88);
        v58 = v56 + HIDWORD(v88);
      }
      HIDWORD(v73[1]) = v58;
    }
    v60 = gptiCurrent;
    *(_QWORD *)&v84 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v84;
    *((_QWORD *)&v84 + 1) = 0LL;
    for ( i = (unsigned __int64 *)*((_QWORD *)v12 + 14); i; i = (unsigned __int64 *)i[11] )
    {
      v62 = i + 5;
      if ( !v40 || (unsigned int)IntersectRect(v83, (int *)v73, (int *)(*v62 + 88)) )
      {
        ThreadLockExchangeAlways((__int64)i, (__int64)&v84);
        if ( v12 == (struct tagWND *)GetDesktopWindow((__int64)v12) )
        {
          v63 = *(unsigned __int16 *)(*v62 + 108);
          v64 = *(unsigned __int16 *)(*v62 + 104);
        }
        else
        {
          v65 = *((_QWORD *)v12 + 5);
          v63 = (unsigned __int16)(*(_WORD *)(*v62 + 108) - *(_WORD *)(v65 + 108));
          v64 = (unsigned __int16)(*(_WORD *)(*v62 + 104) - *(_WORD *)(v65 + 104));
        }
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(i, 3u, 0LL, (__int128 *)(v64 | (v63 << 16)), 0, 0, 0LL, 1, 0);
      }
    }
    ThreadUnlock1(v60, v54, v56);
  }
  if ( v75 )
    zzzInternalShowCaret();
  if ( v70 )
    ThreadUnlock1(v55, v54, v56);
  return (unsigned int)v68;
}
