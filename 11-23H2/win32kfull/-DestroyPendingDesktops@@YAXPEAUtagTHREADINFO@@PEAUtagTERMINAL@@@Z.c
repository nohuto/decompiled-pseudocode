/*
 * XREFs of ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00A1D48
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C002B3A0 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x1C0017080 (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     DwmAsyncShellWindowChange @ 0x1C0022230 (DwmAsyncShellWindowChange.c)
 *     xxxSetThreadDesktop @ 0x1C002B6D4 (xxxSetThreadDesktop.c)
 *     xxxSwitchDesktop @ 0x1C002C52C (xxxSwitchDesktop.c)
 *     _DestroyMenu @ 0x1C0040040 (_DestroyMenu.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     UnlockDesktopSysMenu @ 0x1C009D69C (UnlockDesktopSysMenu.c)
 *     UnlockDesktopMenu @ 0x1C009D6C0 (UnlockDesktopMenu.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00A0C70 (xxxCleanupMotherDesktopWindow.c)
 *     RemoteDisableScreen @ 0x1C00A13E8 (RemoteDisableScreen.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqS @ 0x1C00A1560 (WPP_RECORDER_AND_TRACE_SF_qqS.c)
 *     ?GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z @ 0x1C00A2940 (-GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sq @ 0x1C00A29A8 (WPP_RECORDER_AND_TRACE_SF_Sq.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139A10 (Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage.c)
 */

void __fastcall DestroyPendingDesktops(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  struct tagTERMINAL *v2; // r14
  struct tagTHREADINFO *v3; // r15
  int v4; // edx
  int v5; // r8d
  char *v6; // r12
  __int64 v7; // rdi
  char v8; // bl
  bool v9; // si
  const unsigned __int16 *DesktopName; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // r13
  void *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  struct tagTHREADINFO *v17; // rsi
  struct tagDESKTOP *v18; // rbx
  char v19; // si
  bool v20; // r14
  const unsigned __int16 *v21; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *i; // rdx
  _DWORD *v27; // r15
  __int64 v28; // r12
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 **v41; // rax
  __int64 v42; // rbx
  void *v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rcx
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rbx
  int v49; // edx
  __int64 v50; // r8
  __int64 v51; // rbx
  void *v52; // rcx
  __int64 v53; // r9
  __int64 v54; // rax
  struct tagDESKTOP *v55; // rbx
  char v56; // dl
  char v57; // si
  char v58; // r14
  const char *v59; // rax
  __int64 v60; // rbx
  struct tagWND *v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rax
  char v66; // dl
  int v67; // [rsp+28h] [rbp-A9h]
  int v68; // [rsp+30h] [rbp-A1h]
  int v69; // [rsp+38h] [rbp-99h]
  int v70; // [rsp+40h] [rbp-91h]
  _QWORD v71[2]; // [rsp+68h] [rbp-69h] BYREF
  __int64 v72; // [rsp+78h] [rbp-59h]
  __int128 v73; // [rsp+80h] [rbp-51h] BYREF
  __int64 v74; // [rsp+90h] [rbp-41h]
  __int128 v75; // [rsp+98h] [rbp-39h] BYREF
  __int64 v76; // [rsp+A8h] [rbp-29h]
  __int128 v77; // [rsp+B0h] [rbp-21h] BYREF
  __int64 v78; // [rsp+C0h] [rbp-11h]
  __int128 v79; // [rsp+C8h] [rbp-9h] BYREF
  __int64 v80; // [rsp+D8h] [rbp+7h]
  __int128 v81; // [rsp+E0h] [rbp+Fh] BYREF
  __int64 v82; // [rsp+F0h] [rbp+1Fh]

  v2 = a2;
  v3 = a1;
  SmartObjStackRefBase<tagMENU>::Init(v71, 0LL);
  v6 = (char *)v2 + 48;
  v7 = *((_QWORD *)v2 + 6);
  v82 = 0LL;
  v72 = 0LL;
  v80 = 0LL;
  v74 = 0LL;
  v78 = 0LL;
  v81 = 0LL;
  v79 = 0LL;
  v73 = 0LL;
  v77 = 0LL;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
        || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v8 = 0;
      }
      v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        DesktopName = GetDesktopName((struct tagDESKTOP *)v7);
        LOBYTE(v11) = v9;
        LOBYTE(v12) = v8;
        WPP_RECORDER_AND_TRACE_SF_Sq(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v11,
          (_DWORD)gFullLog,
          v67,
          v68,
          10,
          v70,
          (__int64)DesktopName,
          v7);
      }
      PushW32ThreadLock(v7, &v81, UserDereferenceObject);
      ObfReferenceObject((PVOID)v7);
      v13 = *(_QWORD *)(v7 + 40);
      PushW32ThreadLock(v13, &v79, UserDereferenceObject);
      v14 = *(void **)(v7 + 40);
      if ( v14 )
        ObfReferenceObject(v14);
      LockObjectAssignment(v6, *(_QWORD *)(v7 + 32));
      UnlockObjectAssignment(v7 + 32);
      if ( v7 == grpdeskRitInput )
        break;
      v17 = a1;
      if ( v7 == *((_QWORD *)a1 + 57) )
      {
        v24 = 0LL;
        v25 = grpWinStaList;
        if ( grpWinStaList )
        {
          v16 = 16LL;
          while ( (*(_DWORD *)(v25 + 64) & 0x10) != 0
               || *(struct tagTERMINAL **)(v25 + 56) != v2
               || !*(_QWORD *)(v25 + 16) )
          {
            v25 = *(_QWORD *)(v25 + 8);
            if ( !v25 )
              goto LABEL_74;
          }
          v24 = *(_QWORD *)(v25 + 16);
          do
          {
            if ( v24 != v7 )
              break;
            v24 = *(_QWORD *)(v24 + 32);
          }
          while ( v24 );
        }
LABEL_74:
        xxxSetThreadDesktop(0LL, v24, v16);
      }
LABEL_75:
      if ( v7 == gspdeskShouldBeForeground )
      {
        for ( i = *(_QWORD **)(v13 + 16); i && (i == grpdeskLogon || i == gspdeskDisconnect); i = (_QWORD *)i[4] )
          ;
        LockObjectAssignment(gspdeskShouldBeForeground, i);
      }
      v27 = (_DWORD *)*((_QWORD *)v17 + 57);
      v28 = *((_QWORD *)v17 + 74);
      PushW32ThreadLock(v27, &v77, UserDereferenceObject);
      if ( v27 )
        ObfReferenceObject(v27);
      xxxSetThreadDesktop(0LL, v7, v29);
      HMAssignmentUnlock(v7 + 88);
      HMAssignmentUnlock(v7 + 96);
      HMAssignmentUnlock(v7 + 192);
      v30 = *(_QWORD *)(v7 + 56);
      *(_DWORD *)(v7 + 48) &= 0xFFFFF23F;
      if ( v30 )
      {
        v72 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v71, v30);
        if ( UnlockDesktopSysMenu(v7 + 56) )
        {
          v31 = v72;
          if ( !v72 )
            v31 = *(_QWORD *)v71[0];
          DestroyMenu(v31);
        }
      }
      v32 = *(_QWORD *)(v7 + 64);
      if ( v32 )
      {
        v72 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v71, v32);
        if ( UnlockDesktopSysMenu(v7 + 64) )
        {
          v33 = v72;
          if ( !v72 )
            v33 = *(_QWORD *)v71[0];
          DestroyMenu(v33);
        }
      }
      v34 = *(_QWORD *)(v7 + 72);
      if ( v34 )
      {
        v72 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v71, v34);
        if ( UnlockDesktopMenu(v7 + 72) )
        {
          v35 = v72;
          if ( !v72 )
            v35 = *(_QWORD *)v71[0];
          DestroyMenu(v35);
        }
      }
      v36 = *(_QWORD *)(v7 + 80);
      if ( v36 )
      {
        v72 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v71, v36);
        if ( UnlockDesktopMenu(v7 + 80) )
        {
          v37 = v72;
          if ( !v72 )
            v37 = *(_QWORD *)v71[0];
          DestroyMenu(v37);
        }
      }
      v38 = *(_QWORD *)(v7 + 8);
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 168);
        if ( v39 )
        {
          if ( (unsigned int)IsWindowDesktopComposed(v39) )
          {
            v41 = *(__int64 ***)(v7 + 8);
            v42 = **v41;
            v43 = (void *)ReferenceDwmApiPort(*v41, v40);
            DwmAsyncShellWindowChange(v43, 0LL, v42);
          }
          v44 = *(_QWORD *)(v7 + 8);
          *(_QWORD *)(*(_QWORD *)v44 + 24LL) = 0LL;
          HMAssignmentUnlock(v44 + 168);
        }
        v45 = (_QWORD *)(*(_QWORD *)(v7 + 8) + 184LL);
        if ( *v45 )
          HMAssignmentUnlock(v45);
        v46 = *(_QWORD **)(v7 + 8);
        if ( v46[24] )
        {
          *(_QWORD *)(*v46 + 32LL) = 0LL;
          HMAssignmentUnlock(v46 + 24);
        }
        v47 = *(_QWORD **)(v7 + 8);
        if ( v47[25] )
        {
          *(_QWORD *)(*v47 + 40LL) = 0LL;
          HMAssignmentUnlock(v47 + 25);
        }
      }
      v48 = *(_QWORD *)(v7 + 104);
      if ( v48 && HMAssignmentUnlock(v7 + 104) )
        xxxDestroyWindow(v48);
      if ( !(unsigned int)Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage() )
      {
        v51 = *(_QWORD *)(v7 + 112);
        if ( v51 )
        {
          if ( HMAssignmentUnlock(v7 + 112) )
            xxxDestroyWindow(v51);
        }
      }
      v52 = *(void **)(v7 + 264);
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v52, 0xFFFFFFFF) == 1 )
          Win32FreePool(v52);
        *(_QWORD *)(v7 + 264) = 0LL;
      }
      v53 = *((_QWORD *)v2 + 1);
      if ( !v53 || *(_QWORD *)(v53 + 24) != v7 )
        goto LABEL_152;
      if ( (*(_DWORD *)v2 & 2) != 0 )
      {
        v54 = grpWinStaList;
        if ( grpWinStaList )
        {
          while ( 1 )
          {
            v54 = *(_QWORD *)(v54 + 8);
            if ( !v54 )
              break;
            v55 = *(struct tagDESKTOP **)(v54 + 16);
            if ( v55 )
              goto LABEL_144;
          }
        }
      }
      else
      {
        v55 = *(struct tagDESKTOP **)(v13 + 16);
        if ( v55 )
        {
LABEL_144:
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
            || (v57 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v57 = 0;
          }
          v58 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v57 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v59 = (const char *)GetDesktopName(v55);
            WPP_RECORDER_AND_TRACE_SF_qqS(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v57,
              v58,
              (__int64)gFullLog,
              v67,
              v68,
              v69,
              v70,
              *((_QWORD *)a2 + 1),
              (char)v55,
              v59);
          }
          v2 = a2;
          LockObjectAssignment(*((_QWORD *)a2 + 1) + 24LL, v55);
          v17 = a1;
          goto LABEL_152;
        }
      }
      if ( v2 == (struct tagTERMINAL *)gTermIO[0] )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
          || (v56 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v56 = 0;
        }
        if ( v56 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_q(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v56,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            v53,
            4u,
            8u,
            0x10u,
            (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids);
        xxxCleanupMotherDesktopWindow((__int64)v2);
      }
LABEL_152:
      v60 = *(_QWORD *)(v7 + 8);
      if ( v60 )
      {
        v61 = *(struct tagWND **)(v60 + 24);
        if ( v61 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)v61 + 5) + 31LL) & 0x10) != 0 )
          {
            *(_QWORD *)&v73 = *((_QWORD *)v17 + 52);
            *((_QWORD *)v17 + 52) = &v73;
            *((_QWORD *)&v73 + 1) = v61;
            HMLockObject(v61);
            xxxSetWindowPos(v61, 0LL, 0LL, 0LL, 0, 0, 1183);
            ThreadUnlock1(v63, v62, v64);
          }
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
            || (LOBYTE(v49) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v49) = 0;
          }
          if ( (_BYTE)v49 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v50) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v49,
              v50,
              (unsigned int)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids,
              4,
              8,
              18,
              (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids);
          }
          xxxDestroyWindow(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL));
          if ( v7 == grpdeskRitInput )
          {
            *(_DWORD *)(v7 + 48) |= 1u;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
              || (v66 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              v66 = 0;
            }
            LOBYTE(v50) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v66 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_q(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v66,
                v50,
                (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids,
                4u,
                8u,
                0x13u,
                (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids);
          }
          else
          {
            v65 = *(_QWORD *)(v7 + 8);
            *(_QWORD *)(*(_QWORD *)v65 + 8LL) = 0LL;
            HMAssignmentUnlock(v65 + 24);
          }
          *(_DWORD *)(v7 + 48) |= 2u;
        }
      }
      if ( (*(_DWORD *)v2 & 2) == 0 || !v27 || (v27[12] & 6) == 0 )
        xxxSetThreadDesktop(v28, (__int64)v27, v50);
      PopAndFreeW32ThreadLock(&v77);
      PopAndFreeW32ThreadLock(&v79);
      PopAndFreeW32ThreadLock(&v81);
      v3 = a1;
      v6 = (char *)v2 + 48;
      v7 = *((_QWORD *)v2 + 6);
      if ( !v7 )
        goto LABEL_178;
    }
    v75 = 0LL;
    v76 = 0LL;
    LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v16,
        (unsigned int)&WPP_GLOBAL_Control,
        4,
        8,
        11,
        (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids);
    }
    if ( (*(_DWORD *)(v13 + 64) & 1) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
        || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v15) = 0;
      }
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          v16,
          (unsigned int)&WPP_GLOBAL_Control,
          4,
          8,
          12,
          (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids);
      }
      if ( gspdeskDisconnect
        && ((PVOID)v7 == grpdeskLogon || !grpdeskLogon || (*((_DWORD *)grpdeskLogon + 12) & 2) != 0) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
          || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v15) = 0;
        }
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v15,
            v16,
            (unsigned int)&WPP_GLOBAL_Control,
            4,
            8,
            13,
            (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids);
        RemoteDisableScreen(grpdeskRitInput, v15, v16, gbDesktopLocked);
LABEL_40:
        v17 = a1;
        goto LABEL_75;
      }
      v18 = (struct tagDESKTOP *)grpdeskLogon;
    }
    else
    {
      v18 = *(struct tagDESKTOP **)(v13 + 16);
      if ( v18 == (struct tagDESKTOP *)v7 )
        v18 = *(struct tagDESKTOP **)(v7 + 32);
      if ( !v18 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
          || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v15) = 0;
        }
        if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v15,
            v16,
            (unsigned int)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids,
            4,
            8,
            14,
            (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids);
        }
        ClearWakeBit(v3, 15367, 0);
      }
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v19 = 0;
    }
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = GetDesktopName(v18);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v19;
      WPP_RECORDER_AND_TRACE_SF_Sq(
        WPP_GLOBAL_Control->AttachedDevice,
        v23,
        v22,
        (_DWORD)gFullLog,
        v67,
        v68,
        15,
        v70,
        (__int64)v21,
        (char)v18);
    }
    PushW32ThreadLock(v18, &v75, UserDereferenceObject);
    if ( v18 )
      ObfReferenceObject(v18);
    xxxSwitchDesktop(v13, (__int64)v18, 0);
    PopAndFreeW32ThreadLock(&v75);
    v2 = a2;
    goto LABEL_40;
  }
LABEL_178:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v4) = 0;
  }
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v5,
      (unsigned int)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids,
      4,
      8,
      20,
      (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids);
  }
  KeSetEvent(gpevtDesktopDestroyed, 1, 0);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v71);
}
