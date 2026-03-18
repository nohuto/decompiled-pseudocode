/*
 * XREFs of DxgkDisplayConfigDeviceInfo @ 0x1403C5760
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14000F84C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x140038E8C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003E5F0 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?RequiresAdapterStopResetLock@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400441A8 (-RequiresAdapterStopResetLock@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?RequiresAdapterReference@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x140044200 (-RequiresAdapterReference@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?RequiresAdapterCoreAccessShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x140044240 (-RequiresAdapterCoreAccessShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?RequiresSessionModeChangeLockShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x140056264 (-RequiresSessionModeChangeLockShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14005DA90 (-GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14005DB78 (-GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?RequiresAdapterCoreAccessExclusive@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14006DBEC (-RequiresAdapterCoreAccessExclusive@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?RequiresFlushVidSch@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14006DC44 (-RequiresFlushVidSch@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x140293650 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x140298418 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1403C5E54 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x1403C64A0 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 */

__int64 __fastcall DxgkDisplayConfigDeviceInfo(char a1, const struct _LUID *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v6; // r12
  int LowPart; // ecx
  __int64 v8; // rsi
  bool v9; // di
  bool v10; // r14
  __int64 v11; // rcx
  unsigned int v12; // ebx
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ecx
  char v27; // al
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // r10
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  bool v36; // zf
  __int64 v37; // rcx
  __int64 v38; // r8
  bool v39; // al
  int v40; // eax
  __int64 v41; // [rsp+20h] [rbp-E0h]
  bool v42[8]; // [rsp+50h] [rbp-B0h] BYREF
  int v43; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h]
  char v45; // [rsp+68h] [rbp-98h]
  struct DXGADAPTER *v46; // [rsp+70h] [rbp-90h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v47; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v48; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v49[8]; // [rsp+90h] [rbp-70h] BYREF
  struct DXGADAPTER *v50; // [rsp+98h] [rbp-68h]
  char v51; // [rsp+A0h] [rbp-60h]
  GUID ActivityId; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v53[144]; // [rsp+C0h] [rbp-40h] BYREF

  v46 = 0LL;
  LOBYTE(v47) = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x27u, 0, &v48, (unsigned __int8 *)&v47);
  v43 = -1;
  v6 = v48;
  v44 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v45 = 1;
    v43 = 2184;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerEnter, v5, 2184);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v43, 2184);
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6952;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"io_pRequestPacket != NULL", 6952LL, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( v45 )
    {
      v36 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
      goto LABEL_71;
    }
LABEL_73:
    v12 = -1073741811;
    goto LABEL_50;
  }
  if ( a2->HighPart
    && (a2->HighPart == (unsigned int)DispConfigTypes::GetGetterTypeSize(a2->LowPart)
     || a2->HighPart == (unsigned int)DispConfigTypes::GetSetterTypeSize(a2->LowPart)) )
  {
    LowPart = a2->LowPart;
    LODWORD(v8) = 0;
    v9 = 0;
    v42[0] = 0;
    v10 = 0;
    if ( DispConfigTypes::RequiresSessionModeChangeLockShared(LowPart) )
    {
      v19 = DxgkAcquireSessionModeChangeLock(0);
      v8 = v19;
      v9 = v19 >= 0;
      v42[0] = v19 >= 0;
      v10 = v19 >= 0;
      if ( v19 < 0 )
      {
        WdLogSingleEntry1(2LL, v19);
        WdLogGlobalForLineNumber = 6978;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to acquire session mode change shared lock (Status = 0x%I64x)",
          v8,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( v9 )
          DxgkReleaseSessionModeChangeLock();
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
        if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v43);
        if ( (_BYTE)v47 )
          DisplayScenarioContextDissociate(&v48);
        if ( v46 )
          DXGADAPTER::ReleaseReference(v46);
        return (unsigned int)v8;
      }
    }
    if ( !DispConfigTypes::RequiresAdapterReference(a2->LowPart) )
    {
      LOBYTE(v11) = a1;
      v12 = DxgkDisplayConfigDeviceInfoNoAdapter(v11, &v46, a2);
      v13 = !v10;
LABEL_9:
      if ( !v13 )
        DxgkReleaseSessionModeChangeLock();
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
      if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v43);
      if ( (_BYTE)v47 )
        DisplayScenarioContextDissociate(&v48);
      if ( v46 )
        DXGADAPTER::ReleaseReference(v46);
      return v12;
    }
    DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)&v46, a2 + 1);
    if ( !v46 )
    {
      v33 = WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
      *(_QWORD *)(v33 + 24) = a2[1].HighPart;
      *(_QWORD *)(v33 + 32) = a2[1].LowPart;
      WdLogGlobalForLineNumber = 6992;
      goto LABEL_69;
    }
    v26 = a2->LowPart;
    v50 = v46;
    v51 = 0;
    if ( DispConfigTypes::RequiresAdapterStopResetLock(v26) )
    {
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
      if ( *((_DWORD *)v46 + 50) != 1 )
      {
        v12 = -1073741130;
        WdLogSingleEntry2(3LL, v46, -1073741130LL);
        WdLogGlobalForLineNumber = 7007;
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v42);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
        if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v37, (__int64)&EventProfilerExit, v38, v43);
        goto LABEL_50;
      }
      v9 = v42[0];
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v53, v46, 0LL);
    v27 = DispConfigTypes::RequiresAdapterCoreAccessExclusive(a2->LowPart);
    v28 = a2->LowPart;
    if ( v27 )
    {
      v39 = DispConfigTypes::RequiresFlushVidSch(v28);
      v40 = COREADAPTERACCESS::AcquireExclusive((__int64)v53, (unsigned int)v39 + 1, 0);
    }
    else
    {
      if ( !DispConfigTypes::RequiresAdapterCoreAccessShared(v28) )
      {
LABEL_38:
        if ( (int)v8 >= 0 )
        {
          if ( !v46
            || (v29 = a2->LowPart, (_DWORD)v29 == 4)
            || !DispConfigTypes::RequiresAdapterReference(v29)
            || *(_QWORD *)(v30 + 3120) )
          {
            LOBYTE(v29) = a1;
            v12 = DxgkDisplayConfigDeviceInfoForAdapter(v29, &v46, a2, v6);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
            v13 = !v9;
            goto LABEL_9;
          }
          WdLogSingleEntry3(3LL, v30, *(int *)(v30 + 416), *(unsigned int *)(v30 + 412));
          WdLogGlobalForLineNumber = 7042;
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
          DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v42);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
          if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit, v32, v43);
          v12 = -1073741637;
LABEL_50:
          CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v47);
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v46, 0LL);
          return v12;
        }
        WdLogSingleEntry3(2LL, v46, *((int *)v46 + 104), *((unsigned int *)v46 + 103));
        WdLogGlobalForLineNumber = 7029;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Could not acquire adapter core access; adapter probably suspended. (pAdapter = 0x%I64x, pAdapter->GetLuid() = "
           "<0x%I64x, 0x%I64x>)",
          (__int64)v46,
          *((int *)v46 + 104),
          *((unsigned int *)v46 + 103),
          0LL,
          0LL);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
LABEL_69:
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v42);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
        if ( v45 )
        {
          v36 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_71:
          if ( !v36 )
            McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit, v35, v43);
          goto LABEL_73;
        }
        goto LABEL_73;
      }
      v40 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v53, 0LL);
    }
    LODWORD(v8) = v40;
    goto LABEL_38;
  }
  WdLogSingleEntry1(2LL, (int)a2->LowPart);
  v41 = (int)a2->LowPart;
  WdLogGlobalForLineNumber = 6964;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"DxgkDisplayConfigDeviceInfo called with invalid size for (type = 0x%I64x)",
    v41,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v43);
  if ( (_BYTE)v47 )
    DisplayScenarioContextDissociate(&v48);
  if ( v46 )
    DXGADAPTER::ReleaseReference(v46);
  return 3221225485LL;
}
