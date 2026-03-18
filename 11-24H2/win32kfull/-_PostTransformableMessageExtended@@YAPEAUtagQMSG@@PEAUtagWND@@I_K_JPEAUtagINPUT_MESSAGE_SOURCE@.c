/*
 * XREFs of ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140066508
 * Callers:
 *     _PostMessageExtended @ 0x14006649C (_PostMessageExtended.c)
 *     _PostTransformableMessage @ 0x1400664C4 (_PostTransformableMessage.c)
 *     PostIAMShellHookMessageEx @ 0x140087650 (PostIAMShellHookMessageEx.c)
 *     xxxMNLoop @ 0x14009B5E0 (xxxMNLoop.c)
 *     _PostTransformableMessageIL @ 0x140118950 (_PostTransformableMessageIL.c)
 *     NtUserPostMessage @ 0x140140F70 (NtUserPostMessage.c)
 *     TrackMouseEvent @ 0x14019C004 (TrackMouseEvent.c)
 *     TryDetachShellFrame @ 0x140237D24 (TryDetachShellFrame.c)
 *     ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x140238600 (-xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDDETrackWindowDying @ 0x1402B10D4 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1402B1314 (xxxFreeDdeConv.c)
 *     xxxSysCommand @ 0x1402B5464 (xxxSysCommand.c)
 *     ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1402C8D14 (-xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ @ 0x1402D9E74 (-EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ.c)
 * Callees:
 *     SetWakeBit @ 0x1400456D0 (SetWakeBit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     IsMiPEnabledForWindow @ 0x14009B490 (IsMiPEnabledForWindow.c)
 *     IsMiPPointerMessage @ 0x1400A7680 (IsMiPPointerMessage.c)
 *     ??0?$ObjectLock@UtagObjLock@@U1@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@VDLT_POST@@@@QEAA@AEAUtagObjLock@@00@Z @ 0x140102C40 (--0-$ObjectLock@UtagObjLock@@U1@U1@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@VDLT_Q.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x14010F3F0 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x14010FA90 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     xxxBroadcastMessage @ 0x140117780 (xxxBroadcastMessage.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x140146F40 (TransformMessageBetweenCoordinateSpaces.c)
 *     ??1?$ObjectLock@UtagObjLock@@U1@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@VDLT_POST@@@@QEAA@XZ @ 0x140154488 (--1-$ObjectLock@UtagObjLock@@U1@U1@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@VDLT_Q.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x140167040 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     ProcessSuspendedPostMessage @ 0x1401957E8 (ProcessSuspendedPostMessage.c)
 *     _PostThreadMessage @ 0x1401A0460 (_PostThreadMessage.c)
 *     xxxDDETrackPostHook @ 0x14024E980 (xxxDDETrackPostHook.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Old_TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@PEAUtagHIDDATA@@_N@Z @ 0x140271D8C (-Old_TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@PEAUtagHIDDATA@@_N@Z.c)
 *     ?TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z @ 0x140272310 (-TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14027251C (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x140274ECC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

struct tagQMSG *__fastcall _PostTransformableMessageExtended(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagINPUT_MESSAGE_SOURCE *a5,
        int a6)
{
  __int64 v6; // rbx
  struct tagINPUT_MESSAGE_SOURCE *v7; // r13
  unsigned int v9; // r10d
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r9d
  int v16; // r10d
  struct tagTHREADINFO *v17; // rax
  __int64 v18; // rcx
  struct tagTHREADINFO *v19; // r15
  __int64 v20; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  unsigned int v24; // ecx
  UIPrivilegeIsolation *v25; // rcx
  unsigned int v27; // edi
  __int64 v28; // rdi
  __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct tagTHREADINFO *v32; // rax
  bool v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // r15d
  struct tagQMSG *v37; // r14
  __int64 v38; // rax
  struct _KEVENT *v39; // rcx
  __int64 v40; // rax
  unsigned int v41; // [rsp+70h] [rbp-90h] BYREF
  __int64 v42; // [rsp+78h] [rbp-88h]
  unsigned __int64 v43; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v45; // [rsp+98h] [rbp-68h] BYREF
  _BYTE Base[112]; // [rsp+A0h] [rbp-60h] BYREF

  BugCheckParameter3[0] = -1LL;
  v6 = 0LL;
  v7 = a5;
  v41 = a2;
  v9 = a2;
  v43 = a3;
  v42 = a4;
  BugCheckParameter3[1] = 0LL;
  v45 = 0LL;
  if ( !a5 )
  {
    SetUnavailableInputSource(&v45);
    v9 = v41;
    v7 = (struct tagINPUT_MESSAGE_SOURCE *)&v45;
  }
  if ( v9 >= 0x400
    || (_bittest16(&MessageTable[v9], 9u) || v9 == 537 && (a3 & 0x8000) != 0 ? (v11 = 1) : (v11 = 0), !v11) )
  {
    if ( v9 != 536 || (a3 & 0x8000) == 0 )
    {
      if ( (unsigned int)IsMiPPointerMessage(v9, a3) )
      {
        if ( !a1 )
          goto LABEL_20;
        if ( !(unsigned int)IsMiPEnabledForWindow(a1) )
        {
          LODWORD(v43) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3734LL);
          goto LABEL_48;
        }
      }
      if ( a1 == (struct tagWND *)-1LL )
      {
        xxxBroadcastMessage(v14, v16, a3, v15, 2u, 0LL, 0);
LABEL_19:
        v6 = 1LL;
        goto LABEL_48;
      }
LABEL_20:
      v17 = PtiCurrent(v14, v13);
      v19 = v17;
      if ( !a1 )
      {
        if ( !(unsigned int)PostThreadMessage(v17, v41, a3, v42) )
          goto LABEL_92;
        goto LABEL_19;
      }
      v20 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
      v23 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        v22 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        v23 = v22 & CurrentProcessWin32Process;
      }
      if ( v20 != v23 )
      {
        v24 = v41;
        if ( v41 > 0xD0 )
        {
          if ( v41 == 272 )
            goto LABEL_47;
          if ( v41 != 353 && v41 != 424 && v41 != 563 && v41 != 648 )
            goto LABEL_50;
        }
        else if ( v41 != 208 && v41 != 12 )
        {
          if ( v41 == 13 )
            goto LABEL_34;
          if ( v41 == 78 )
          {
LABEL_47:
            UserSetLastError(5);
            goto LABEL_48;
          }
          if ( v41 != 188 )
          {
            if ( v41 == 196 || v41 == 204 )
            {
LABEL_34:
              v22 = *(_QWORD *)(W32GetUserSessionState(v41, v22) + 19928);
              if ( *(_WORD *)(v22 + 870) == *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 2LL)
                && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 28LL) & 0x20) != 0 )
              {
                UserSetLastError(5);
                goto LABEL_47;
              }
              goto LABEL_49;
            }
LABEL_50:
            if ( v24 - 992 <= 8 )
            {
              Win32HM_LockIntoThread<0>(v19, a1, BugCheckParameter3);
              v27 = xxxDDETrackPostHook(&v41, a1);
              if ( v27 != 2 )
              {
                Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(
                  BugCheckParameter3,
                  v22);
                return (struct tagQMSG *)v27;
              }
              v24 = v41;
            }
            v28 = *((_QWORD *)a1 + 2);
            if ( v24 - 256 <= 9 )
            {
              PostUpdateKeyStateEvent(*(_QWORD *)(v28 + 472));
LABEL_69:
              DomainShared<DLT_THREADINFO,DLT_QUEUE,DLT_POST>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock,tagObjLock>::ObjectLock<tagObjLock,tagObjLock,tagObjLock>(Base);
              AdjustForCoalescing((struct tagMLIST *)(v28 + 848), *(HWND *)a1, v41);
              if ( (struct tagTHREADINFO *)v28 == PtiCurrent(v35, v34)
                || !tagPROCESSINFO::SyncAndTestFreeze(*(tagPROCESSINFO **)(v28 + 464))
                || (unsigned int)ProcessSuspendedPostMessage(v28, a1, v41, a3, v42) )
              {
                v36 = 0;
                v37 = (struct tagQMSG *)AllocQEntryEx(v28 + 848, 0LL, 1LL);
                if ( v37 )
                {
                  if ( a6 && (unsigned int)IsWindowDesktopComposed(a1) )
                    TransformMessageBetweenCoordinateSpaces(v41, (__int64)a1, 0LL);
                  StoreQMessage(
                    v37,
                    a1,
                    v41,
                    a3,
                    v42,
                    0,
                    0LL,
                    0,
                    0LL,
                    0,
                    v7,
                    *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL),
                    0LL,
                    0LL);
                  if ( v41 == 576 || v41 == 281 )
                  {
                    v38 = _HMObjectFromHandle(v42);
                    if ( v38 )
                      HMChangeOwnerThread(v38, v28);
                  }
                  SetWakeBit(v28, 264LL);
                  if ( v41 == 786 )
                  {
                    if ( (*(_DWORD *)(v28 + 1360) & 0x40000) != 0 )
                    {
                      v39 = *(struct _KEVENT **)(v28 + 1576);
                      if ( v39 )
                        KeSetEvent(v39, 1, 0);
                    }
                    SetWakeBit(v28, 128LL);
                  }
                  v36 = 1;
                }
                v40 = *(_QWORD *)(v28 + 472);
                if ( v28 == *(_QWORD *)(v40 + 72) )
                  *(_QWORD *)(v40 + 80) = v37;
                if ( !v36 )
                {
                  DomainShared<DLT_THREADINFO,DLT_QUEUE,DLT_POST>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock,tagObjLock>::~ObjectLock<tagObjLock,tagObjLock,tagObjLock>(Base);
                  goto LABEL_92;
                }
                v6 = (__int64)v37;
              }
              DomainShared<DLT_THREADINFO,DLT_QUEUE,DLT_POST>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock,tagObjLock>::~ObjectLock<tagObjLock,tagObjLock,tagObjLock>(Base);
LABEL_48:
              Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(
                BugCheckParameter3,
                v12);
              return (struct tagQMSG *)v6;
            }
            if ( v24 == 576 )
            {
              LOBYTE(v22) = 20;
            }
            else
            {
              if ( v24 != 281 )
              {
                if ( v24 == 255 )
                {
                  LOBYTE(v22) = 18;
                  v29 = HMValidateHandleNoSecure(v42, v22);
                  if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline() )
                  {
                    if ( v29 )
                    {
                      v31 = *(unsigned int *)(v29 + 48);
                      if ( (v31 & 1) != 0 )
                      {
                        v32 = PtiCurrent(v31, v30);
                        TrySmuggleHidData(v32, (struct tagTHREADINFO *)v28, (struct tagHIDDATA *)v29, v33);
                      }
                    }
                  }
                  else if ( v29 )
                  {
                    Old_TrySmuggleHidData((struct tagTHREADINFO *)v28, (struct tagHIDDATA *)v29, 1);
                  }
                }
                goto LABEL_69;
              }
              LOBYTE(v22) = 21;
            }
            if ( !HMValidateHandleWithDescriptor(v42, v22) )
              goto LABEL_92;
            goto LABEL_69;
          }
        }
        if ( !(unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline() )
        {
          if ( !UIPrivilegeIsolation::Enforced(v25)
            || (v22 = *(_QWORD *)(W32GetUserGdiSessionState() + 40), *(_QWORD *)v20 == v22) )
          {
            if ( *(_DWORD *)(v20 + 772) != *(_DWORD *)(v23 + 772) || *(_DWORD *)(v20 + 776) != *(_DWORD *)(v23 + 776) )
              goto LABEL_47;
          }
        }
      }
LABEL_49:
      v24 = v41;
      goto LABEL_50;
    }
  }
  UserSetLastError(1159);
LABEL_92:
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v12);
  return 0LL;
}
