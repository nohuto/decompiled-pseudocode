/*
 * XREFs of DxgkSetDodIndirectSwapchain @ 0x1401ACEB0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14001BF28 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023190 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033D08 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x140196A30 (-DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1403F7524 (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 */

__int64 __fastcall DxgkSetDodIndirectSwapchain(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rsi
  struct DXGPROCESS *Current; // rdi
  struct DXGADAPTER *v5; // rdi
  unsigned __int64 v6; // rdx
  int v7; // esi
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  ADAPTER_DISPLAY *v15; // rcx
  int v16; // eax
  unsigned int v17; // edi
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // [rsp+50h] [rbp-108h] BYREF
  __int64 v24; // [rsp+58h] [rbp-100h]
  char v25; // [rsp+60h] [rbp-F8h]
  _BYTE v26[8]; // [rsp+68h] [rbp-F0h] BYREF
  struct DXGDEVICE *v27; // [rsp+70h] [rbp-E8h] BYREF
  DXGADAPTER *v28[2]; // [rsp+78h] [rbp-E0h] BYREF
  unsigned int v29[4]; // [rsp+88h] [rbp-D0h] BYREF
  void *v30[2]; // [rsp+98h] [rbp-C0h]
  struct DXGADAPTER *v31; // [rsp+A8h] [rbp-B0h] BYREF
  _BYTE v32[144]; // [rsp+B0h] [rbp-A8h] BYREF

  v3 = (const void *)a1;
  v23 = -1;
  v24 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2114;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2114);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2114);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 10118;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid process context", 10118LL, 0LL, 0LL, 0LL, 0LL);
LABEL_35:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v23);
    }
    return 3221225485LL;
  }
  *(_OWORD *)v29 = 0LL;
  *(_OWORD *)v30 = 0LL;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v29, v3, 0x20uLL);
  v27 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v26, v29[1], Current, &v27);
  if ( !v27 )
  {
    WdLogSingleEntry1(3LL, v29[1]);
    WdLogGlobalForLineNumber = 10141;
LABEL_34:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v26);
    goto LABEL_35;
  }
  v31 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v28, v29[0], Current, &v31, 1);
  v5 = v31;
  if ( !v31 )
  {
    WdLogSingleEntry1(3LL, v29[0]);
    WdLogGlobalForLineNumber = 10152;
LABEL_33:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v28, v6);
    goto LABEL_34;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, v31, 0LL);
  v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32, 0LL);
  if ( v7 >= 0 )
  {
    if ( *((_QWORD *)v5 + 391) || (*((_DWORD *)v5 + 111) & 0x100) == 0 )
    {
      WdLogSingleEntry1(3LL, v29[0]);
      WdLogGlobalForLineNumber = 10171;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
      goto LABEL_33;
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*((ADAPTER_DISPLAY **)v5 + 390), v27, v29[2]) )
    {
      v15 = (ADAPTER_DISPLAY *)*((_QWORD *)v5 + 390);
      if ( LODWORD(v30[1]) )
        v16 = ADAPTER_DISPLAY::DodTerminateIndirectOutput(v15, v29[2]);
      else
        v16 = ADAPTER_DISPLAY::DodSetIndirectSwapchain(v15, v29[2], v30[0]);
      v17 = v16;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v28, v18);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v26);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
      if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v23);
      return v17;
    }
    else
    {
      WdLogSingleEntry3(3LL, v27, v5, v29[2]);
      WdLogGlobalForLineNumber = 10177;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v28, v12);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v26);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
      if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v23);
      return 3221225506LL;
    }
  }
  else
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v28, v8);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v23);
    return (unsigned int)v7;
  }
}
