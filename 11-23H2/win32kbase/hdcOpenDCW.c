/*
 * XREFs of hdcOpenDCW @ 0x1C005ADC0
 * Callers:
 *     NtGdiOpenDCW @ 0x1C005A5E0 (NtGdiOpenDCW.c)
 * Callees:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C001FC24 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     GrepDeleteDC @ 0x1C003B5E0 (GrepDeleteDC.c)
 *     GreCreateDisplayDC @ 0x1C003BFE0 (GreCreateDisplayDC.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C004CDAC (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     DrvGetHDEV @ 0x1C005AF70 (DrvGetHDEV.c)
 *     ??1DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C005B120 (--1DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C005B180 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     UserGetMonitorDC @ 0x1C005B2C0 (UserGetMonitorDC.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     DrvDestroyMDEV @ 0x1C00A09A8 (DrvDestroyMDEV.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     UserGetCurrentDesktopId @ 0x1C012F7E8 (UserGetCurrentDesktopId.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0154F90 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     IsUMPD_ldevUnloadImageSupported @ 0x1C0232788 (IsUMPD_ldevUnloadImageSupported.c)
 */

HDC __fastcall hdcOpenDCW(
        WCHAR *SourceString,
        struct _devicemodeW *a2,
        unsigned int a3,
        int a4,
        void *a5,
        struct tagREMOTETYPEONENODE *a6,
        __int64 a7,
        ULONG64 a8,
        int a9)
{
  unsigned __int16 *v10; // r13
  __int64 v11; // r12
  __int64 v12; // rdx
  HDC MonitorDC; // rdi
  struct _MDEV *v14; // rsi
  HDEV HDEV; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r13d
  __int64 v21; // rcx
  __int64 v22; // rbx
  struct _devicemodeW *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct tagTHREADINFO *v30; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v32; // rdx
  char v33; // al
  __int64 *v34; // rbx
  void *v35; // r14
  int v36; // eax
  struct _LDEV *v37; // rbx
  HDEV v38; // rcx
  signed __int32 v39; // ett
  _QWORD *v40; // r8
  _QWORD *v41; // rdx
  void *v42; // [rsp+70h] [rbp-68h] BYREF
  HDC v43; // [rsp+78h] [rbp-60h]
  HDEV v44; // [rsp+80h] [rbp-58h] BYREF
  struct _UNICODE_STRING v45; // [rsp+88h] [rbp-50h] BYREF
  HDEV v46; // [rsp+E0h] [rbp+8h] BYREF
  struct _devicemodeW *v47; // [rsp+E8h] [rbp+10h]
  unsigned int v48; // [rsp+F0h] [rbp+18h]
  int v49; // [rsp+F8h] [rbp+20h]

  v49 = a4;
  v48 = a3;
  v47 = a2;
  v46 = (HDEV)SourceString;
  v10 = SourceString;
  v11 = a7;
  v12 = 0LL;
  MonitorDC = 0LL;
  LODWORD(v43) = a7 != 0;
  if ( SourceString && !a7 )
  {
    v14 = 0LL;
    HDEV = 0LL;
    v45 = 0LL;
    RtlInitUnicodeString(&v45, SourceString);
    v20 = a9;
    if ( !a9 && a2 )
    {
      v30 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v16, v18, v19);
      gptiCurrent = v30;
      if ( v30 )
      {
        *((_DWORD *)v30 + 387) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
        v32 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          v21 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          v32 = v21 & CurrentProcessWin32Process;
        }
        if ( v32 && (*(_DWORD *)(v32 + 12) & 0x8000) != 0 )
        {
          v21 = (__int64)gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v33 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v33 = 0;
          }
          if ( v33 )
          {
            v34 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( gpSharedUserCritDeferredUnlockListHead )
            {
              do
              {
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v34[2];
                v34[2] = 0LL;
                if ( !*(_DWORD *)(*v34 + 8) )
                {
                  LODWORD(v42) = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                }
                HMUnlockObject(*v34);
                v34 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              }
              while ( gpSharedUserCritDeferredUnlockListHead );
              v11 = a7;
            }
          }
        }
      }
    }
    else
    {
      PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(v17, v16, v18, v19);
    }
    v22 = *(_QWORD *)(SGDGetSessionState(v21) + 24);
    EngAcquireSemaphore(*(HSEMAPHORE *)(v22 + 80));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v22 + 80), 1);
    if ( v20 )
    {
      HDEV = (HDEV)DrvGetHDEV(&v45);
    }
    else
    {
      v23 = v47;
      if ( v47 )
      {
        v14 = DrvCreateMDEV(&v45, v47, (void *)0xFFFFFFFFLL, 3u, 0LL, 0, 0, 0, 0LL);
        if ( !v14 )
        {
          v42 = 0LL;
          if ( (unsigned int)UserGetCurrentDesktopId(&v42) )
            v14 = DrvCreateMDEV(&v45, v23, v42, 3u, 0LL, 0, 0, 0, 0LL);
        }
        if ( v14 )
          HDEV = (HDEV)*((_QWORD *)v14 + 5);
      }
      else
      {
        v24 = DrvGetHDEV(&v45);
        HDEV = (HDEV)v24;
        if ( v49 && !v48 )
          MonitorDC = (HDC)UserGetMonitorDC(v24);
      }
    }
    if ( HDEV )
    {
      if ( MonitorDC || (MonitorDC = GreCreateDisplayDC(HDEV, 0, 0)) != 0LL || !v14 )
      {
        v44 = HDEV;
        PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v44);
      }
      else
      {
        DrvDestroyMDEV(v14);
      }
    }
    if ( v14 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
    DYNAMICMODECHANGELOCK::~DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&a7);
    UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
    v10 = (unsigned __int16 *)v46;
    v12 = 0LL;
  }
  if ( !MonitorDC )
  {
    v35 = a5;
    if ( a5 )
    {
      if ( (v11 & -(__int64)(v11 != 0)) != 0 )
      {
        if ( v11
          && (!qword_1C0294AB8 ? (v36 = -1073741637) : (v36 = qword_1C0294AB8(SourceString, 0LL), v12 = 0LL),
              v36 >= 0 && qword_1C0294AC0) )
        {
          LOBYTE(v12) = 2;
          v37 = (struct _LDEV *)qword_1C0294AC0(*(_QWORD *)((v11 & -(__int64)(v11 != 0)) + 0x18), v12);
        }
        else
        {
          v37 = 0LL;
        }
        if ( v37 )
        {
          PDEVOBJ::PDEVOBJ(
            (PDEVOBJ *)&v46,
            v37,
            v47,
            v10,
            *(unsigned __int16 **)((v11 & -(__int64)(v11 != 0)) + 0x20),
            *(unsigned __int16 **)((v11 & -(__int64)(v11 != 0)) + 8),
            v35,
            a6,
            0LL,
            0LL,
            (int)v43,
            0,
            0);
          v38 = v46;
          if ( v46 )
          {
            _m_prefetchw(v46 + 10);
            do
              v39 = *((_DWORD *)v38 + 10);
            while ( v39 != _InterlockedCompareExchange((volatile signed __int32 *)v38 + 10, v39 | 0x80, v39) );
            MonitorDC = GreCreateDisplayDC(v46, v48, 1);
            v43 = MonitorDC;
            if ( MonitorDC )
            {
              if ( v11 )
              {
                v40 = (_QWORD *)a8;
                if ( a8 )
                {
                  v41 = (_QWORD *)a8;
                  if ( a8 >= MmUserProbeAddress )
                    v41 = (_QWORD *)MmUserProbeAddress;
                  *v41 = *v41;
                  *v40 = *((_QWORD *)v46 + 221);
                }
              }
            }
            PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v46);
          }
          else if ( v11 && (int)IsUMPD_ldevUnloadImageSupported() >= 0 && qword_1C0294AD0 )
          {
            qword_1C0294AD0(v37);
          }
        }
        else
        {
          EngSetLastError(0x77u);
        }
      }
    }
  }
  return MonitorDC;
}
