/*
 * XREFs of DxgkReserveGpuVirtualAddress @ 0x140399110
 * Callers:
 *     ?VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140227810 (-VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x14000E9C4 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x14002F238 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x14004A410 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDRESS@@@Z @ 0x1400501EC (-VidMmFreeGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEBU_D3DKMT_FRE.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x140185444 (-VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTU.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // r12
  char CurrentThreadPreviousMode; // bl
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  struct D3DDDI_RESERVEGPUVIRTUALADDRESS *v7; // rdi
  const void *v8; // rdx
  struct DXGPAGINGQUEUE *v9; // rsi
  struct DXGADAPTER *v10; // rbx
  __int64 v11; // r15
  ULONG64 v12; // r13
  int v13; // ebx
  void *v14; // rcx
  void *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  bool v21; // zf
  DXG_GUEST_VIRTUALGPU_VMBUS *v22; // r15
  int v23; // ebx
  int HostProcess; // eax
  unsigned __int64 v25; // rdx
  struct DXGADAPTER **v26; // rax
  int PairingAdapters; // r12d
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // rdx
  char v32; // [rsp+50h] [rbp-1A8h]
  int v33; // [rsp+58h] [rbp-1A0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-198h]
  char v35; // [rsp+68h] [rbp-190h]
  char v36[8]; // [rsp+70h] [rbp-188h] BYREF
  struct DXGADAPTER *v37; // [rsp+78h] [rbp-180h] BYREF
  unsigned __int64 v38; // [rsp+80h] [rbp-178h] BYREF
  struct DXGADAPTER *v39; // [rsp+88h] [rbp-170h] BYREF
  struct DXGPAGINGQUEUE *v40; // [rsp+90h] [rbp-168h] BYREF
  ULONG64 v41; // [rsp+98h] [rbp-160h]
  DXGADAPTER *v42[2]; // [rsp+A0h] [rbp-158h] BYREF
  struct D3DDDI_RESERVEGPUVIRTUALADDRESS *v43; // [rsp+B0h] [rbp-148h]
  struct DXGPROCESS *v44; // [rsp+B8h] [rbp-140h]
  _BYTE v45[144]; // [rsp+E0h] [rbp-118h] BYREF
  struct D3DDDI_RESERVEGPUVIRTUALADDRESS v46; // [rsp+170h] [rbp-88h] BYREF

  v3 = a1;
  v41 = a1;
  v33 = -1;
  v34 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2098;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2098);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 2098);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v32 = CurrentThreadPreviousMode;
  Current = DXGPROCESS::GetCurrent(v5);
  v44 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 13304;
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
    goto LABEL_44;
  }
  memset(&v46, 0, sizeof(v46));
  if ( CurrentThreadPreviousMode == 1 )
  {
    v7 = &v46;
    v43 = &v46;
    v8 = (const void *)v3;
    if ( v3 >= MmUserProbeAddress )
      v8 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v46, v8, 0x48uLL);
  }
  else
  {
    v7 = (struct D3DDDI_RESERVEGPUVIRTUALADDRESS *)v3;
    v43 = (struct D3DDDI_RESERVEGPUVIRTUALADDRESS *)v3;
  }
  if ( v7->ReservationType > D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 13333;
LABEL_44:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    v21 = v35 == 0;
LABEL_41:
    if ( !v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v33);
    return 3221225485LL;
  }
  v40 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)v36, v7->hPagingQueue, (struct _KTHREAD **)Current, &v40, 0);
  v39 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)v42,
    v7->hPagingQueue,
    (struct _KTHREAD **)Current,
    &v39,
    0);
  v9 = v40;
  v10 = v39;
  if ( !v40 && !v39 )
  {
    WdLogSingleEntry2(3LL, v7->hPagingQueue, -1073741811LL);
    WdLogGlobalForLineNumber = 13347;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v42, v25);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v36);
    goto LABEL_44;
  }
  v11 = 0LL;
  if ( !v39 )
  {
    v10 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v40 + 2) + 16LL) + 16LL);
    v39 = v10;
    v11 = *((_QWORD *)v40 + 4);
  }
  v37 = 0LL;
  if ( *((_QWORD *)v10 + 391) )
  {
    v37 = v10;
    _InterlockedIncrement64((volatile signed __int64 *)v10 + 3);
    v38 = -1LL;
    v9 = v40;
    goto LABEL_14;
  }
  v26 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v37);
  PairingAdapters = DxgkpGetPairingAdapters(v10, 0, v26, &v38, 0LL, 0LL, 0);
  if ( PairingAdapters >= 0 )
  {
    v3 = v41;
LABEL_14:
    v12 = *((_QWORD *)v37 + 391);
    v41 = v12;
    if ( *((_BYTE *)v37 + 209) )
    {
      v22 = (struct DXGADAPTER *)((char *)v37 + 4664);
      if ( v9 )
        v23 = *((_DWORD *)v9 + 7);
      else
        v23 = *((_DWORD *)v37 + 1188);
      HostProcess = DXGPROCESS::GetHostProcess(Current);
      v13 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReserveGpuVirtualAddress(v22, HostProcess, v23, v7);
LABEL_19:
      if ( v13 >= 0 && v32 == 1 )
      {
        v14 = (void *)(v3 + 56);
        if ( v3 + 56 >= MmUserProbeAddress )
          v14 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v14, &v7->VirtualAddress, 8uLL);
        v15 = (void *)(v3 + 64);
        if ( v3 + 64 >= MmUserProbeAddress )
          v15 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v15, &v7->PagingFenceValue, 8uLL);
      }
      goto LABEL_26;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v45, v37, 0LL);
    v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v45, 0LL);
    if ( v13 < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
LABEL_26:
      if ( v37 )
        DXGADAPTER::ReleaseReference(v37);
      v37 = 0LL;
      if ( v42[0] )
        DXGADAPTER::ReleaseReference(v42[0]);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v36);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
      if ( v35 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v33);
      }
      return (unsigned int)v13;
    }
    if ( v7->Reserved0 == 1 )
    {
      if ( v11 )
        goto LABEL_18;
      WdLogSingleEntry1(3LL, -1073741811LL);
      WdLogGlobalForLineNumber = 13408;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
      if ( v37 )
        DXGADAPTER::ReleaseReference(v37);
      v37 = 0LL;
      if ( v42[0] )
        DXGADAPTER::ReleaseReference(v42[0]);
    }
    else
    {
      if ( v7->Reserved0 <= 1 )
      {
LABEL_18:
        v13 = (*(__int64 (__fastcall **)(_QWORD, struct DXGPROCESS *, __int64, struct D3DDDI_RESERVEGPUVIRTUALADDRESS *))(*(_QWORD *)(*(_QWORD *)(v12 + 760) + 8LL) + 736LL))(
                *(_QWORD *)(v12 + 768),
                Current,
                v11,
                v7);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
        goto LABEL_19;
      }
      WdLogSingleEntry1(3LL, -1073741811LL);
      WdLogGlobalForLineNumber = 13402;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v37, 0LL);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v42, v31);
    }
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    v21 = v35 == 0;
    goto LABEL_41;
  }
  WdLogSingleEntry1(3LL, v10);
  WdLogGlobalForLineNumber = 13375;
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v37, 0LL);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v42, v28);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v36);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v33);
  return (unsigned int)PairingAdapters;
}
