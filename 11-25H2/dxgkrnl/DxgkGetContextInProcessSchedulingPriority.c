/*
 * XREFs of DxgkGetContextInProcessSchedulingPriority @ 0x1401BA6B0
 * Callers:
 *     ?VmBusGetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021D210 (-VmBusGetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14001DE10 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140022F40 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140031508 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x140034ED4 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?VmBusSendGetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAHE@Z @ 0x140224C6C (-VmBusSendGetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetContextInProcessSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  struct DXGPROCESS *Current; // r14
  unsigned int v5; // edi
  char CurrentThreadPreviousMode; // r15
  const void *v7; // rdx
  struct DXGCONTEXT *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // r9
  int v13; // r12d
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  int ContextSchedulingPriority; // eax
  __int64 v18; // rax
  int v19; // eax
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
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2085;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2085);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2085);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 5087;
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
LABEL_15:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v23);
    }
    return v5;
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
    v5 = -1073741811;
    WdLogSingleEntry2(3LL, (unsigned int)Src, -1073741811LL);
    WdLogGlobalForLineNumber = 5121;
LABEL_14:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27);
    goto LABEL_15;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
    (DXGDEVICEACCESSLOCKSHARED *)v28,
    *((struct DXGDEVICE **)v26 + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v29, *((_QWORD *)v8 + 2), 0, v12, 0);
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v29, 0LL);
  if ( v13 >= 0 )
  {
    v16 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL);
    if ( *((_BYTE *)v8 + 434) )
    {
      ContextSchedulingPriority = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetContextSchedulingPriority(
                                    (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(v16 + 16) + 4664LL),
                                    Current,
                                    v8,
                                    (int *)&Src + 1,
                                    1u);
      v5 = ContextSchedulingPriority;
      if ( ContextSchedulingPriority < 0 )
      {
        WdLogSingleEntry1(3LL, ContextSchedulingPriority);
        WdLogGlobalForLineNumber = 5143;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v29);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v28);
        goto LABEL_14;
      }
    }
    else
    {
      v18 = *(_QWORD *)(*(_QWORD *)(v16 + 736) + 8LL);
      if ( (*((_DWORD *)v8 + 98) & 0x10) != 0 )
        v19 = (*(__int64 (__fastcall **)(_QWORD))(v18 + 376))(*((_QWORD *)v8 + 35));
      else
        v19 = (*(__int64 (__fastcall **)(_QWORD))(v18 + 368))(*((_QWORD *)v8 + 32));
      HIDWORD(Src) = v19;
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
  else
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v29);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v28);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v23);
    return (unsigned int)v13;
  }
}
