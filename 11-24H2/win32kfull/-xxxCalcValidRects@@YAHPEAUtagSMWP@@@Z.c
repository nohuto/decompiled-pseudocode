/*
 * XREFs of ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14022B0AC
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     GetStyleWindow @ 0x14002F5E0 (GetStyleWindow.c)
 *     GetRect @ 0x1400355F0 (GetRect.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14004544C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140048AF4 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z @ 0x140067BBC (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x14008C8D4 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     GetNewMonitor @ 0x14008D07C (GetNewMonitor.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14008D6FC (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x14008D804 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1401570C8 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1401719B4 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x14018D1C4 (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x14019E09C (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 *     _FChildVisible @ 0x1401A4C70 (_FChildVisible.c)
 *     ?s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z @ 0x1401BFD48 (-s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagCVR@@@Z @ 0x14022AA20 (-CheckTopmost@@YAHPEAUtagCVR@@@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x14022BB34 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z @ 0x14022C46C (-xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z.c)
 *     CheckFullScreen @ 0x14022E334 (CheckFullScreen.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x140238CF0 (xxxAppAdjustDpiCandidateRect.c)
 *     ?SendNotifications@DwmNotifyMoveReason@@SAXPEAUtagWND@@@Z @ 0x14026FA60 (-SendNotifications@DwmNotifyMoveReason@@SAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCalcValidRects(struct tagSMWP *a1)
{
  unsigned int v1; // esi
  struct tagWINDOWPOS *ValidWindowPos; // rax
  const struct tagWND *v5; // r13
  __int64 v6; // rdx
  __int128 *v7; // rbx
  int v8; // eax
  struct tagWND *v9; // rdi
  int v10; // r14d
  __int64 v11; // r12
  __int64 v12; // rdx
  int v13; // eax
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rax
  unsigned int v19; // r13d
  __int64 DesktopWindow; // rax
  __int64 v21; // rdx
  int v22; // r8d
  int v23; // r15d
  __int64 v24; // rcx
  int v25; // r10d
  _DWORD *v26; // rcx
  int v27; // r9d
  int v28; // r12d
  __int64 v29; // rcx
  int v30; // eax
  char v31; // al
  __int64 UserSessionState; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  _DWORD *v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // eax
  int v39; // r14d
  unsigned int v40; // r14d
  int v41; // r15d
  int v42; // r10d
  int v43; // r9d
  __int64 v44; // rax
  __int64 v45; // r14
  __int16 v46; // r15
  INT v47; // edx
  int v48; // ecx
  __int64 NewMonitor; // rax
  int v50; // ecx
  __int64 v51; // rdx
  __int128 v52; // xmm1
  __int64 v53; // xmm0_8
  unsigned int v54; // r12d
  unsigned int v55; // r13d
  int v56; // r14d
  unsigned int v57; // r15d
  __int64 v58; // rdx
  __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rdx
  int v62; // ecx
  __int64 v63; // r12
  int v64; // r9d
  int v65; // edx
  int v66; // r11d
  int v67; // r9d
  int v68; // r8d
  int v69; // r10d
  int v70; // r14d
  char v71; // r12
  int v72; // eax
  __int64 v73; // rdx
  int v74; // r8d
  int v75; // edx
  int v76; // r8d
  int v77; // r8d
  int v78; // eax
  int v79; // r8d
  int v80; // edx
  int v81; // r9d
  int v82; // r10d
  __int64 v83; // rdx
  int v84; // [rsp+58h] [rbp-B0h]
  int v85; // [rsp+5Ch] [rbp-ACh]
  int v86; // [rsp+60h] [rbp-A8h]
  int v87; // [rsp+64h] [rbp-A4h]
  int v88; // [rsp+68h] [rbp-A0h]
  int v89; // [rsp+6Ch] [rbp-9Ch]
  int v90; // [rsp+70h] [rbp-98h]
  int v91; // [rsp+74h] [rbp-94h]
  const struct tagWND *v92; // [rsp+78h] [rbp-90h]
  int v93; // [rsp+80h] [rbp-88h]
  unsigned int v94; // [rsp+84h] [rbp-84h]
  __int128 v95; // [rsp+88h] [rbp-80h] BYREF
  ULONG_PTR v96[2]; // [rsp+98h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v98; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v99; // [rsp+C8h] [rbp-40h]
  __int64 v100; // [rsp+D8h] [rbp-30h]
  __int128 v101; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v102; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v103; // [rsp+100h] [rbp-8h] BYREF
  __int128 *v104; // [rsp+110h] [rbp+8h]
  INT v105[4]; // [rsp+118h] [rbp+10h] BYREF

  v1 = 0;
  v104 = 0LL;
  v101 = 0LL;
  v90 = 0;
  v102 = 0LL;
  v85 = 0;
  v103 = 0LL;
  ValidWindowPos = FindValidWindowPos(a1);
  if ( !ValidWindowPos )
    return 0LL;
  v5 = *(const struct tagWND **)(_HMObjectFromHandle(*(_QWORD *)ValidWindowPos) + 104);
  v92 = v5;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v5);
  v7 = (__int128 *)*((_QWORD *)a1 + 5);
  v84 = *((_DWORD *)a1 + 7) - 1;
  v89 = 1;
  if ( v84 < 0 )
  {
LABEL_149:
    v1 = 1;
    goto LABEL_150;
  }
  v8 = *((_DWORD *)a1 + 7) - 1;
  while ( !*(_QWORD *)v7 )
  {
LABEL_148:
    v7 = (__int128 *)((char *)v7 + 168);
    v84 = --v8;
    if ( v8 < 0 )
      goto LABEL_149;
  }
  LOBYTE(v6) = 1;
  v9 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)v7, v6);
  if ( !v9 || !(unsigned int)IsStillWindowC(*((HWND *)v7 + 1), v6) )
  {
    *(_QWORD *)v7 = 0LL;
    *((_DWORD *)v7 + 8) = 6159;
    goto LABEL_147;
  }
  Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v96, (__int64)v9);
  xxxProcessPreemptiveDpiChange(v9, (struct tagCVR *)v7);
  v10 = *((_DWORD *)v7 + 8);
  if ( (v10 & 0x400) == 0 )
  {
    v11 = *((_QWORD *)v7 + 1);
    xxxSendPosMessage(v9, 0x46u, (struct tagWINDOWPOS *)v7);
    v13 = *((_DWORD *)v7 + 8) | v10 & 0x1FC0000;
    *((_DWORD *)v7 + 8) = v13;
    LOBYTE(v14) = v13;
    if ( (v10 & 0x40) != 0 && (v13 & 0x40) == 0 )
    {
      NotifyShell::CuratedWindowHidden((__int64)v9, v12);
      v14 = *((_DWORD *)v7 + 8);
    }
    v15 = *((unsigned int *)v7 + 39);
    if ( (v15 & 0x20) == 0 && (v14 & 3) != 3 )
    {
      if ( (v15 & 0x200) == 0 )
        *((_QWORD *)v7 + 16) = *(_QWORD *)(*((_QWORD *)v9 + 5) + 256LL);
      v15 = (unsigned int)v15 | 0x20;
      *((_DWORD *)v7 + 39) = v15;
    }
    if ( (v14 & 4) == 0 && ((v10 & 4) != 0 || *((_WORD *)v7 + 4) != (_WORD)v11) )
    {
      if ( !(unsigned int)IsStillWindowC(*((HWND *)v7 + 1), v15) )
      {
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v96, v16);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v83);
        return 0LL;
      }
      if ( *((_WORD *)v7 + 4) != (_WORD)v11 || *((_QWORD *)v7 + 1) >= 0xFFFFFFFFFFFFFFFEuLL )
      {
        v17 = CheckTopmost((struct tagCVR *)v7);
        if ( v17 )
        {
          if ( *(_DWORD *)(*((_QWORD *)v9 + 5) + 236LL) == 1 )
            SetTopmostEnum(v9, v17 == 1, (*((_DWORD *)v7 + 8) >> 9) & 1);
        }
      }
    }
  }
  CRecalcProp::s_xxxOnWindowBecomingVisible(v9, (struct tagWINDOWPOS *)v7);
  *((_DWORD *)v7 + 39) = *((_DWORD *)v7 + 39) & 0xFFFFFFDF ^ (*((_DWORD *)v7 + 39) & 0x20 | ((v7[2] & 3) != 3 ? 0x20 : 0));
  v95 = *(_OWORD *)(*((_QWORD *)v5 + 5) + 104LL);
  if ( IsChildWindowDpiBoundary(v9) )
  {
    LogicalToPhysicalInPlaceRectWithSubpixel(v5, (int *)&v95, 0LL);
    PhysicalToLogicalInPlaceRectWithSubpixel(v9, (int *)&v95, 0LL);
  }
  v18 = *((_QWORD *)v9 + 5);
  v19 = *(_DWORD *)(v18 + 88);
  v94 = v19;
  v91 = *(_DWORD *)(v18 + 92);
  *((_DWORD *)v7 + 20) = v19;
  *((_DWORD *)v7 + 21) = v91;
  DesktopWindow = GetDesktopWindow((__int64)v9);
  v23 = DWORD2(v95);
  v86 = DWORD1(v95);
  v88 = v95;
  if ( v92 == (const struct tagWND *)DesktopWindow )
  {
    v25 = v85;
  }
  else
  {
    v19 -= v95;
    v22 -= DWORD1(v95);
    v94 = v19;
    v91 = v22;
    if ( (*(_BYTE *)(*((_QWORD *)v92 + 5) + 26LL) & 0x40) != 0
      && (v24 = *((_QWORD *)v9 + 5), (*(_BYTE *)(v24 + 31) & 0xC0) == 0x40) )
    {
      v85 = 1;
      v21 = (unsigned int)(DWORD2(v95) - *(_DWORD *)(v24 + 96));
      v25 = 1;
    }
    else
    {
      v25 = 0;
      v85 = 0;
      v21 = v19;
    }
  }
  v26 = (_DWORD *)*((_QWORD *)v9 + 5);
  v27 = v26[24] - v26[22];
  v28 = v26[25] - v26[23];
  v29 = *((unsigned int *)v7 + 8);
  v87 = v27;
  *((_DWORD *)v7 + 8) |= 0x1800u;
  if ( (v29 & 2) != 0 )
  {
    *((_DWORD *)v7 + 39) |= 0x100u;
    *((_DWORD *)v7 + 4) = v21;
    *((_DWORD *)v7 + 5) = v22;
  }
  else
  {
    if ( *((_DWORD *)v7 + 4) == (_DWORD)v21 && *((_DWORD *)v7 + 5) == v22 )
    {
      v30 = v90;
      v29 = (unsigned int)v29 | 0x1802;
      *((_DWORD *)v7 + 8) = v29;
      if ( v25 )
        v30 = 1;
      v90 = v30;
    }
    if ( (*(_BYTE *)(*((_QWORD *)v9 + 5) + 31LL) & 0x20) != 0 )
    {
      v31 = IsTrayWindow(v9, 1LL);
      v27 = v87;
      if ( v31 )
      {
        *((_DWORD *)v7 + 4) = -32000;
        *((_DWORD *)v7 + 5) = -32000;
      }
    }
  }
  if ( (v7[2] & 1) != 0 )
  {
    v35 = (_DWORD *)v7 + 6;
    *((_DWORD *)v7 + 7) = v28;
    *((_DWORD *)v7 + 6) = v27;
  }
  else
  {
    if ( (*(_BYTE *)(*((_QWORD *)v9 + 5) + 31LL) & 0x20) != 0
      && (UserSessionState = W32GetUserSessionState(v29, v21),
          GetProp((__int64)v9, *(unsigned __int16 *)(UserSessionState + 41398), 1u)) )
    {
      v35 = (_DWORD *)v7 + 6;
      *((_DWORD *)v7 + 6) = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v34, v33) + 19928) + 2124LL);
      v38 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v37, v36) + 19928) + 2128LL);
      *((_DWORD *)v7 + 7) = v38;
    }
    else
    {
      v35 = (_DWORD *)v7 + 6;
      if ( *((int *)v7 + 6) < 0 )
        *v35 = 0;
      v38 = *((_DWORD *)v7 + 7);
      if ( v38 < 0 )
      {
        *((_DWORD *)v7 + 7) = 0;
        v38 = 0;
      }
    }
    if ( *v35 == v87 && v38 == v28 )
      *((_DWORD *)v7 + 8) |= 1u;
  }
  if ( (v7[2] & 3) != 3 )
    DwmNotifyMoveReason::SendNotifications(v9);
  if ( v85 )
    *((_DWORD *)v7 + 4) = v23 - *((_DWORD *)v7 + 4) - *v35 - v88;
  v39 = *((_DWORD *)v7 + 8);
  if ( (*(_BYTE *)(*((_QWORD *)v9 + 5) + 31LL) & 0x10) != 0 )
  {
    v40 = v39 & 0xFFFFFFBF;
LABEL_64:
    *((_DWORD *)v7 + 8) = v40;
    goto LABEL_65;
  }
  v40 = v39 & 0xFFFFFF7F;
  *((_DWORD *)v7 + 8) = v40;
  if ( (v40 & 0x40) == 0 )
  {
    v40 |= 8u;
    goto LABEL_64;
  }
LABEL_65:
  v41 = v40;
  if ( (*(_BYTE *)(*((_QWORD *)v9 + 5) + 27LL) & 2) == 0 && GetStyleWindow((__int64)v9, 2818) )
  {
    v41 = v40 | 0x100;
    *((_DWORD *)v7 + 8) = v40 | 0x100;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v9 + 5) + 20LL) & 0x20) != 0 )
  {
    v41 &= ~4u;
    *((_QWORD *)v7 + 1) = 1LL;
    *((_DWORD *)v7 + 8) = v41;
  }
  if ( v89 )
  {
    if ( (v41 & 4) == 0 )
    {
      v89 = 0;
      if ( (*(_BYTE *)(*((_QWORD *)v9 + 5) + 19LL) & 4) == 0 )
      {
        if ( (unsigned int)ValidateZorder((struct tagCVR *)v7) )
        {
          *((_DWORD *)v7 + 8) |= 4u;
          v89 = 1;
        }
      }
    }
  }
  v42 = *((_DWORD *)v7 + 8);
  v43 = v42;
  if ( (v42 & 8) == 0 && ((v7[2] & 0x18E7) == 0x1807 || !(unsigned int)FChildVisible((__int64)v9)) )
  {
    v43 = v42 | 8;
    *((_DWORD *)v7 + 8) = v42 | 8;
  }
  if ( (*((_DWORD *)v7 + 39) & 0x20) != 0 && (v43 & 0x80000) == 0 && IsWindowBroadcastingDpiToChildrenX(v9) )
  {
    v44 = ValidateHmonitor(*((_QWORD *)v7 + 16));
    v45 = v44;
    v46 = v44 ? *(_WORD *)(*(_QWORD *)(v44 + 40) + 60LL) : 0;
    v47 = *((_DWORD *)v7 + 5);
    v105[0] = *((_DWORD *)v7 + 4);
    v105[2] = *((_DWORD *)v7 + 6) + v105[0];
    v48 = *((_DWORD *)v7 + 7);
    v105[1] = v47;
    v105[3] = v47 + v48;
    NewMonitor = GetNewMonitor(v9, v105, 0LL);
    if ( NewMonitor )
    {
      if ( v45 != NewMonitor && v46 != *(_WORD *)(*(_QWORD *)(NewMonitor + 40) + 60LL) )
        *((_DWORD *)v7 + 39) ^= ((unsigned __int8)*((_DWORD *)v7 + 39) ^ (unsigned __int8)((unsigned __int8)xxxAppAdjustDpiCandidateRect(v9) << 7)) & 0x80;
    }
  }
  v50 = *((_DWORD *)v7 + 8);
  if ( (v50 & 0x21) == 1 )
  {
    v64 = v91;
    goto LABEL_132;
  }
  *((_DWORD *)v7 + 39) |= 4u;
  v51 = *((_QWORD *)v9 + 5);
  v98 = 0LL;
  v100 = 0LL;
  v99 = 0LL;
  if ( (*(_BYTE *)(v51 + 31) & 0x40) == 0 && *(char *)(v51 + 24) >= 0 )
    CheckFullScreen(v9, (struct tagSIZERECT *)(v7 + 1));
  v52 = v7[1];
  v98 = *v7;
  v53 = *((_QWORD *)v7 + 4);
  v104 = &v98;
  LODWORD(v101) = *((_DWORD *)v7 + 4);
  DWORD2(v101) = *((_DWORD *)v7 + 6) + v101;
  DWORD1(v101) = *((_DWORD *)v7 + 5);
  HIDWORD(v101) = *((_DWORD *)v7 + 7) + DWORD1(v101);
  v99 = v52;
  v100 = v53;
  GetRect((__int64)v9, (__int64)&v102, 66);
  GetRect((__int64)v9, (__int64)&v103, 65);
  v54 = DWORD1(v103);
  v55 = v103;
  v56 = DWORD2(v103) - v103;
  v93 = HIDWORD(v103) - DWORD1(v103);
  v57 = xxxSendTransformableMessageTimeout(
          (struct tagTHREADINFO **)v9,
          131LL,
          1uLL,
          (struct tagDRAWITEMSTRUCT *)&v101,
          0,
          0,
          0LL,
          1,
          0);
  if ( (unsigned int)IsStillWindowC(*((HWND *)v7 + 1), v58) )
  {
    if ( v57 - 16 > 0x3F0 )
    {
      v57 = 48;
      v102 = v101;
    }
    if ( (*(_BYTE *)(*((_QWORD *)v9 + 5) + 26LL) & 0x40) != 0 )
      v60 = DWORD2(v102) - DWORD2(v103);
    else
      v60 = v102 - v103;
    *((_DWORD *)v7 + 18) = v60;
    *((_DWORD *)v7 + 19) = DWORD1(v102) - DWORD1(v103);
    *((_QWORD *)v7 + 5) = v101;
    v61 = (unsigned int)(DWORD2(v101) - v101);
    *((_DWORD *)v7 + 12) = v61;
    v62 = HIDWORD(v101) - DWORD1(v101);
    *((_DWORD *)v7 + 13) = HIDWORD(v101) - DWORD1(v101);
    if ( __PAIR64__(v54, v55) != (_QWORD)v101 )
      *((_DWORD *)v7 + 8) &= ~0x1000u;
    if ( v56 != (_DWORD)v61 || v93 != v62 )
      *((_DWORD *)v7 + 8) &= ~0x800u;
    v50 = *((_DWORD *)v7 + 8);
    if ( (v50 & 0x100) != 0 )
      goto LABEL_130;
    if ( v90 )
      goto LABEL_130;
    v63 = *((_QWORD *)v9 + 5);
    if ( (*(_BYTE *)(v63 + 24) & 0x20) != 0 )
      goto LABEL_130;
    if ( (v7[2] & 0x821) != 0x801
      || (v19 = v94, *((_DWORD *)v7 + 18) != *((_DWORD *)v7 + 4) - v94)
      || (v64 = v91, *((_DWORD *)v7 + 19) != *((_DWORD *)v7 + 5) - v91) )
    {
      if ( (v56 == (_DWORD)v61
         || (v57 & 0x100) == 0 && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v9 + 17) + 8LL) + 8LL) & 2) == 0)
        && (v93 == *((_DWORD *)v7 + 13)
         || (v57 & 0x200) == 0 && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v9 + 17) + 8LL) + 8LL) & 1) == 0) )
      {
        v65 = DWORD2(v103) - v103;
        v66 = HIDWORD(v103) - DWORD1(v103);
        v67 = v102;
        v68 = DWORD2(v102) - v102;
        v69 = DWORD1(v102);
        v70 = HIDWORD(v102) - DWORD1(v102);
        v71 = *(_BYTE *)(v63 + 26) & 0x40;
        if ( (v71 != 0) != ((v57 >> 7) & 1) )
        {
          if ( v71 && v65 > v68 )
            v72 = v65 - v68;
          else
            v72 = v68 - v65;
          v67 = v72 + v102;
          LODWORD(v102) = v72 + v102;
        }
        if ( (v57 & 0x40) != 0 )
        {
          v69 = HIDWORD(v102) - v66;
          DWORD1(v102) = HIDWORD(v102) - v66;
        }
        if ( v65 < v68 )
          DWORD2(v102) = v67 + v65;
        if ( v66 < v70 )
          HIDWORD(v102) = v69 + v66;
        *(__int128 *)((char *)v7 + 56) = v102;
        v5 = v92;
        if ( v92 != (const struct tagWND *)GetDesktopWindow((__int64)v9) )
        {
          *((_DWORD *)v7 + 14) += v88;
          *((_DWORD *)v7 + 16) += v88;
          *((_DWORD *)v7 + 17) += v86;
          *((_DWORD *)v7 + 15) += v86;
        }
LABEL_145:
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v96, v73);
        goto LABEL_147;
      }
LABEL_130:
      *(__int128 *)((char *)v7 + 56) = 0LL;
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v96, v61);
      v5 = v92;
LABEL_147:
      v8 = v84;
      goto LABEL_148;
    }
LABEL_132:
    if ( (v50 & 0x100) != 0 )
    {
      *(__int128 *)((char *)v7 + 56) = 0LL;
    }
    else
    {
      v74 = *((_DWORD *)v7 + 5);
      *((_DWORD *)v7 + 14) = *((_DWORD *)v7 + 4);
      *((_DWORD *)v7 + 15) = v74;
      if ( v92 != (const struct tagWND *)GetDesktopWindow((__int64)v9) )
      {
        v75 += v88;
        v76 += v86;
        *((_DWORD *)v7 + 14) = v75;
        *((_DWORD *)v7 + 15) = v76;
      }
      *((_DWORD *)v7 + 16) = v75 + *((_DWORD *)v7 + 6);
      *((_DWORD *)v7 + 17) = v76 + *((_DWORD *)v7 + 7);
    }
    v77 = *((_DWORD *)v7 + 4);
    if ( (*(_BYTE *)(*((_QWORD *)v9 + 5) + 26LL) & 0x40) != 0 )
      v73 = v77 + *((_DWORD *)v7 + 6) - v87 - v19;
    else
      v73 = v77 - v19;
    *((_DWORD *)v7 + 18) = v73;
    v78 = *((_DWORD *)v7 + 8);
    v79 = *((_DWORD *)v7 + 5) - v64;
    *((_DWORD *)v7 + 19) = v79;
    if ( (v78 & 2) != 0 )
    {
      v5 = v92;
    }
    else
    {
      *((_DWORD *)v7 + 8) = v78 & 0xFFFFEFFF;
      *((_DWORD *)v7 + 10) = v73 + *(_DWORD *)(*((_QWORD *)v9 + 5) + 104LL);
      *((_DWORD *)v7 + 11) = v79 + *(_DWORD *)(*((_QWORD *)v9 + 5) + 108LL);
      v5 = v92;
      if ( v92 != (const struct tagWND *)GetDesktopWindow((__int64)v9) )
      {
        *((_DWORD *)v7 + 10) = v81 - v88;
        *((_DWORD *)v7 + 11) = v80 - v82;
      }
      *((_DWORD *)v7 + 12) = *(_DWORD *)(*((_QWORD *)v9 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v9 + 5) + 104LL);
      v73 = (unsigned int)(*(_DWORD *)(*((_QWORD *)v9 + 5) + 116LL) - *(_DWORD *)(*((_QWORD *)v9 + 5) + 108LL));
      *((_DWORD *)v7 + 13) = v73;
    }
    goto LABEL_145;
  }
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v96, v59);
LABEL_150:
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v6);
  return v1;
}
