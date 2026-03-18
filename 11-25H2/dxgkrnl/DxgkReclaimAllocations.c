/*
 * XREFs of DxgkReclaimAllocations @ 0x14039B740
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140015280 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002D660 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x140296D80 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkReclaimAllocations(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rdi
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  char CurrentThreadPreviousMode; // al
  bool v7; // r14
  DXGDEVICE *v8; // rsi
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // r9
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // r8
  int v16; // [rsp+50h] [rbp-158h] BYREF
  __int64 v17; // [rsp+58h] [rbp-150h]
  char v18; // [rsp+60h] [rbp-148h]
  struct DXGDEVICE *v19; // [rsp+68h] [rbp-140h] BYREF
  struct DXGDEVICE *v20; // [rsp+70h] [rbp-138h] BYREF
  unsigned int v21[4]; // [rsp+78h] [rbp-130h] BYREF
  __int128 v22; // [rsp+88h] [rbp-120h]
  __int64 v23; // [rsp+98h] [rbp-110h]
  _BYTE v24[16]; // [rsp+A0h] [rbp-108h] BYREF
  struct _D3DKMT_RECLAIMALLOCATIONS2 v25; // [rsp+B0h] [rbp-F8h] BYREF
  _BYTE v26[160]; // [rsp+E0h] [rbp-C8h] BYREF

  v3 = (_OWORD *)a1;
  v16 = -1;
  v17 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2071;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2071);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 2071);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    v12 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 12267;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
  *(_OWORD *)v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( CurrentThreadPreviousMode == 1 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_OWORD *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v21, v3, 0x28uLL);
  }
  else
  {
    *(_OWORD *)v21 = *v3;
    v22 = v3[1];
    v23 = *((_QWORD *)v3 + 4);
  }
  v25.hPagingQueue = 0;
  v25.NumAllocations = v23;
  v25.pResources = *(D3DKMT_HANDLE **)&v21[2];
  *(_OWORD *)&v25.HandleList = v22;
  v25.PagingFenceValue = 0LL;
  v20 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v19, v21[0], Current, &v20);
  v8 = v20;
  if ( !v20 )
  {
    v12 = -1073741811;
    WdLogSingleEntry2(2LL, v21[0], -1073741811LL);
    WdLogGlobalForLineNumber = 12308;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v21[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( !v19 )
      goto LABEL_13;
    goto LABEL_11;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v24,
    v20);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, (__int64)v8, 0, v9, 0);
  v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v26, 0LL);
  v12 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry2(3LL, v8, v10);
    WdLogGlobalForLineNumber = 12320;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v26);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v24);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v19);
    goto LABEL_13;
  }
  LOBYTE(v11) = v7;
  v12 = DXGDEVICE::ReclaimAllocations(v8, 0LL, &v25, v11);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v26);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v24);
  if ( v19 )
  {
LABEL_11:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v19 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v19 + 2), v19);
  }
LABEL_13:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v16);
  return v12;
}
