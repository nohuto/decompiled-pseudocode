/*
 * XREFs of xxxEndDeferWindowPosEx @ 0x1C01236C0
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C00454F8 (xxxSetWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x1C0045B40 (NtUserSetWindowPos.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C005E99C (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxSetWindowRgn @ 0x1C0063ABC (xxxSetWindowRgn.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0083170 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C0086970 (NtUserEndDeferWindowPosEx.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C008BDD8 (xxxProcessSetWindowPosEvent.c)
 *     xxxArrangeIconicWindows @ 0x1C023916C (xxxArrangeIconicWindows.c)
 * Callees:
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C002D824 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1C0040918 (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 *     DestroySMWP @ 0x1C0040930 (DestroySMWP.c)
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C0040A50 (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     xxxDoSyncPaint @ 0x1C0060C04 (xxxDoSyncPaint.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C0082080 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxSetTrayWindow @ 0x1C00A4F7C (xxxSetTrayWindow.c)
 *     SetWindowGroupBand @ 0x1C00AD874 (SetWindowGroupBand.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C00ADA1C (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C00AF408 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00B29B8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessagesEx @ 0x1C00B2C00 (PostShellHookMessagesEx.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B2DB0 (PostIAMShellHookMessageEx.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00EEC50 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F88D0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C01232A4 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C01246F0 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     Feature_3578843448__private_IsEnabledDeviceUsage @ 0x1C0138AA8 (Feature_3578843448__private_IsEnabledDeviceUsage.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxEndDeferWindowPosEx(struct tagSMWP *a1, int a2)
{
  struct tagSMWP *v2; // rdi
  int v3; // r15d
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r14
  int v11; // r12d
  __int64 v12; // r13
  __int64 *v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // r15
  _QWORD *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // esi
  int v27; // edx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  char v31; // bl
  struct _HANDLEENTRY *v32; // rax
  _QWORD *v33; // rcx
  struct tagWND *v34; // r13
  int IsEnabledDeviceUsage; // eax
  __int64 v36; // r12
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned int v42; // r14d
  struct tagWND *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  struct tagSMWP *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  int v51; // esi
  struct tagCVR *i; // rbx
  struct tagSMWP *v53; // rsi
  __int64 ThreadWin32Thread; // rax
  void (__fastcall *v55)(__int64); // rax
  __int64 v56; // rbx
  __int64 *v57; // rax
  int v58; // ebx
  struct tagWND *v59; // r15
  __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  struct tagWND **v64; // r14
  int v65; // ebx
  char valid; // al
  __int64 v67; // rdx
  PDEVICE_OBJECT v68; // rcx
  __int64 v69; // r8
  int v70; // r14d
  __int64 v71; // r14
  __int64 v72; // rbx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rsi
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // r8
  int v79; // eax
  __int64 v80; // r8
  unsigned int v81; // edx
  char v82; // bl
  char v83; // si
  int v84; // ebx
  __int64 *v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 *v88; // rdx
  Gre::Base *v90; // rcx
  struct Gre::Base::SESSION_GLOBALS *v91; // rdi
  Gre::Base *v92; // rcx
  int v93; // ebx
  Gre::Base *v94; // rcx
  __int64 v95; // rbx
  __int64 *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // rax
  BOOL v101; // r15d
  __int64 v102; // rsi
  int v103; // r14d
  _QWORD *v104; // rsi
  __int64 v105; // rsi
  unsigned int ThreadId; // [rsp+40h] [rbp-79h]
  __int128 v107; // [rsp+50h] [rbp-69h] BYREF
  void (__fastcall *v108)(__int64); // [rsp+60h] [rbp-59h]
  HWND v109; // [rsp+68h] [rbp-51h] BYREF
  __int128 v110; // [rsp+70h] [rbp-49h] BYREF
  __int64 v111; // [rsp+80h] [rbp-39h]
  struct tagWND *v112; // [rsp+88h] [rbp-31h]
  __int64 v113; // [rsp+90h] [rbp-29h]
  __int128 v114; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v115; // [rsp+B0h] [rbp-9h]
  _QWORD v116[11]; // [rsp+B8h] [rbp-1h] BYREF
  int v117; // [rsp+120h] [rbp+67h] BYREF
  int v118; // [rsp+128h] [rbp+6Fh]
  int v119; // [rsp+130h] [rbp+77h]
  __int64 v120; // [rsp+138h] [rbp+7Fh]

  v118 = a2;
  v2 = a1;
  v109 = 0LL;
  v119 = 0;
  v3 = a2;
  v120 = gptiCurrent;
  v114 = 0LL;
  v115 = 0LL;
  v110 = 0LL;
  v111 = 0LL;
  v107 = 0LL;
  v108 = 0LL;
  if ( !*((_DWORD *)a1 + 7) )
    goto LABEL_44;
  v4 = (__int64 *)*((_QWORD *)a1 + 5);
  v117 = 1;
  v5 = *v4;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)v5 >= *(_QWORD *)(gpsi + 8LL) )
    goto LABEL_44;
  v6 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v5;
  v10 = HMPkheFromPhe(v6);
  LOWORD(v5) = WORD1(v5) & 0x7FFF;
  if ( (WORD1(v5) & 0x7FFF) != *(_WORD *)(v6 + 26)
    && (_WORD)v5 != 0x7FFF
    && ((_WORD)v5 || !PsGetCurrentProcessWow64Process(v8, v7, v9)) )
  {
    goto LABEL_44;
  }
  if ( (*(_BYTE *)(v6 + 25) & 1) != 0 || *(_BYTE *)(v6 + 24) != 1 || !*(_QWORD *)v10 )
    goto LABEL_44;
  v11 = *((_DWORD *)v2 + 7) - 1;
  v12 = *(_QWORD *)(*(_QWORD *)v10 + 104LL);
  v13 = (__int64 *)*((_QWORD *)v2 + 5);
  if ( v11 >= 0 )
  {
    while ( 1 )
    {
      v14 = *v13;
      PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( (unsigned __int64)(unsigned __int16)v14 >= *(_QWORD *)(gpsi + 8LL) )
        goto LABEL_30;
      v15 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v14;
      v19 = (_QWORD *)HMPkheFromPhe(v15);
      LOWORD(v14) = WORD1(v14) & 0x7FFF;
      if ( (WORD1(v14) & 0x7FFF) != *(_WORD *)(v15 + 26)
        && (_WORD)v14 != 0x7FFF
        && ((_WORD)v14 || !PsGetCurrentProcessWow64Process(v17, v16, v18)) )
      {
        goto LABEL_30;
      }
      if ( (*(_BYTE *)(v15 + 25) & 1) != 0 )
        goto LABEL_30;
      if ( *(_BYTE *)(v15 + 24) != 1 )
        goto LABEL_30;
      v20 = (_QWORD *)*v19;
      if ( !*v19 )
        goto LABEL_30;
      v13[13] = v20[2];
      if ( (v13[4] & 4) == 0 )
      {
        v21 = v20[3];
        v22 = 0LL;
        if ( v21 )
        {
          v23 = *(_QWORD *)(v21 + 8);
          if ( v23 )
            v22 = *(_QWORD *)(v23 + 24);
        }
        if ( *(char *)(v20[5] + 19LL) < 0 )
          goto LABEL_30;
        v24 = v13[1];
        if ( v24 > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( v20[13] != v22 )
            goto LABEL_30;
        }
        else if ( v24 >= 2 )
        {
          v25 = HMValidateHandleNoSecure(v24, 1);
          if ( !v25 || *(char *)(*(_QWORD *)(v25 + 40) + 19LL) < 0 )
          {
            UserSetLastError(6);
LABEL_30:
            *v13 = 0LL;
            goto LABEL_31;
          }
          if ( v20 == (_QWORD *)v25 || v20[13] != *(_QWORD *)(v25 + 104) )
            goto LABEL_30;
        }
      }
      if ( *(_QWORD *)(_HMObjectFromHandle(*v13) + 104) != v12 )
      {
        UserSetLastError(1441);
        goto LABEL_44;
      }
      if ( (v13[4] & 0x2000) != 0 )
        v117 = 0;
LABEL_31:
      v13 += 21;
      if ( --v11 < 0 )
      {
        v3 = v118;
        break;
      }
    }
  }
  v26 = 0;
  v27 = 0;
  if ( *((int *)v2 + 7) <= 0 )
    goto LABEL_44;
  v28 = (_QWORD *)*((_QWORD *)v2 + 5);
  v29 = 0LL;
  while ( !*v28 )
  {
    ++v27;
    ++v29;
    v28 += 21;
    if ( v29 >= *((int *)v2 + 7) )
      goto LABEL_44;
  }
  v33 = (_QWORD *)(*((_QWORD *)v2 + 5) + 168LL * v27);
  if ( !v33 )
    goto LABEL_44;
  v34 = *(struct tagWND **)(_HMObjectFromHandle(*v33) + 104);
  v112 = v34;
  if ( !v34 || !*((_QWORD *)v34 + 3) )
    goto LABEL_44;
  IsEnabledDeviceUsage = Feature_3578843448__private_IsEnabledDeviceUsage();
  v36 = v120;
  if ( IsEnabledDeviceUsage )
  {
    *(_QWORD *)&v110 = *(_QWORD *)(v120 + 416);
    *(_QWORD *)(v120 + 416) = &v110;
    *((_QWORD *)&v110 + 1) = v34;
    HMLockObject(v34);
  }
  if ( *((int *)v2 + 7) > 0 )
  {
    v37 = 0LL;
    do
    {
      v38 = *((_QWORD *)v2 + 5);
      v39 = *(_QWORD *)(v38 + v37);
      if ( v39 && *(_DWORD *)(v38 + v37 + 152) )
      {
        v40 = _HMObjectFromHandle(v39);
        v41 = *((_QWORD *)v2 + 5);
        v42 = *(_DWORD *)(v41 + v37 + 152);
        if ( *(_DWORD *)(*(_QWORD *)(v40 + 40) + 236LL) != v42 )
        {
          v43 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)(v41 + v37));
          SetWindowGroupBand(v43, v42, 0);
        }
        *(_DWORD *)(*((_QWORD *)v2 + 5) + v37 + 152) = 0;
      }
      ++v26;
      v37 += 168LL;
    }
    while ( v26 < *((_DWORD *)v2 + 7) );
  }
  if ( v3 )
    AsyncWindowPos(v2);
  v44 = *((_QWORD *)v34 + 3);
  if ( !v44 || (v45 = *(_QWORD *)(v44 + 8)) == 0 || v34 != *(struct tagWND **)(v45 + 24) )
  {
LABEL_78:
    v53 = v2;
    if ( !(unsigned int)Feature_3578843448__private_IsEnabledDeviceUsage() )
    {
      *(_QWORD *)&v110 = *(_QWORD *)(v36 + 416);
      *(_QWORD *)(v36 + 416) = &v110;
      *((_QWORD *)&v110 + 1) = v34;
      HMLockObject(v34);
    }
    if ( (*((_DWORD *)v2 + 6) & 2) != 0 )
    {
      HMLockObject(v2);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v119 = 1;
      *(_QWORD *)&v107 = *(_QWORD *)(ThreadWin32Thread + 16);
      *(_QWORD *)(ThreadWin32Thread + 16) = &v107;
      v55 = (void (__fastcall *)(__int64))UnrefAndDestroySMWP;
    }
    else
    {
      v56 = 0LL;
      v57 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v57 )
        v56 = *v57;
      *(_QWORD *)&v107 = *(_QWORD *)(v56 + 16);
      *(_QWORD *)(v56 + 16) = &v107;
      v55 = DestroySMWP;
    }
    v108 = v55;
    *((_QWORD *)&v107 + 1) = v2;
    ++*(_DWORD *)(v36 + 1248);
    *((_DWORD *)v2 + 6) |= 4u;
    if ( (unsigned int)xxxCalcValidRects(v2, &v109) )
    {
      v58 = (int)v109;
      v59 = 0LL;
      PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( (unsigned __int64)(unsigned __int16)v58 < *(_QWORD *)(gpsi + 8LL) )
      {
        v60 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v58;
        v64 = (struct tagWND **)HMPkheFromPhe(v60);
        LOWORD(v58) = HIWORD(v58) & 0x7FFF;
        if ( ((HIWORD(v58) & 0x7FFF) == *(_WORD *)(v60 + 26)
           || (_WORD)v58 == 0x7FFF
           || !(_WORD)v58 && PsGetCurrentProcessWow64Process(v62, v61, v63))
          && (*(_BYTE *)(v60 + 25) & 1) == 0
          && *(_BYTE *)(v60 + 24) == 1 )
        {
          v59 = *v64;
        }
      }
      *(_QWORD *)&v114 = *(_QWORD *)(v36 + 416);
      *(_QWORD *)(v36 + 416) = &v114;
      *((_QWORD *)&v114 + 1) = v59;
      if ( v59 )
        HMLockObject(v59);
      v65 = *(_DWORD *)(v36 + 908);
      LODWORD(v120) = v65;
      v113 = gptiForeground;
      valid = zzzBltValidBits((__int64)v2);
      v70 = v117;
      if ( (valid & 1) == 0 )
        v70 = 0;
      v117 = v70;
      if ( (valid & 2) != 0 )
        GenerateMouseMove(0LL);
      if ( (*((_DWORD *)v2 + 6) & 1) != 0 )
      {
        v71 = *((int *)v2 + 7);
        if ( *((_DWORD *)v2 + 7) )
        {
          v72 = 168 * v71;
          do
          {
            v73 = *((_QWORD *)v2 + 5);
            v72 -= 168LL;
            --v71;
            v68 = *(PDEVICE_OBJECT *)(v72 + v73);
            if ( v68 )
            {
              if ( (*(_DWORD *)(v72 + v73 + 32) & 0xF0000000) != 0 )
              {
                v74 = HMValidateHandleNoSecure((int)v68, 1);
                v75 = v74;
                if ( v74 )
                {
                  v116[0] = *(_QWORD *)(v36 + 416);
                  *(_QWORD *)(v36 + 416) = v116;
                  v116[2] = 0LL;
                  v116[1] = v74;
                  HMLockObject(v74);
                  v76 = *((_QWORD *)v2 + 5);
                  if ( (*(_DWORD *)(v76 + v72 + 32) & 0x10000000) != 0 )
                  {
                    if ( (*(_DWORD *)(v76 + v72 + 156) & 8) != 0 )
                    {
                      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x15u, *(_QWORD *)(v76 + v72));
                    }
                    else
                    {
                      PostShellHookMessagesEx(1u, *(_QWORD *)(v76 + v72), 0LL);
                      xxxCallHook(1LL, *(_QWORD *)(v72 + *((_QWORD *)v2 + 5)), 0LL, 10LL);
                    }
                  }
                  v77 = *((_QWORD *)v2 + 5);
                  if ( (*(_DWORD *)(v77 + v72 + 32) & 0x20000000) != 0 )
                  {
                    PostShellHookMessagesEx(2u, *(_QWORD *)(v77 + v72), 0LL);
                    xxxCallHook(2LL, *(_QWORD *)(v72 + *((_QWORD *)v2 + 5)), 0LL, 10LL);
                  }
                  v78 = *((_QWORD *)v2 + 5);
                  if ( (*(_DWORD *)(v78 + v72 + 32) & 0x40000000) != 0 )
                  {
                    v79 = *(_DWORD *)(v78 + v72 + 156);
                    if ( (v79 & 8) != 0 )
                    {
                      v80 = *(_QWORD *)(v78 + v72);
                      v81 = 23;
                    }
                    else
                    {
                      if ( (v79 & 0x10) == 0 )
                        xxxSetTrayWindow(*(_QWORD *)(v75 + 24), (unsigned __int64 *)v75);
                      v81 = 19;
                      v80 = *(_QWORD *)(v72 + *((_QWORD *)v2 + 5));
                    }
                    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), v81, v80);
                  }
                  if ( *(int *)(v72 + *((_QWORD *)v2 + 5) + 32) < 0 )
                    xxxSetTrayWindow(*(_QWORD *)(v36 + 456), (unsigned __int64 *)1);
                  ThreadUnlock1(v76, v77, v78);
                }
              }
            }
          }
          while ( v71 );
          v34 = v112;
          v65 = v120;
        }
        v70 = v117;
      }
      if ( v36 == v113
        && v65
        && !*(_DWORD *)(v36 + 908)
        && !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v36 + 424)) )
      {
        *(_DWORD *)(v36 + 488) |= 0x20u;
        v68 = WPP_GLOBAL_Control;
        v82 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        v83 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v82 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v36);
          WPP_RECORDER_AND_TRACE_SF_D(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v82,
            v83,
            (__int64)gFullLog,
            4u,
            2u,
            0xFu,
            (__int64)&WPP_73d000ae97953ecf03a093158984409f_Traceguids,
            ThreadId);
        }
      }
      v84 = 0;
      if ( v59 )
        v84 = xxxSwpActivate(v59);
      if ( v70 )
        xxxDoSyncPaint(v34, 4u);
      ThreadUnlock1(v68, v67, v69);
      if ( v84 )
      {
        v88 = *(__int64 **)(*(_QWORD *)(v36 + 432) + 128LL);
        if ( v88 )
          SetOrClrWF(0, v88, 0x101u, 1);
        v85 = *(__int64 **)(*(_QWORD *)(v36 + 432) + 136LL);
        if ( v85 )
          SetOrClrWF(0, v85, 0x101u, 1);
      }
      xxxSendChangedMsgs(v2, (__int64)v85, v86, v87);
      v53 = v2;
    }
    if ( (*(_DWORD *)(v36 + 1248))-- == 1 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      v91 = Gre::Base::Globals(v90);
      GreAcquireSemaphore(*((_QWORD *)v91 + 12));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemVisRgnUniqueness", *((_QWORD *)v91 + 12), 10LL);
      v93 = *((_DWORD *)Gre::Base::Globals(v92) + 1629);
      *((_DWORD *)Gre::Base::Globals(v94) + 1630) = v93;
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemVisRgnUniqueness");
      GreReleaseSemaphoreInternal(*((_QWORD *)v91 + 12));
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
    v95 = 0LL;
    v96 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v96 )
      v95 = *v96;
    *(_QWORD *)(v95 + 16) = v107;
    ThreadUnlock1(v98, v97, v99);
    v2 = v53;
    if ( v119 )
    {
      v100 = HMUnlockObject(v53);
      if ( v100 )
        DestroySMWP(v100);
      return 1LL;
    }
LABEL_44:
    v30 = *((_DWORD *)v2 + 6);
    v31 = 0;
    LOBYTE(v117) = 0;
    if ( (v30 & 2) != 0 )
    {
      v32 = (struct _HANDLEENTRY *)_HMPheFromObjectWorker(v2);
      IdentifyPrimaryDestroyTarget::Identify((Identify *)&v117, v32);
      v31 = v117;
    }
    if ( (*((_DWORD *)v2 + 6) & 2) != 0 )
    {
      if ( !(unsigned int)HMMarkObjectDestroy(v2) )
      {
        IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v117);
        return 1LL;
      }
      v101 = 1;
    }
    else
    {
      v101 = v2 != (struct tagSMWP *)gSMWP;
    }
    v102 = *((_QWORD *)v2 + 5);
    if ( v102 )
    {
      v103 = *((_DWORD *)v2 + 7) - 1;
      if ( v103 >= 0 )
      {
        v104 = (_QWORD *)(v102 + 120);
        do
        {
          if ( *v104 )
            GreDeleteObject(*v104);
          v104 += 21;
          --v103;
        }
        while ( v103 >= 0 );
      }
      if ( v101 )
        Win32FreePool(*((void **)v2 + 5));
    }
    if ( (*((_DWORD *)v2 + 6) & 2) != 0 )
    {
      HMFreeObject(v2);
    }
    else if ( v101 )
    {
      Win32FreePool(v2);
    }
    else
    {
      gdwPUDFlags &= ~0x40000000u;
      if ( *((int *)v2 + 8) > 8 )
      {
        v105 = Win32AllocPoolZInit(672LL, 2004054869LL);
        if ( v105 )
        {
          Win32FreePool(*((void **)v2 + 5));
          *((_QWORD *)v2 + 5) = v105;
          *((_DWORD *)v2 + 8) = 4;
        }
      }
      *((_DWORD *)v2 + 6) &= ~4u;
    }
    if ( v31 )
      gphePrimaryDestroyTarget = 0LL;
    return 1LL;
  }
  v46 = ZOrderByOwner(v2);
  v2 = v46;
  if ( v46 )
  {
    if ( v3 )
    {
      v51 = *((_DWORD *)v46 + 7) - 1;
      for ( i = (struct tagCVR *)*((_QWORD *)v46 + 5); v51 >= 0; --v51 )
      {
        if ( *(_QWORD *)i && !(unsigned int)ValidateWindowPos(i, 0LL) )
          *(_QWORD *)i = 0LL;
        i = (struct tagCVR *)((char *)i + 168);
      }
      AsyncWindowPos(v2);
    }
    goto LABEL_78;
  }
  if ( (unsigned int)Feature_3578843448__private_IsEnabledDeviceUsage() )
    ThreadUnlock1(v48, v47, v49);
  return 0LL;
}
