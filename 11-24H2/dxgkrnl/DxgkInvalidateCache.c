/*
 * XREFs of DxgkInvalidateCache @ 0x1401B35A0
 * Callers:
 *     ?VmBusInvalidateCache@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140224350 (-VmBusInvalidateCache@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140012080 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140012E50 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002DDD0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?VidMmInvalidateCache@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAUVIDMM_MULTI_ALLOC@@_K4@Z @ 0x14006B9F8 (-VidMmInvalidateCache@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUVIDMM_MULTI_GLOBA.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?VmBusSendInvalidateCache@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@II_K1@Z @ 0x14022C450 (-VmBusSendInvalidateCache@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@II_K1@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkInvalidateCache(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rdi
  struct _KTHREAD **Current; // rsi
  struct DXGDEVICE *v5; // rdi
  __int64 v6; // r9
  int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGDEVICE *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // eax
  struct VIDMM_MULTI_ALLOC *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // [rsp+50h] [rbp-118h] BYREF
  __int64 v22; // [rsp+58h] [rbp-110h]
  char v23; // [rsp+60h] [rbp-108h]
  __int64 v24; // [rsp+68h] [rbp-100h] BYREF
  _BYTE v25[8]; // [rsp+70h] [rbp-F8h] BYREF
  _BYTE v26[16]; // [rsp+78h] [rbp-F0h] BYREF
  struct DXGDEVICE *v27; // [rsp+88h] [rbp-E0h] BYREF
  unsigned int v28[4]; // [rsp+90h] [rbp-D8h] BYREF
  unsigned __int64 v29; // [rsp+A0h] [rbp-C8h]
  _BYTE v30[160]; // [rsp+B0h] [rbp-B8h] BYREF

  v3 = (unsigned __int64 *)a1;
  v21 = -1;
  v22 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2122;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2122);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 2122);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 34;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid process context", 34LL, 0LL, 0LL, 0LL, 0LL);
LABEL_34:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v21);
    }
    return 3221225485LL;
  }
  *(_OWORD *)v28 = 0LL;
  v29 = 0LL;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (unsigned __int64 *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v28, v3, 0x18uLL);
  }
  else
  {
    *(_OWORD *)v28 = *(_OWORD *)v3;
    v29 = v3[2];
  }
  v27 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v25, v28[0], Current, &v27);
  v5 = v27;
  if ( !v27 )
  {
    WdLogSingleEntry1(2LL, v28[0]);
    WdLogGlobalForLineNumber = 66;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified",
      v28[0],
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_33:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v25);
    goto LABEL_34;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v26,
    v27);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)v5, 0, v6, 0);
  v7 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v30, 0LL);
  if ( v7 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v26);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v21);
    return (unsigned int)v7;
  }
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v24, v28[1]);
  if ( !v24 )
  {
    WdLogSingleEntry2(3LL, v5, v28[1]);
    WdLogGlobalForLineNumber = 87;
LABEL_32:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v24);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v26);
    goto LABEL_33;
  }
  v11 = *(struct DXGDEVICE **)(v24 + 8);
  if ( v11 != v5 )
  {
    WdLogSingleEntry2(2LL, v11, v5);
    WdLogGlobalForLineNumber = 96;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Mismatch between allocation device 0x%p and paging queue device 0x%p",
      *(_QWORD *)(v24 + 8),
      (__int64)v5,
      0LL,
      0LL,
      0LL);
    goto LABEL_32;
  }
  if ( (*((_BYTE *)v5 + 1917) & 1) != 0 )
  {
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 434) < 0x2Bu )
    {
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 105;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v24);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v26);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v25);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
      if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v21);
      return 3221225473LL;
    }
    v14 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendInvalidateCache(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL) + 4664LL),
            (struct DXGPROCESS *)Current,
            *((_DWORD *)v5 + 118),
            *(_DWORD *)(v24 + 20),
            v29,
            *(unsigned __int64 *)&v28[2]);
  }
  else
  {
    v15 = *(struct VIDMM_MULTI_ALLOC **)(v24 + 24);
    if ( !v15 )
    {
      WdLogSingleEntry3(3LL, v5, v28[1], v24);
      WdLogGlobalForLineNumber = 124;
      goto LABEL_32;
    }
    v14 = VIDMM_EXPORT::VidMmInvalidateCache(
            *(VIDMM_EXPORT **)(*((_QWORD *)v5 + 2) + 760LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)v5 + 2) + 768LL),
            (struct DXGPROCESS *)Current,
            0LL,
            v15,
            *(unsigned __int64 *)&v28[2],
            v29);
  }
  v18 = v14;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v24);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v26);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v25);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v21);
  return v18;
}
