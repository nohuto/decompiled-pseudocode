/*
 * XREFs of DxgkCheckMonitorPowerState @ 0x140408DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1400395DC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003E5F0 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004174C (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x140042164 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_IsEnabledDeviceUsageNoInline @ 0x14006B504 (Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?DmmCheckMonitorPowerState@@YAJPEAXI@Z @ 0x140257A94 (-DmmCheckMonitorPowerState@@YAJPEAXI@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14028EBEC (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x14028EC2C (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x14030C710 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DmmGetTargetLinkTrainingStatusFromSource@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z @ 0x14037B290 (-DmmGetTargetLinkTrainingStatusFromSource@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z.c)
 */

__int64 __fastcall DxgkCheckMonitorPowerState(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rsi
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v6; // rbx
  __int64 v7; // rbx
  DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGSESSIONDATA *SessionData; // r14
  unsigned int CurrentProcessSessionId; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct DXGADAPTER *v19; // rsi
  unsigned __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  _QWORD *v38; // rax
  DXGADAPTER *v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  _QWORD *v44; // rax
  _QWORD *v45; // rcx
  int IsWaitingForPowerOn; // eax
  char v47; // cl
  _QWORD *v48; // rcx
  __int64 v49; // [rsp+20h] [rbp-98h]
  unsigned int v50[2]; // [rsp+50h] [rbp-68h] BYREF
  DXGADAPTER *v51[2]; // [rsp+58h] [rbp-60h] BYREF
  int v52; // [rsp+68h] [rbp-50h] BYREF
  __int64 v53; // [rsp+70h] [rbp-48h]
  char v54; // [rsp+78h] [rbp-40h]
  _BYTE v55[56]; // [rsp+80h] [rbp-38h] BYREF
  char v56; // [rsp+C8h] [rbp+10h] BYREF
  struct DXGADAPTER *v57; // [rsp+D0h] [rbp+18h] BYREF
  int v58; // [rsp+D8h] [rbp+20h] BYREF

  v3 = (const void *)a1;
  v52 = -1;
  v53 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v54 = 1;
    v52 = 2046;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2046);
  }
  else
  {
    v54 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v52, 2046);
  Current = DXGPROCESS::GetCurrent(v4);
  v6 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6549;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_38;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 416LL))() )
  {
    LODWORD(v7) = -1071775738;
    WdLogSingleEntry1(3LL, -1071775738LL);
    WdLogGlobalForLineNumber = 6557;
    goto LABEL_19;
  }
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10, v9, v11, v12);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 6567;
    v49 = (unsigned int)PsGetCurrentProcessSessionId(v16, v15, v17, v18);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DxgkCheckMonitorPowerState is not called from a valid session (session ID = 0x%I64x), returning 0x%I64x",
      v49,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_38:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    if ( v54 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit, v37, v52);
    }
    return 3221225485LL;
  }
  *(_QWORD *)v50 = 0LL;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v50, v3, 8uLL);
  v57 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v51, v50[0], (struct _KTHREAD **)v6, &v57, 1);
  v19 = v57;
  if ( !v57 )
  {
    WdLogSingleEntry2(3LL, v50[0], -1073741811LL);
    WdLogGlobalForLineNumber = 6595;
LABEL_37:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v51, v20);
    goto LABEL_38;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)v6 + 11) + 224LL))() )
  {
    LODWORD(v7) = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v22, v21, v23, v24) + 24) = -1071775738LL;
    WdLogGlobalForLineNumber = 6608;
LABEL_18:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v51, v25);
LABEL_19:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v52);
    return (unsigned int)v7;
  }
  LODWORD(v7) = 0;
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v56);
  if ( (unsigned int)Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_IsEnabledDeviceUsageNoInline() )
  {
    v29 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v56, 0);
    v7 = v29;
    if ( v29 < 0 )
    {
      WdLogSingleEntry1(2LL, v29);
      WdLogGlobalForLineNumber = 6630;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
        v7,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_36:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v56);
      goto LABEL_37;
    }
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v55, v19, 1);
  if ( *((_DWORD *)v19 + 50) == 1 )
  {
    v35 = *((_QWORD *)v57 + 390);
    if ( v35 )
    {
      if ( v50[1] >= *(_DWORD *)(v35 + 96) )
      {
        WdLogSingleEntry2(3LL, v50[1], -1073741811LL);
        WdLogGlobalForLineNumber = 6657;
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v55);
        goto LABEL_36;
      }
      if ( *((int *)SessionData + 4632) > 0 )
      {
        v39 = v57;
        if ( ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v57 + 390), v50[1]) )
        {
          if ( (unsigned int)Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_IsEnabledDeviceUsageNoInline() )
          {
            LODWORD(v7) = DmmCheckMonitorPowerState(v39, v50[1]);
          }
          else if ( !DXGADAPTER::IsVSyncAvailable(v39, v50[1]) )
          {
            v58 = 0;
            LOBYTE(v57) = 0;
            if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn(v39) )
              goto LABEL_56;
            IsWaitingForPowerOn = DmmIsWaitingForPowerOn(v45, v50[1], (unsigned __int8 *)&v57);
            v47 = (char)v57;
            if ( IsWaitingForPowerOn < 0 )
              v47 = 0;
            if ( !v47 )
            {
LABEL_56:
              if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn(v39)
                && (int)DmmGetTargetLinkTrainingStatusFromSource(v48, v50[1], (enum _DXGK_CONNECTION_STATUS *)&v58) >= 0
                && v58 == 12 )
              {
                LODWORD(v7) = -2145517568;
              }
              else
              {
                LODWORD(v7) = -1071775738;
              }
            }
            else
            {
              LODWORD(v7) = 0;
            }
          }
        }
        else
        {
          v44 = (_QWORD *)WdLogNewEntry5_WdTrace(v41, v40, v42, v43);
          LODWORD(v7) = -1071775739;
          v44[3] = -1071775739LL;
          v44[4] = v39;
          v44[5] = v50[1];
          WdLogGlobalForLineNumber = 6673;
        }
      }
      else
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdTrace(v50[1], v57, v30, v31);
        LODWORD(v7) = -1071775738;
        v38[3] = -1071775738LL;
        v38[4] = v57;
        v38[5] = v50[1];
        WdLogGlobalForLineNumber = 6665;
      }
    }
    else
    {
      LODWORD(v7) = -1073741637;
      WdLogSingleEntry2(3LL, v57, -1073741637LL);
      WdLogGlobalForLineNumber = 6648;
    }
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v55);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v56);
    goto LABEL_18;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v55);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v56);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v51, v32);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
  if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit, v34, v52);
  return 3221226166LL;
}
