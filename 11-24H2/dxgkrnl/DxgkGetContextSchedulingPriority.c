/*
 * XREFs of DxgkGetContextSchedulingPriority @ 0x1404009D0
 * Callers:
 *     ?VmBusGetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140223670 (-VmBusGetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140031428 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x140034E08 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?VmBusSendGetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAHE@Z @ 0x14022B558 (-VmBusSendGetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetContextSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r15
  char CurrentThreadPreviousMode; // r14
  const void *v7; // rdx
  struct DXGCONTEXT *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // r9
  int v13; // r12d
  __int64 v14; // rcx
  __int64 v15; // r8
  int ContextSchedulingPriority; // eax
  unsigned int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 Src; // [rsp+50h] [rbp-118h] BYREF
  int v23; // [rsp+58h] [rbp-110h] BYREF
  __int64 v24; // [rsp+60h] [rbp-108h]
  char v25; // [rsp+68h] [rbp-100h]
  struct DXGCONTEXT *v26; // [rsp+70h] [rbp-F8h] BYREF
  _BYTE v27[16]; // [rsp+78h] [rbp-F0h] BYREF
  _BYTE v28[24]; // [rsp+88h] [rbp-E0h] BYREF
  _BYTE v29[160]; // [rsp+A0h] [rbp-C8h] BYREF

  v3 = (__int64 *)a1;
  v23 = -1;
  v24 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2030;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2030);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2030);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 5025;
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
LABEL_14:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v23);
    }
    return 3221225485LL;
  }
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  Src = 0LL;
  if ( CurrentThreadPreviousMode == 1 )
  {
    v7 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v7 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&Src, v7, 8uLL);
  }
  else
  {
    Src = *v3;
  }
  v26 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27, Src, Current, &v26, 0, 1);
  v8 = v26;
  if ( !v26 )
  {
    WdLogSingleEntry2(3LL, (unsigned int)Src, -1073741811LL);
    WdLogGlobalForLineNumber = 5058;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27);
    goto LABEL_14;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
    (DXGDEVICEACCESSLOCKSHARED *)v28,
    *((struct DXGDEVICE **)v26 + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v29, *((_QWORD *)v8 + 2), 0, v12, 0);
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v29, 0LL);
  if ( v13 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v29);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v28);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v23);
    return (unsigned int)v13;
  }
  if ( *((_BYTE *)v8 + 434) )
  {
    ContextSchedulingPriority = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetContextSchedulingPriority(
                                  (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL)
                                                                           + 16LL)
                                                               + 4664LL),
                                  (struct DXGPROCESS *)Current,
                                  v8,
                                  (int *)&Src + 1,
                                  0);
    v17 = ContextSchedulingPriority;
    if ( ContextSchedulingPriority < 0 )
    {
      WdLogSingleEntry1(3LL, ContextSchedulingPriority);
      WdLogGlobalForLineNumber = 5080;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v29);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v28);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
      if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v23);
      return v17;
    }
  }
  else
  {
    HIDWORD(Src) = *((_DWORD *)v8 + 105);
  }
  if ( CurrentThreadPreviousMode == 1 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int64 *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v3, &Src, 8uLL);
  }
  else
  {
    *v3 = Src;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v29);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v28);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v23);
  return 0LL;
}
