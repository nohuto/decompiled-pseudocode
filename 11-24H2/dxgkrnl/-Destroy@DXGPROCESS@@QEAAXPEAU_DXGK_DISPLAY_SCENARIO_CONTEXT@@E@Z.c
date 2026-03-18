/*
 * XREFs of ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14034D4E0
 * Callers:
 *     ?DxgkWslProcessCleanup@@YAXPEAU_EPROCESS@@@Z @ 0x1401EC420 (-DxgkWslProcessCleanup@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x14020EB2C (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x14034D1D8 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1403787F0 (--1DXGPROCESS@@MEAA@XZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14000CBC0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14000E400 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14000EE70 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140013278 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1400338D0 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x140034740 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x140036D88 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x14003B884 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z @ 0x14003E524 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1400434E8 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043DA0 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x14004FC08 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x14005DA58 (-GetProcessID@DXGPROCESS@@QEBAQEAXXZ.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x140061BD8 (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ?DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x14006CED4 (-DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x14018670C (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?Destroy@DXGK_TRANSPORT_BUFFER@@QEAAXXZ @ 0x1401890AC (-Destroy@DXGK_TRANSPORT_BUFFER@@QEAAXXZ.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1401989C8 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1401EBDCC (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 *     ?FlushDevicesForTermination@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1401ECA10 (-FlushDevicesForTermination@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1401ED4B0 (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ @ 0x1401ED638 (-ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1401EDE3C (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401F41B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1401FCEA0 (DxgkDestroyCsrssProcess.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x140207A50 (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x14022A82C (-VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x14028F0B8 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14029AE64 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402D4830 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1402FA7D4 (-SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     OutputDuplProcessTerminateForWddm @ 0x140306368 (OutputDuplProcessTerminateForWddm.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x140322E94 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x14032AEB8 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x14034D1D8 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x14036D900 (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x140376424 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1403949B8 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x140394DD0 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     OutputDuplProcessTerminateForSession @ 0x1403A12E0 (OutputDuplProcessTerminateForSession.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A569C (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     VidMmTerminateProcessX @ 0x1403ABCE8 (VidMmTerminateProcessX.c)
 *     VidSchTerminateProcessX @ 0x1403AE0DC (VidSchTerminateProcessX.c)
 *     ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1403BF518 (-GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403C5210 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1403E8358 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

void __fastcall DXGPROCESS::Destroy(DXGPROCESS *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2, char a3)
{
  char v3; // r12
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v9; // rcx
  struct _KPROCESS *CurrentProcess; // rax
  NTSTATUS ProcessExitStatus; // ebx
  unsigned int CurrentProcessSessionId; // eax
  _QWORD *v13; // r15
  _QWORD *v14; // rbx
  __int64 v15; // r14
  struct DXGADAPTER *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  const char *v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  const char *v22; // rdx
  __int64 v23; // rcx
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // r14
  unsigned __int64 v32; // rdx
  DXGVIRTUALMACHINE *v33; // rcx
  DXGVIRTUALMACHINE *v34; // rcx
  __int64 v35; // r8
  unsigned int v36; // ecx
  unsigned int v37; // esi
  int v38; // eax
  int v39; // eax
  struct DXGPROTECTEDSESSION *EntryObject; // rbx
  unsigned int v41; // eax
  unsigned int v42; // ebx
  DXGKEYEDMUTEX *v43; // rcx
  int v44; // r8d
  DXGSYNCOBJECT *v45; // rbx
  unsigned int v46; // r15d
  PERESOURCE *v47; // rax
  struct DXGGLOBAL *v48; // rax
  __int64 v49; // rdx
  unsigned int v50; // esi
  int v51; // eax
  unsigned int v52; // ebx
  DXGSHAREDVMOBJECT *v53; // rax
  struct DXGPROCESS *v54; // rbx
  unsigned int v55; // ebx
  int EntryType; // eax
  DXGK_TRANSPORT_BUFFER *v57; // rax
  unsigned int v58; // eax
  DXGGLOBAL *v59; // rax
  DXGGLOBAL *v60; // rax
  DXGSESSIONDATA *v61; // rax
  int v62; // eax
  struct DXGGLOBAL *v63; // rax
  int v64; // esi
  int v65; // ebx
  __int64 ProcessID; // rax
  __int64 v67; // rcx
  __int64 v68; // r8
  struct DXGGLOBAL *v69; // rax
  __int64 v70; // [rsp+28h] [rbp-D8h]
  __int64 v71; // [rsp+30h] [rbp-D0h]
  _BYTE v72[8]; // [rsp+50h] [rbp-B0h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp-A8h] BYREF
  union _LARGE_INTEGER v74; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v75[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v76[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v77[48]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v78[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v79[64]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v80[64]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD *v81; // [rsp+148h] [rbp+48h]
  char v82; // [rsp+150h] [rbp+50h]
  _BYTE v83[64]; // [rsp+160h] [rbp+60h] BYREF

  v3 = 0;
  if ( (*((_DWORD *)this + 102) & 0x104) == 4 )
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( SessionData )
      DispBrokerClient::DisconnectDisplayBroker((struct _KTHREAD **)SessionData + 2373);
    Interval.QuadPart = 0LL;
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v9);
    ProcessExitStatus = PsGetProcessExitStatus(CurrentProcess);
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    DxgkLogCodePointPacketForSession(115, CurrentProcessSessionId, ProcessExitStatus, 0, 0, 0LL);
  }
  while ( *((_DWORD *)this + 106) )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v72[1] = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)v72);
  if ( (*((_DWORD *)this + 102) & 0x101) == 1 )
    DxgkDestroyCsrssProcess();
  v13 = (_QWORD *)((char *)this + 320);
  if ( (_QWORD *)*v13 != v13 )
  {
    if ( !a3 )
      DXGPROCESS::ReleaseVidPnSourceOwners(this, a2);
    while ( (_QWORD *)*v13 != v13 )
    {
      v14 = (_QWORD *)((*v13 - 24LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*v13 >> 64));
      v15 = *(_QWORD *)(v14[2] + 16LL);
      OutputDuplProcessTerminateForWddm((PERESOURCE *)v15, (PERESOURCE *)v14[237]);
      COREACCESS::COREACCESS((COREACCESS *)v79, *(struct DXGADAPTER *const *)(v14[2] + 16LL));
      v16 = (struct DXGADAPTER *)v14[237];
      if ( !v16 )
        v16 = *(struct DXGADAPTER **)(v14[2] + 16LL);
      COREACCESS::COREACCESS((COREACCESS *)v80, v16);
      v81 = v14;
      v17 = v14[237];
      if ( v17 == *(_QWORD *)(v14[2] + 16LL) || (v82 = 1, !v17) )
        v82 = 0;
      v18 = *(_QWORD *)(v15 + 3128);
      if ( *((_DWORD *)v14 + 116) == 2 )
      {
        v3 = 1;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v18 + 48, 0LL);
        *(_QWORD *)(v18 + 56) = KeGetCurrentThread();
      }
      else
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v18 + 24, 0LL);
        *(_QWORD *)(v18 + 32) = KeGetCurrentThread();
      }
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v78, v19);
      if ( !*(_QWORD *)(v15 + 3128) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1983;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pAdapter->IsRenderAdapter()",
          1983LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *(_DWORD *)(*(_QWORD *)(v14[2] + 16LL) + 200LL) == 4 )
      {
        if ( v14 )
          v14 += 3;
        v20 = *v14;
        if ( *(_QWORD **)(*v14 + 8LL) != v14 || (v21 = (_QWORD *)v14[1], (_QWORD *)*v21 != v14) )
          __fastfail(3u);
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
      }
      else
      {
        if ( *((_DWORD *)v14 + 152) == 1 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v78);
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
            (DXGADAPTERSTOPRESETLOCKSHARED *)v76,
            (struct DXGADAPTER *)v15,
            1);
          if ( *(_DWORD *)(v15 + 200) == 1 )
            DXGDEVICE::FlushScheduler(v14, 4LL, 4294967293LL, 0LL);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v78, v22);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
        }
        ADAPTER_RENDER::DestroyDevice(*(ADAPTER_RENDER **)(v15 + 3128), (struct DXGDEVICE *)v14, 0LL);
      }
      if ( v3 )
      {
        v3 = 0;
        v23 = v18 + 48;
        *(_QWORD *)(v18 + 56) = 0LL;
      }
      else
      {
        v3 = 0;
        v23 = v18 + 24;
        *(_QWORD *)(v18 + 32) = 0LL;
      }
      ExReleasePushLockExclusiveEx(v23, 0LL);
      KeLeaveCriticalRegion();
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
    }
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
  {
    OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(RemoteOutputDuplMgr);
  }
  else
  {
    WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
    WdLogGlobalForLineNumber = 3115;
  }
  OutputDuplProcessTerminateForSession();
  v29 = (_QWORD *)((char *)this + 344);
  if ( (_QWORD *)*v29 != v29 )
  {
    DXGFASTMUTEX::Acquire((DXGPROCESS *)((char *)this + 360));
    while ( (_QWORD *)*v29 != v29 )
    {
      v30 = (*v29 - 24LL) & -(__int64)(*v29 != 0LL);
      v31 = *(_QWORD *)(*(_QWORD *)(v30 + 0x10) + 16LL);
      COREACCESS::COREACCESS((COREACCESS *)v83, (struct DXGADAPTER *const)v31);
      COREACCESS::AcquireShared((COREACCESS *)v83, 0LL);
      if ( !*(_QWORD *)(v31 + 3120) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2058;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pAdapter->IsDisplayAdapter()",
          2058LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *(_DWORD *)(v31 + 200) == 4 )
        DXGPROCESS::RemoveCopyProtection((struct _KTHREAD **)this, v30);
      else
        ADAPTER_DISPLAY::DestroyCopyProtection(
          *(DXGADAPTER ***)(v31 + 3120),
          *(_DWORD *)(v30 + 52),
          *(_DWORD *)(v30 + 48));
      COREACCESS::~COREACCESS((COREACCESS *)v83, v32);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 45);
  }
  if ( (*((_DWORD *)this + 102) & 0x80u) != 0 )
  {
    v33 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 74);
    if ( v33 )
      DXGVIRTUALMACHINE::FlushDevicesForTermination(v33);
    v34 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 74);
    if ( v34 )
      DXGVIRTUALMACHINE::PauseVmBusChannels(v34);
  }
  v35 = *((unsigned int *)this + 75);
  v36 = *((_DWORD *)this + 74);
  if ( (_DWORD)v35 != v36 )
  {
    v37 = 0;
    if ( v36 )
    {
      do
      {
        v38 = HMGRTABLE::GetEntryType((__int64)this + 280, v37) - 8;
        if ( v38 )
        {
          v39 = v38 - 1;
          if ( v39 )
          {
            if ( v39 == 5 )
            {
              EntryObject = (struct DXGPROTECTEDSESSION *)HMGRTABLE::GetEntryObject(
                                                            (DXGPROCESS *)((char *)this + 280),
                                                            v37);
              v41 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v37);
              DXGPROTECTEDSESSION::DestroyProtectedSession(EntryObject, v41);
            }
          }
          else
          {
            HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v37);
            v42 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v37);
            DXGKEYEDMUTEX::SignalAbandoned(v43, v42, v44);
            if ( !DXGKEYEDMUTEX::DestroyHandle(v42) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 2141;
              DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"bStatus", 2141LL, 0LL, 0LL, 0LL, 0LL);
            }
          }
        }
        else
        {
          v45 = (DXGSYNCOBJECT *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v37);
          v46 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v37);
          if ( (*((_DWORD *)this + 102) & 0x80) != 0 )
          {
            v48 = DXGGLOBAL::GetGlobal();
            DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v75, v48, 0);
            DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v75);
            DXGSYNCOBJECT::SetVmSyncObject(v45, 0LL);
            *((_DWORD *)v45 + 20) = 0;
            DXGPROCESS::FreeHandleSafe(this, v46);
            DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v75);
          }
          else
          {
            v47 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
            DXGGLOBAL::DestroySyncObject(v47, v45, v46, 0);
          }
        }
        v36 = *((_DWORD *)this + 74);
        ++v37;
      }
      while ( v37 < v36 );
      v35 = *((unsigned int *)this + 75);
    }
  }
  v49 = v36;
  if ( (*((_DWORD *)this + 102) & 0x80u) != 0 && (_DWORD)v35 != v36 )
  {
    v50 = 0;
    if ( v36 )
    {
      do
      {
        v51 = HMGRTABLE::GetEntryType((__int64)this + 280, v50) - 12;
        if ( v51 )
        {
          if ( v51 == 1 )
          {
            v52 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v50);
            v53 = (DXGSHAREDVMOBJECT *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v50);
            DXGSHAREDVMOBJECT::ReleaseReference(v53);
            DXGPROCESS::FreeHandleSafe(this, v52);
          }
        }
        else
        {
          v54 = (struct DXGPROCESS *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v50);
          if ( (*((_DWORD *)v54 + 102) & 0x100) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2180;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"pProcess->IsVmProcess()",
              2180LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v77, v54, 1u);
          DXGPROCESS::DestroyDxgProcess(v54);
          CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v77);
        }
        v49 = *((unsigned int *)this + 74);
        ++v50;
      }
      while ( v50 < (unsigned int)v49 );
    }
  }
  if ( *((_DWORD *)this + 75) != (_DWORD)v49 )
  {
    v55 = 0;
    if ( (_DWORD)v49 )
    {
      do
      {
        EntryType = HMGRTABLE::GetEntryType((__int64)this + 280, v55);
        v49 = (unsigned int)(EntryType - 1);
        if ( EntryType == 1 )
        {
          v58 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v55);
          DXGADAPTER::DestroyHandle((struct _KTHREAD **)this, v58);
        }
        else if ( EntryType == 20 )
        {
          v57 = (DXGK_TRANSPORT_BUFFER *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v55);
          if ( *((_BYTE *)v57 + 40) )
            DXGK_TRANSPORT_BUFFER::Destroy(v57);
        }
        else if ( EntryType )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2222;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"EntryType == HMGRENTRY_TYPE_FREE",
            2222LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        ++v55;
      }
      while ( v55 < *((_DWORD *)this + 74) );
    }
  }
  if ( *((_QWORD *)this + 72) )
  {
    DXGPROCESS::SetVailObject(this, 0LL);
    if ( *((_QWORD *)this + 72) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2235;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!IsVailProcess()", 2235LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  if ( *((_BYTE *)this + 584) )
  {
    v59 = DXGGLOBAL::GetGlobal();
    if ( !DXGGLOBAL::GetSessionData(v59) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2243;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"DXGGLOBAL::GetGlobal()->GetSessionData()",
        2243LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v60 = DXGGLOBAL::GetGlobal();
    v61 = DXGGLOBAL::GetSessionData(v60);
    if ( (int)DXGSESSIONDATA::VailGuestDisconnect(v61) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2245;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(_Status)", 2245LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_BYTE *)this + 584) = 0;
  }
  VidSchTerminateProcessX(this, v49, v35);
  VidMmTerminateProcessX(this);
  while ( *((int *)this + 107) > 0 )
  {
    v74.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &v74);
  }
  v62 = *((_DWORD *)this + 102);
  if ( a3 )
  {
    if ( (v62 & 0x80u) != 0 )
      DXGPROCESSVMWP::ResetVirtualMachine(this);
  }
  else if ( (v62 & 0x40) != 0 )
  {
    v63 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v63,
      (__int64 (__fastcall *)(_QWORD *, __int64))DestroyProcessCallback,
      (__int64)this,
      2);
  }
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)v72);
  v64 = *((_DWORD *)this + 102);
  if ( (v64 & 0x100) != 0 )
  {
    DXGPROCESSVM::DestroyVmProcess(this);
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v65 = *((_DWORD *)this + 122);
    ProcessID = DXGPROCESS::GetProcessID(this);
    LODWORD(v71) = v64;
    LODWORD(v70) = v65;
    McTemplateK0pxqt_EtwWriteTransfer(v67, &EventDestroyDxgProcess, v68, this, ProcessID, v70, v71);
  }
  if ( !a3 )
    *((_DWORD *)this + 10) = 2;
  if ( *((_DWORD *)this + 122) )
  {
    v69 = DXGGLOBAL::GetGlobal();
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyProcess(*((DXG_GUEST_GLOBAL_VMBUS **)v69 + 210), *((_DWORD *)this + 122));
    *((_DWORD *)this + 122) = 0;
  }
  DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)v72);
}
