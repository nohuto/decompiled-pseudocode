/*
 * XREFs of xxxOldNextWindow @ 0x1C01CA428
 * Callers:
 *     xxxSysCommand @ 0x1C00857C4 (xxxSysCommand.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C0011678 (xxxReleaseCapture.c)
 *     xxxCapture @ 0x1C00117EC (xxxCapture.c)
 *     xxxInternalGetMessage @ 0x1C002B4E0 (xxxInternalGetMessage.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002E5BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     ThreadLockExchange @ 0x1C00631C8 (ThreadLockExchange.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxTranslateMessage @ 0x1C008B26C (xxxTranslateMessage.c)
 *     _PostMessage @ 0x1C00983E0 (_PostMessage.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     xxxDispatchMessage @ 0x1C01185F4 (xxxDispatchMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     xxxCallMsgFilter @ 0x1C01517DE (xxxCallMsgFilter.c)
 *     xxxCancelCoolSwitch @ 0x1C0152EF2 (xxxCancelCoolSwitch.c)
 *     xxxWaitMessageEx @ 0x1C01B6B50 (xxxWaitMessageEx.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01BA958 (safe_cast_fnid_to_PSWITCHWND.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01C8758 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01C87B0 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01C8D6C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01C966C (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01C9810 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01C9A08 (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxOldNextWindow(unsigned int a1)
{
  __int64 v1; // r14
  int v2; // r12d
  __int64 result; // rax
  struct tagWND *v4; // rbx
  __int64 v5; // rcx
  __int64 inited; // rdi
  __int16 KeyState; // ax
  __int64 v8; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // edi
  __int64 Window; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  ULONG_PTR v20; // rcx
  struct tagSwitchWndInfo *v21; // r15
  __int64 v22; // rax
  __int64 v23; // rdx
  struct tagWND *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int16 v29; // ax
  __int64 NextQueueWindow; // rax
  __int64 v31; // rcx
  struct tagWND *v32; // r14
  ULONG_PTR v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int16 v38; // ax
  __int64 v39; // rax
  __int16 v40; // ax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rbx
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // edx
  BOOL v49; // r14d
  struct tagWND *v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  bool v57; // zf
  __int64 v58; // rbx
  __int64 v59; // rbx
  __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  _QWORD v64[3]; // [rsp+90h] [rbp-80h] BYREF
  __int64 v65[2]; // [rsp+A8h] [rbp-68h] BYREF
  __int128 v66; // [rsp+B8h] [rbp-58h]
  __int128 v67; // [rsp+C8h] [rbp-48h]
  __int128 v68; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v69; // [rsp+E8h] [rbp-28h]
  __int128 v70; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v71; // [rsp+100h] [rbp-10h]
  _QWORD v72[4]; // [rsp+110h] [rbp+0h] BYREF
  __int128 v73; // [rsp+130h] [rbp+20h] BYREF
  __int64 v74; // [rsp+140h] [rbp+30h]
  __int128 v75; // [rsp+148h] [rbp+38h] BYREF
  __int64 v76; // [rsp+158h] [rbp+48h]
  struct tagSwitchWndInfo *v77; // [rsp+1B0h] [rbp+A0h] BYREF

  v1 = a1;
  v2 = 0;
  v71 = 0LL;
  v69 = 0LL;
  result = gptiCurrent;
  *(_OWORD *)v65 = 0LL;
  v64[2] = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v77 = 0LL;
  v70 = 0LL;
  v68 = 0LL;
  if ( gspwndAltTab )
    return result;
  result = *(_QWORD *)(gptiCurrent + 432LL);
  v4 = *(struct tagWND **)(result + 128);
  if ( !v4 )
    return result;
  v5 = *(_QWORD *)(result + 128);
  v64[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v64;
  v64[1] = v4;
  HMLockObject(v5);
  xxxCapture(gptiCurrent, v4, 4);
  *(_QWORD *)&v66 = v1;
  inited = 0LL;
  if ( (_WORD)v1 != 9 )
    goto LABEL_20;
  v73 = 0LL;
  v74 = 0LL;
  KeyState = _GetKeyState(16LL);
  inited = (__int64)InitSwitchWndInfo(&v77, v4, KeyState < 0);
  if ( v77 )
  {
    v76 = 0LL;
    v75 = 0LL;
    *((_DWORD *)v77 + 27) = 1;
    ThreadLock(inited, &v75);
    PushW32ThreadLock((__int64)&v77, &v73, (__int64)RemoveSwitchWindowInfo);
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 2310);
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v8);
    if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
      goto LABEL_10;
    v11 = PsGetCurrentProcessWin32Process(v10);
    v12 = v11;
    if ( v11 )
      v12 = -(__int64)(*(_QWORD *)v11 != 0LL) & v11;
    v13 = 1;
    if ( !(unsigned int)IsImmersiveAppRestricted(v12) )
LABEL_10:
      v13 = 0;
    SmartObjStackRefBase<tagMENU>::Init(v72, 0LL);
    v72[2] = 0LL;
    Window = xxxCreateWindowEx(
               385,
               32771LL,
               32771LL,
               0LL,
               0x88800000,
               0,
               0,
               0xAu,
               0xAu,
               0LL,
               (__int64)v72,
               0LL,
               0LL,
               2u,
               0x400u,
               v13,
               0LL);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v72);
    if ( gspwndAltTab )
      PostMessage((struct tagWND *)gspwndAltTab, 0x10u, 0LL, 0LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v72[1] = Window;
    *(_QWORD *)(ThreadWin32Thread + 16) = v73;
    v72[0] = &gspwndAltTab;
    HMAssignmentLock(v72, 0LL);
    v16 = gspwndAltTab;
    if ( gspwndAltTab )
    {
      v20 = gspwndAltTab;
      *(_QWORD *)&v68 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v68;
      *((_QWORD *)&v68 + 1) = v16;
      HMLockObject(v20);
      v21 = v77;
      v22 = safe_cast_fnid_to_PSWITCHWND(v16);
      if ( v22 )
        *(_QWORD *)(v22 + 8) = v21;
      xxxShowSwitchWindow(v24, v23, v25);
      ThreadUnlock1(v27, v26, v28);
    }
    else
    {
      RemoveSwitchWindowInfo(&v77);
    }
    inited = ThreadUnlock1(v18, v17, v19);
  }
  if ( !inited )
  {
LABEL_20:
    if ( (_WORD)v1 == 27 )
    {
      v29 = _GetKeyState(16LL);
      NextQueueWindow = GetNextQueueWindow((__int64)v4, v29 < 0, 1);
      inited = NextQueueWindow;
      if ( !NextQueueWindow )
        goto LABEL_39;
      v2 = 1;
      v4 = (struct tagWND *)NextQueueWindow;
      v31 = NextQueueWindow;
      goto LABEL_38;
    }
    v32 = (struct tagWND *)gspwndAltTab;
    if ( gspwndAltTab )
    {
      v33 = gspwndAltTab;
      *(_QWORD *)&v68 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v68;
      *((_QWORD *)&v68 + 1) = v32;
      HMLockObject(v33);
      v34 = 0LL;
      do
      {
        v77 = Getpswi(v32);
        if ( !v77 )
          break;
        v38 = _GetKeyState(16LL);
        v39 = xxxMoveSwitchWndHilite(v32, v77, v38 < 0);
        if ( v34 )
        {
          if ( v34 == v39 )
          {
            inited = 0LL;
            break;
          }
        }
        else
        {
          v34 = v39;
        }
        inited = HMValidateHandleNoSecure(v39, 1);
      }
      while ( !inited );
      ThreadUnlock1(v36, v35, v37);
    }
    else
    {
      v40 = _GetKeyState(16LL);
      v41 = GetNextQueueWindow((__int64)v4, v40 < 0, 0);
      inited = v41;
      if ( !v41 )
        goto LABEL_39;
      if ( (struct tagWND *)v41 == v4 )
        goto LABEL_39;
      if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 24LL) & 8) == 0 )
      {
        *(_QWORD *)&v70 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v70;
        *((_QWORD *)&v70 + 1) = v41;
        HMLockObject(v41);
        xxxSetWindowPos(v4, 1LL, 0LL, 0LL, 0, 0, 25619);
        inited = ThreadUnlock1(v43, v42, v44);
        if ( !inited )
          goto LABEL_39;
      }
    }
  }
  v31 = inited;
  v4 = (struct tagWND *)inited;
LABEL_38:
  ThreadLockExchange(v31, (__int64)v64);
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
LABEL_39:
              if ( v4 )
                v45 = *(_QWORD *)v4;
              else
                LODWORD(v45) = 0;
              while ( !(unsigned int)xxxInternalGetMessage(v65, 0LL, 0, 0, 2, 0) )
                xxxWaitMessageEx(0x3CFFu, 0, 0LL);
              v4 = (struct tagWND *)HMValidateHandleNoSecure(v45, 1);
              if ( !v4 )
              {
                v4 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
                ThreadLockExchange((__int64)v4, (__int64)v64);
              }
              if ( !(unsigned int)xxxCallMsgFilter((__int64)v65, 6LL, v46, v47) )
                break;
              xxxInternalGetMessage(v65, 0LL, v65[1], v65[1], 1, 0);
            }
            if ( LODWORD(v65[1]) == 260 && gspwndAltTab )
            {
              if ( (unsigned __int16)v66 > 0x1Bu )
                goto LABEL_52;
              v48 = 134283776;
              if ( !_bittest(&v48, (unsigned __int16)v66) )
                goto LABEL_52;
            }
            else
            {
              v48 = 134283776;
            }
            if ( LODWORD(v65[1]) <= 0x202 )
              break;
            if ( LODWORD(v65[1]) == 516
              || LODWORD(v65[1]) == 517
              || LODWORD(v65[1]) == 519
              || LODWORD(v65[1]) == 520
              || LODWORD(v65[1]) == 523
              || LODWORD(v65[1]) == 524 )
            {
              goto LABEL_52;
            }
            v57 = LODWORD(v65[1]) == 786;
LABEL_107:
            if ( v57 )
              goto LABEL_52;
            if ( v4 )
              v60 = *(_QWORD *)v4;
            else
              LODWORD(v60) = 0;
            xxxInternalGetMessage(v65, 0LL, v65[1], v65[1], 1, 0);
            xxxTranslateMessage((__int64)v65, 0);
            xxxDispatchMessage(v65, v61, v62, v63);
            v4 = (struct tagWND *)HMValidateHandleNoSecure(v60, 1);
            if ( !v4 )
            {
              v4 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
              ThreadLockExchange((__int64)v4, (__int64)v64);
            }
          }
          if ( LODWORD(v65[1]) == 514 || LODWORD(v65[1]) == 75 )
            goto LABEL_52;
          if ( LODWORD(v65[1]) == 256 || LODWORD(v65[1]) == 257 )
            break;
          if ( LODWORD(v65[1]) != 260 )
          {
            if ( LODWORD(v65[1]) != 261 && LODWORD(v65[1]) != 262 && LODWORD(v65[1]) != 512 )
            {
              v57 = LODWORD(v65[1]) == 513;
              goto LABEL_107;
            }
            break;
          }
          LODWORD(v1) = (unsigned __int16)v66;
          if ( (unsigned __int16)v66 > 0x1Bu || !_bittest(&v48, (unsigned __int16)v66) )
            goto LABEL_54;
          if ( v4 )
            v58 = *(_QWORD *)v4;
          else
            LODWORD(v58) = 0;
          xxxInternalGetMessage(v65, 0LL, v65[1], v65[1], 1, 0);
          v4 = (struct tagWND *)HMValidateHandleNoSecure(v58, 1);
          if ( !v4 )
          {
            v4 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
            ThreadLockExchange((__int64)v4, (__int64)v64);
          }
          if ( (_DWORD)v1 == 9 )
            goto LABEL_20;
        }
        if ( v4 )
          v59 = *(_QWORD *)v4;
        else
          LODWORD(v59) = 0;
        xxxInternalGetMessage(v65, 0LL, v65[1], v65[1], 1, 0);
        v4 = (struct tagWND *)HMValidateHandleNoSecure(v59, 1);
        if ( !v4 )
        {
          v4 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
          ThreadLockExchange((__int64)v4, (__int64)v64);
        }
        if ( ((LODWORD(v65[1]) - 257) & 0xFFFFFFFB) == 0 )
          break;
        if ( LODWORD(v65[1]) == 256 )
          goto LABEL_52;
      }
      if ( (_WORD)v66 != 18 )
        break;
      if ( gspwndAltTab )
        goto LABEL_53;
    }
  }
  while ( (_WORD)v66 != 27 );
  if ( gspwndAltTab )
  {
LABEL_52:
    v4 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
    ThreadLockExchange((__int64)v4, (__int64)v64);
LABEL_53:
    v2 = 0;
    goto LABEL_54;
  }
  v2 = 1;
LABEL_54:
  xxxReleaseCapture();
  v49 = gspwndAltTab != 0;
  if ( v2 == 1 )
  {
    if ( gpqForeground )
    {
      v50 = *(struct tagWND **)(gpqForeground + 128LL);
      if ( v50 )
      {
        if ( v50 != v4 )
        {
          *(_QWORD *)&v70 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v70;
          *((_QWORD *)&v70 + 1) = v50;
          HMLockObject(v50);
          xxxSetWindowPos(v50, 1LL, 0LL, 0LL, 0, 0, 25619);
          ThreadUnlock1(v52, v51, v53);
        }
      }
    }
  }
  if ( v4 )
  {
    xxxSetForegroundWindowWithOptions((__int64)v4, 2u, 0, 0);
    if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 31LL) & 0x20) != 0 && !v2 )
    {
      if ( v49 )
        PostMessage(v4, 0x112u, 0xF120uLL, 0LL);
    }
  }
  xxxCancelCoolSwitch();
  return ThreadUnlock1(v55, v54, v56);
}
