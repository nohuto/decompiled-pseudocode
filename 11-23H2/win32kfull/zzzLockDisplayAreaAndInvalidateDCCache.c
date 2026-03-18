/*
 * XREFs of zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004E3A0
 * Callers:
 *     zzzResetSharedDesktops @ 0x1C001CC80 (zzzResetSharedDesktops.c)
 *     UnsetLayeredWindow @ 0x1C00264A8 (UnsetLayeredWindow.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C003B99C (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     zzzLockWindowUpdate2 @ 0x1C008B518 (zzzLockWindowUpdate2.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00A47A4 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxSetLayeredWindow @ 0x1C00ABE84 (xxxSetLayeredWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00ACC1C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowStyle @ 0x1C00EF138 (xxxSetWindowStyle.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F88D0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C0224300 (xxxMinimizeHungWindow.c)
 *     xxxScrollWindowEx @ 0x1C022E570 (xxxScrollWindowEx.c)
 * Callees:
 *     SpbCheckRect @ 0x1C000BF1C (SpbCheckRect.c)
 *     GreSelectRedirectionBitmap @ 0x1C004BE50 (GreSelectRedirectionBitmap.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0050300 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     GreClientRgnUpdated @ 0x1C0051264 (GreClientRgnUpdated.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0051314 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     DwmAsyncShowSprite @ 0x1C008A4E8 (DwmAsyncShowSprite.c)
 *     IsWindowBeingDestroyed @ 0x1C00AD46C (IsWindowBeingDestroyed.c)
 *     IntersectRect @ 0x1C00AEB30 (IntersectRect.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     IsDesktopWindow @ 0x1C00B3188 (IsDesktopWindow.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     GetStyleWindow @ 0x1C01199B0 (GetStyleWindow.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     InvalidateGDIWindows @ 0x1C01BD484 (InvalidateGDIWindows.c)
 *     GreLockDisplayArea @ 0x1C0283140 (GreLockDisplayArea.c)
 */

__int64 __fastcall zzzLockDisplayAreaAndInvalidateDCCache(__int64 a1, char a2, __int64 a3)
{
  char v3; // si
  unsigned int v5; // r12d
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 *i; // rbx
  int v11; // edx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // edx
  LONG bottom; // r14d
  int v20; // ecx
  LONG left; // edi
  LONG right; // esi
  LONG top; // r15d
  unsigned int v24; // r12d
  __int64 StyleWindow; // rax
  __int64 v26; // rax
  int v27; // edx
  int v28; // ecx
  struct tagWND *v29; // rdi
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r10
  unsigned __int8 v33; // cl
  bool v34; // zf
  unsigned int v35; // ebx
  unsigned int v36; // edi
  __int64 v37; // rsi
  struct Gre::Base::SESSION_GLOBALS *v38; // r14
  __int64 v39; // rbx
  Gre::Base *v40; // rcx
  Gre::Base *v41; // rcx
  int v42; // edi
  __int64 *ThreadWin32Thread; // rax
  Gre::Base *v44; // rcx
  __int64 v45; // rax
  struct Gre::Base::SESSION_GLOBALS *v46; // rdi
  Gre::Base *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  struct Gre::Base::SESSION_GLOBALS *v50; // rbx
  __int64 v51; // r13
  __int64 v52; // rsi
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // r14
  __int64 v56; // r9
  const struct tagWND **v57; // r15
  const struct tagWND *v58; // r15
  const struct tagWND *v59; // rsi
  __int64 v60; // rdx
  _WORD *v61; // rcx
  __int128 *v62; // r14
  __int64 v63; // r13
  __int64 v64; // xmm1_8
  PERESOURCE *v65; // rax
  int v66; // r15d
  tagObjLock **v67; // r14
  __int64 Prop; // r14
  __int128 *v69; // r14
  __int64 v70; // r13
  __int64 v71; // xmm1_8
  PERESOURCE *v72; // rax
  int v73; // r15d
  tagObjLock **v74; // r14
  bool v75; // zf
  __int64 v76; // rax
  __int128 *v77; // r14
  __int64 v78; // xmm1_8
  PERESOURCE *v79; // rax
  int v80; // r15d
  tagObjLock **v81; // r14
  char v82; // r14
  int v83; // esi
  char v84; // cl
  const struct tagWND *v85; // rdx
  __int64 v86; // rcx
  char v87; // al
  const struct tagWND *v88; // r15
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int128 *v91; // r14
  __int64 v92; // r13
  __int64 v93; // xmm1_8
  PERESOURCE *v94; // rax
  const struct tagWND *v95; // r12
  int v96; // r15d
  tagObjLock **v97; // r14
  _QWORD *v98; // rsi
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
  const struct tagWND *v102; // rsi
  __int64 v103; // rcx
  __int128 *v104; // r14
  __int64 v105; // r12
  __int64 v106; // r13
  __int64 v107; // xmm1_8
  PERESOURCE *v108; // rax
  const struct tagWND *v109; // r12
  int v110; // r15d
  tagObjLock **v111; // r14
  _QWORD *v112; // r14
  unsigned int v113; // r8d
  int v114; // eax
  __int64 v115; // rcx
  BOOL v116; // r14d
  __int64 v117; // rcx
  void *v118; // rax
  struct Gre::Base::SESSION_GLOBALS *v119; // rdi
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  char v124; // [rsp+28h] [rbp-E0h]
  int v125; // [rsp+28h] [rbp-E0h]
  const struct tagWND *v126; // [rsp+30h] [rbp-D8h]
  int v127; // [rsp+38h] [rbp-D0h]
  unsigned int v128; // [rsp+3Ch] [rbp-CCh]
  __int64 v129; // [rsp+40h] [rbp-C8h]
  __int64 v130; // [rsp+40h] [rbp-C8h]
  HRGN *v131; // [rsp+48h] [rbp-C0h]
  __int64 v132; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v133; // [rsp+58h] [rbp-B0h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v134; // [rsp+60h] [rbp-A8h]
  __int64 v135; // [rsp+68h] [rbp-A0h]
  _QWORD v136[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v137; // [rsp+88h] [rbp-80h] BYREF
  char v138[40]; // [rsp+90h] [rbp-78h] BYREF
  int v139; // [rsp+B8h] [rbp-50h]
  __int128 v140; // [rsp+C0h] [rbp-48h]
  __int64 v141; // [rsp+D0h] [rbp-38h]
  __int128 v142; // [rsp+D8h] [rbp-30h]
  __int64 v143; // [rsp+E8h] [rbp-20h]
  __int128 v144; // [rsp+F0h] [rbp-18h]
  __int64 v145; // [rsp+100h] [rbp-8h]
  __int128 v146; // [rsp+108h] [rbp+0h]
  __int64 v147; // [rsp+118h] [rbp+10h]
  __int128 v148; // [rsp+120h] [rbp+18h]
  __int64 v149; // [rsp+130h] [rbp+28h]
  struct tagRECT v150; // [rsp+138h] [rbp+30h] BYREF
  __int64 v151; // [rsp+148h] [rbp+40h]
  char v152; // [rsp+150h] [rbp+48h]
  __int128 v153; // [rsp+158h] [rbp+50h] BYREF
  char v154; // [rsp+168h] [rbp+60h]
  char v155; // [rsp+170h] [rbp+68h]
  __int64 v156; // [rsp+178h] [rbp+70h]
  char v157; // [rsp+180h] [rbp+78h]
  __int128 v158; // [rsp+188h] [rbp+80h] BYREF
  char v159; // [rsp+198h] [rbp+90h]
  char v160; // [rsp+1A0h] [rbp+98h]
  __int64 v161; // [rsp+1A8h] [rbp+A0h]
  char v162; // [rsp+1B0h] [rbp+A8h]
  __int128 v163; // [rsp+1B8h] [rbp+B0h] BYREF
  char v164; // [rsp+1C8h] [rbp+C0h]
  char v165; // [rsp+1D0h] [rbp+C8h]
  __int64 v166; // [rsp+1D8h] [rbp+D0h]
  char v167; // [rsp+1E0h] [rbp+D8h]
  __int128 v168; // [rsp+1E8h] [rbp+E0h] BYREF
  char v169; // [rsp+1F8h] [rbp+F0h]
  char v170; // [rsp+200h] [rbp+F8h]
  __int64 v171; // [rsp+208h] [rbp+100h]
  char v172; // [rsp+210h] [rbp+108h]
  __int128 v173; // [rsp+218h] [rbp+110h] BYREF
  char v174; // [rsp+228h] [rbp+120h]
  char v175; // [rsp+230h] [rbp+128h]

  v3 = a2;
  v5 = 0;
  v136[2] = 0LL;
  v6 = a1;
  v136[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v136;
  v136[1] = a1;
  v124 = a2;
  HMLockObject(a1);
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x8000) == 0 && (v3 & 0x10) == 0 )
    GenerateMouseMove(0LL);
  if ( (v3 & 1) != 0 )
  {
    v7 = *(_QWORD *)(v6 + 104);
    v3 = 0;
    v124 = 0;
    if ( v7 )
    {
      if ( v6 != GetDesktopWindow(v6, v7) )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v8 + 40) + 31LL) & 2) != 0 )
        {
          v3 = 4;
        }
        else
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 4) == 0 )
            goto LABEL_12;
          v3 = 2;
        }
        v6 = v8;
        v124 = v3;
      }
    }
  }
LABEL_12:
  if ( a3 )
    GreLockDisplayArea(*(_QWORD *)(gpDispInfo + 40LL), a3);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockVisRgnPublish(*(_QWORD *)(gpDispInfo + 40LL));
  for ( i = *(__int64 **)(gpDispInfo + 24LL); i; v3 = v124 )
  {
    v11 = *((_DWORD *)i + 16);
    if ( (v11 & 0x400800) == 0 )
    {
      if ( (v11 & 3) == 0 )
      {
        v9 = i[2];
        if ( (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 31LL) & 2) != 0 )
        {
          v11 |= 8u;
          *((_DWORD *)i + 16) = v11;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 31LL) & 0x20) != 0 )
          *((_DWORD *)i + 16) = v11 & 0xFFFFFFF7;
      }
      v12 = i[2];
      v13 = v12;
      if ( v12 )
      {
        while ( v13 != v6 )
        {
          v13 = *(_QWORD *)(v13 + 104);
          if ( !v13 )
            goto LABEL_56;
        }
        if ( v6 != v12 || (v3 & 2) == 0 && ((v3 & 4) == 0 || (i[8] & 1) == 0) )
        {
          v14 = *((unsigned int *)i + 16);
          if ( (v14 & 0x1000) != 0 )
          {
            v32 = i[3];
            if ( (int)v14 >= 0 )
            {
              v14 = (unsigned int)v14 & 0xFFFFFFE7;
              *((_DWORD *)i + 16) = v14;
              if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v12 + 136) + 8LL) + 8LL) >= 0
                || (v9 = *(_QWORD *)(v12 + 40), (*(_BYTE *)(v9 + 21) & 1) == 0)
                && (*(_BYTE *)(*(_QWORD *)(v32 + 40) + 31LL) & 2) != 0
                || (v33 = *(_BYTE *)(*(_QWORD *)(v32 + 40) + 31LL), ((*(_BYTE *)(v9 + 31) ^ v33) & 0x10) != 0) )
              {
                v9 = (unsigned int)v14;
                if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 31LL) & 0x22) == 2 )
                {
                  v9 = (unsigned int)v14 | 8;
                  *((_DWORD *)i + 16) = v9;
                }
                v14 = (unsigned int)v9;
                v34 = (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 31LL) & 4) == 0;
              }
              else
              {
                v34 = (v33 & 4) == 0;
              }
              if ( !v34 )
                v14 = (unsigned int)v14 | 0x10;
            }
            LODWORD(v14) = v14 | 0x2000;
            *((_DWORD *)i + 16) = v14;
            UserSetDCVisRgn(i, v14, v9, v12);
          }
          else
          {
            v15 = i[1];
            v150 = 0LL;
            if ( (unsigned int)GreGetBounds(v15, &v150, 0LL) )
            {
              v16 = i[11];
              if ( !v16 || (i[8] & 0x80004000) != 0 )
              {
                bottom = v150.bottom;
                right = v150.right;
                top = v150.top;
                left = v150.left;
              }
              else
              {
                v17 = *(_QWORD *)(v16 + 40);
                v18 = *(_DWORD *)(v17 + 32);
                bottom = v18 + v150.bottom;
                v20 = *(_DWORD *)(v17 + 28);
                left = v20 + v150.left;
                right = v20 + v150.right;
                top = v18 + v150.top;
                v150.left += v20;
                v150.top += v18;
                v150.right += v20;
                v150.bottom += v18;
              }
              v24 = *((_DWORD *)i + 16);
              if ( (v24 & 0x4000) != 0 )
              {
                StyleWindow = GetStyleWindow(i[2], 2848LL);
                if ( StyleWindow )
                {
                  v26 = *(_QWORD *)(StyleWindow + 40);
                  v27 = *(_DWORD *)(v26 + 92);
                  v28 = *(_DWORD *)(v26 + 88);
                  v150.left = v28 + left;
                  v150.right = v28 + right;
                  v150.top = v27 + top;
                  v150.bottom = v27 + bottom;
                }
              }
              v29 = (struct tagWND *)i[2];
              if ( (unsigned int)IntersectRect(&v150, &v150, *((_QWORD *)v29 + 5) + 88LL) )
                SpbCheckRect(v29, &v150, v24);
              v5 = 0;
            }
            v30 = i[8] & 0x4002 | 0x800;
            *((_DWORD *)i + 16) = v30;
            if ( (v30 & 0x4000) != 0 )
            {
              GreSelectRedirectionBitmap(i[1], 0LL);
              *((_DWORD *)i + 16) &= ~0x4000u;
              i[4] = 0LL;
            }
            v31 = i[1];
            i[2] = 0LL;
            i[3] = 0LL;
            i[5] = 0LL;
            i[6] = 0LL;
            GreSelectVisRgn(v31, 0LL, 1LL);
          }
        }
      }
    }
LABEL_56:
    i = (__int64 *)*i;
  }
  GreUnlockVisRgnPublish(*(_QWORD *)(gpDispInfo + 40LL));
  v35 = (v124 & 8) != 0 ? 2 : 0;
  if ( WPP_MAIN_CB.AlignmentRequirement )
  {
    InvalidateGDIWindows(v6);
    v35 |= 1u;
  }
  GreClientRgnUpdated(v35);
  v36 = (v124 & 8) != 0 ? 4 : 0;
  v128 = v36;
  v37 = *(_QWORD *)(gpDispInfo + 40LL);
  v133 = v37;
  v38 = Gre::Base::Globals(gpDispInfo);
  v134 = v38;
  v39 = *((_QWORD *)v38 + 15);
  v132 = v39;
  GreAcquireSemaphore(v39);
  if ( *((_QWORD *)Gre::Base::Globals(v40) + 38) )
  {
    v42 = 0;
    v127 = 0;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread || (v45 = *ThreadWin32Thread) == 0 || !*(_DWORD *)(v45 + 104) && !*(_DWORD *)(v45 + 108) )
    {
      v46 = Gre::Base::Globals(v44);
      GreAcquireSemaphore(*((_QWORD *)v46 + 14));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v46 + 14), 5LL);
      v42 = 1;
      v127 = 1;
    }
    GreAcquireSemaphore(*((_QWORD *)v38 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v38 + 9), 7LL);
    if ( *((_QWORD *)Gre::Base::Globals(v47) + 38) )
    {
      v48 = *((_QWORD *)v38 + 38);
      v49 = *(_QWORD *)(v48 + 80);
      if ( v49 != v48 + 80 )
      {
        v50 = v38;
        while ( 1 )
        {
          v51 = v49 - 24;
          if ( !v49 )
            v51 = 0LL;
          v135 = v51;
          if ( !v51 )
          {
LABEL_214:
            v39 = v132;
            v42 = v127;
            v37 = v133;
            v38 = v134;
            goto LABEL_215;
          }
          v52 = *(_QWORD *)(v51 + 40);
          if ( v52 )
            break;
LABEL_213:
          v48 = *((_QWORD *)v50 + 38);
          v49 = *(_QWORD *)(v51 + 24);
          if ( v49 == v48 + 80 )
            goto LABEL_214;
        }
        v131 = (HRGN *)(v48 + 184);
        PsGetThreadWin32Thread(KeGetCurrentThread());
        v54 = (unsigned __int16)v52;
        if ( (unsigned __int64)(unsigned __int16)v52 >= *(_QWORD *)(gpsi + 8LL)
          || (v55 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v52,
              v57 = (const struct tagWND **)HMPkheFromPhe(v55),
              LOWORD(v52) = WORD1(v52) & 0x7FFF,
              (WORD1(v52) & 0x7FFF) != *(_WORD *)(v55 + 26))
          && (_WORD)v52 != 0x7FFF
          && ((_WORD)v52 || !PsGetCurrentProcessWow64Process())
          || (*(_BYTE *)(v55 + 25) & 1) != 0
          || *(_BYTE *)(v55 + 24) != 1
          || (v58 = *v57, (v126 = v58) == 0LL) )
        {
          v83 = 0;
          goto LABEL_203;
        }
        v59 = v58;
        if ( (*(_DWORD *)(*((_QWORD *)v58 + 5) + 232LL) & 2) == 0 )
          goto LABEL_136;
        v60 = *(unsigned __int16 *)(gpsi + 900LL);
        v61 = *(_WORD **)(*((_QWORD *)v58 + 17) + 8LL);
        if ( *v61 != (_WORD)v60 )
        {
          v62 = (__int128 *)*((_QWORD *)v58 + 18);
          v63 = *(unsigned __int16 *)(gpsi + 900LL);
          v151 = gDomainDummyLock;
          v152 = 0;
          v153 = 0LL;
          v154 = 0;
          v64 = *((_QWORD *)v62 + 2);
          v140 = *v62;
          v155 = 0;
          v141 = v64;
          v65 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v61, v60, v53, v56);
          if ( ExIsResourceAcquiredExclusiveLite(*v65) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
          {
            v155 = 1;
            if ( v62 == (__int128 *)gObjDummyLock )
              v62 = 0LL;
            *(_QWORD *)&v153 = v62;
            if ( !v154 )
            {
              v66 = 0;
              v67 = (tagObjLock **)&v153;
              do
              {
                if ( *v67 )
                  tagObjLock::LockExclusive(*v67);
                ++v66;
                ++v67;
              }
              while ( !v66 );
              v154 = 1;
              v58 = v59;
            }
          }
          Prop = RealGetProp(*((_QWORD *)v58 + 18), v63, 1LL);
          if ( v155 && v154 )
          {
            v61 = (_WORD *)v153;
            if ( (_QWORD)v153 )
              tagObjLock::UnLockExclusive((tagObjLock *)v153);
            v154 = 0;
          }
          if ( Prop )
          {
            v75 = Prop == -1;
          }
          else
          {
            v69 = (__int128 *)*((_QWORD *)v58 + 18);
            v157 = 0;
            v158 = 0LL;
            v156 = gDomainDummyLock;
            v159 = 0;
            v70 = *(unsigned __int16 *)(gpsi + 1378LL);
            v71 = *((_QWORD *)v69 + 2);
            v142 = *v69;
            v160 = 0;
            v143 = v71;
            v72 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(gpsi, v60, v53, v56);
            if ( ExIsResourceAcquiredExclusiveLite(*v72) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
            {
              v160 = 1;
              if ( v69 == (__int128 *)gObjDummyLock )
                v69 = 0LL;
              *(_QWORD *)&v158 = v69;
              if ( !v159 )
              {
                v73 = 0;
                v74 = (tagObjLock **)&v158;
                do
                {
                  if ( *v74 )
                    tagObjLock::LockExclusive(*v74);
                  ++v73;
                  ++v74;
                }
                while ( !v73 );
                v58 = v126;
                v159 = 1;
              }
            }
            Prop = RealGetProp(*((_QWORD *)v58 + 18), v70, 1LL);
            if ( v160 && v159 )
            {
              v61 = (_WORD *)v158;
              if ( (_QWORD)v158 )
                tagObjLock::UnLockExclusive((tagObjLock *)v158);
              v159 = 0;
            }
            v75 = Prop == 0;
          }
          if ( !v75 )
          {
            LOBYTE(v60) = 1;
            v76 = HMValidateHandleNoSecure(Prop, v60);
            if ( v76 )
            {
              if ( !(unsigned int)IsWindowBeingDestroyed(v76) )
                goto LABEL_136;
            }
          }
        }
        v77 = (__int128 *)*((_QWORD *)v59 + 18);
        v162 = 0;
        v163 = 0LL;
        v164 = 0;
        v129 = (unsigned __int16)atomDispAffinity;
        v161 = gDomainDummyLock;
        v78 = *((_QWORD *)v77 + 2);
        v144 = *v77;
        v165 = 0;
        v145 = v78;
        v79 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v61, v60, v53, v56);
        if ( ExIsResourceAcquiredExclusiveLite(*v79) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
        {
          v165 = 1;
          if ( v77 == (__int128 *)gObjDummyLock )
            v77 = 0LL;
          *(_QWORD *)&v163 = v77;
          if ( !v164 )
          {
            v80 = 0;
            v81 = (tagObjLock **)&v163;
            do
            {
              if ( *v81 )
                tagObjLock::LockExclusive(*v81);
              ++v80;
              ++v81;
            }
            while ( !v80 );
            v58 = v126;
            v164 = 1;
          }
        }
        v82 = RealGetProp(*((_QWORD *)v59 + 18), v129, 1LL);
        if ( v165 && v164 )
        {
          if ( (_QWORD)v163 )
            tagObjLock::UnLockExclusive((tagObjLock *)v163);
          v164 = 0;
        }
        if ( (v82 & 1) == 0 )
        {
          v54 = *((_QWORD *)v58 + 5);
        }
        else
        {
LABEL_136:
          v54 = *((_QWORD *)v58 + 5);
          v84 = *(_BYTE *)(v54 + 31);
          if ( (*(_BYTE *)(v54 + 26) & 0x20) == 0 )
          {
            v85 = v59;
            v125 = (4 * (v84 & 4)) | 0x4401;
            do
            {
              v86 = *((_QWORD *)v85 + 5);
              v87 = *(_BYTE *)(v86 + 31);
              if ( (v87 & 0x10) == 0 || (v87 & 0x20) != 0 && v85 != v59 )
              {
LABEL_201:
                SetOrCreateRectRgnIndirectPublic(v131, gZero);
                v51 = v135;
                v83 = 0;
                v5 = 0;
                goto LABEL_203;
              }
              if ( (*(_WORD *)(v86 + 42) & 0x2FFF) == 0x29D )
                break;
              v85 = (const struct tagWND *)*((_QWORD *)v85 + 13);
            }
            while ( v85 );
            v88 = v59;
            while ( 1 )
            {
              v89 = *((_QWORD *)v59 + 5);
              if ( (*(_BYTE *)(v89 + 27) & 0x20) != 0 )
                break;
              v59 = (const struct tagWND *)*((_QWORD *)v59 + 13);
              if ( !v59 )
                goto LABEL_168;
            }
            v90 = *(_WORD *)(v89 + 42) & 0x2FFF;
            if ( (_DWORD)v90 != 669 || v59 == v88 )
            {
              v91 = (__int128 *)*((_QWORD *)v59 + 18);
              v92 = (unsigned __int16)atomLayer;
              v166 = gDomainDummyLock;
              v167 = 0;
              v168 = 0LL;
              v169 = 0;
              v93 = *((_QWORD *)v91 + 2);
              v146 = *v91;
              v170 = 0;
              v147 = v93;
              v94 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v90, v85, v53, v56);
              if ( ExIsResourceAcquiredExclusiveLite(*v94) != 1 )
              {
                v95 = v88;
                if ( IS_USERCRIT_OWNED_AT_ALL() )
                {
                  v170 = 1;
                  if ( v91 == (__int128 *)gObjDummyLock )
                    v91 = 0LL;
                  *(_QWORD *)&v168 = v91;
                  if ( !v169 )
                  {
                    v96 = 0;
                    v97 = (tagObjLock **)&v168;
                    do
                    {
                      if ( *v97 )
                        tagObjLock::LockExclusive(*v97);
                      ++v96;
                      ++v97;
                    }
                    while ( !v96 );
                    v169 = 1;
                    v88 = v95;
                  }
                }
              }
              v98 = (_QWORD *)RealGetProp(*((_QWORD *)v59 + 18), v92, 1LL);
              if ( v170 && v169 )
              {
                if ( (_QWORD)v168 )
                  tagObjLock::UnLockExclusive((tagObjLock *)v168);
                v169 = 0;
              }
              if ( !v98 || !*v98 )
                goto LABEL_201;
            }
LABEL_168:
            UpdatesLockedForDwm();
            v102 = v88;
            while ( 1 )
            {
              v103 = *(unsigned int *)(*((_QWORD *)v102 + 5) + 24LL);
              if ( (v103 & 0x80000) != 0 || (v103 & 0x20000000) != 0 )
                break;
              v102 = (const struct tagWND *)*((_QWORD *)v102 + 13);
              if ( !v102 )
                goto LABEL_176;
            }
            if ( v102 != v88 && (unsigned int)IsDesktopWindow(v102) )
              v102 = 0LL;
LABEL_176:
            v104 = (__int128 *)*((_QWORD *)v102 + 18);
            v105 = *((_QWORD *)v102 + 5);
            v106 = (unsigned __int16)atomLayer;
            v171 = gDomainDummyLock;
            v172 = 0;
            v173 = 0LL;
            v174 = 0;
            v130 = v105;
            v107 = *((_QWORD *)v104 + 2);
            v148 = *v104;
            v175 = 0;
            v149 = v107;
            v108 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v103, v99, v100, v101);
            if ( ExIsResourceAcquiredExclusiveLite(*v108) != 1 )
            {
              v109 = v88;
              if ( IS_USERCRIT_OWNED_AT_ALL() )
              {
                v175 = 1;
                if ( v104 == (__int128 *)gObjDummyLock )
                  v104 = 0LL;
                *(_QWORD *)&v173 = v104;
                if ( !v174 )
                {
                  v110 = 0;
                  v111 = (tagObjLock **)&v173;
                  do
                  {
                    if ( *v111 )
                      tagObjLock::LockExclusive(*v111);
                    ++v110;
                    ++v111;
                  }
                  while ( !v110 );
                  v174 = 1;
                  v88 = v109;
                }
              }
              v105 = v130;
            }
            v112 = (_QWORD *)RealGetProp(*((_QWORD *)v102 + 18), v106, 1LL);
            if ( v175 && v174 )
            {
              if ( (_QWORD)v173 )
                tagObjLock::UnLockExclusive((tagObjLock *)v173);
              v174 = 0;
            }
            if ( v112 && *v112 )
            {
              v113 = v125;
              if ( (*(_DWORD *)(v105 + 24) & 0x20000000) != 0 )
              {
                v114 = *(_DWORD *)(v105 + 232);
                if ( (v114 & 2) != 0 && (v114 & 1) == 0 && (*((_DWORD *)v102 + 80) & 0x20000000) == 0 )
                {
                  v51 = v135;
                  v83 = CalcVisRgnWorker(v88, v131, v125 & 0xFFFFBFFF);
                  v5 = 0;
                  goto LABEL_203;
                }
              }
            }
            else
            {
              v113 = v125;
            }
            v51 = v135;
            v83 = CalcVisRgnWorker(v88, v131, v113);
            v5 = 0;
            goto LABEL_203;
          }
          if ( (v84 & 0x10) == 0 )
          {
            v51 = v135;
            v83 = 0;
            v5 = 0;
            goto LABEL_203;
          }
        }
        SetRectRgnIndirect(*v131, v54 + 88);
        v51 = v135;
        v5 = 0;
        v83 = 1;
LABEL_203:
        if ( v83 )
        {
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v137, *(HRGN *)(*((_QWORD *)v50 + 38) + 184LL), 0, 0);
          v115 = v137;
          if ( v137 )
            v83 = *(_DWORD *)(v137 + 52) != 1;
          if ( !v139 )
          {
            RGNOBJ::UpdateUserRgn((RGNOBJ *)&v137);
            v115 = v137;
          }
          if ( v115 )
            _InterlockedDecrement((volatile signed __int32 *)(v115 + 12));
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v138);
        }
        v116 = v83 != 0;
        if ( v116 != (*(_DWORD *)(v51 + 140) & 1) )
        {
          v117 = v116 | *(_DWORD *)(v51 + 140) & 0xFFFFFFFE;
          *(_DWORD *)(v51 + 140) = v117;
          v118 = (void *)UserReferenceDwmApiPort(v117, v54, v53);
          DwmAsyncShowSprite(v118);
        }
        goto LABEL_213;
      }
    }
LABEL_215:
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v38 + 9));
    if ( v42 )
    {
      v119 = Gre::Base::Globals(v41);
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite");
      GreReleaseSemaphoreInternal(*((_QWORD *)v119 + 14));
    }
    v36 = v128;
  }
  v133 = v37;
  Gre::Base::Globals(v41);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v132, (struct PDEVOBJ *)&v133);
  if ( *(_DWORD *)(v37 + 140) )
  {
    do
      vSpUpdateSpriteVisRgn(*(HDEV *)(*(_QWORD *)(v37 + 144) + 8LL * v5++), v36);
    while ( v5 < *(_DWORD *)(v37 + 140) );
  }
  else
  {
    vSpUpdateSpriteVisRgn(*(HDEV *)(v37 + 80), v36);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v132);
  if ( v39 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v39);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  ThreadUnlock1(v121, v120, v122);
  return 1LL;
}
