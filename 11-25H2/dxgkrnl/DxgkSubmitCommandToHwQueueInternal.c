/*
 * XREFs of DxgkSubmitCommandToHwQueueInternal @ 0x1402B81C0
 * Callers:
 *     ?VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402B7F90 (-VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSubmitCommandToHwQueue @ 0x1402B81A0 (DxgkSubmitCommandToHwQueue.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14001E170 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14001F190 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGHWQUEUE@@QEAAXXZ @ 0x14001F210 (-ReleaseReference@DXGHWQUEUE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14002B430 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028DA40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140290400 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1402B8DC0 (-SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z.c)
 *     ?VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1402B9B34 (-VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SU.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402BA024 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkSubmitCommandToHwQueueInternal(struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a1, bool a2, __int64 a3)
{
  struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *v4; // rsi
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rbx
  struct DXGPROCESS *v10; // rdi
  DXGHWQUEUE *v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rcx
  int v14; // esi
  struct _KEVENT *v15; // rdi
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  bool v23; // zf
  __int64 v24; // rdi
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r8
  DXGADAPTER *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  struct _KEVENT *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // [rsp+50h] [rbp-158h] BYREF
  __int64 v43; // [rsp+58h] [rbp-150h]
  char v44; // [rsp+60h] [rbp-148h]
  DXGHWQUEUE *v45; // [rsp+68h] [rbp-140h] BYREF
  DXGHWQUEUE *v46; // [rsp+70h] [rbp-138h] BYREF
  char v47; // [rsp+78h] [rbp-130h]
  struct DXGPROCESS *v48; // [rsp+80h] [rbp-128h]
  struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *v49; // [rsp+88h] [rbp-120h]
  _BYTE v50[24]; // [rsp+90h] [rbp-118h] BYREF
  _OWORD v51[3]; // [rsp+A8h] [rbp-100h] BYREF
  __int64 v52; // [rsp+D8h] [rbp-D0h]
  _BYTE v53[8]; // [rsp+E0h] [rbp-C8h] BYREF
  _BYTE v54[16]; // [rsp+E8h] [rbp-C0h] BYREF
  DXGADAPTER *v55; // [rsp+F8h] [rbp-B0h]
  char v56; // [rsp+100h] [rbp-A8h]
  __int64 v57; // [rsp+108h] [rbp-A0h]
  _BYTE v58[16]; // [rsp+128h] [rbp-80h] BYREF
  DXGADAPTER *v59; // [rsp+138h] [rbp-70h]
  char v60; // [rsp+140h] [rbp-68h]
  __int64 v61; // [rsp+148h] [rbp-60h]
  __int64 v62; // [rsp+168h] [rbp-40h]
  char v63; // [rsp+170h] [rbp-38h]

  v4 = a1;
  v42 = -1;
  v43 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v44 = 1;
    v42 = 2160;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2160);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v42, 2160);
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v10 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( !v10 )
      goto LABEL_5;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v10 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( !v10 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2925;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
      v10 = v9;
    }
  }
  v48 = v10;
  if ( !v10 )
  {
    v39 = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(2LL, v39, -1073741811LL);
    WdLogGlobalForLineNumber = 1383;
    v41 = PsGetCurrentProcess(v40);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"unexpected process 0x%I64x returning 0x%I64x",
      v41,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    v23 = v44 == 0;
    goto LABEL_31;
  }
  memset(v51, 0, sizeof(v51));
  v52 = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v51, v4, 0x38uLL);
    v4 = (struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)v51;
  }
  v49 = v4;
  v45 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v46, v4->hHwQueue, v10, &v45, 0, 1);
  v11 = v45;
  if ( !v45 )
  {
    WdLogSingleEntry3(2LL, v10, v4->hHwQueue, -1073741811LL);
    WdLogGlobalForLineNumber = 1419;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x failed with invalid hHwQueue 0x%I64x returning 0x%I64x",
      (__int64)v10,
      v4->hHwQueue,
      -1073741811LL,
      0LL,
      0LL);
LABEL_30:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v46);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    v23 = v44 == 0;
LABEL_31:
    if ( v23 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
LABEL_64:
    McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v42);
    return 3221225485LL;
  }
  if ( *((_BYTE *)v45 + 140) )
  {
    WdLogSingleEntry2(2LL, v45, -1073741811LL);
    WdLogGlobalForLineNumber = 1428;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Kernel mode submission not supported on UserModeSubmission DXGHWQUEUE 0x%I64x, returning 0x%I64x",
      (__int64)v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_30;
  }
  if ( v4->NumPrimaries > 0x10 )
  {
    WdLogSingleEntry4(2LL, v45, v4->NumPrimaries, 16LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1436;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x fails as specified NumWrittenPrimaries 0x%I64x exceeds limit 0x%I64x returning 0x%I64x",
      (__int64)v11,
      v4->NumPrimaries,
      16LL,
      -1073741811LL,
      0LL);
    goto LABEL_30;
  }
  if ( v4->pPrivateDriverData )
  {
    if ( v4->PrivateDriverDataSize )
      goto LABEL_16;
LABEL_97:
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1444;
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v46);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( !v44 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
    goto LABEL_64;
  }
  if ( v4->PrivateDriverDataSize )
    goto LABEL_97;
LABEL_16:
  v12 = *(_QWORD *)(*((_QWORD *)v45 + 2) + 16LL);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL);
  if ( *(_BYTE *)(v13 + 209) )
  {
    v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommandToHwQueue(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v13 + 4664),
            v10,
            v4);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v46);
LABEL_27:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( v44 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v42);
    }
    return v17;
  }
  if ( *(int *)(v13 + 2736) >= 0x2000 || *(_BYTE *)(v13 + 3036) )
    v14 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 332);
  else
    v14 = 0;
  v15 = *(struct _KEVENT **)(v12 + 16);
  if ( *(_DWORD *)(v12 + 464) != 2 )
  {
    if ( KeReadStateEvent(v15 + 4) )
      goto LABEL_21;
    v33 = v15 + 4;
    goto LABEL_66;
  }
  if ( !KeReadStateEvent(v15 + 5) )
  {
    v33 = v15 + 5;
LABEL_66:
    KeWaitForSingleObject(v33, Executive, 0, 0, 0LL);
  }
LABEL_21:
  KeEnterCriticalRegion();
  if ( v14 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 160));
      v16 = 1;
      v11 = v45;
    }
    else
    {
      KeLeaveCriticalRegion();
      v16 = 0;
    }
    if ( !v16 )
    {
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v12 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v12 + 16) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v12 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v12 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventBlockThread, v35, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v12 + 136), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v12 + 16) + 16LL));
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v50,
    (struct _KTHREAD **)(*((_QWORD *)v11 + 2) + 440LL));
  v24 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)(v24 + 24));
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v24 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v24 + 152));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v53, v12, 0, v25, 0);
  if ( v63 )
  {
    if ( v60 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v58, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7603;
    }
    v28 = v59;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v59 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v59 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventBlockThread, v30, 72);
        KeWaitForSingleObject((char *)v59 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v59, 0LL);
      v28 = v59;
    }
    v61 = 0LL;
    v60 = 1;
    if ( *((_DWORD *)v28 + 50) != 1 )
    {
      v60 = 0;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v59 + 23) )
        DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v59, 0LL);
      v61 = 0LL;
      goto LABEL_57;
    }
  }
  if ( v56 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v54, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7603;
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v55 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v55 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventBlockThread, v27, 72);
      KeWaitForSingleObject((char *)v55 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v55, 0LL);
  }
  v57 = 0LL;
  v56 = 1;
  if ( *(_DWORD *)(v62 + 608) == 1 )
  {
    v17 = DXGHWQUEUE::SubmitCommand(v45, v49, a2);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v53);
    _InterlockedDecrement((volatile signed __int32 *)(v24 + 152));
    ExReleasePushLockSharedEx(v24 + 136, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v24);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v50);
    if ( v14 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v12 + 160));
      ExReleasePushLockSharedEx(v12 + 144, 0LL);
    }
    else
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v12 + 136));
    }
    KeLeaveCriticalRegion();
    if ( v46 && !v47 )
      DXGHWQUEUE::ReleaseReference(v46);
    goto LABEL_27;
  }
  COREACCESS::Release((COREACCESS *)v54);
  if ( v63 )
    COREACCESS::Release((COREACCESS *)v58);
LABEL_57:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v53);
  _InterlockedDecrement((volatile signed __int32 *)(v24 + 152));
  ExReleasePushLockSharedEx(v24 + 136, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v24);
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v50);
  if ( v14 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v12 + 160));
    ExReleasePushLockSharedEx(v12 + 144, 0LL);
  }
  else
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v12 + 136));
  }
  KeLeaveCriticalRegion();
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v46);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit, v32, v42);
  return 3221226166LL;
}
