/*
 * XREFs of xxxUserProcessCallout @ 0x1C0050580
 * Callers:
 *     <none>
 * Callees:
 *     xxxInitProcessInfo @ 0x1C0036A38 (xxxInitProcessInfo.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     GreLockVisRgn @ 0x1C0051080 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0051170 (GreUnlockVisRgn.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     DestroyCacheDC @ 0x1C005D380 (DestroyCacheDC.c)
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C009A3E4 (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 *     UserJobCallout @ 0x1C00AD630 (UserJobCallout.c)
 *     ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C00B7678 (-CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ.c)
 *     DestroyProcessInfo @ 0x1C00C5EA0 (DestroyProcessInfo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxUserProcessCallout(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  PEPROCESS *v4; // rdi
  _QWORD *v5; // r12
  char v6; // si
  int v7; // r13d
  int inited; // ebx
  PACCESS_TOKEN v9; // r15
  int v10; // r13d
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  struct tagTHREADINFO *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // edx
  int v24; // r8d
  __int64 ProcessJob; // rax
  __int64 v26; // rdi
  struct _ERESOURCE *JobLock; // rax
  struct _ERESOURCE *v28; // rax
  struct tagTHREADINFO *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  struct tagKERNELHANDLETABLEENTRY *v33; // rbx
  __int64 v34; // rax
  char v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // ecx
  char *i; // rax
  __int64 **v42; // rdi
  __int64 *v43; // rbx
  __int64 *v44; // rax
  __int64 v45; // rax
  int v46; // [rsp+40h] [rbp-28h] BYREF
  __int64 v47; // [rsp+48h] [rbp-20h] BYREF
  int v48; // [rsp+50h] [rbp-18h]
  int v49; // [rsp+54h] [rbp-14h]
  __int64 v50; // [rsp+58h] [rbp-10h]
  int v52; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v53; // [rsp+C8h] [rbp+60h] BYREF

  v3 = 0LL;
  v4 = (PEPROCESS *)a2;
  v5 = a1;
  if ( a2 )
  {
    v6 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        31,
        (__int64)&WPP_169ed334ae81372bb981068a10849f93_Traceguids);
      v3 = 0LL;
    }
    v7 = *((_DWORD *)v5 + 3);
    v46 = 0;
    inited = 1073741851;
    v53 = 0;
    v9 = 0LL;
    v52 = 0;
    v10 = v7 & 0x8000;
    if ( !v10 )
    {
      v9 = PsReferencePrimaryToken(*v4);
      if ( v9 )
        inited = UserProcessImmersiveType(
                   (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)v4,
                   v9,
                   (enum _PROCESS_IMMERSIVE_TYPE *)&v46,
                   &v53,
                   &v52);
      else
        inited = -1073741700;
    }
    v11 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, a2, a3, v3);
    gptiCurrent = v11;
    if ( v11 )
    {
      *((_DWORD *)v11 + 387) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            v13 = gptiCurrent;
            if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
            {
              v17 = gpSharedUserCritDeferredUnlockListHead;
              if ( gpSharedUserCritDeferredUnlockListHead )
              {
                do
                {
                  gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v17 + 2);
                  v18 = *(_QWORD *)v17;
                  *((_QWORD *)v17 + 2) = 0LL;
                  if ( !*(_DWORD *)(v18 + 8) )
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                  HMUnlockObject(*(_QWORD *)v17);
                  v17 = gpSharedUserCritDeferredUnlockListHead;
                }
                while ( gpSharedUserCritDeferredUnlockListHead );
                v5 = a1;
              }
            }
          }
        }
      }
    }
    if ( !v10 && inited >= 0 )
      inited = xxxInitProcessInfo((struct _W32PROCESS *)v5, v9, v46, v53, v52);
    if ( v9 )
      PsDereferencePrimaryToken(v9);
    if ( inited >= 0 )
    {
      UserSessionSwitchLeaveCrit((__int64)v13, v12, v14, v15);
      if ( !inited )
      {
        ProcessJob = PsGetProcessJob(*v5);
        v26 = ProcessJob;
        if ( ProcessJob )
        {
          if ( (unsigned int)PsGetJobUIRestrictionsClass(ProcessJob) )
          {
            v49 = 0;
            JobLock = (struct _ERESOURCE *)PsGetJobLock(v26);
            ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
            v50 = *v5;
            v47 = v26;
            v48 = 1;
            inited = UserJobCallout(&v47);
            v28 = (struct _ERESOURCE *)PsGetJobLock(v26);
            ExReleaseResourceAndLeaveCriticalRegion(v28);
          }
        }
      }
    }
    else
    {
      DestroyProcessInfo(v5);
      UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
    }
  }
  else
  {
    v6 = 1;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        32,
        (__int64)&WPP_169ed334ae81372bb981068a10849f93_Traceguids);
    v30 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, a2, a3, v3);
    gptiCurrent = v30;
    if ( v30 )
    {
      *((_DWORD *)v30 + 387) = 1;
      v32 = PsGetCurrentProcessWin32Process(v31);
      if ( v32 )
      {
        if ( *(_QWORD *)v32
          && _bittest((const signed __int32 *)(v32 + 12), 0xFu)
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v33 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            v34 = *(_QWORD *)v33;
            *((_QWORD *)v33 + 2) = 0LL;
            if ( !*(_DWORD *)(v34 + 8) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
            HMUnlockObject(*(_QWORD *)v33);
          }
        }
      }
    }
    if ( !gpepCSRSS || (v35 = 1, (PVOID)*v5 != gpepCSRSS) )
      v35 = 0;
    if ( *v5
      && ((__int64 (*)(void))PsGetProcessJob)()
      && qword_1C0295E78
      && (int)qword_1C0295E78() >= 0
      && qword_1C0295E80 )
    {
      qword_1C0295E80(v5);
    }
    if ( (unsigned int)DestroyProcessInfo(v5) )
    {
      v40 = giheLast;
      for ( i = (char *)qword_1C028FE68 + 32 * (unsigned int)giheLast; i > (char *)qword_1C028FE68 && !i[24]; i -= 32 )
        giheLast = --v40;
      GreLockVisRgn(*((_QWORD *)gpDispInfo + 5));
      v42 = (__int64 **)((char *)gpDispInfo + 24);
      v43 = (__int64 *)*((_QWORD *)gpDispInfo + 3);
      if ( v43 )
      {
        do
        {
          if ( (v43[8] & 0x400000) != 0 )
            DestroyCacheDC(v42, v43[1]);
          v44 = *v42;
          if ( v43 == *v42 )
          {
            v44 = (__int64 *)*v43;
            v42 = (__int64 **)v43;
          }
          v43 = v44;
        }
        while ( v44 );
      }
      GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
      if ( qword_1C0296AA0 && (int)qword_1C0296AA0() >= 0 && qword_1C0296AA8 )
        qword_1C0296AA8(1LL);
      if ( v35 && *(_QWORD *)(SGDGetUserSessionState(v37, v36, v38, v39) + 16048) )
      {
        v45 = SGDGetUserSessionState(v37, v36, v38, v39);
        InputExtensibilityCallout::CloseCoreMsgPort(*(InputExtensibilityCallout **)(v45 + 16048));
      }
    }
    inited = 0;
    UserSessionSwitchLeaveCrit(v37, v36, v38, v39);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v6 = 0;
  }
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v23) = v6;
    LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v23,
      v24,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      33,
      (__int64)&WPP_169ed334ae81372bb981068a10849f93_Traceguids);
  }
  return (unsigned int)inited;
}
