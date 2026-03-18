/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport2 @ 0x1401BC920
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
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1401B93C8 (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport2(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v5; // r15
  unsigned int v6; // esi
  bool v7; // si
  const void *v8; // rdx
  unsigned __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // r13d
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  struct DXGDEVICE *v17; // r14
  __int64 v18; // rax
  size_t v19; // r8
  const void *v20; // rdx
  char *v21; // rcx
  ADAPTER_RENDER **v22; // r15
  __int64 v23; // r9
  int v24; // eax
  unsigned int v25; // r12d
  __int64 v26; // rcx
  __int64 v27; // r8
  ULONG64 v28; // rsi
  void *v29; // rcx
  void *v30; // rcx
  __int64 CurrentProcess; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // [rsp+30h] [rbp-168h]
  int v36; // [rsp+50h] [rbp-148h] BYREF
  __int64 v37; // [rsp+58h] [rbp-140h]
  char v38; // [rsp+60h] [rbp-138h]
  int v39; // [rsp+68h] [rbp-130h] BYREF
  D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v40; // [rsp+6Ch] [rbp-12Ch] BYREF
  size_t Size; // [rsp+70h] [rbp-128h] BYREF
  unsigned int v42; // [rsp+78h] [rbp-120h]
  unsigned int v43[4]; // [rsp+80h] [rbp-118h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-108h]
  struct DXGDEVICE *v45[2]; // [rsp+A0h] [rbp-F8h] BYREF
  ULONG64 v46; // [rsp+B0h] [rbp-E8h]
  _BYTE v47[24]; // [rsp+B8h] [rbp-E0h] BYREF
  _BYTE v48[160]; // [rsp+D0h] [rbp-C8h] BYREF

  v46 = a1;
  v36 = -1;
  v37 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v38 = 1;
    v36 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2093);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 2093);
  Current = DXGPROCESS::GetCurrent();
  v5 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 9776;
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
LABEL_40:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit, v34, v36);
    }
    return v6;
  }
  v7 = (*((_DWORD *)Current + 102) & 4) == 0;
  *(_OWORD *)v43 = 0LL;
  *(_OWORD *)Src = 0LL;
  v8 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v43, v8, 0x20uLL);
  if ( v43[2] - 1 > 6 )
  {
    CurrentProcess = PsGetCurrentProcess(v43[2]);
    v6 = -1073741811;
    WdLogSingleEntry3(2LL, v43[2], -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 9813;
    v35 = PsGetCurrentProcess(v32);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"CheckMultiPlaneOverlaySupport2 multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v43[2],
      -1073741811LL,
      v35,
      0LL,
      0LL);
    goto LABEL_40;
  }
  v9 = (unsigned __int64)v43[2] << 7;
  v10 = -1;
  if ( v9 <= 0xFFFFFFFF )
    v10 = v43[2] << 7;
  LODWORD(Size) = v10;
  v11 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v42 = v11;
  if ( v9 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 9821;
LABEL_14:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v36);
    return v11;
  }
  v15 = (unsigned __int64)v43[2] << 7;
  if ( !is_mul_ok(v43[2], 0x80uLL) )
    v15 = -1LL;
  v17 = (struct DXGDEVICE *)operator new[](v15, 0x4B677844u, 256LL);
  v45[1] = v17;
  if ( !v17 )
  {
    v18 = PsGetCurrentProcess(v16);
    v6 = -1073741801;
    WdLogSingleEntry2(3LL, -1073741801LL, v18);
    WdLogGlobalForLineNumber = 9834;
    goto LABEL_40;
  }
  v19 = (unsigned int)Size;
  v20 = Src[0];
  v21 = (char *)Src[0] + (unsigned int)Size;
  if ( v21 < Src[0] || (unsigned __int64)v21 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v17, v20, v19);
  Src[0] = v17;
  v45[0] = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&Size, v43[1], v5, v45);
  v22 = (ADAPTER_RENDER **)v45[0];
  if ( !v45[0] )
  {
    v6 = -1073741811;
    WdLogSingleEntry2(2LL, v43[1], -1073741811LL);
    WdLogGlobalForLineNumber = 9863;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v43[1],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&Size);
    goto LABEL_40;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47, v45[0]);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, (__int64)v22, 2, v23, 0);
  v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v48, 0LL);
  v25 = v24;
  if ( v24 >= 0 )
  {
    v39 = 0;
    v40.0 = 0;
    if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport2(
                v22,
                v43[2],
                (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *)Src[0],
                v7,
                &v39,
                &v40) >= 0 )
    {
      v28 = v46;
      v29 = (void *)(v46 + 24);
      if ( v46 + 24 >= MmUserProbeAddress )
        v29 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v29, &v39, 4uLL);
      v30 = (void *)(v28 + 28);
      if ( v28 + 28 >= MmUserProbeAddress )
        v30 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v30, &v40, 4uLL);
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&Size);
    goto LABEL_14;
  }
  WdLogSingleEntry2(3LL, v22, v24);
  WdLogGlobalForLineNumber = 9880;
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&Size);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v36);
  return v25;
}
