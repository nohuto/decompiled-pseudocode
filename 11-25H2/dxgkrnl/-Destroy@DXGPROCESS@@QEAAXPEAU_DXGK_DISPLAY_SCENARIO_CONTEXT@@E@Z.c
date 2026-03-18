/*
 * XREFs of ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402DE70C
 * Callers:
 *     ?DxgkWslProcessCleanup@@YAXPEAU_EPROCESS@@@Z @ 0x1401E6AF0 (-DxgkWslProcessCleanup@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x140208468 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402DE404 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x14038BE90 (--1DXGPROCESS@@MEAA@XZ.c)
 * Callees:
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140016478 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14001D9E0 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14001E450 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002F800 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x140033A00 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x140034810 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x140037274 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x14003BEC4 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z @ 0x14003EB34 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140043808 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043B6C (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x140050188 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x140061470 (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x14006D070 (-DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x140182BA4 (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1401843BC (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?Destroy@DXGK_TRANSPORT_BUFFER@@QEAAXXZ @ 0x140186D7C (-Destroy@DXGK_TRANSPORT_BUFFER@@QEAAXXZ.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x14019663C (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?FlushDevicesForTermination@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1401E7014 (-FlushDevicesForTermination@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1401E7AB8 (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ @ 0x1401E7C3C (-ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1401E8460 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1401F6590 (DxgkDestroyCsrssProcess.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x140201340 (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x140223F40 (-VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x140295218 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x14029E7B4 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1402D8E88 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402DE404 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     OutputDuplProcessTerminateForWddm @ 0x1402E5770 (OutputDuplProcessTerminateForWddm.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402E7568 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x14031E194 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z @ 0x14032DB0C (-SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x14033DBDC (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x140348180 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x140385DA0 (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x14038A344 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1403A1B48 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1403A1F60 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     OutputDuplProcessTerminateForSession @ 0x1403B003C (OutputDuplProcessTerminateForSession.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403B205C (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     VidMmTerminateProcessX @ 0x1403B7EAC (VidMmTerminateProcessX.c)
 *     VidSchTerminateProcessX @ 0x1403B999C (VidSchTerminateProcessX.c)
 *     ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1403CC88C (-GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403D0BDC (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

void __fastcall DXGPROCESS::Destroy(DXGPROCESS *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2, char a3)
{
  char v3; // r13
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v8; // rcx
  struct _KPROCESS *CurrentProcess; // rax
  NTSTATUS ProcessExitStatus; // ebx
  unsigned int CurrentProcessSessionId; // eax
  _QWORD *v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r14
  struct DXGADAPTER *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r15
  char v18; // r13
  const char *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rax
  const char *v25; // rdx
  __int64 v26; // rbx
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rbx
  __int64 v33; // rsi
  __int64 v34; // r14
  unsigned __int64 v35; // rdx
  DXGVIRTUALMACHINE *v36; // rcx
  DXGVIRTUALMACHINE *v37; // rcx
  __int64 v38; // r8
  unsigned int v39; // ecx
  unsigned int v40; // esi
  int v41; // eax
  int v42; // eax
  struct DXGPROTECTEDSESSION *EntryObject; // rbx
  unsigned int v44; // eax
  unsigned int v45; // ebx
  DXGKEYEDMUTEX *v46; // rcx
  int v47; // r8d
  DXGSYNCOBJECT *v48; // rbx
  unsigned int v49; // r15d
  DXGGLOBAL *v50; // rax
  struct DXGGLOBAL *v51; // rax
  __int64 v52; // rdx
  unsigned int v53; // esi
  int v54; // eax
  unsigned int v55; // ebx
  DXGSHAREDVMOBJECT *v56; // rax
  struct DXGPROCESS *v57; // rbx
  unsigned int v58; // ebx
  int EntryType; // eax
  DXGK_TRANSPORT_BUFFER *v60; // rax
  unsigned int v61; // eax
  DXGGLOBAL *v62; // rax
  DXGGLOBAL *v63; // rax
  DXGSESSIONDATA *v64; // rax
  int v65; // eax
  struct DXGGLOBAL *v66; // rax
  __int64 v67; // r8
  struct DXGGLOBAL *v68; // rax
  __int64 v69; // [rsp+28h] [rbp-D8h]
  __int64 v70; // [rsp+30h] [rbp-D0h]
  _BYTE v72[4]; // [rsp+54h] [rbp-ACh] BYREF
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp-A8h] BYREF
  union _LARGE_INTEGER v74; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v75[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v76[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v77[48]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v78[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v79[64]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v80[64]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v81; // [rsp+148h] [rbp+48h]
  char v82; // [rsp+150h] [rbp+50h]
  _BYTE v83[64]; // [rsp+160h] [rbp+60h] BYREF

  v3 = a3;
  if ( (*((_DWORD *)this + 102) & 0x104) == 4 )
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( SessionData )
      DispBrokerClient::DisconnectDisplayBroker((struct _KTHREAD **)SessionData + 2373);
    Interval.QuadPart = 0LL;
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v8);
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
  v12 = (_QWORD *)((char *)this + 320);
  if ( (_QWORD *)*v12 != v12 )
  {
    if ( !v3 )
      DXGPROCESS::ReleaseVidPnSourceOwners(this, a2);
    while ( (_QWORD *)*v12 != v12 )
    {
      v13 = (*v12 - 24LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*v12 >> 64);
      v14 = *(_QWORD *)(*(_QWORD *)(v13 + 0x10) + 16LL);
      OutputDuplProcessTerminateForWddm((struct DXGADAPTER *)v14, *(struct DXGADAPTER **)(v13 + 0x758));
      COREACCESS::COREACCESS((COREACCESS *)v79, *(struct DXGADAPTER *const *)(*(_QWORD *)(v13 + 16) + 16LL));
      v15 = *(struct DXGADAPTER **)(v13 + 1880);
      if ( !v15 )
        v15 = *(struct DXGADAPTER **)(*(_QWORD *)(v13 + 16) + 16LL);
      COREACCESS::COREACCESS((COREACCESS *)v80, v15);
      v81 = v13;
      v16 = *(_QWORD *)(v13 + 1880);
      if ( v16 == *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) || (v82 = 1, !v16) )
        v82 = 0;
      v17 = *(_QWORD *)(v14 + 3128);
      if ( *(_DWORD *)(v13 + 464) == 2 )
      {
        v18 = 1;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v17 + 48, 0LL);
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *(_QWORD *)(v17 + 56) = KeGetCurrentThread();
      }
      else
      {
        v18 = 0;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v17 + 24, 0LL);
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *(_QWORD *)(v17 + 32) = KeGetCurrentThread();
      }
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v78, v19);
      if ( !*(_QWORD *)(v14 + 3128) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1982;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pAdapter->IsRenderAdapter()",
          1982LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) + 200LL) == 4 )
      {
        v20 = v13 + 24;
        v21 = -v13;
        v22 = v20 & -(__int64)(v21 != 0);
        v23 = *(_QWORD *)v22;
        if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) != v22
          || (v24 = *(_QWORD **)((v20 & -(__int64)(v21 != 0)) + 8), *v24 != v22) )
        {
          __fastfail(3u);
        }
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
      }
      else
      {
        if ( *(_DWORD *)(v13 + 608) == 1 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v78);
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
            (DXGADAPTERSTOPRESETLOCKSHARED *)v76,
            (struct DXGADAPTER *)v14,
            1);
          if ( *(_DWORD *)(v14 + 200) == 1 )
            DXGDEVICE::FlushScheduler(v13, 4LL, 4294967293LL, 0LL);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v78, v25);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
        }
        ADAPTER_RENDER::DestroyDevice(*(ADAPTER_RENDER **)(v14 + 3128), (struct DXGDEVICE *)v13, 0LL);
      }
      v26 = v17 + 48;
      if ( !v18 )
        v26 = v17 + 24;
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v26 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v26, 0LL);
      KeLeaveCriticalRegion();
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
    }
    v3 = a3;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
  {
    OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(RemoteOutputDuplMgr);
  }
  else
  {
    WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
    WdLogGlobalForLineNumber = 3109;
  }
  OutputDuplProcessTerminateForSession();
  v32 = (_QWORD *)((char *)this + 344);
  if ( (_QWORD *)*v32 != v32 )
  {
    DXGFASTMUTEX::Acquire((DXGPROCESS *)((char *)this + 360));
    while ( (_QWORD *)*v32 != v32 )
    {
      v33 = (*v32 - 24LL) & -(__int64)(*v32 != 0LL);
      v34 = *(_QWORD *)(*(_QWORD *)(v33 + 0x10) + 16LL);
      COREACCESS::COREACCESS((COREACCESS *)v83, (struct DXGADAPTER *const)v34);
      COREACCESS::AcquireShared((COREACCESS *)v83, 0LL);
      if ( !*(_QWORD *)(v34 + 3120) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2057;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pAdapter->IsDisplayAdapter()",
          2057LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *(_DWORD *)(v34 + 200) == 4 )
        DXGPROCESS::RemoveCopyProtection((struct _KTHREAD **)this, v33);
      else
        ADAPTER_DISPLAY::DestroyCopyProtection(
          *(DXGADAPTER ***)(v34 + 3120),
          *(_DWORD *)(v33 + 52),
          *(_DWORD *)(v33 + 48));
      COREACCESS::~COREACCESS((COREACCESS *)v83, v35);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 45);
  }
  if ( (*((_DWORD *)this + 102) & 0x80u) != 0 )
  {
    v36 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 74);
    if ( v36 )
      DXGVIRTUALMACHINE::FlushDevicesForTermination(v36);
    v37 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 74);
    if ( v37 )
      DXGVIRTUALMACHINE::PauseVmBusChannels(v37);
  }
  v38 = *((unsigned int *)this + 75);
  v39 = *((_DWORD *)this + 74);
  if ( (_DWORD)v38 != v39 )
  {
    v40 = 0;
    if ( v39 )
    {
      do
      {
        v41 = HMGRTABLE::GetEntryType((__int64)this + 280, v40) - 8;
        if ( v41 )
        {
          v42 = v41 - 1;
          if ( v42 )
          {
            if ( v42 == 5 )
            {
              EntryObject = (struct DXGPROTECTEDSESSION *)HMGRTABLE::GetEntryObject(
                                                            (DXGPROCESS *)((char *)this + 280),
                                                            v40);
              v44 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v40);
              DXGPROTECTEDSESSION::DestroyProtectedSession(EntryObject, v44);
            }
          }
          else
          {
            HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v40);
            v45 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v40);
            DXGKEYEDMUTEX::SignalAbandoned(v46, v45, v47);
            if ( !DXGKEYEDMUTEX::DestroyHandle(v45) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 2140;
              DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"bStatus", 2140LL, 0LL, 0LL, 0LL, 0LL);
            }
          }
        }
        else
        {
          v48 = (DXGSYNCOBJECT *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v40);
          v49 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v40);
          if ( (*((_DWORD *)this + 102) & 0x80) != 0 )
          {
            v51 = DXGGLOBAL::GetGlobal();
            DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v75, v51, 0);
            DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v75);
            DXGSYNCOBJECT::SetVmSyncObject(v48, 0LL);
            *((_DWORD *)v48 + 20) = 0;
            DXGPROCESS::FreeResourceHandleNoRefSafe(this, v49);
            DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v75);
          }
          else
          {
            v50 = DXGGLOBAL::GetGlobal();
            DXGGLOBAL::DestroySyncObject(v50, v48, v49);
          }
        }
        v39 = *((_DWORD *)this + 74);
        ++v40;
      }
      while ( v40 < v39 );
      v38 = *((unsigned int *)this + 75);
    }
  }
  v52 = v39;
  if ( (*((_DWORD *)this + 102) & 0x80u) != 0 && (_DWORD)v38 != v39 )
  {
    v53 = 0;
    if ( v39 )
    {
      do
      {
        v54 = HMGRTABLE::GetEntryType((__int64)this + 280, v53) - 12;
        if ( v54 )
        {
          if ( v54 == 1 )
          {
            v55 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v53);
            v56 = (DXGSHAREDVMOBJECT *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v53);
            DXGSHAREDVMOBJECT::ReleaseReference(v56);
            DXGPROCESS::FreeResourceHandleNoRefSafe(this, v55);
          }
        }
        else
        {
          v57 = (struct DXGPROCESS *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v53);
          if ( (*((_DWORD *)v57 + 102) & 0x100) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2179;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"pProcess->IsVmProcess()",
              2179LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v77, v57, 1u);
          DXGPROCESS::DestroyDxgProcess(v57);
          CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v77);
        }
        v52 = *((unsigned int *)this + 74);
        ++v53;
      }
      while ( v53 < (unsigned int)v52 );
    }
  }
  if ( *((_DWORD *)this + 75) != (_DWORD)v52 )
  {
    v58 = 0;
    if ( (_DWORD)v52 )
    {
      do
      {
        EntryType = HMGRTABLE::GetEntryType((__int64)this + 280, v58);
        v52 = (unsigned int)(EntryType - 1);
        if ( EntryType == 1 )
        {
          v61 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v58);
          DXGADAPTER::DestroyHandle(this, v61);
        }
        else if ( EntryType == 20 )
        {
          v60 = (DXGK_TRANSPORT_BUFFER *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v58);
          if ( *((_BYTE *)v60 + 40) )
            DXGK_TRANSPORT_BUFFER::Destroy(v60);
        }
        else if ( EntryType )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2221;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"EntryType == HMGRENTRY_TYPE_FREE",
            2221LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        ++v58;
      }
      while ( v58 < *((_DWORD *)this + 74) );
    }
  }
  if ( *((_QWORD *)this + 72) )
  {
    DXGPROCESS::SetVailObject(this, 0LL);
    if ( *((_QWORD *)this + 72) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2234;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!IsVailProcess()", 2234LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  if ( *((_BYTE *)this + 584) )
  {
    v62 = DXGGLOBAL::GetGlobal();
    if ( !DXGGLOBAL::GetSessionData(v62) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2242;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"DXGGLOBAL::GetGlobal()->GetSessionData()",
        2242LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v63 = DXGGLOBAL::GetGlobal();
    v64 = DXGGLOBAL::GetSessionData(v63);
    if ( (int)DXGSESSIONDATA::VailGuestDisconnect(v64) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2244;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(_Status)", 2244LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_BYTE *)this + 584) = 0;
  }
  VidSchTerminateProcessX(this, v52, v38);
  VidMmTerminateProcessX(this);
  while ( *((int *)this + 107) > 0 )
  {
    v74.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &v74);
  }
  v65 = *((_DWORD *)this + 102);
  if ( v3 )
  {
    if ( (v65 & 0x80u) != 0 )
      DXGPROCESSVMWP::ResetVirtualMachine(this);
  }
  else if ( (v65 & 0x40) != 0 )
  {
    v66 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v66,
      (__int64 (__fastcall *)(_QWORD *, __int64))DestroyProcessCallback,
      (__int64)this,
      2);
  }
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)v72);
  if ( (*((_DWORD *)this + 102) & 0x100) != 0 )
  {
    DXGPROCESSVM::DestroyVmProcess(this);
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v70) = *((_DWORD *)this + 102);
    LODWORD(v69) = *((_DWORD *)this + 122);
    McTemplateK0pxqt_EtwWriteTransfer(
      *((_QWORD *)this + 8),
      &EventDestroyDxgProcess,
      v67,
      this,
      *(_QWORD *)(*((_QWORD *)this + 8) + 80LL),
      v69,
      v70);
  }
  if ( !v3 )
    *((_DWORD *)this + 10) = 2;
  if ( *((_DWORD *)this + 122) )
  {
    v68 = DXGGLOBAL::GetGlobal();
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyProcess(*((DXG_GUEST_GLOBAL_VMBUS **)v68 + 206), *((_DWORD *)this + 122));
    *((_DWORD *)this + 122) = 0;
  }
  DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)v72);
}
