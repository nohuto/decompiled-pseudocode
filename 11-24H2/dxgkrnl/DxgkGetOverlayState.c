/*
 * XREFs of DxgkGetOverlayState @ 0x1401E9630
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x140028A34 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140031428 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x140034E08 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1400770E0 (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x140077114 (--1COREOVERLAYACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x140077130 (-AcquireShared@COREOVERLAYACCESS@@QEAAJXZ.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x140077178 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z @ 0x1401E7A04 (-GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetOverlayState(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rbx
  int OverlayState; // ebx
  const void *v6; // rdx
  struct ADAPTER_RENDER **v7; // rdi
  __int64 hOverlay; // rdx
  D3DKMT_HANDLE v9; // eax
  __int64 v10; // rbx
  unsigned int v11; // ecx
  int v12; // ecx
  struct DXGOVERLAY *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v17; // rdx
  int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  void *v22; // rcx
  int v23; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-E0h]
  char v25; // [rsp+60h] [rbp-D8h]
  _BYTE v26[8]; // [rsp+68h] [rbp-D0h] BYREF
  DXGDEVICE *v27; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v28[16]; // [rsp+78h] [rbp-C0h] BYREF
  _BYTE v29[16]; // [rsp+88h] [rbp-B0h] BYREF
  _BYTE v30[24]; // [rsp+98h] [rbp-A0h] BYREF
  _D3DKMT_GETOVERLAYSTATE v31; // [rsp+B0h] [rbp-88h] BYREF
  _BYTE v32[80]; // [rsp+C0h] [rbp-78h] BYREF

  v23 = -1;
  v24 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2057;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2057);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2057);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    OverlayState = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1018;
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
LABEL_26:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v23);
    }
    return (unsigned int)OverlayState;
  }
  *(_QWORD *)&v31.hDevice = 0LL;
  *(_DWORD *)&v31.OverlayEnabled = 0;
  v6 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v31, v6, 0xCuLL);
  v27 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v26, v31.hDevice, (struct _KTHREAD **)Current, &v27);
  v7 = (struct ADAPTER_RENDER **)v27;
  if ( !v27 )
  {
    OverlayState = -1073741811;
    WdLogSingleEntry2(2LL, v31.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 1043;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v31.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_25:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v26);
    goto LABEL_26;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v28, v27);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v30, Current);
  hOverlay = v31.hOverlay;
  v9 = (v31.hOverlay >> 6) & 0xFFFFFF;
  if ( v9 >= *((_DWORD *)Current + 74) )
    goto LABEL_17;
  v10 = *((_QWORD *)Current + 35);
  v11 = *(_DWORD *)(v10 + 16LL * v9 + 8);
  if ( v31.hOverlay >> 30 != ((v11 >> 5) & 3) )
    goto LABEL_17;
  if ( (v11 & 0x2000) != 0 )
    goto LABEL_17;
  v12 = v11 & 0x1F;
  if ( !v12 )
    goto LABEL_17;
  if ( v12 != 6 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    hOverlay = v31.hOverlay;
LABEL_17:
    v13 = 0LL;
    goto LABEL_18;
  }
  v13 = *(struct DXGOVERLAY **)(v10 + 16LL * v9);
LABEL_18:
  if ( !v13 )
  {
    OverlayState = -1073741811;
    WdLogSingleEntry2(3LL, hOverlay, -1073741811LL);
    WdLogGlobalForLineNumber = 1067;
LABEL_23:
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v30);
LABEL_24:
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v28);
    goto LABEL_25;
  }
  if ( v7 != *((struct ADAPTER_RENDER ***)v13 + 2) )
  {
    OverlayState = -1073741811;
    WdLogSingleEntry3(3LL, hOverlay, v31.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 1077;
    goto LABEL_23;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v30);
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)v32, v13);
  v18 = COREOVERLAYACCESS::AcquireShared((COREOVERLAYACCESS *)v32);
  if ( v18 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v7) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1092;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pDevice->IsSupportOverlay()",
        1092LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v29, v7[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
    OverlayState = DXGOVERLAY::GetOverlayState(v13, &v31);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
    if ( OverlayState >= 0 )
    {
      v22 = (void *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v22 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v22, &v31.OverlayEnabled, 1uLL);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v32, v21);
    goto LABEL_24;
  }
  COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v32, v17);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v28);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v26);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v23);
  return (unsigned int)v18;
}
