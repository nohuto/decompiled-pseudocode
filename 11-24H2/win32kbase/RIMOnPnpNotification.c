/*
 * XREFs of RIMOnPnpNotification @ 0x140061480
 * Callers:
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x140061410 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 *     NtRIMOnPnpNotification @ 0x14013CE80 (NtRIMOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14002588C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     rimOnPnpRemoveComplete @ 0x140055BD4 (rimOnPnpRemoveComplete.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x14005B4D0 (rimDoRimDevChange.c)
 *     RIMStartDeviceSpecificRead @ 0x14005B744 (RIMStartDeviceSpecificRead.c)
 *     rimSignalReadComplete @ 0x14005D0F0 (rimSignalReadComplete.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RimDeviceTypeToRimInputType @ 0x140069204 (RimDeviceTypeToRimInputType.c)
 *     rimStackAttachAndProcessInput @ 0x1400E3BB8 (rimStackAttachAndProcessInput.c)
 *     ??B?$SGINPUTTRACINGgRimLog@PEAURECORDER_LOG__@@@@QEBAPEAURECORDER_LOG__@@XZ @ 0x1400E8908 (--B-$SGINPUTTRACINGgRimLog@PEAURECORDER_LOG__@@@@QEBAPEAURECORDER_LOG__@@XZ.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1401076A4 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RIMDoOnPnpNotification @ 0x1401127D0 (RIMDoOnPnpNotification.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x14017FDE8 (rimProcessAnyQueuedCompleteFrames.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1401D1DE0 (RIMFreeDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqSd @ 0x1401D8FA8 (WPP_RECORDER_AND_TRACE_SF_qqSd.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1401E74C4 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     rimDoScheduledUserModeRimPnpRegistration @ 0x1401E96E8 (rimDoScheduledUserModeRimPnpRegistration.c)
 */

__int64 __fastcall RIMOnPnpNotification(char *a1)
{
  char v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  unsigned int v7; // r12d
  PVOID v8; // rsi
  char *v9; // rdi
  char v10; // bl
  bool v11; // bp
  __int64 v12; // rax
  void *v13; // rdx
  int v14; // r8d
  char v15; // bl
  bool v16; // di
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  __int64 i; // rbx
  int v21; // eax
  __int64 v22; // r14
  __int64 v23; // rbx
  int v24; // eax
  char v25; // di
  char v26; // bp
  __int64 v27; // rax
  __int64 j; // rbx
  int v29; // eax
  NTSTATUS v30; // eax
  __int64 v31; // rcx
  char v32; // r14
  char v33; // di
  bool v34; // bp
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  char v38; // di
  char v39; // bp
  __int64 v40; // rax
  unsigned int v41; // eax
  int v42; // eax
  __int64 k; // rbx
  int v44; // eax
  CTouchProcessor *v45; // rcx
  char v46; // di
  char v47; // bp
  __int64 v48; // rax
  int v49; // r8d
  __int64 m; // rbx
  char v51; // di
  char v52; // bp
  __int64 v53; // rax
  __int64 n; // rbx
  int v55; // eax
  char v56; // di
  bool v57; // bp
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  char v61; // di
  char v62; // bp
  __int64 v63; // rax
  unsigned int v64; // eax
  unsigned __int64 v65; // rax
  __int64 v66; // rbp
  char v67; // bl
  char v68; // di
  __int64 v69; // rax
  char v70; // r14
  bool v71; // r15
  char v72; // al
  __int64 v73; // rdi
  char v74; // bl
  __int64 v75; // rcx
  __int64 v76; // rax
  int v77; // r8d
  int v78; // edx
  int v79; // eax
  struct _KTHREAD *v80; // rcx
  char v81; // bl
  bool v82; // di
  int v83; // eax
  void *v84; // rdx
  int v85; // r8d
  char v86; // bl
  bool v87; // di
  __int64 v88; // rax
  int v89; // r8d
  int v90; // edx
  int ObjectType; // [rsp+20h] [rbp-88h]
  int AccessMode; // [rsp+28h] [rbp-80h]
  int Handle; // [rsp+30h] [rbp-78h]
  int v95; // [rsp+38h] [rbp-70h]
  PVOID Object; // [rsp+68h] [rbp-40h] BYREF
  int v97; // [rsp+B8h] [rbp+10h]

  Object = 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v2 = 0;
  }
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      57,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v97 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  v7 = v97;
  if ( v97 < 0 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, a1, Object, 0LL, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    v8 = Object;
    v9 = (char *)Object + 104;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v8 + 81) || *((_BYTE *)v8 + 82) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v81 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v81 = 0;
      }
      v82 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v81 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v83 = SGINPUTTRACINGgRimLog<RECORDER_LOG__ *>::operator RECORDER_LOG__ *();
        v84 = &WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids;
        LOBYTE(v85) = v82;
        LOBYTE(v84) = v81;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          (_DWORD)v84,
          v85,
          v83,
          3,
          1,
          69,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
      }
      KeBugCheckEx(0x164u, 0x111uLL, (ULONG_PTR)v8, 0LL, 0LL);
    }
    if ( *((_BYTE *)v8 + 392) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v10 = 0;
      }
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = W32GetUserSessionState(WPP_GLOBAL_Control);
        v13 = &WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids;
        LOBYTE(v14) = v11;
        LOBYTE(v13) = v10;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          (_DWORD)v13,
          v14,
          *(_QWORD *)(v12 + 19392),
          4,
          1,
          58,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
          (char)v8);
      }
      *((_BYTE *)v8 + 392) = 0;
      RIMUnlockExclusive((__int64)v9);
      v97 = rimDoScheduledUserModeRimPnpRegistration(v8);
      RIMLockExclusive((__int64)v9);
    }
    if ( *((_BYTE *)v8 + 393) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v15 = 0;
      }
      v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v18) = v16;
        LOBYTE(v19) = v15;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v19,
          v18,
          *(_QWORD *)(v17 + 19392),
          4,
          1,
          59,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
          (char)v8);
      }
      *((_BYTE *)v8 + 393) = 0;
      if ( *((_DWORD *)v8 + 264) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1780LL);
      for ( i = *((_QWORD *)v8 + 53); i; i = *(_QWORD *)(i + 40) )
      {
        v21 = *(_DWORD *)(i + 168);
        if ( (v21 & 0x2000) == 0 && (v21 & 0x400) == 0 )
        {
          *(_DWORD *)(i + 168) = v21 | 8;
          rimOnPnpRemoveComplete((char)v8, i);
        }
      }
    }
    v22 = (__int64)v8 + 760;
    RIMLockExclusive((__int64)v8 + 760);
    v23 = *((_QWORD *)v8 + 53);
    if ( v23 )
    {
      do
      {
        v24 = *(_DWORD *)(v23 + 168);
        if ( (v24 & 0x2000) == 0 && *(_BYTE *)(v23 + 188) && (v24 & 0x80u) == 0 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v25 = 0;
          }
          v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v27 = W32GetUserSessionState(WPP_GLOBAL_Control);
            WPP_RECORDER_AND_TRACE_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v25,
              v26,
              *(_QWORD *)(v27 + 19392),
              4u,
              1u,
              0x3Cu,
              (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
          }
          RIMStartDeviceSpecificRead((__int64)v8, v23);
        }
        v23 = *(_QWORD *)(v23 + 40);
      }
      while ( v23 );
      v22 = (__int64)v8 + 760;
    }
    RIMUnlockExclusive(v22);
    for ( j = *((_QWORD *)v8 + 53); j; j = *(_QWORD *)(j + 40) )
    {
      if ( *((_QWORD *)v8 + 104) || *((_DWORD *)v8 + 264) )
      {
        v29 = *(_DWORD *)(j + 168);
        if ( (v29 & 0x2000) != 0 && (v29 & 0x80000) != 0 )
        {
          if ( *(_QWORD *)(j + 328) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1835LL);
          if ( *((_DWORD *)v8 + 264)
            || (v30 = ObOpenObjectByPointer(
                        *(PVOID *)(j + 32),
                        0,
                        0LL,
                        3u,
                        ExRawInputManagerObjectType,
                        0,
                        (PHANDLE)(j + 328)),
                v32 = v30,
                v30 >= 0) )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v38 = 0;
            }
            v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v40 = W32GetUserSessionState(WPP_GLOBAL_Control);
              WPP_RECORDER_AND_TRACE_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v38,
                v39,
                *(_QWORD *)(v40 + 19392),
                4u,
                1u,
                0x3Du,
                (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
            }
            rimDoRimDevChange((__int64)v8, j, 2u);
            v41 = *(_DWORD *)(j + 168) & 0xFFF7FFFF;
            *(_DWORD *)(j + 168) = v41;
            if ( *((_DWORD *)v8 + 264) )
              v41 |= 0x1000000u;
            v42 = v41 | 0x4000000;
            *(_DWORD *)(j + 168) = v42;
            if ( (v42 & 0x400) != 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1874LL);
          }
          else
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (v31 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v31 & 1) == 0)
              || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v33 = 0;
            }
            v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v35 = W32GetUserSessionState(v31);
              LOBYTE(v36) = v34;
              LOBYTE(v37) = v33;
              WPP_RECORDER_AND_TRACE_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v37,
                v36,
                *(_QWORD *)(v35 + 19392),
                3,
                1,
                62,
                (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
                v32);
            }
          }
        }
      }
    }
    for ( k = *((_QWORD *)v8 + 53); k; k = *(_QWORD *)(k + 40) )
    {
      if ( *((_QWORD *)v8 + 104) || *((_DWORD *)v8 + 264) )
      {
        v44 = *(_DWORD *)(k + 168);
        if ( (v44 & 0x2000) != 0 && (v44 & 0x4000000) != 0 )
        {
          *(_DWORD *)(k + 168) = v44 & 0xFBFFFFFF;
          RIMLockExclusive((__int64)v8 + 760);
          if ( (*(_DWORD *)(k + 168) & 0x400) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1899LL);
          v45 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v46 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v46 = 0;
          }
          v47 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v48 = W32GetUserSessionState(WPP_GLOBAL_Control);
            WPP_RECORDER_AND_TRACE_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v46,
              v47,
              *(_QWORD *)(v48 + 19392),
              4u,
              1u,
              0x3Fu,
              (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
          }
          if ( (*(_DWORD *)(k + 184) & 0x80u) == 0 )
          {
            if ( *((_BYTE *)v8 + 776) && *(_DWORD *)(k + 48) <= 1u )
            {
              if ( (*(_DWORD *)(k + 168) & 0x2000) != 0 )
                RIMTransferInjectionDeviceDataFifoToDataBuffer(v45, k);
              *((_BYTE *)v8 + 776) = 0;
              v49 = k + 480;
              if ( *(_DWORD *)(k + 48) != 1 )
                v49 = k + 452;
              rimStackAttachAndProcessInput((_DWORD)v8, k, v49, k + 240, 0);
              rimSignalReadComplete(
                (struct RawInputManagerObject *)v8,
                (struct RIMDEV *)k,
                (struct _IO_STATUS_BLOCK *)(k + 240));
            }
          }
          else
          {
            rimProcessAnyQueuedCompleteFrames((struct RawInputManagerObject *)v8);
          }
          RIMUnlockExclusive((__int64)v8 + 760);
        }
      }
    }
    for ( m = *((_QWORD *)v8 + 53); m; m = *(_QWORD *)(m + 40) )
    {
      if ( (*((_QWORD *)v8 + 104) || *((_DWORD *)v8 + 264)) && (*(_DWORD *)(m + 168) & 0x200000) != 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v51 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v51 = 0;
        }
        v52 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v51 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v53 = W32GetUserSessionState(WPP_GLOBAL_Control);
          WPP_RECORDER_AND_TRACE_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v51,
            v52,
            *(_QWORD *)(v53 + 19392),
            4u,
            1u,
            0x40u,
            (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
        }
        rimDoRimDevChange((__int64)v8, m, 5u);
        *(_DWORD *)(m + 168) &= ~0x200000u;
      }
    }
LABEL_116:
    for ( n = *((_QWORD *)v8 + 53); n; n = *(_QWORD *)(n + 40) )
    {
      if ( *((_QWORD *)v8 + 104) || *((_DWORD *)v8 + 264) )
      {
        v55 = *(_DWORD *)(n + 168);
        if ( (v55 & 0x2000) != 0 && (v55 & 0x100000) != 0 )
        {
          if ( *(_QWORD *)(n + 328) || *((_DWORD *)v8 + 264) )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v61 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v61 = 0;
            }
            v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v63 = W32GetUserSessionState(WPP_GLOBAL_Control);
              WPP_RECORDER_AND_TRACE_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v61,
                v62,
                *(_QWORD *)(v63 + 19392),
                4u,
                1u,
                0x41u,
                (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
            }
            rimDoRimDevChange((__int64)v8, n, 3u);
            v64 = *(_DWORD *)(n + 168) & 0xFFEFFFFF;
            *(_DWORD *)(n + 168) = v64;
            if ( *((_DWORD *)v8 + 264) )
            {
              *(_DWORD *)(n + 168) = v64 | 0x2000000;
              if ( *(_QWORD *)(n + 328) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1985LL);
            }
            else
            {
              NtClose(*(HANDLE *)(n + 328));
            }
            v65 = *(_QWORD *)(n + 32);
            *(_QWORD *)(n + 328) = 0LL;
            RIMFreeDev(
              (struct RawInputManagerObject *)v8,
              (struct RIMDEV *)((v65 + 72) & ((unsigned __int128)-(__int128)v65 >> 64)));
            goto LABEL_116;
          }
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v56 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v56 = 0;
          }
          v57 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v56 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v58 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v59) = v57;
            LOBYTE(v60) = v56;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v60,
              v59,
              *(_QWORD *)(v58 + 19392),
              3,
              1,
              66,
              (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
          }
        }
      }
    }
    v66 = *((_QWORD *)v8 + 53);
    v7 = v97;
    if ( v66 )
    {
      do
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v67 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v67 = 0;
        }
        v68 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v67 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v69 = W32GetUserSessionState(WPP_GLOBAL_Control);
          WPP_RECORDER_AND_TRACE_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v67,
            v68,
            *(_QWORD *)(v69 + 19392),
            4u,
            1u,
            0x43u,
            (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
        }
        if ( (*(_DWORD *)(v66 + 168) & 0x10) != 0 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v70 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v70 = 0;
          }
          v71 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v70 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v72 = RimDeviceTypeToRimInputType(v66, *(unsigned int *)(v66 + 48));
            v73 = *(_QWORD *)(v66 + 200);
            v74 = v72;
            v76 = W32GetUserSessionState(v75);
            LOBYTE(v77) = v71;
            LOBYTE(v78) = v70;
            WPP_RECORDER_AND_TRACE_SF_qqSd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v78,
              v77,
              *(_QWORD *)(v76 + 19392),
              ObjectType,
              AccessMode,
              Handle,
              v95,
              (char)v8,
              v66,
              v73,
              v74);
          }
          v79 = *(_DWORD *)(v66 + 168);
          if ( (v79 & 0x20) != 0 && (v79 & 0x40) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2025LL);
          if ( (*(_DWORD *)(v66 + 168) & 0x2000) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2026LL);
          v80 = *(struct _KTHREAD **)(v66 + 296);
          if ( !v80 || (v8 = Object, v80 == KeGetCurrentThread()) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2029LL);
          RIMDoOnPnpNotification((struct RawInputManagerObject *)v8);
          *(_DWORD *)(v66 + 168) &= ~0x10u;
          KeSetEvent(*(PRKEVENT *)(v66 + 336), 1, 0);
        }
        v66 = *(_QWORD *)(v66 + 40);
      }
      while ( v66 );
      v7 = v97;
    }
    RIMSignalAllPriorPnpWorkToCompleteWaiters(v8);
    RIMUnlockExclusive((__int64)v8 + 104);
    ObfDereferenceObject(v8);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v86 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v86 = 0;
  }
  v87 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v86 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v88 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v89) = v87;
    LOBYTE(v90) = v86;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v90,
      v89,
      *(_QWORD *)(v88 + 19392),
      4,
      1,
      70,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v7);
  }
  return v7;
}
