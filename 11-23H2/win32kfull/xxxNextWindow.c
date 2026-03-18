/*
 * XREFs of xxxNextWindow @ 0x1C01C9C54
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x1C0036950 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     xxxSetThreadDesktop @ 0x1C002B6D4 (xxxSetThreadDesktop.c)
 *     SetNewForegroundQueue @ 0x1C0039E50 (SetNewForegroundQueue.c)
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     _PostMessage @ 0x1C00983E0 (_PostMessage.c)
 *     GetNonChildAncestor @ 0x1C00A70E4 (GetNonChildAncestor.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00AC0AC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 *     ?ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z @ 0x1C013953C (-ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z.c)
 *     Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage @ 0x1C0139810 (Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     xxxCancelCoolSwitch @ 0x1C0152EF2 (xxxCancelCoolSwitch.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01BA958 (safe_cast_fnid_to_PSWITCHWND.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01C8758 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01C87B0 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01C8D6C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01C966C (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01C9810 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01C9A08 (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxNextWindow(__int64 a1, int a2)
{
  __int64 v2; // r15
  __int64 result; // rax
  BOOL v6; // r12d
  __int64 NonChildAncestor; // rsi
  struct tagWND *v8; // r14
  unsigned __int64 *v9; // r14
  __int64 v10; // rcx
  struct tagWND *inited; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 NextQueueWindow; // rbx
  int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 Window; // r12
  __int64 ThreadWin32Thread; // rax
  struct tagSwitchWndInfo *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // r8
  ULONG_PTR v35; // rcx
  __int64 v36; // rdx
  struct tagWND *v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  ULONG_PTR v42; // rcx
  struct tagSwitchWndInfo *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rax
  const struct tagWND *v54; // rdx
  unsigned int v55; // r8d
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  ULONG_PTR *v62; // [rsp+90h] [rbp-80h] BYREF
  __int64 v63; // [rsp+98h] [rbp-78h]
  void *v64; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-68h]
  __int64 v66; // [rsp+B0h] [rbp-60h]
  __int64 v67; // [rsp+C0h] [rbp-50h] BYREF
  __int128 v68; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v69; // [rsp+D8h] [rbp-38h]
  __int128 v70; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v71; // [rsp+F0h] [rbp-20h]
  __int128 v72; // [rsp+F8h] [rbp-18h] BYREF
  __int64 v73; // [rsp+108h] [rbp-8h]
  __int128 v74; // [rsp+110h] [rbp+0h] BYREF
  __int64 v75; // [rsp+120h] [rbp+10h]
  _QWORD v76[9]; // [rsp+128h] [rbp+18h] BYREF
  BOOL v78; // [rsp+190h] [rbp+80h]
  struct tagSwitchWndInfo *v79; // [rsp+198h] [rbp+88h] BYREF

  v2 = 0LL;
  v69 = 0LL;
  v73 = 0LL;
  v71 = 0LL;
  result = gptiCurrent;
  v76[2] = 0LL;
  v79 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v72 = 0LL;
  v70 = 0LL;
  if ( a1 )
  {
    v6 = (_GetAsyncKeyState(16LL) & 0x8000u) != 0LL;
    v78 = v6;
    result = GetNonChildAncestor(*(_QWORD *)(a1 + 120));
    NonChildAncestor = result;
    if ( a2 == 9 )
    {
      v8 = (struct tagWND *)gspwndAltTab;
      if ( gspwndAltTab )
      {
        v75 = 0LL;
        v42 = gspwndAltTab;
        *(_QWORD *)&v74 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v74;
        *((_QWORD *)&v74 + 1) = v8;
        HMLockObject(v42);
        do
        {
          v43 = Getpswi(v8);
          v47 = 0LL;
          v79 = v43;
          if ( !v43 )
          {
            result = ThreadUnlock1(v45, v44, v46);
            goto LABEL_39;
          }
          v48 = xxxMoveSwitchWndHilite(v8, v43, v6);
          if ( v2 )
          {
            if ( v2 == v48 )
              break;
          }
          else
          {
            v2 = v48;
          }
          v47 = HMValidateHandleNoSecure(v48, 1);
        }
        while ( !v47 );
        ThreadUnlock1(v50, v49, v51);
        v65 = v47;
        v64 = &gspwndActivate;
        HMAssignmentLock(&v64, 0LL);
        result = 0LL;
        if ( !gspwndActivate )
          return xxxCancelCoolSwitch();
      }
      else
      {
        v74 = 0LL;
        v75 = 0LL;
        ForceResetMouseButtonsDownState();
        v63 = *(_QWORD *)(a1 + 128);
        v62 = (ULONG_PTR *)&gspwndActivate;
        HMAssignmentLock(&v62, 0LL);
        if ( gspwndActivate
          || (v62 = (ULONG_PTR *)&gspwndActivate,
              v63 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) + 112LL),
              result = HMAssignmentLock(&v62, 0LL),
              gspwndActivate) )
        {
          *(_QWORD *)&v68 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v68;
          *((_QWORD *)&v68 + 1) = NonChildAncestor;
          if ( NonChildAncestor )
            HMLockObject(NonChildAncestor);
          v9 = (unsigned __int64 *)gspwndActivate;
          *(_QWORD *)&v70 = *(_QWORD *)(gptiCurrent + 416LL);
          v10 = gspwndActivate;
          *(_QWORD *)(gptiCurrent + 416LL) = &v70;
          *((_QWORD *)&v70 + 1) = v10;
          HMLockObject(v10);
          xxxSendTransformableMessageTimeout(v9, 0x1Fu, 0LL, 0LL, 2u, 0x64u, (unsigned __int64 *)&v67, 1, 0);
          inited = InitSwitchWndInfo(&v79, (struct tagWND *)v9, v6);
          v14 = *(_QWORD *)(gptiCurrent + 416LL);
          NextQueueWindow = (__int64)inited;
          *(_QWORD *)&v72 = v14;
          *(_QWORD *)(gptiCurrent + 416LL) = &v72;
          *((_QWORD *)&v72 + 1) = inited;
          if ( inited )
            HMLockObject(inited);
          if ( v79 )
          {
            v16 = 0;
            if ( !NextQueueWindow )
            {
              RemoveSwitchWindowInfo(&v79);
              ThreadUnlock1(v18, v17, v19);
              ThreadUnlock1(v21, v20, v22);
              ThreadUnlock1(v24, v23, v25);
              return HMAssignmentUnlock(&gspwndActivate);
            }
            PushW32ThreadLock((__int64)&v79, &v74, (__int64)RemoveSwitchWindowInfo);
            *((_DWORD *)v79 + 27) = 0;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 1956);
            CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v26);
            if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
            {
              v29 = PsGetCurrentProcessWin32Process(v28);
              if ( v29 )
                v29 &= -(__int64)(*(_QWORD *)v29 != 0LL);
              if ( (unsigned int)IsImmersiveAppRestricted(v29) )
                v16 = 1;
            }
            SmartObjStackRefBase<tagMENU>::Init(&v64, 0LL);
            v66 = 0LL;
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
                       (__int64)&v64,
                       0LL,
                       0LL,
                       2u,
                       0x400u,
                       v16,
                       0LL);
            SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v64);
            if ( gspwndAltTab )
              PostMessage((struct tagWND *)gspwndAltTab, 0x10u, 0LL, 0LL);
            v63 = Window;
            v62 = &gspwndAltTab;
            HMAssignmentLock(&v62, 0LL);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)(ThreadWin32Thread + 16) = v74;
            if ( gspwndAltTab )
            {
              v32 = v79;
              v33 = safe_cast_fnid_to_PSWITCHWND(gspwndAltTab);
              if ( v33 )
                *(_QWORD *)(v33 + 8) = v32;
              v64 = &gspwndActivate;
              v65 = NextQueueWindow;
              HMAssignmentLock(&v64, 0LL);
              if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 )
                xxxSetThreadDesktop(0LL, grpdeskRitInput, v34);
              v35 = gspwndAltTab;
              v76[0] = *(_QWORD *)(gptiCurrent + 416LL);
              *(_QWORD *)(gptiCurrent + 416LL) = v76;
              v76[1] = v35;
              HMLockObject(v35);
              xxxShowSwitchWindow(v37, v36, v38);
              ThreadUnlock1(v40, v39, v41);
              goto LABEL_67;
            }
            RemoveSwitchWindowInfo(&v79);
            v6 = v78;
            goto LABEL_48;
          }
LABEL_47:
          if ( !NextQueueWindow )
          {
LABEL_67:
            ThreadUnlock1(v14, v12, v13);
            ThreadUnlock1(v57, v56, v58);
            return ThreadUnlock1(v60, v59, v61);
          }
LABEL_48:
          if ( NonChildAncestor )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 31LL) & 0xC0) != 0x40 )
            {
              v52 = *(_QWORD *)(NonChildAncestor + 168);
              if ( v52 )
                *(_DWORD *)(*(_QWORD *)(v52 + 40) + 40LL) &= ~4u;
            }
          }
          if ( !v6 && (*(_BYTE *)(v9[5] + 24) & 8) == 0 )
            xxxSetWindowPos((struct tagWND *)v9, 1LL, 0LL, 0LL, 0, 0, 25619);
          if ( (*(_BYTE *)(*(_QWORD *)(NextQueueWindow + 40) + 31LL) & 0xC0) != 0x40 )
          {
            v53 = *(_QWORD *)(NextQueueWindow + 168);
            if ( v53 )
              *(_DWORD *)(*(_QWORD *)(v53 + 40) + 40LL) |= 4u;
          }
          if ( gpqForeground == *(_QWORD *)(*(_QWORD *)(NextQueueWindow + 16) + 432LL) )
          {
            if ( (unsigned int)Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage() )
              ResetForegroundQueue(0);
            else
              SetNewForegroundQueue(0LL, v54);
          }
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(NextQueueWindow + 16), 0);
          v55 = 18;
          if ( a2 != 9 )
            v55 = 2;
          xxxSetForegroundWindow2(NextQueueWindow, 0LL, v55);
          if ( a2 == 9 && (*(_BYTE *)(*(_QWORD *)(NextQueueWindow + 40) + 31LL) & 0x40) != 0 )
            xxxSetWindowPos((struct tagWND *)NextQueueWindow, 0LL, 0LL, 0LL, 0, 0, 16387);
          goto LABEL_67;
        }
      }
    }
    else
    {
      if ( a2 != 27 )
        return result;
LABEL_39:
      if ( (*(_DWORD *)(a1 + 396) & 0x4000000) == 0 )
      {
        v9 = *(unsigned __int64 **)(a1 + 128);
        if ( v9
          || (result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 456LL) + 8LL),
              (v9 = *(unsigned __int64 **)(*(_QWORD *)(result + 24) + 112LL)) != 0LL) )
        {
          NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(a1 + 120));
          *(_QWORD *)&v68 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v68;
          *((_QWORD *)&v68 + 1) = NonChildAncestor;
          if ( NonChildAncestor )
            HMLockObject(NonChildAncestor);
          *(_QWORD *)&v70 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v70;
          *((_QWORD *)&v70 + 1) = v9;
          HMLockObject(v9);
          xxxSendTransformableMessageTimeout(v9, 0x1Fu, 0LL, 0LL, 2u, 0x64u, (unsigned __int64 *)&v67, 1, 0);
          NextQueueWindow = GetNextQueueWindow((__int64)v9, v6, 1);
          *(_QWORD *)&v72 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v72;
          *((_QWORD *)&v72 + 1) = NextQueueWindow;
          if ( NextQueueWindow )
            HMLockObject(NextQueueWindow);
          if ( (unsigned __int64 *)NextQueueWindow == v9 )
            goto LABEL_67;
          goto LABEL_47;
        }
      }
    }
  }
  return result;
}
