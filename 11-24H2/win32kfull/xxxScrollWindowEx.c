/*
 * XREFs of xxxScrollWindowEx @ 0x140258878
 * Callers:
 *     NtUserScrollWindowEx @ 0x14029C180 (NtUserScrollWindowEx.c)
 *     xxxMNSetTop @ 0x1402BE960 (xxxMNSetTop.c)
 *     xxxMNUpdateShownMenu @ 0x1402E0898 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     OffsetChildren @ 0x140030CE0 (OffsetChildren.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032E40 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GetRect @ 0x1400355F0 (GetRect.c)
 *     IntersectRect @ 0x140035778 (IntersectRect.c)
 *     zzzInternalHideCaret @ 0x1400357EC (zzzInternalHideCaret.c)
 *     zzzInternalShowCaret @ 0x140035B94 (zzzInternalShowCaret.c)
 *     IsVisible @ 0x140036A48 (IsVisible.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140040808 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     xxxInternalInvalidate @ 0x1400428C0 (xxxInternalInvalidate.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x14006E488 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x140092FE8 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     GreLPtoDP @ 0x1400953BC (GreLPtoDP.c)
 *     GreDPtoLP @ 0x140095424 (GreDPtoLP.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x140096308 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     GetDCOrgOnScreen @ 0x140097370 (GetDCOrgOnScreen.c)
 *     SpbCheckRect @ 0x140097868 (SpbCheckRect.c)
 *     MirrorRegion @ 0x1400F553C (MirrorRegion.c)
 *     UnionRect @ 0x140156E48 (UnionRect.c)
 *     _IsDescendant @ 0x14017B3BC (_IsDescendant.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxScrollWindowEx(
        struct tagWND *a1,
        __int64 a2,
        LONG a3,
        struct tagRECT *a4,
        __int64 a5,
        unsigned __int64 a6,
        struct tagRECT *a7,
        __int16 a8)
{
  int v10; // r12d
  __int64 v11; // rsi
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // r14d
  __int64 left; // rcx
  __int64 v16; // r8
  __int16 v17; // r13
  int v18; // edi
  __int64 UserSessionState; // rax
  struct tagWND *v20; // rcx
  int v21; // edi
  int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // edi
  __int64 DCEx; // rax
  HDC v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct tagRECT *v29; // rdx
  int v30; // r15d
  unsigned int v31; // r8d
  int v32; // r12d
  int v33; // edi
  HDC v34; // rdi
  bool v35; // zf
  int v36; // eax
  struct tagRECT *v37; // r8
  __int64 v38; // rdx
  int v39; // edx
  LONG v40; // eax
  LONG v41; // edx
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // eax
  struct tagRECT *v45; // rdi
  __int128 v46; // xmm0
  int v47; // r8d
  __int64 v48; // rax
  int v49; // ecx
  int v50; // edx
  LONG v51; // edx
  int v52; // ecx
  __int64 v53; // rax
  int v54; // r8d
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 DesktopWindow; // rax
  __int64 v64; // rdx
  LONG v65; // ecx
  __int64 v66; // rcx
  int v67; // edx
  int v68; // r8d
  __int64 v69; // rdx
  __int64 i; // rdi
  __int64 v71; // rsi
  int v72; // r9d
  int v73; // eax
  __int64 v74; // rdx
  int v76; // [rsp+50h] [rbp-B0h]
  int v77; // [rsp+54h] [rbp-ACh]
  int v78; // [rsp+54h] [rbp-ACh]
  int v80; // [rsp+5Ch] [rbp-A4h]
  int v81; // [rsp+60h] [rbp-A0h]
  HRGN v82; // [rsp+68h] [rbp-98h]
  HDC v84; // [rsp+78h] [rbp-88h]
  HDC v85; // [rsp+78h] [rbp-88h]
  struct tagPOINT v86[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v87; // [rsp+90h] [rbp-70h] BYREF
  int v88; // [rsp+98h] [rbp-68h]
  struct tagRECT *v89; // [rsp+A0h] [rbp-60h]
  struct tagRECT *v90; // [rsp+A8h] [rbp-58h]
  ULONG_PTR v91[2]; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v93; // [rsp+D0h] [rbp-30h] BYREF
  struct tagPOINT v94[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct tagPOINT v95[2]; // [rsp+F0h] [rbp-10h] BYREF

  BugCheckParameter3[0] = -1LL;
  *(_QWORD *)&v93.left = a5;
  v90 = a7;
  v10 = a2;
  v11 = 0LL;
  v80 = a2;
  v89 = a4;
  v82 = (HRGN)a6;
  *(_OWORD *)&v94[0].x = 0LL;
  v76 = 0;
  *(_OWORD *)&v95[0].x = 0LL;
  v87 = 0LL;
  BugCheckParameter3[1] = 0LL;
  v77 = 0;
  v12 = PtiCurrent(0LL, a2);
  v84 = (HDC)v12;
  v14 = 1;
  if ( !a1 )
  {
    v77 = 1;
    v13 = *(_QWORD *)(*((_QWORD *)v12 + 62) + 8LL);
    a1 = *(struct tagWND **)(v13 + 24);
  }
  left = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(left + 26) & 0x40) != 0 )
  {
    v10 = -v10;
    v80 = v10;
    MirrorRegion((__int64)a1, a6, 1);
    if ( a4 )
    {
      left = (unsigned int)a4->left;
      v13 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 104LL) - left);
      a4->left = *(_DWORD *)(*((_QWORD *)a1 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 104LL) - a4->right;
      a4->right = v13;
    }
    v16 = *(_QWORD *)&v93.left;
    if ( *(_QWORD *)&v93.left )
    {
      left = **(unsigned int **)&v93.left;
      v13 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 104LL) - left);
      **(_DWORD **)&v93.left = *(_DWORD *)(*((_QWORD *)a1 + 5) + 112LL)
                             - *(_DWORD *)(*((_QWORD *)a1 + 5) + 104LL)
                             - *(_DWORD *)(*(_QWORD *)&v93.left + 8LL);
      *(_DWORD *)(v16 + 8) = v13;
    }
  }
  if ( !(v10 | a3) )
    goto LABEL_15;
  if ( (unsigned int)IsVisible((__int64)a1) )
  {
    v17 = a8;
    v18 = 0;
    goto LABEL_22;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
  {
LABEL_15:
    v17 = a8;
  }
  else
  {
    v17 = a8;
    if ( (a8 & 1) != 0 && !a4 )
    {
      v18 = 1;
      v76 = 1;
      v17 = a8 & 0xFFFD;
      goto LABEL_17;
    }
  }
  v18 = 0;
LABEL_17:
  if ( a6 )
    SetEmptyRgn(a6);
  if ( v90 )
    *v90 = 0LL;
  if ( v18 )
  {
LABEL_22:
    UserSessionState = W32GetUserSessionState(left, v13);
    v91[1] = 0LL;
    LOBYTE(v91[0]) = 0;
    ++*(_DWORD *)(UserSessionState + 70856);
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v91);
    v81 = 0;
    if ( v77 )
      Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)BugCheckParameter3, (__int64)a1);
    if ( !v18 )
    {
      v11 = *((_QWORD *)v84 + 59) + 344LL;
      v20 = *(struct tagWND **)v11;
      if ( *(_QWORD *)v11 )
      {
        if ( (unsigned int)IsDescendant((__int64)v20, (__int64)a1) )
        {
          v81 = 1;
          zzzInternalHideCaret();
        }
      }
    }
    v88 = v17 & 1;
    if ( v17 < 0 )
    {
      v20 = *(struct tagWND **)(*((_QWORD *)a1 + 17) + 8LL);
      v21 = (*((_BYTE *)v20 + 8) & 0x60) != 0 ? 0x10000 : 65538;
      if ( (v17 & 1) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) != 0 )
        v21 = 589826;
    }
    else
    {
      v22 = 65538;
      if ( (v17 & 1) != 0 )
        v22 = 589826;
      v21 = v22;
    }
    v23 = W32GetUserSessionState(v20, v17 & 1);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v23 + 57008) + 48LL));
    v24 = v21 | 0x40000000;
    DCEx = _GetDCEx(a1, 0LL, v24);
    v85 = (HDC)DCEx;
    v26 = (HDC)DCEx;
    if ( (v17 & 2) != 0 )
    {
      GetDCOrgOnScreen(DCEx, &v87);
      if ( !a6 )
        v82 = *(HRGN *)(W32GetUserSessionState(v28, v27) + 43144);
    }
    if ( !a4 )
    {
      v89 = (struct tagRECT *)v95;
      GetRect((__int64)a1, (__int64)v95, 17);
      if ( (v24 & 2) == 0 )
        GreDPtoLP(v26, v95);
    }
    v29 = v89;
    v30 = v10;
    v31 = a3;
    v32 = a3;
    *(struct tagRECT *)&v94[0].x = *v89;
    v33 = v24 & 2;
    if ( !v33 )
    {
      GreLPtoDP(v85, v94);
      v86[0].y = 0;
      v86[0].x = 0;
      v86[1].x = v80;
      v86[1].y = a3;
      GreLPtoDP(v85, v86);
      v30 = v86[1].x - v86[0].x;
      v32 = v86[1].y - v86[0].y;
      v29 = v89;
      v31 = a3;
    }
    if ( v76 )
    {
      v34 = v85;
      v78 = 1;
    }
    else
    {
      v35 = v33 == 0;
      v34 = v85;
      v36 = InternalScrollDC(
              a1,
              v85,
              v80,
              v31,
              v29,
              *(struct tagRECT **)&v93.left,
              *(HRGN *)(*((_QWORD *)a1 + 5) + 136LL),
              v82,
              v90,
              v35);
      v37 = v90;
      v78 = v36;
      if ( v90 )
      {
        v38 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v38 + 26) & 0x40) != 0 )
        {
          v39 = *(_DWORD *)(v38 + 112) - *(_DWORD *)(v38 + 104);
          v40 = v39 - v90->right;
          v41 = v39 - v90->left;
          v90->left = v40;
          v37->right = v41;
        }
      }
    }
    _ReleaseDC(v34);
    v44 = v76;
    if ( v76 )
    {
      v45 = a4;
    }
    else
    {
      v45 = a4;
      v43 = *(_QWORD *)(W32GetUserSessionState(v43, v42) + 57008);
      if ( *(_QWORD *)(v43 + 40) )
      {
        if ( a4 )
        {
          if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
          {
            v46 = *(_OWORD *)&v94[0].x;
            *(_OWORD *)&v95[0].x = *(_OWORD *)&v94[0].x;
            v47 = _mm_cvtsi128_si32(*(__m128i *)&v94[0].x);
          }
          else
          {
            v48 = *((_QWORD *)a1 + 5);
            v49 = *(_DWORD *)(v48 + 104);
            v47 = v49 + v94[0].x;
            v50 = *(_DWORD *)(v48 + 108);
            v95[1].x = v94[1].x + v49;
            v95[0].x = v49 + v94[0].x;
            v95[0].y = v50 + v94[0].y;
            v95[1].y = v50 + v94[1].y;
            v46 = *(_OWORD *)&v95[0].x;
          }
          v93.right = v30 + DWORD2(v46);
          v93.bottom = v32 + HIDWORD(v46);
          v93.top = v32 + DWORD1(v46);
          v93.left = v47 + v30;
          UnionRect(&v93, &v93.left, (int *)v95);
        }
        else
        {
          v93 = *(struct tagRECT *)(*((_QWORD *)a1 + 5) + 104LL);
        }
        SpbCheckRect(a1, &v93);
      }
      v44 = 0;
    }
    if ( !v88 )
      goto LABEL_71;
    v93 = 0LL;
    if ( !v44 && a1 == *(struct tagWND **)v11 )
    {
      if ( v45 )
      {
        v51 = *(_DWORD *)(v11 + 24);
        v93.left = *(_DWORD *)(v11 + 20);
        v93.right = *(_DWORD *)(v11 + 32) + v93.left;
        v52 = *(_DWORD *)(v11 + 28);
        v93.top = v51;
        v93.bottom = v51 + v52;
        if ( !(unsigned int)IntersectRect(&v93, &v93.left, (int *)v94) )
        {
LABEL_66:
          if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
          {
            v93 = *(struct tagRECT *)&v94[0].x;
          }
          else
          {
            v53 = *((_QWORD *)a1 + 5);
            v42 = *(unsigned int *)(v53 + 104);
            v54 = *(_DWORD *)(v53 + 108);
            v93.left = v42 + v94[0].x;
            v93.right = v42 + v94[1].x;
            v93.top = v54 + v94[0].y;
            v43 = (unsigned int)(v54 + v94[1].y);
            v93.bottom = v54 + v94[1].y;
          }
LABEL_69:
          if ( *((_QWORD *)a1 + 14) )
          {
            OffsetChildren(a1, v30, v32, (unsigned __int64)&v93 & -(__int64)(v45 != 0LL));
            zzzLockDisplayAreaAndInvalidateDCCache(
              (__int64)a1,
              (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) != 0 ? 4 : 2,
              0LL);
          }
LABEL_71:
          if ( (v17 & 2) != 0 )
          {
            if ( v82 != *(HRGN *)(W32GetUserSessionState(v43, v42) + 43144) )
            {
              v57 = W32GetUserSessionState(v56, v55);
              GreCombineRgn(*(_QWORD *)(v57 + 43144), v82, 0LL, 5LL);
            }
            v58 = W32GetUserSessionState(v56, v55);
            GreOffsetRgn(*(_QWORD *)(v58 + 43144), (unsigned int)v87, HIDWORD(v87));
            v61 = W32GetUserSessionState(v60, v59);
            xxxInternalInvalidate(a1, *(HRGN *)(v61 + 43144), v17 & 4 | 0x81);
          }
          v62 = W32GetUserSessionState(v43, v42);
          GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v62 + 57008) + 48LL));
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v91);
          zzzEndDeferWinEventNotify();
          if ( (v17 & 1) != 0 )
          {
            *(_OWORD *)&v86[0].x = 0LL;
            v93 = 0LL;
            if ( v45 )
            {
              DesktopWindow = GetDesktopWindow((__int64)a1);
              if ( v64 == DesktopWindow )
              {
                v93.left = v30 + v94[0].x;
                v93.right = v30 + v94[1].x;
                v93.top = v32 + v94[0].y;
                v65 = v32 + v94[1].y;
              }
              else
              {
                v66 = *(_QWORD *)(v64 + 40);
                v67 = v30 + *(_DWORD *)(v66 + 104);
                v68 = v32 + *(_DWORD *)(v66 + 108);
                v93.left = v67 + v94[0].x;
                v93.right = v67 + v94[1].x;
                v93.top = v68 + v94[0].y;
                v65 = v68 + v94[1].y;
              }
              v93.bottom = v65;
            }
            Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v91, 0LL);
            for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
            {
              v71 = i + 40;
              if ( !a4 || (unsigned int)IntersectRect(v86, &v93.left, (int *)(*(_QWORD *)v71 + 88LL)) )
              {
                Win32HM_ExchangeThreadLock<1>(i, (__int64)v91);
                if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
                {
                  v72 = *(unsigned __int16 *)(*(_QWORD *)v71 + 108LL);
                  v73 = *(unsigned __int16 *)(*(_QWORD *)v71 + 104LL);
                }
                else
                {
                  v74 = *((_QWORD *)a1 + 5);
                  v72 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)v71 + 108LL) - *(_WORD *)(v74 + 108));
                  v73 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)v71 + 104LL) - *(_WORD *)(v74 + 104));
                }
                xxxSendTransformableMessageTimeout(
                  (struct tagTHREADINFO **)i,
                  3LL,
                  0LL,
                  (struct tagDRAWITEMSTRUCT *)(v73 | (v72 << 16)),
                  0,
                  0,
                  0LL,
                  1,
                  0);
              }
            }
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v91, v69);
          }
          if ( v81 )
            zzzInternalShowCaret();
          v14 = v78;
          goto LABEL_94;
        }
      }
      *(_DWORD *)(v11 + 20) += v30;
      *(_DWORD *)(v11 + 24) += v32;
    }
    if ( !v45 )
      goto LABEL_69;
    goto LABEL_66;
  }
LABEL_94:
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v13);
  return v14;
}
