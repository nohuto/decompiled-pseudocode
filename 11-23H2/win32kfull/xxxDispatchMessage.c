/*
 * XREFs of xxxDispatchMessage @ 0x1C01185F4
 * Callers:
 *     xxxSetCsrssThreadDesktop @ 0x1C002A7B0 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C002AB20 (xxxRestoreCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C002B3A0 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserDispatchMessage @ 0x1C01184E0 (NtUserDispatchMessage.c)
 *     xxxDCETrackCaptionButton @ 0x1C01BA07C (xxxDCETrackCaptionButton.c)
 *     xxxOldNextWindow @ 0x1C01CA428 (xxxOldNextWindow.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EF350 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxMNLoop @ 0x1C0213DFC (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022907C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C022BE68 (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C0238C64 (xxxHelpLoop.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C0026730 (DwmAsyncChildStyleChange.c)
 *     ValidateTimerCallback @ 0x1C0078564 (ValidateTimerCallback.c)
 *     DirtyVisRgnTrackers @ 0x1C00B699C (DirtyVisRgnTrackers.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EBC94 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     xxxSimpleDoSyncPaint @ 0x1C01193C4 (xxxSimpleDoSyncPaint.c)
 *     SfnDWORD @ 0x1C01243F0 (SfnDWORD.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ??1CEtwTraceDispatchMessage@@QEAA@XZ @ 0x1C01C0560 (--1CEtwTraceDispatchMessage@@QEAA@XZ.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C024B4C8 (RtlMBMessageWParamCharToWCS.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C024B618 (RtlWCSMessageWParamCharToMB.c)
 */

__int64 __fastcall xxxDispatchMessage(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  PERESOURCE *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rcx
  struct tagWND *v11; // r14
  __int64 v13; // rdx
  BOOL v14; // eax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // ecx
  int v23; // ebx
  int v24; // r15d
  _DWORD *v25; // rax
  int v26; // r12d
  int v27; // ecx
  int v28; // edx
  int v29; // ebp
  int v30; // eax
  int v31; // r13d
  int v32; // r15d
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  void *v36; // rax
  __int64 v37; // rax
  __int64 (__fastcall *v38)(int, int, int, int, __int64, __int64, char); // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rbp
  unsigned int v41; // r10d
  __int64 *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rsi
  _QWORD *v50; // r15
  int v51; // eax
  int v52; // ebx
  int v53; // r13d
  _DWORD *v54; // rax
  int v55; // r15d
  int v56; // ecx
  int v57; // edx
  int v58; // esi
  int v59; // eax
  int v60; // r12d
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  void *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  PERESOURCE *v69; // rax
  __int64 *v70; // rax
  __int64 v71; // rcx
  __int128 v72; // [rsp+50h] [rbp-58h] BYREF
  __int64 v73; // [rsp+60h] [rbp-48h]
  int v74; // [rsp+B0h] [rbp+8h]
  unsigned int v75; // [rsp+B8h] [rbp+10h] BYREF
  int v76; // [rsp+C0h] [rbp+18h]

  v4 = *((_DWORD *)a1 + 2);
  v75 = v4;
  v72 = 0LL;
  v73 = 0LL;
  v6 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  v7 = 0LL;
  if ( !ExIsResourceAcquiredSharedLite(*v6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v8 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v8 = *ThreadWin32Thread;
  LOBYTE(v10) = *(_BYTE *)(v8 + 1296);
  EtwTraceBeginDispatchMessage(v10, v4);
  v11 = 0LL;
  if ( *a1 )
  {
    v11 = (struct tagWND *)ValidateHwnd(*a1);
    if ( !v11 )
      goto LABEL_7;
  }
  v13 = *((unsigned int *)a1 + 2);
  if ( (unsigned int)v13 < 0x400 )
  {
    v14 = _bittest16(&MessageTable[v13], 9u) || (_DWORD)v13 == 537 && (a1[2] & 0x8000) != 0;
    if ( v14 || (_DWORD)v13 == 536 && (a1[2] & 0x8000) != 0 )
    {
      UserSetLastError(1159);
LABEL_7:
      CEtwTraceDispatchMessage::~CEtwTraceDispatchMessage((CEtwTraceDispatchMessage *)&v75);
      return 0LL;
    }
  }
  ThreadLock(v11, &v72);
  v18 = *((_DWORD *)a1 + 2);
  if ( v18 != 275 && v18 != 280 || (v15 = a1[3]) == 0 )
  {
    if ( !v11 )
      goto LABEL_24;
    v74 = -16;
    if ( v18 != 15
      || (v21 = *((_QWORD *)v11 + 5),
          v22 = *(_DWORD *)(v21 + 232),
          v23 = *(_DWORD *)(v21 + 28),
          v24 = *(_DWORD *)(v21 + 24),
          *(_BYTE *)(v21 + 18) |= 0x40u,
          v76 = v22,
          !(unsigned int)IsWindowDesktopComposed(v11)) )
    {
LABEL_44:
      v37 = *((_QWORD *)v11 + 5);
      LOBYTE(v17) = *(_BYTE *)(v37 + 18);
      if ( (v17 & 4) != 0 )
      {
        v16 = *((unsigned int *)a1 + 2);
        if ( (unsigned int)v16 < 0x400 )
          v38 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gapfnScSendMessage[(unsigned __int8)MessageTable[v16]];
        else
          v38 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))SfnDWORD;
        v15 = (unsigned __int64)SfnINWPARAMCHAR;
        if ( v38 == SfnINWPARAMCHAR && (v17 & 8) != 0 )
          RtlMBMessageWParamCharToWCS(v16, a1 + 2);
        v39 = *(_QWORD *)(*((_QWORD *)v11 + 5) + 120LL);
        if ( v39 < 7 )
        {
          v20 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64))(&gServerHandlers)[v39])(
                  v11,
                  *((unsigned int *)a1 + 2),
                  a1[2],
                  a1[3]);
          goto LABEL_27;
        }
LABEL_24:
        v19 = 0LL;
        goto LABEL_88;
      }
      v40 = *(_QWORD *)(v37 + 120);
      v41 = *((_DWORD *)a1 + 2);
      if ( (v17 & 8) != 0 )
      {
        v42 = a1 + 2;
        RtlWCSMessageWParamCharToMB(v41, a1 + 2);
        v43 = *((unsigned int *)a1 + 2);
        if ( (_DWORD)v43 != 576 && (_DWORD)v43 != 281 )
        {
          v44 = *v42;
LABEL_57:
          v45 = SfnDWORD((_DWORD)v11, v43, v44, a1[3], v40, *(_QWORD *)(gpsi + 752LL));
          goto LABEL_64;
        }
        v46 = *v42;
        v47 = (unsigned __int16)v43;
      }
      else
      {
        if ( v41 != 576 && v41 != 281 )
        {
          v44 = a1[2];
          LODWORD(v43) = *((_DWORD *)a1 + 2);
          goto LABEL_57;
        }
        v46 = a1[2];
        v43 = v41;
        v47 = (unsigned __int16)v41;
      }
      v45 = ((__int64 (__fastcall *)(struct tagWND *, __int64, __int64, __int64, __int64, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[v47]])(
              v11,
              v43,
              v46,
              a1[3],
              v40,
              *(_QWORD *)(gpsi + 752LL),
              1,
              0LL);
LABEL_64:
      v19 = v45;
      if ( *((_DWORD *)a1 + 2) != 15 )
        goto LABEL_88;
      v48 = *a1;
      PsGetThreadWin32Thread(KeGetCurrentThread());
      v15 = (unsigned __int16)v48;
      v16 = gpsi;
      if ( (unsigned __int64)(unsigned __int16)v48 >= *(_QWORD *)(gpsi + 8LL) )
        goto LABEL_88;
      v49 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v48;
      v50 = (_QWORD *)HMPkheFromPhe(v49);
      LOWORD(v48) = WORD1(v48) & 0x7FFF;
      if ( (WORD1(v48) & 0x7FFF) != *(_WORD *)(v49 + 26)
        && (_WORD)v48 != 0x7FFF
        && ((_WORD)v48 || !PsGetCurrentProcessWow64Process(v16, v15, v17)) )
      {
        goto LABEL_88;
      }
      if ( (*(_BYTE *)(v49 + 25) & 1) != 0 )
        goto LABEL_88;
      if ( *(_BYTE *)(v49 + 24) != 1 )
        goto LABEL_88;
      if ( !*v50 )
        goto LABEL_88;
      v16 = *((_QWORD *)v11 + 5);
      if ( (*(_BYTE *)(v16 + 18) & 0x40) == 0 )
        goto LABEL_88;
      v51 = *(_DWORD *)(v16 + 232);
      v52 = *(_DWORD *)(v16 + 28);
      v53 = *(_DWORD *)(v16 + 24);
      *(_BYTE *)(v16 + 20) &= ~1u;
      v76 = v51;
      if ( !(unsigned int)IsWindowDesktopComposed(v11) )
        goto LABEL_87;
      v54 = (_DWORD *)*((_QWORD *)v11 + 5);
      v55 = v54[7];
      v56 = v54[6];
      v57 = v54[58];
      v58 = v53 ^ v56;
      v59 = v76 ^ v57;
      v60 = v52 ^ v55;
      if ( v52 == v55 )
      {
        if ( v58 )
        {
LABEL_79:
          if ( (v58 & 0x4E27A9) != 0 )
          {
            v74 = -20;
            v55 = v56;
          }
          else
          {
            if ( (v59 & 0x12C0) == 0 )
            {
LABEL_84:
              if ( (v60 & 0xC40000) != 0 || (v58 & 0x200A0381) != 0 )
                WindowMargins::CheckForChanges(v11, 1);
              goto LABEL_87;
            }
            v74 = -268435456;
            v55 = v57;
          }
LABEL_83:
          DirtyVisRgnTrackers((__int64)v11);
          v61 = *(_QWORD *)v11;
          v64 = (void *)ReferenceDwmApiPort(v63, v62);
          DwmAsyncChildStyleChange(v64, v61, v74, v55);
          goto LABEL_84;
        }
        if ( !v59 )
        {
LABEL_87:
          xxxSimpleDoSyncPaint(v11);
          goto LABEL_88;
        }
      }
      if ( (v60 & 0xB1CF0000) != 0 )
        goto LABEL_83;
      goto LABEL_79;
    }
    v25 = (_DWORD *)*((_QWORD *)v11 + 5);
    v26 = v25[7];
    v27 = v25[6];
    v28 = v25[58];
    v29 = v24 ^ v27;
    v30 = v76 ^ v28;
    v31 = v23 ^ v26;
    if ( v23 == v26 )
    {
      if ( v29 )
        goto LABEL_36;
      if ( !v30 )
        goto LABEL_44;
    }
    if ( (v31 & 0xB1CF0000) != 0 )
    {
      v32 = -16;
      goto LABEL_40;
    }
LABEL_36:
    if ( (v29 & 0x4E27A9) != 0 )
    {
      v32 = -20;
      v26 = v27;
    }
    else
    {
      if ( (v30 & 0x12C0) == 0 )
      {
LABEL_41:
        if ( (v31 & 0xC40000) != 0 || (v29 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges(v11, 1);
        goto LABEL_44;
      }
      v32 = -268435456;
      v26 = v28;
    }
LABEL_40:
    DirtyVisRgnTrackers((__int64)v11);
    v33 = *(_QWORD *)v11;
    v36 = (void *)ReferenceDwmApiPort(v35, v34);
    DwmAsyncChildStyleChange(v36, v33, v32, v26);
    goto LABEL_41;
  }
  if ( v18 != 280 )
  {
    v16 = gptiCurrent;
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) == 0 && ValidateTimerCallback(gptiCurrent) )
    {
      v20 = SfnDWORD(
              (_DWORD)v11,
              275,
              a1[2],
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
              a1[3],
              *(_QWORD *)(gpsi + 752LL));
LABEL_27:
      v19 = v20;
      goto LABEL_88;
    }
    goto LABEL_24;
  }
  v15 = gtmrListHead;
  v19 = 0LL;
  v16 = gtmrListHead;
LABEL_88:
  ThreadUnlock1(v16, v15, v17);
  v69 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v66, v65, v67, v68);
  if ( !ExIsResourceAcquiredSharedLite(*v69) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v70 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v70 )
    v7 = *v70;
  LOBYTE(v71) = *(_BYTE *)(v7 + 1296);
  EtwTraceEndDispatchMessage(v71, v75);
  return v19;
}
