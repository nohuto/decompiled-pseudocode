/*
 * XREFs of DxgkCheckSinglePlaneForMultiPlaneOverlaySupport @ 0x1403CE770
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x14036F49C (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 */

__int64 __fastcall DxgkCheckSinglePlaneForMultiPlaneOverlaySupport(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rdi
  const void *v6; // rdx
  __int64 v7; // rcx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v8; // rcx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v9; // rcx
  __int64 v10; // rcx
  DXGDEVICE *v11; // rdi
  int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // r9
  int v17; // eax
  unsigned int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 CurrentProcess; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  int *v29; // [rsp+30h] [rbp-1E8h]
  int *v30; // [rsp+30h] [rbp-1E8h]
  int *v31; // [rsp+30h] [rbp-1E8h]
  int v32; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-1C0h]
  char v34; // [rsp+60h] [rbp-1B8h]
  int Src; // [rsp+68h] [rbp-1B0h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v36; // [rsp+6Ch] [rbp-1ACh] BYREF
  struct DXGDEVICE *v37; // [rsp+70h] [rbp-1A8h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v38; // [rsp+78h] [rbp-1A0h] BYREF
  struct DXGDEVICE *v39; // [rsp+80h] [rbp-198h] BYREF
  unsigned int v40[4]; // [rsp+88h] [rbp-190h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v41[2]; // [rsp+98h] [rbp-180h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v42[2]; // [rsp+A8h] [rbp-170h]
  __int128 v43; // [rsp+B8h] [rbp-160h] BYREF
  __int128 v44; // [rsp+C8h] [rbp-150h]
  _BYTE v45[24]; // [rsp+D8h] [rbp-140h] BYREF
  _OWORD v46[6]; // [rsp+F0h] [rbp-128h] BYREF
  _BYTE v47[160]; // [rsp+150h] [rbp-C8h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2093);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 2093);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    v12 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 10810;
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
LABEL_22:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v32);
    }
    return (unsigned int)v12;
  }
  *(_OWORD *)v40 = 0LL;
  *(_OWORD *)v41 = 0LL;
  *(_OWORD *)v42 = 0LL;
  v6 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v40, v6, 0x30uLL);
  if ( v40[2] != 1 )
  {
    CurrentProcess = PsGetCurrentProcess(v7);
    v12 = -1073741811;
    WdLogSingleEntry3(2LL, v40[2], -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 10836;
    v30 = (int *)PsGetCurrentProcess(v24);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"CheckSinglePlaneForMultiPlaneOverlaySupport plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v40[2],
      -1073741811LL,
      (__int64)v30,
      0LL,
      0LL);
    goto LABEL_22;
  }
  if ( LODWORD(v41[1]) )
  {
    v25 = PsGetCurrentProcess(v7);
    v12 = -1073741811;
    WdLogSingleEntry3(2LL, LODWORD(v41[1]), -1073741811LL, v25);
    WdLogGlobalForLineNumber = 10848;
    v31 = (int *)PsGetCurrentProcess(v26);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"CheckSinglePlaneForMultiPlaneOverlaySupport post composition count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      LODWORD(v41[1]),
      -1073741811LL,
      (__int64)v31,
      0LL,
      0LL);
    goto LABEL_22;
  }
  v38 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  memset(v46, 0, 0x58uLL);
  v8 = v41[0];
  if ( v41[0] + 1 < v41[0] || v41[0] + 1 > (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  v38 = *v8;
  v9 = v38;
  if ( &v38[1] < v38 || (unsigned __int64)&v38[1] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  v43 = *(_OWORD *)&v9->LayerIndex;
  v44 = *(_OWORD *)&v9->VidPnSourceId;
  v10 = *((_QWORD *)&v44 + 1);
  if ( (unsigned __int64)(*((_QWORD *)&v44 + 1) + 88LL) < *((_QWORD *)&v44 + 1)
    || *((_QWORD *)&v44 + 1) + 88LL > MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  v46[0] = *(_OWORD *)v10;
  v46[1] = *(_OWORD *)(v10 + 16);
  v46[2] = *(_OWORD *)(v10 + 32);
  v46[3] = *(_OWORD *)(v10 + 48);
  v46[4] = *(_OWORD *)(v10 + 64);
  *(_QWORD *)&v46[5] = *(_QWORD *)(v10 + 80);
  HIDWORD(v46[3]) = 0;
  *(_QWORD *)&v46[4] = 0LL;
  v41[0] = &v38;
  v38 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)&v43;
  *((_QWORD *)&v44 + 1) = v46;
  v42[0] = 0LL;
  if ( (v46[0] & 4) == 0 )
  {
    v21 = PsGetCurrentProcess(v10);
    v12 = -1073741811;
    WdLogSingleEntry3(2LL, LODWORD(v46[0]), -1073741811LL, v21);
    WdLogGlobalForLineNumber = 10900;
    v29 = (int *)PsGetCurrentProcess(v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"CheckSinglePlaneForMultiPlaneOverlaySupport plane flag value (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      LODWORD(v46[0]),
      -1073741811LL,
      (__int64)v29,
      0LL,
      0LL);
    goto LABEL_22;
  }
  v39 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v37, v40[1], Current, &v39);
  v11 = v39;
  if ( !v39 )
  {
    v12 = -1073741811;
    WdLogSingleEntry2(2LL, v40[1], -1073741811LL);
    WdLogGlobalForLineNumber = 10910;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v40[1],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    goto LABEL_22;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45, v39);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v47, (__int64)v11, 2, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v47, 0LL);
  v18 = v17;
  if ( v17 >= 0 )
  {
    Src = 0;
    v36.0 = 0;
    v12 = DXGDEVICE::CheckMultiPlaneOverlaySupport3(v11, v40[2], v41[0], (unsigned int)v41[1], v42[0], 0, &Src, &v36);
    if ( v12 >= 0 )
    {
      v27 = (void *)(a1 + 40);
      if ( a1 + 40 >= MmUserProbeAddress )
        v27 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v27, &Src, 4uLL);
      v28 = (void *)(a1 + 44);
      if ( a1 + 44 >= MmUserProbeAddress )
        v28 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v28, &v36, 4uLL);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v37);
    goto LABEL_22;
  }
  WdLogSingleEntry2(3LL, v11, v17);
  WdLogGlobalForLineNumber = 10925;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
  if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v32);
  return v18;
}
