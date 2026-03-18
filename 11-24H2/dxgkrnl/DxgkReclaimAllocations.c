/*
 * XREFs of DxgkReclaimAllocations @ 0x1403937A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140012080 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002DDD0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x14029C930 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkReclaimAllocations(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rdi
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rsi
  char CurrentThreadPreviousMode; // al
  char v7; // r14
  DXGDEVICE *v8; // rsi
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // [rsp+50h] [rbp-158h] BYREF
  __int64 v16; // [rsp+58h] [rbp-150h]
  char v17; // [rsp+60h] [rbp-148h]
  struct DXGDEVICE *v18; // [rsp+68h] [rbp-140h] BYREF
  struct DXGDEVICE *v19; // [rsp+70h] [rbp-138h] BYREF
  unsigned int v20[4]; // [rsp+78h] [rbp-130h] BYREF
  __int128 v21; // [rsp+88h] [rbp-120h]
  __int64 v22; // [rsp+98h] [rbp-110h]
  _BYTE v23[16]; // [rsp+A0h] [rbp-108h] BYREF
  struct _D3DKMT_RECLAIMALLOCATIONS2 v24; // [rsp+B0h] [rbp-F8h] BYREF
  _BYTE v25[160]; // [rsp+E0h] [rbp-C8h] BYREF

  v3 = (_OWORD *)a1;
  v15 = -1;
  v16 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2071;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2071);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 2071);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    v11 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 12333;
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
    goto LABEL_13;
  }
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v7 = CurrentThreadPreviousMode == 1;
  *(_OWORD *)v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( CurrentThreadPreviousMode == 1 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_OWORD *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v20, v3, 0x28uLL);
  }
  else
  {
    *(_OWORD *)v20 = *v3;
    v21 = v3[1];
    v22 = *((_QWORD *)v3 + 4);
  }
  v24.hPagingQueue = 0;
  v24.NumAllocations = v22;
  v24.pResources = *(D3DKMT_HANDLE **)&v20[2];
  *(_OWORD *)&v24.HandleList = v21;
  v24.PagingFenceValue = 0LL;
  v19 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v18, v20[0], Current, &v19);
  v8 = v19;
  if ( !v19 )
  {
    v11 = -1073741811;
    WdLogSingleEntry2(2LL, v20[0], -1073741811LL);
    WdLogGlobalForLineNumber = 12374;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v20[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( !v18 )
      goto LABEL_13;
    goto LABEL_11;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v23,
    v19);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v25, (__int64)v8, 0, v9, 0);
  v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v25, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry2(3LL, v8, v10);
    WdLogGlobalForLineNumber = 12386;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v25);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v23);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v18);
    goto LABEL_13;
  }
  v11 = DXGDEVICE::ReclaimAllocations(v8, 0LL, &v24, v7);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v25);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v23);
  if ( v18 )
  {
LABEL_11:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v18 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v18 + 2), v18);
  }
LABEL_13:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v15);
  return v11;
}
