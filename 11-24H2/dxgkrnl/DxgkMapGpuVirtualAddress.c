/*
 * XREFs of DxgkMapGpuVirtualAddress @ 0x140321DB0
 * Callers:
 *     ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140426500 (-VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x14000E9C4 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x14000F1A0 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14000FBB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140012E50 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002DDD0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x14002F238 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDRESS@@@Z @ 0x1400501EC (-VidMmFreeGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEBU_D3DKMT_FRE.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A4390 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1402A4850 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402AC210 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402C7874 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1403DF090 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 */

__int64 __fastcall DxgkMapGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // r13
  char CurrentThreadPreviousMode; // r12
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct _KTHREAD **v8; // rdi
  struct _KTHREAD **v9; // r14
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v10; // r15
  const void *v11; // rdx
  unsigned __int64 Value; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  int v15; // ebx
  struct _KEVENT *v16; // rsi
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _EX_RUNDOWN_REF *v21; // rbx
  ULONG_PTR Count; // r8
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA v23; // rax
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  struct DXGTHREAD *DxgThread; // rax
  _QWORD *v26; // rcx
  __int64 v27; // rax
  bool v28; // r9
  int v29; // eax
  unsigned int v30; // esi
  void *v31; // rcx
  void *v32; // rcx
  struct DXGTHREAD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  DXGADAPTER *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // r8
  bool v44; // zf
  struct DXGPAGINGQUEUE *v45; // rdi
  struct _KEVENT *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  unsigned int Ptr_high; // r13d
  unsigned int v53; // esi
  unsigned int HostProcess; // eax
  int Timeout; // [rsp+20h] [rbp-218h]
  int v56; // [rsp+50h] [rbp-1E8h] BYREF
  __int64 v57; // [rsp+58h] [rbp-1E0h]
  char v58; // [rsp+60h] [rbp-1D8h]
  DXGPAGINGQUEUE *v59; // [rsp+68h] [rbp-1D0h] BYREF
  struct DXGPAGINGQUEUE *v60; // [rsp+70h] [rbp-1C8h] BYREF
  struct _EX_RUNDOWN_REF *v61; // [rsp+78h] [rbp-1C0h] BYREF
  struct DXGTHREAD *v62; // [rsp+80h] [rbp-1B8h] BYREF
  __int64 v63; // [rsp+88h] [rbp-1B0h] BYREF
  int v64; // [rsp+90h] [rbp-1A8h]
  _QWORD v65[2]; // [rsp+98h] [rbp-1A0h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v66; // [rsp+A8h] [rbp-190h]
  struct _EX_RUNDOWN_REF *v67; // [rsp+B0h] [rbp-188h] BYREF
  DXG_GUEST_VIRTUALGPU_VMBUS *v68; // [rsp+B8h] [rbp-180h]
  _QWORD *v69; // [rsp+C0h] [rbp-178h]
  _BYTE v70[8]; // [rsp+D0h] [rbp-168h] BYREF
  _BYTE v71[16]; // [rsp+D8h] [rbp-160h] BYREF
  DXGADAPTER *v72; // [rsp+E8h] [rbp-150h]
  char v73; // [rsp+F0h] [rbp-148h]
  __int64 v74; // [rsp+F8h] [rbp-140h]
  _BYTE v75[16]; // [rsp+118h] [rbp-120h] BYREF
  DXGADAPTER *v76; // [rsp+128h] [rbp-110h]
  char v77; // [rsp+130h] [rbp-108h]
  __int64 v78; // [rsp+138h] [rbp-100h]
  __int64 v79; // [rsp+158h] [rbp-E0h]
  char v80; // [rsp+160h] [rbp-D8h]
  struct D3DDDI_MAPGPUVIRTUALADDRESS v81; // [rsp+190h] [rbp-A8h] BYREF

  v3 = a1;
  v62 = (struct DXGTHREAD *)a1;
  v56 = -1;
  v57 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v58 = 1;
    v56 = 2100;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2100);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v56, 2100);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v9 = (struct _KTHREAD **)*((_QWORD *)Current + 3);
    if ( !v9 )
      goto LABEL_5;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v9 = (struct _KTHREAD **)DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( !v9 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2926;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
      v9 = v8;
    }
  }
  v65[1] = v9;
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 13147;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
    v44 = v58 == 0;
    goto LABEL_83;
  }
  memset(&v81, 0, sizeof(v81));
  if ( CurrentThreadPreviousMode == 1 )
  {
    v10 = &v81;
    v66 = &v81;
    v11 = (const void *)v3;
    if ( v3 >= MmUserProbeAddress )
      v11 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v81, v11, 0x68uLL);
  }
  else
  {
    v10 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)v3;
    v66 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)v3;
  }
  v60 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v59, v10->hPagingQueue, v9, &v60, 1);
  if ( !v60 )
  {
    WdLogSingleEntry2(3LL, v10->hPagingQueue, -1073741811LL);
    WdLogGlobalForLineNumber = 13180;
LABEL_82:
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v59);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
    v44 = v58 == 0;
LABEL_83:
    if ( v44 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
    goto LABEL_90;
  }
  Value = v10->Protection.Value;
  if ( (Value & 0x10) != 0 || Value >= 0x20 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 13187;
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v59);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
    if ( !v58 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
LABEL_90:
    McTemplateK0q_EtwWriteTransfer(v42, (__int64)&EventProfilerExit, v43, v56);
    return 3221225485LL;
  }
  v13 = *((_QWORD *)v60 + 2);
  v63 = v13;
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL);
  if ( *(int *)(v14 + 2736) >= 0x2000 || *(_BYTE *)(v14 + 3036) )
    v15 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
  else
    v15 = 0;
  v64 = v15;
  v16 = *(struct _KEVENT **)(v13 + 16);
  if ( *(_DWORD *)(v13 + 464) != 2 )
  {
    if ( KeReadStateEvent(v16 + 4) )
      goto LABEL_18;
    v46 = v16 + 4;
    goto LABEL_92;
  }
  if ( !KeReadStateEvent(v16 + 5) )
  {
    v46 = v16 + 5;
LABEL_92:
    KeWaitForSingleObject(v46, Executive, 0, 0, 0LL);
  }
LABEL_18:
  KeEnterCriticalRegion();
  if ( v15 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v13 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 160));
      v18 = 1;
    }
    else
    {
      KeLeaveCriticalRegion();
      v18 = 0;
    }
    if ( !v18 )
    {
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v13 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v13 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v13 + 16) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v13 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v13 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v47, (__int64)&EventBlockThread, v48, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v13 + 136), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v13 + 16) + 16LL));
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v70, v13, 0, v17, 0);
  if ( v80 )
  {
    if ( v77 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v75, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7628;
    }
    v37 = v76;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v76 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v76 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventBlockThread, v39, 72);
        KeWaitForSingleObject((char *)v76 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v76, 0LL);
      v37 = v76;
    }
    v78 = 0LL;
    v77 = 1;
    if ( *((_DWORD *)v37 + 50) != 1 )
      goto LABEL_76;
  }
  if ( v73 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v71, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7628;
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v72 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v72 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventBlockThread, v20, 72);
      KeWaitForSingleObject((char *)v72 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v72, 0LL);
  }
  v74 = 0LL;
  v73 = 1;
  if ( *(_DWORD *)(v79 + 608) == 1 )
  {
    v21 = 0LL;
    v61 = 0LL;
    Count = 0LL;
    v23 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)v10->Protection.Value;
    if ( (*(_BYTE *)&v23 & 4) != 0 || (*(_BYTE *)&v23 & 8) != 0 )
      goto LABEL_42;
    AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)v9, (DXGALLOCATIONREFERENCE *)&v67, v10->hAllocation);
    v21 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    v61 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    *(_QWORD *)AllocationSafe = 0LL;
    if ( v67 )
      ExReleaseRundownProtection(v67 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
    {
      v65[0] = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, v65) >= 0 )
      {
        DxgThread = (struct DXGTHREAD *)v65[0];
        if ( v65[0] || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v65[0] = DxgThread) != 0LL) )
        {
          if ( *((_DWORD *)DxgThread + 12) )
          {
            WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
            WdLogGlobalForLineNumber = 73;
          }
        }
      }
    }
    if ( v21 )
    {
      Count = v21[3].Count;
      if ( !Count && (*(_BYTE *)(v13 + 1917) & 1) == 0 )
      {
        WdLogSingleEntry2(2LL, -1073741811LL, v21);
        WdLogGlobalForLineNumber = 13219;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"0x%I64x DXGALLOCATION 0x%p does not have a VidMm handle",
          -1073741811LL,
          (__int64)v21,
          0LL,
          0LL,
          0LL);
        goto LABEL_88;
      }
      if ( v21[1].Count == v13 )
      {
LABEL_42:
        v26 = *(_QWORD **)(v13 + 16);
        v27 = v26[2];
        v69 = v26;
        if ( *(_BYTE *)(v27 + 209) )
        {
          v68 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v27 + 4664);
          if ( v21 )
            Ptr_high = HIDWORD(v21[2].Ptr);
          else
            Ptr_high = 0;
          v53 = *((_DWORD *)v60 + 7);
          HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v9);
          v29 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(v68, HostProcess, 0LL, v53, Ptr_high, v10);
          v3 = (ULONG64)v62;
        }
        else
        {
          v28 = *(_BYTE *)(v13 + 1919) || *(_DWORD *)(v13 + 464) == 2 && *(int *)(v27 + 3004) >= 2000;
          LOBYTE(Timeout) = v28;
          v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, struct D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(v26[95] + 8LL) + 744LL))(
                  v26[96],
                  *((_QWORD *)v60 + 4),
                  Count,
                  v10,
                  Timeout,
                  -2);
        }
        v30 = v29;
        if ( v29 >= 0 && CurrentThreadPreviousMode == 1 )
        {
          v31 = (void *)(v3 + 88);
          if ( v3 + 88 >= MmUserProbeAddress )
            v31 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v31, &v10->VirtualAddress, 8uLL);
          v32 = (void *)(v3 + 96);
          if ( v3 + 96 >= MmUserProbeAddress )
            v32 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v32, &v10->PagingFenceValue, 8uLL);
        }
        if ( v21 )
          ExReleaseRundownProtection(v21 + 11);
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
        {
          v62 = 0LL;
          if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v62) >= 0 )
          {
            v33 = v62;
            if ( v62 || (v33 = DxgkThreadObjectCreateDxgThread(1), (v62 = v33) != 0LL) )
            {
              if ( *((_DWORD *)v33 + 12) )
              {
                WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v33 + 12), 0LL, 0LL);
                WdLogGlobalForLineNumber = 73;
              }
            }
          }
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
        if ( v64 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v13 + 160));
          ExReleasePushLockSharedEx(v13 + 144, 0LL);
        }
        else
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v13 + 136));
        }
        KeLeaveCriticalRegion();
        if ( v59 )
          DXGPAGINGQUEUE::ReleaseReference(v59);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
        if ( v58 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit, v35, v56);
        }
        return v30;
      }
      v45 = v60;
      WdLogSingleEntry3(2LL, -1073741811LL, v21, v60);
      WdLogGlobalForLineNumber = 13225;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"0x%I64x DXGALLOCATION 0x%p device does not match DXGPAGINGQUEUE 0x%p device",
        -1073741811LL,
        (__int64)v21,
        (__int64)v45,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry3(2LL, -1073741811LL, v10->hAllocation, v9);
      WdLogGlobalForLineNumber = 13213;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"0x%I64x Invalid hAllocation=0x%I64x specified DXGPROCESS=0x%I64x",
        -1073741811LL,
        v10->hAllocation,
        (__int64)v9,
        0LL,
        0LL);
    }
LABEL_88:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v61);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v63);
    goto LABEL_82;
  }
  COREACCESS::Release((COREACCESS *)v71);
  if ( v80 )
LABEL_76:
    COREACCESS::Release((COREACCESS *)v75);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v63);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v59);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
  if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v40, (__int64)&EventProfilerExit, v41, v56);
  return 3221226166LL;
}
