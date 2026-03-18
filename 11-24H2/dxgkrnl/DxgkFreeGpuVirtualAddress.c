/*
 * XREFs of DxgkFreeGpuVirtualAddress @ 0x14039BD40
 * Callers:
 *     ?VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402232C0 (-VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x14004A410 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z @ 0x14022B108 (-VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkFreeGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  char CurrentThreadPreviousMode; // di
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r15
  unsigned int *v7; // rdi
  struct DXGADAPTER *v8; // rbx
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGADAPTER **v13; // rax
  int PairingAdapters; // esi
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  DXG_GUEST_VIRTUALGPU_VMBUS *v18; // r14
  unsigned __int64 v19; // rbx
  __int64 v20; // rdi
  int v21; // esi
  int HostProcess; // eax
  unsigned __int64 v23; // rdx
  int v24; // [rsp+50h] [rbp-118h] BYREF
  __int64 v25; // [rsp+58h] [rbp-110h]
  char v26; // [rsp+60h] [rbp-108h]
  struct DXGADAPTER *v27; // [rsp+68h] [rbp-100h] BYREF
  unsigned __int64 v28; // [rsp+70h] [rbp-F8h] BYREF
  struct DXGADAPTER *v29; // [rsp+78h] [rbp-F0h] BYREF
  DXGADAPTER *v30[2]; // [rsp+80h] [rbp-E8h] BYREF
  __int128 v31; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-C8h]
  _BYTE v33[144]; // [rsp+B0h] [rbp-B8h] BYREF

  v3 = (unsigned int *)a1;
  v24 = -1;
  v25 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2099;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2099);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 2099);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    v9 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 13473;
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
    goto LABEL_18;
  }
  v31 = 0LL;
  v32 = 0LL;
  if ( CurrentThreadPreviousMode == 1 )
  {
    v7 = (unsigned int *)&v31;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (unsigned int *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v31, v3, 0x18uLL);
  }
  else
  {
    v7 = v3;
  }
  v29 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v30, *v7, Current, &v29, 1);
  v8 = v29;
  if ( !v29 )
  {
    v9 = -1073741811;
    WdLogSingleEntry3(3LL, -1073741811LL, Current, *v7);
    WdLogGlobalForLineNumber = 13508;
LABEL_16:
    if ( v30[0] )
      DXGADAPTER::ReleaseReference(v30[0]);
    goto LABEL_18;
  }
  v27 = 0LL;
  if ( *((_QWORD *)v29 + 391) )
  {
    v27 = v29;
    _InterlockedIncrement64((volatile signed __int64 *)v29 + 3);
    v28 = -1LL;
LABEL_11:
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, v27, 0LL);
    v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v33, 0LL);
    if ( v9 >= 0 )
    {
      if ( !*((_BYTE *)v27 + 209) )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, struct _KTHREAD **, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v27 + 391) + 760LL)
                                                                                               + 8LL)
                                                                                   + 752LL))(
               *(_QWORD *)(*((_QWORD *)v27 + 391) + 768LL),
               Current,
               v7);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
        if ( v27 )
          DXGADAPTER::ReleaseReference(v27);
        v27 = 0LL;
        goto LABEL_16;
      }
      v18 = (struct DXGADAPTER *)((char *)v27 + 4664);
      v19 = *((_QWORD *)v7 + 2);
      v20 = *((_QWORD *)v7 + 1);
      v21 = *((_DWORD *)v27 + 1188);
      HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)Current);
      v9 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFreeGpuVirtualAddress(v18, HostProcess, v21, v20, v19);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v27, 0LL);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v30, v23);
LABEL_18:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v24);
    }
    return (unsigned int)v9;
  }
  v13 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v27);
  PairingAdapters = DxgkpGetPairingAdapters(v8, 0, v13, &v28, 0LL, 0LL, 0);
  if ( PairingAdapters >= 0 )
    goto LABEL_11;
  WdLogSingleEntry1(3LL, v8);
  WdLogGlobalForLineNumber = 13521;
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v27, 0LL);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v30, v15);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v24);
  return (unsigned int)PairingAdapters;
}
