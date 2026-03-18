/*
 * XREFs of ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F6650
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F88D0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C000AE0C (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     CreateSpb @ 0x1C000DCF4 (CreateSpb.c)
 *     SetOldRedirectionBitmap @ 0x1C001405C (SetOldRedirectionBitmap.c)
 *     RecreateRedirectionBitmap @ 0x1C00229DC (RecreateRedirectionBitmap.c)
 *     SelectWindowRgn @ 0x1C002387C (SelectWindowRgn.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C002433C (DeleteOrSetRedirectionBitmap.c)
 *     DecomposeWindowIfNeeded @ 0x1C00243EC (DecomposeWindowIfNeeded.c)
 *     SetRedrawProp @ 0x1C003BD1C (SetRedrawProp.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C004FB80 (xxxInternalInvalidate.c)
 *     GreClientRgnUpdated @ 0x1C0051264 (GreClientRgnUpdated.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00A4B9C (UpdateMonitorForWindowAndChildren.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     IntersectRect @ 0x1C00AEB30 (IntersectRect.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C00AF408 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     PWInsertAfter @ 0x1C00AF788 (PWInsertAfter.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00AF84C (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00B1464 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00B14A8 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PostShellHookMessagesEx @ 0x1C00B2C00 (PostShellHookMessagesEx.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C00B48E0 (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     ComposeWindowIfNeeded @ 0x1C00B4A8C (ComposeWindowIfNeeded.c)
 *     UpdateSprite @ 0x1C00B5498 (UpdateSprite.c)
 *     OffsetChildren @ 0x1C00B5A7C (OffsetChildren.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     LinkWindow @ 0x1C00B5F60 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     SetVisible @ 0x1C00EDEE8 (SetVisible.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C00EF6FC (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     zzzCalcStartCursorHide @ 0x1C00EF950 (zzzCalcStartCursorHide.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C00F6584 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     GetNewMonitor @ 0x1C010C10C (GetNewMonitor.c)
 *     UnlinkWindow @ 0x1C010C350 (UnlinkWindow.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     InvalidateGDIWindows @ 0x1C01BD484 (InvalidateGDIWindows.c)
 *     IsSmallerThanScreen @ 0x1C0221600 (IsSmallerThanScreen.c)
 */

__int64 __fastcall zzzChangeStates(struct tagWND *a1, struct tagSMWP *a2)
{
  int v2; // r15d
  unsigned int v3; // edi
  int v4; // r13d
  struct tagWND *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 *v13; // rsi
  __int64 v14; // rcx
  int v15; // ebx
  int i; // eax
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 *v21; // r15
  unsigned __int64 v22; // rcx
  int v23; // ecx
  unsigned int v24; // r14d
  int v25; // edx
  __int64 NewMonitor; // rbx
  __int64 v27; // r9
  __int16 v28; // cx
  __int64 v29; // r8
  _DWORD *v30; // r8
  int v31; // eax
  __int64 v32; // rcx
  int v33; // edx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v40; // rcx
  _DWORD *v41; // r14
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // r9d
  struct tagWND *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // r10d
  int v49; // r11d
  _DWORD *v50; // rdx
  int v51; // r12d
  int v52; // ecx
  unsigned int v53; // r12d
  int v54; // r13d
  unsigned int v55; // r13d
  __int64 v56; // rax
  int v57; // ecx
  __int64 v58; // rax
  int v59; // ecx
  struct tagWND *v60; // rbx
  __int64 v61; // r14
  __int64 v62; // rcx
  __int128 v63; // xmm0
  __int64 v64; // rcx
  int v65; // eax
  struct tagWND *v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // ebx
  __int64 v72; // rcx
  unsigned __int64 v73; // rcx
  int v74; // ebx
  int v75; // eax
  _DWORD *v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  unsigned __int64 v79; // rax
  __int64 v80; // rdx
  struct tagWND *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rcx
  int v85; // eax
  int v86; // edx
  int v87; // ebx
  bool v88; // al
  __int64 v89; // r14
  __int64 v90; // rcx
  BOOL v91; // r9d
  int v92; // edx
  int v93; // eax
  BOOL v94; // ecx
  int v95; // ecx
  int v96; // edx
  int v97; // ebx
  int v98; // ecx
  int v99; // r12d
  int v100; // r13d
  int v101; // ecx
  __int64 v102; // rcx
  char v103; // bl
  __int64 v104; // r8
  _DWORD *v105; // rdx
  __int64 v106; // rax
  __int64 j; // rbx
  char v108; // bl
  int v109; // r8d
  LONG v110; // edx
  int v111; // eax
  HSURF v112; // rbx
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 DesktopWindow; // rax
  __int64 v116; // rdx
  int v117; // r9d
  unsigned __int64 v118; // rbx
  __int64 v119; // rdx
  unsigned int v120; // r8d
  __int64 v121; // rdx
  __int64 v122; // r8
  __int16 v123; // dx
  int v124; // [rsp+60h] [rbp-A0h]
  unsigned int updated; // [rsp+64h] [rbp-9Ch]
  _BYTE v126[4]; // [rsp+68h] [rbp-98h] BYREF
  int v127; // [rsp+6Ch] [rbp-94h]
  int v128; // [rsp+70h] [rbp-90h]
  struct tagWND *v129; // [rsp+78h] [rbp-88h]
  int v130; // [rsp+80h] [rbp-80h]
  int v131; // [rsp+84h] [rbp-7Ch]
  __int64 v132; // [rsp+88h] [rbp-78h] BYREF
  __int64 v133; // [rsp+90h] [rbp-70h]
  struct tagSMWP *v134; // [rsp+98h] [rbp-68h]
  struct tagSIZE v135; // [rsp+A0h] [rbp-60h] BYREF
  struct tagPOINT v136; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v137; // [rsp+B0h] [rbp-50h] BYREF
  int v138; // [rsp+B8h] [rbp-48h]
  int v139; // [rsp+BCh] [rbp-44h]
  __int128 v140; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v141; // [rsp+D0h] [rbp-30h]
  __int128 v142; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v143; // [rsp+E8h] [rbp-18h]
  __int128 v144; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v145; // [rsp+100h] [rbp+0h] BYREF
  __int128 v146; // [rsp+110h] [rbp+10h] BYREF

  v2 = 0;
  v134 = a2;
  updated = 0;
  v143 = 0LL;
  v141 = 0LL;
  v3 = 0;
  v131 = 0;
  v142 = 0LL;
  v4 = 0;
  v124 = 0;
  v140 = 0LL;
  v129 = a1;
  v6 = a1;
  AtomicExecutionCheck::EnforceConsistency(a1);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v8, v7, v9);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  ThreadLockAlways(v6, &v140);
  v13 = (__int64 *)*((_QWORD *)a2 + 5);
  v14 = 1LL;
  v15 = *((_DWORD *)a2 + 7) - 1;
  v127 = v15;
  if ( v15 < 0 )
    goto LABEL_40;
  for ( i = v15; i >= 0; v127 = i )
  {
    v17 = *v13;
    v128 = 0;
    v130 = 0;
    v132 = 0LL;
    v144 = 0LL;
    if ( !v17 )
      goto LABEL_36;
    v18 = 0LL;
    PsGetThreadWin32Thread(KeGetCurrentThread());
    v11 = (unsigned __int16)v17;
    if ( (unsigned __int64)(unsigned __int16)v17 >= *(_QWORD *)(gpsi + 8LL) )
      goto LABEL_188;
    v19 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v17;
    v21 = (__int64 *)HMPkheFromPhe(v19);
    LOWORD(v17) = WORD1(v17) & 0x7FFF;
    if ( (WORD1(v17) & 0x7FFF) != *(_WORD *)(v19 + 26)
      && (_WORD)v17 != 0x7FFF
      && ((_WORD)v17 || !PsGetCurrentProcessWow64Process(v20, v11, v12)) )
    {
      v2 = 0;
LABEL_188:
      *((_DWORD *)v13 + 8) = 6159;
      *v13 = 0LL;
      goto LABEL_13;
    }
    if ( (*(_BYTE *)(v19 + 25) & 1) != 0 || *(_BYTE *)(v19 + 24) != 1 )
    {
      v2 = 0;
      goto LABEL_188;
    }
    v18 = *v21;
    v2 = 0;
    if ( !v18 )
      goto LABEL_188;
    v22 = v13[1];
    if ( v22 >= 2 && v22 != -2LL && v22 != -1LL && !HMValidateHandleNoSecure(v22, 1) )
      goto LABEL_188;
LABEL_13:
    v23 = v13[4] & 0x18E7;
    if ( v23 != 6151 )
    {
      if ( v23 == 6147
        && (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 19LL) & 4) == 0
        && (unsigned int)ValidateZorder((struct tagCVR *)v13) )
      {
        *((_DWORD *)v13 + 8) |= 0xCu;
        v83 = v13[12];
        if ( v83 )
        {
          GreDeleteObject(v83);
          v13[12] = 0LL;
        }
        goto LABEL_35;
      }
      if ( (v13[4] & 0x1803) == 0x1803 )
        goto LABEL_16;
      v40 = *(_QWORD *)(v18 + 40);
      if ( (*(_BYTE *)(v40 + 27) & 0x20) == 0 && (*(_BYTE *)(v40 + 26) & 8) == 0
        || (v96 = *(_DWORD *)(v40 + 100) - *(_DWORD *)(v40 + 92),
            LODWORD(v133) = *(_DWORD *)(v40 + 96) - *(_DWORD *)(v40 + 88),
            HIDWORD(v133) = v96,
            (_DWORD)v133 == *((_DWORD *)v13 + 6))
        && v96 == *((_DWORD *)v13 + 7) )
      {
        v133 = v132;
      }
      else
      {
        v128 = 1;
      }
      v41 = (_DWORD *)v13 + 5;
      if ( *(_DWORD *)(v40 + 88) != *((_DWORD *)v13 + 4) || *(_DWORD *)(v40 + 92) != *v41 )
        v130 = 1;
      v144 = *(_OWORD *)(*((_QWORD *)v6 + 5) + 104LL);
      if ( IsChildWindowDpiBoundary((const struct tagWND *)v18) )
      {
        v118 = 0LL;
        if ( (*((_DWORD *)v13 + 39) & 0x100) == 0 )
        {
          v118 = v18 + 224;
          *(_DWORD *)(v18 + 228) = 0;
          *(_DWORD *)(v18 + 224) = 0;
        }
        LogicalToPhysicalInPlaceRectWithSubpixel(v6, (int *)&v144, v118);
        PhysicalToLogicalInPlaceRectWithSubpixel((const struct tagWND *)v18, (int *)&v144, v118);
        v124 = 1;
      }
      v42 = *(_QWORD *)(v18 + 40);
      v43 = *(unsigned int *)(v42 + 88);
      v44 = *(_DWORD *)(v42 + 92);
      *(_DWORD *)(v42 + 88) = *((_DWORD *)v13 + 4);
      *(_DWORD *)(*(_QWORD *)(v18 + 40) + 92LL) = *v41;
      v45 = 0LL;
      v46 = *(_QWORD *)(v18 + 24);
      if ( v46 )
      {
        v47 = *(_QWORD *)(v46 + 8);
        if ( v47 )
          v45 = *(struct tagWND **)(v47 + 24);
      }
      v48 = DWORD1(v144);
      v49 = v144;
      if ( v6 != v45 )
      {
        *(_DWORD *)(*(_QWORD *)(v18 + 40) + 88LL) += v144;
        *(_DWORD *)(*(_QWORD *)(v18 + 40) + 92LL) += v48;
      }
      v50 = *(_DWORD **)(v18 + 40);
      v51 = v50[22];
      v52 = *((_DWORD *)v13 + 6) + v51;
      v53 = v51 - v43;
      v54 = v50[23];
      v50[24] = v52;
      v55 = v54 - v44;
      *(_DWORD *)(*(_QWORD *)(v18 + 40) + 100LL) = *((_DWORD *)v13 + 7) + *(_DWORD *)(*(_QWORD *)(v18 + 40) + 92LL);
      v56 = *(_QWORD *)(v18 + 40);
      v57 = *(_DWORD *)(v56 + 88);
      if ( *(_DWORD *)(v56 + 96) < v57 )
        *(_DWORD *)(v56 + 96) = v57;
      v58 = *(_QWORD *)(v18 + 40);
      v59 = *(_DWORD *)(v58 + 92);
      if ( *(_DWORD *)(v58 + 100) < v59 )
        *(_DWORD *)(v58 + 100) = v59;
      if ( v18 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 304LL) )
      {
        DesktopWindow = GetDesktopWindow(v18);
        v60 = v129;
        if ( v129 != (struct tagWND *)DesktopWindow )
        {
          v43 = (unsigned int)(v43 - v49);
          v117 -= v48;
        }
        if ( (unsigned int)v43 | v117 )
        {
          *(_DWORD *)(v116 + 324) += v43;
          *(_DWORD *)(v116 + 328) += v117;
        }
      }
      else
      {
        v60 = v129;
      }
      v61 = v18 + 40;
      v62 = *(_QWORD *)(v18 + 40);
      v63 = *(_OWORD *)(v62 + 104);
      *(_DWORD *)(v62 + 104) = *((_DWORD *)v13 + 10);
      v64 = *(_QWORD *)(v18 + 40);
      v65 = *((_DWORD *)v13 + 11);
      v144 = v63;
      *(_DWORD *)(v64 + 108) = v65;
      v66 = 0LL;
      v67 = *(_QWORD *)(v18 + 24);
      if ( v67 )
      {
        v68 = *(_QWORD *)(v67 + 8);
        if ( v68 )
          v66 = *(struct tagWND **)(v68 + 24);
      }
      if ( v60 != v66 )
      {
        *(_DWORD *)(*(_QWORD *)v61 + 104LL) += v49;
        *(_DWORD *)(*(_QWORD *)v61 + 108LL) += v48;
      }
      *(_DWORD *)(*(_QWORD *)v61 + 112LL) = *((_DWORD *)v13 + 12) + *(_DWORD *)(*(_QWORD *)v61 + 104LL);
      *(_DWORD *)(*(_QWORD *)v61 + 116LL) = *((_DWORD *)v13 + 13) + *(_DWORD *)(*(_QWORD *)v61 + 108LL);
      v69 = *(_QWORD *)v61;
      v70 = v144 - *(_QWORD *)(*(_QWORD *)v61 + 104LL);
      if ( (_QWORD)v144 == *(_QWORD *)(*(_QWORD *)v61 + 104LL) )
        v70 = *((_QWORD *)&v144 + 1) - *(_QWORD *)(v69 + 112);
      LOBYTE(v2) = v70 == 0;
      v71 = v13[4] & 8;
      if ( (*(_BYTE *)(v69 + 21) & 8) == 0 )
      {
LABEL_66:
        if ( v128 )
        {
          *((_DWORD *)v13 + 39) |= 1u;
          v102 = *(_QWORD *)v61;
          if ( (*(_BYTE *)(*(_QWORD *)v61 + 27LL) & 0x20) != 0 && (v103 = *(_BYTE *)(v102 + 26), (v103 & 0x20) == 0) )
          {
            v108 = v103 & 8;
            v109 = *(_DWORD *)(v102 + 92) - *((_DWORD *)v13 + 21);
            v110 = *(_DWORD *)(v102 + 88) - *((_DWORD *)v13 + 20);
            v132 = 0LL;
            v111 = RecreateRedirectionBitmap(
                     (struct tagWND *)v18,
                     v110,
                     v109,
                     0,
                     0,
                     (HSURF *)((unsigned __int64)&v132 & -(__int64)(v108 != 0)));
            updated = v111;
            if ( v108 && v111 >= 0 )
            {
              v112 = (HSURF)v132;
              if ( v132 )
              {
                if ( (unsigned int)SetOldRedirectionBitmap(v18, v132) )
                  v112 = 0LL;
              }
              else
              {
                AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v126);
                xxxInternalInvalidate((struct tagWND *)v18, (HRGN)1, 0x401u);
                AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v126, v121, v122);
              }
            }
            else
            {
              v112 = (HSURF)v132;
            }
            if ( v112 )
              DeleteOrSetRedirectionBitmap(v18, v112, 1);
          }
          else if ( (unsigned int)IsWindowDesktopComposed(v18) )
          {
            v105 = *(_DWORD **)v61;
            v135.cx = v105[24] - v105[22];
            v135.cy = v105[25] - v105[23];
            updated = UpdateSprite(
                        *(HDEV *)(gpDispInfo + 40LL),
                        (const struct tagWND *)v18,
                        v104,
                        0LL,
                        0LL,
                        &v135,
                        0LL,
                        0LL,
                        0,
                        0LL,
                        0,
                        0LL);
          }
        }
        if ( (v53 || v55) && (*(_BYTE *)(*(_QWORD *)v61 + 21LL) & 8) == 0 )
        {
          v72 = *(_QWORD *)(*(_QWORD *)v61 + 168LL);
          if ( v72 )
            GreOffsetRgn(v72, v53, v55);
        }
        if ( v13[9] || v124 )
        {
          v73 = *(_QWORD *)(*(_QWORD *)v61 + 136LL);
          if ( v73 > 1 )
            GreOffsetRgn(v73, *((unsigned int *)v13 + 18), *((unsigned int *)v13 + 19));
          OffsetChildren((struct tagWND *)v18, *((_DWORD *)v13 + 18), *((_DWORD *)v13 + 19), 0LL);
        }
        if ( v130 || !v2 || v53 || v55 )
        {
          v74 = 0;
          v136 = *(struct tagPOINT *)(*(_QWORD *)v61 + 88LL);
          v145 = 0LL;
          if ( v130 )
          {
            v75 = *(_DWORD *)(v18 + 320);
            if ( (v75 & 0x400) != 0 )
            {
              v114 = *(_QWORD *)v18;
              *(_DWORD *)(v18 + 320) = v75 & 0xFFFFFBFF;
              PostShellHookMessagesEx(0x36u, v114, 0LL);
            }
            v76 = *(_DWORD **)v61;
            if ( (*(_BYTE *)(*(_QWORD *)v61 + 26LL) & 8) != 0 )
            {
              v97 = v128;
              if ( v128 )
              {
                v98 = v76[24] - v76[22];
                v99 = -v53;
                v100 = -v55;
                v137 = 0LL;
                v138 = v98;
                v101 = v76[25] - v76[23];
                DWORD2(v145) = v99 + v133;
                v139 = v101;
                HIDWORD(v145) = v100 + HIDWORD(v133);
                *(_QWORD *)&v145 = __PAIR64__(v100, v99);
                IntersectRect(&v145, (int *)&v145, (int *)&v137);
              }
              if ( WPP_MAIN_CB.AlignmentRequirement )
              {
                InvalidateGDIWindows(v18);
                GreClientRgnUpdated((Gre::Base *)1);
              }
              if ( !v97 || (v74 = 1, (unsigned int)IsWindowDesktopComposed(v18)) )
                v74 = 0;
            }
          }
          if ( (*(_BYTE *)(*(_QWORD *)v61 + 26LL) & 8) != 0 )
            updated = UpdateSprite(
                        *(HDEV *)(gpDispInfo + 40LL),
                        (const struct tagWND *)v18,
                        gpDispInfo,
                        0LL,
                        &v136,
                        0LL,
                        0LL,
                        0LL,
                        0,
                        0LL,
                        0,
                        (struct tagRECT *)((unsigned __int64)&v145 & -(__int64)(v74 != 0)));
          if ( v130 )
            goto LABEL_87;
        }
        if ( v128 )
        {
LABEL_87:
          v77 = *(_QWORD *)(v18 + 40);
          if ( (*(_BYTE *)(v77 + 27) & 0x20) != 0 && (*(_BYTE *)(v77 + 26) & 0x20) == 0 )
          {
            v78 = *(_QWORD *)(gptiCurrent + 672LL);
            if ( (!v78 || (*(_DWORD *)(v78 + 200) & 0x80000) == 0)
              && !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter((HWND *)v18) )
            {
              *(_DWORD *)(v18 + 320) &= ~0x20000u;
              RecreateRedirectionBitmap((struct tagWND *)v18, 0, 0, 0, 0, 0LL);
            }
          }
        }
        v6 = v129;
        v4 = v124;
LABEL_16:
        v24 = updated;
        if ( (v13[4] & 4) == 0 )
        {
          v79 = v13[1];
          if ( v79 >= 2 && (v79 == 0xFFFF || v79 >= 0xFFFFFFFFFFFFFFFDuLL)
            || (v124 = v4, !(unsigned int)ValidateWindowPos((struct tagCVR *)v13, v6)) )
          {
            *((_DWORD *)v13 + 8) |= 4u;
            SetOrClrWF(0, (__int64 *)v18, 0x304u, 1);
            v24 = updated;
          }
          else
          {
            UnlinkWindow(v18, v6);
            v81 = (struct tagWND *)PWInsertAfter(v13[1], v80);
            LinkWindow((struct tagWND *)v18, v81, (__int64 *)v6);
            v82 = *(_QWORD *)(v18 + 40);
            ++v131;
            if ( (*(_BYTE *)(v82 + 19) & 4) != 0 )
            {
              SetOrClrWF(0, (__int64 *)v18, 0x304u, 1);
              *(_BYTE *)(*(_QWORD *)(v18 + 40) + 24LL) ^= 8u;
            }
            v124 = v4;
          }
        }
        v25 = *((_DWORD *)v13 + 39);
        if ( (v25 & 0x20) != 0 && (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 31LL) & 0x20) == 0 )
        {
          v144 = 0LL;
          if ( (v25 & 0x80u) != 0 )
            v144 = *(_OWORD *)(v13 + 17);
          NewMonitor = GetNewMonitor((struct tagWND *)v18);
          if ( NewMonitor )
          {
            if ( ValidateHmonitor(v13[16]) != NewMonitor )
              goto LABEL_209;
            v27 = *(_QWORD *)(v18 + 40);
            v28 = *(_WORD *)(v27 + 286);
            if ( v28 )
            {
              v29 = NewMonitor + 40;
              if ( *(_WORD *)(*(_QWORD *)(NewMonitor + 40) + 60LL) != v28
                && (*(_DWORD *)(v27 + 288) & 0xF) == 2
                && (*(_DWORD *)(*(_QWORD *)(v18 + 16) + 648LL) & 0x2000000) == 0
                && (unsigned int)IsTopLevelWindow(v18) )
              {
                goto LABEL_209;
              }
            }
            else
            {
              v29 = NewMonitor + 40;
            }
            if ( (*(_BYTE *)(v27 + 288) & 0xF) == 3 )
            {
              v123 = *(_WORD *)(*(_QWORD *)v29 + 84LL);
              if ( v123 != ((*(_DWORD *)(v27 + 288) >> 8) & 0x1FF) && v123 != *(_WORD *)(v18 + 304) )
LABEL_209:
                *((_DWORD *)v13 + 39) ^= (*((_DWORD *)v13 + 39) ^ ((unsigned int)UpdateMonitorForWindowAndChildren(
                                                                                   (struct tagWND **)v18,
                                                                                   NewMonitor,
                                                                                   v13 + 20,
                                                                                   0) << 6)) & 0x40;
            }
          }
        }
        ThreadLockAlways(v18, &v142);
        v31 = *((_DWORD *)v13 + 8);
        if ( (v31 & 0x40) == 0 )
        {
          if ( (v31 & 0x80u) != 0 )
          {
            v94 = IsTrayWindow((struct tagWND *)v18, 1);
            v2 = 0;
            if ( (v13[4] & 0x1F) != 0x1F && v94 && (*(_WORD *)(*(_QWORD *)(v18 + 40) + 42LL) & 0x2FFF) != 0x2AA )
            {
              updated = v24;
              v124 = v4;
              *((_DWORD *)v134 + 6) |= 1u;
              *((_DWORD *)v13 + 8) |= 0x20000000u;
            }
            SetRedrawProp(v18, 0);
            if ( (unsigned int)SetVisible((struct tagWND *)v18, 0xAu) )
              DecomposeWindowIfNeeded((struct tagWND *)v18);
            v95 = 3;
            if ( !gdwDeferWinEvent )
              v95 = 1;
            xxxWindowEvent(0x8003u, (struct tagWND *)v18, 0, 0, v95);
          }
          else
          {
            v2 = 0;
          }
LABEL_29:
          v32 = *(_QWORD *)(v18 + 40);
          if ( (*(_BYTE *)(v32 + 31) & 0x10) != 0 )
          {
            v33 = *((_DWORD *)v13 + 8);
            if ( (v33 & 0x8000) != 0 || (*(_BYTE *)(v32 + 21) & 1) == 0 && (v33 & 8) != 0 )
              SetOrClrWF(1, (__int64 *)v18, 0x108u, 1);
          }
          v34 = v13[14];
          if ( v34 )
            SelectWindowRgn((struct tagWND *)v18, v34, ((*((_DWORD *)v13 + 8) >> 3) & 1) == 0);
          ThreadUnlock1(v32, v34, v30);
          v6 = v129;
          goto LABEL_35;
        }
        v84 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 424LL);
        if ( (*(_DWORD *)(v84 + 12) & 0x40) != 0 )
          zzzCalcStartCursorHide(v84, 5000LL);
        SetRedrawProp(v18, 0);
        v85 = SetVisible((struct tagWND *)v18, 9u);
        v86 = 3;
        v87 = v85;
        if ( !gdwDeferWinEvent )
          v86 = 1;
        xxxWindowEvent(0x8002u, (struct tagWND *)v18, 0, 0, v86);
        if ( v87 )
        {
          *((_DWORD *)v13 + 39) |= 2u;
          if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 26LL) & 8) == 0 )
            updated = ComposeWindowIfNeeded((struct tagWND *)v18, 0);
        }
        v88 = IsTrayWindow((struct tagWND *)v18, 1);
        v89 = v18 + 40;
        v90 = *(_QWORD *)(v18 + 40);
        v30 = (_DWORD *)((char *)v134 + 24);
        v91 = v88;
        if ( (*(_WORD *)(v90 + 42) & 0x2FFF) == 0x2AA )
        {
          if ( (*(_BYTE *)(v90 + 16) & 0x40) != 0 )
          {
            *v30 |= 1u;
            v92 = *((_DWORD *)v13 + 8) | 0x40000000;
            *((_DWORD *)v13 + 8) = v92;
          }
          else
          {
            v92 = *((_DWORD *)v13 + 8);
          }
          v93 = v92;
          v124 = v4;
        }
        else
        {
          if ( (*(_BYTE *)(v90 + 16) & 0x40) != 0 )
          {
            *v30 |= 1u;
            v92 = *((_DWORD *)v13 + 8) | 0x40000000;
            *((_DWORD *)v13 + 8) = v92;
          }
          else
          {
            v92 = *((_DWORD *)v13 + 8);
          }
          v93 = v92;
          if ( !v91 && !*(_QWORD *)(v18 + 120) )
            goto LABEL_118;
          *v30 |= 1u;
          v92 = *((_DWORD *)v13 + 8) | 0x10000000;
          v124 = v4;
          *((_DWORD *)v13 + 8) = v92;
          v93 = v92;
          if ( !v91 )
          {
            *((_DWORD *)v13 + 39) |= 8u;
LABEL_118:
            v124 = v4;
            v2 = 0;
LABEL_148:
            if ( !*(_QWORD *)(v18 + 120) )
            {
              LOWORD(v92) = v93;
              if ( (v93 & 0x40000000) != 0 )
                *((_DWORD *)v13 + 39) |= 0x10u;
            }
            if ( (*(_BYTE *)(*(_QWORD *)v89 + 20LL) & 0x40) != 0 )
            {
              *v30 |= 1u;
              *((_DWORD *)v13 + 8) |= 0x80000000;
              v92 = *((_DWORD *)v13 + 8);
            }
LABEL_153:
            if ( (v92 & 0x4008) != 8
              && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 136) + 8LL) + 9LL) & 8) != 0
              && *(_QWORD *)(v18 + 24) == grpdeskRitInput )
            {
              v106 = *(_QWORD *)(v18 + 104);
              v144 = 0LL;
              for ( j = *(_QWORD *)(v106 + 112); j; j = *(_QWORD *)(j + 88) )
              {
                if ( j == v18 )
                {
                  CreateSpb((struct tagWND *)v18, 0, *(_QWORD *)(gpDispInfo + 56LL));
                  break;
                }
                v113 = *(_QWORD *)(j + 40);
                if ( (*(_BYTE *)(v113 + 31) & 0x10) != 0 )
                {
                  v146 = *(_OWORD *)(v113 + 88);
                  TransformRectBetweenCoordinateSpaces(&v146, &v146, v18, j);
                  if ( (unsigned int)IntersectRect(&v144, (int *)(*(_QWORD *)v89 + 88LL), (int *)&v146) )
                    break;
                }
              }
              v4 = v124;
            }
            else
            {
              v4 = v124;
            }
            goto LABEL_29;
          }
        }
        v2 = 0;
        if ( v91 )
          goto LABEL_153;
        goto LABEL_148;
      }
      if ( *(_DWORD *)*gpDispInfo <= 1u || (unsigned int)IsSmallerThanScreen(v18, v69, v43, 0LL) )
      {
        v120 = v71 == 0;
        v119 = 0LL;
      }
      else
      {
        if ( *(_QWORD *)(*(_QWORD *)v61 + 168LL) )
          goto LABEL_66;
        v119 = 2LL;
        v120 = v71 == 0;
      }
      SelectWindowRgn((struct tagWND *)v18, v119, v120);
      goto LABEL_66;
    }
    *((_DWORD *)v13 + 8) |= 8u;
LABEL_35:
    i = v127;
    v14 = 1LL;
LABEL_36:
    v13 += 21;
    --i;
  }
  if ( v131 )
    xxxWindowEvent(0x8004u, v6, -4, 0, gdwDeferWinEvent != 0 ? 2 : 0);
  v3 = updated;
LABEL_40:
  ThreadUnlock1(v14, v11, v12);
  v38 = PsGetCurrentThreadWin32Thread(v36, v35, v37);
  --*(_DWORD *)(v38 + 48);
  return v3;
}
