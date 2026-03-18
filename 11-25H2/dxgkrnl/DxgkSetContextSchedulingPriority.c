/*
 * XREFs of DxgkSetContextSchedulingPriority @ 0x1403E92A0
 * Callers:
 *     ?VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140229380 (-VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14001DE10 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140022F40 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetApiSchedulingPriority@DXGCONTEXT@@QEAAJH@Z @ 0x14006CBD8 (-SetApiSchedulingPriority@DXGCONTEXT@@QEAAJH@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@HE@Z @ 0x140183438 (-VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetContextSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  char CurrentThreadPreviousMode; // r14
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rsi
  unsigned int v7; // edi
  __int64 v8; // rdx
  DXGCONTEXT *v9; // rdi
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // r8
  char v15; // r15
  unsigned int v16; // esi
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  unsigned int v22; // r14d
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  unsigned int v26; // eax
  int v27; // [rsp+50h] [rbp-118h] BYREF
  __int64 v28; // [rsp+58h] [rbp-110h]
  char v29; // [rsp+60h] [rbp-108h]
  int v30[2]; // [rsp+68h] [rbp-100h] BYREF
  _BYTE v31[16]; // [rsp+70h] [rbp-F8h] BYREF
  DXGCONTEXT *v32; // [rsp+80h] [rbp-E8h] BYREF
  _BYTE v33[24]; // [rsp+88h] [rbp-E0h] BYREF
  _BYTE v34[160]; // [rsp+A0h] [rbp-C8h] BYREF

  v3 = (__int64 *)a1;
  v27 = -1;
  v28 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2029;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2029);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 2029);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  Current = DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    v7 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 4716;
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
LABEL_25:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v27);
    }
    return v7;
  }
  *(_QWORD *)v30 = 0LL;
  if ( CurrentThreadPreviousMode == 1 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int64 *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v30, v3, 8uLL);
    LODWORD(v8) = v30[0];
  }
  else
  {
    v8 = *v3;
    *(_QWORD *)v30 = *v3;
  }
  v32 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v31, v8, Current, &v32, 0, 1);
  v9 = v32;
  if ( !v32 )
  {
    v7 = -1073741811;
    WdLogSingleEntry2(3LL, (unsigned int)v30[0], -1073741811LL);
    WdLogGlobalForLineNumber = 4747;
LABEL_24:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v31);
    goto LABEL_25;
  }
  if ( *((_BYTE *)v32 + 434) )
  {
    v10 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetContextSchedulingPriority(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v32 + 2) + 16LL) + 16LL) + 4664LL),
            Current,
            v32,
            v30[1],
            0);
    v11 = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry1(3LL, v10);
      WdLogGlobalForLineNumber = 4758;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v31);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v27);
      return v11;
    }
  }
  v15 = 0;
  v16 = 0;
  if ( v30[1] >= 0 && (v30[1] & 0x40000000) != 0 )
  {
    if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL) + 16LL)) )
    {
      v7 = -1073741637;
      WdLogSingleEntry1(3LL, -1073741637LL);
      WdLogGlobalForLineNumber = 4787;
      goto LABEL_24;
    }
    if ( (v17 & 0x3FFFFFE0) != 0 )
    {
      v7 = -1073741811;
      WdLogSingleEntry1(3LL, -1073741811LL);
      WdLogGlobalForLineNumber = 4798;
      goto LABEL_24;
    }
    v16 = v17 & 0x1F;
    if ( v16 > 0x1E )
    {
      v7 = -1073741811;
      WdLogSingleEntry2(3LL, v17 & 0x1F, -1073741811LL);
      WdLogGlobalForLineNumber = 4811;
      goto LABEL_24;
    }
    v15 = 1;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v33,
    *((struct DXGDEVICE **)v9 + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v34, *((_QWORD *)v9 + 2), 0, v20, 0);
  v21 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v34, 0LL);
  v22 = v21;
  if ( v21 < 0 )
  {
    WdLogSingleEntry2(3LL, *((_QWORD *)v9 + 2), v21);
    WdLogGlobalForLineNumber = 4830;
    goto LABEL_36;
  }
  if ( v15 )
  {
    if ( *((_BYTE *)v9 + 434) )
      goto LABEL_36;
    v25 = *((_QWORD *)v9 + 2);
    if ( (*((_DWORD *)v9 + 98) & 0x10) != 0 )
      v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 16) + 736LL)
                                                                          + 8LL)
                                                              + 984LL))(
              *((_QWORD *)v9 + 35),
              v16,
              0LL);
    else
      v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 16) + 736LL)
                                                                          + 8LL)
                                                              + 976LL))(
              *((_QWORD *)v9 + 32),
              v16,
              0LL);
  }
  else
  {
    v26 = DXGCONTEXT::SetApiSchedulingPriority(v9, v30[1]);
  }
  v22 = v26;
LABEL_36:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v34);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v31);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v27);
  return v22;
}
