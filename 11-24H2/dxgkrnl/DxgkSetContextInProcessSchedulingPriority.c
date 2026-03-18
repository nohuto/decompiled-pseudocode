/*
 * XREFs of DxgkSetContextInProcessSchedulingPriority @ 0x1403C11E0
 * Callers:
 *     ?VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022FC70 (-VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@HE@Z @ 0x140185788 (-VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetInProcessSchedulingPriority@DXGCONTEXT@@QEAAJH@Z @ 0x1403C15B8 (-SetInProcessSchedulingPriority@DXGCONTEXT@@QEAAJH@Z.c)
 */

__int64 __fastcall DxgkSetContextInProcessSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rdi
  char CurrentThreadPreviousMode; // al
  __int64 v7; // rdx
  __int64 *v8; // rbx
  __int64 v9; // r9
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-F0h]
  char v21; // [rsp+60h] [rbp-E8h]
  unsigned int v22[2]; // [rsp+68h] [rbp-E0h] BYREF
  DXGCONTEXT *v23[2]; // [rsp+70h] [rbp-D8h] BYREF
  _BYTE v24[16]; // [rsp+80h] [rbp-C8h] BYREF
  _BYTE v25[160]; // [rsp+90h] [rbp-B8h] BYREF

  v3 = (__int64 *)a1;
  v19 = -1;
  v20 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2084;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2084);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 2084);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 5133;
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
    goto LABEL_28;
  }
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  *(_QWORD *)v22 = 0LL;
  if ( CurrentThreadPreviousMode == 1 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int64 *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v22, v3, 8uLL);
    v7 = *(_QWORD *)v22;
  }
  else
  {
    v7 = *v3;
    *(_QWORD *)v22 = *v3;
  }
  if ( HIDWORD(v7) > 1 )
  {
    WdLogSingleEntry1(3LL, SHIDWORD(v7));
    WdLogGlobalForLineNumber = 5166;
    goto LABEL_28;
  }
  v23[0] = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v24, v7, Current, v23, 0, 1);
  v8 = (__int64 *)v23[0];
  if ( !v23[0] )
  {
    WdLogSingleEntry2(3LL, v22[0], -1073741811LL);
    WdLogGlobalForLineNumber = 5177;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v24);
LABEL_28:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v19);
    return 3221225485LL;
  }
  if ( *((_BYTE *)v23[0] + 434) )
  {
    v14 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetContextSchedulingPriority(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v23[0] + 2) + 16LL) + 16LL) + 4664LL),
            (struct DXGPROCESS *)Current,
            v23[0],
            v22[1],
            1u);
  }
  else
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v23,
      *((struct DXGDEVICE **)v23[0] + 2));
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v25, v8[2], 0, v9, 0);
    v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v25, 0LL);
    if ( v10 < 0 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v25);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v23);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v24);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
      if ( v21 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v19);
      }
      return (unsigned int)v10;
    }
    v14 = DXGCONTEXT::SetInProcessSchedulingPriority((DXGCONTEXT *)v8, v22[1]);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v25);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v23);
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v24);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v19);
  return v14;
}
