/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport @ 0x1401BC260
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
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1401B9584 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v5; // r15
  unsigned int v6; // esi
  bool v7; // si
  const void *v8; // rdx
  unsigned __int64 v9; // rax
  int v10; // ecx
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
  void *v28; // rcx
  __int64 CurrentProcess; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // [rsp+30h] [rbp-158h]
  int v34; // [rsp+50h] [rbp-138h] BYREF
  __int64 v35; // [rsp+58h] [rbp-130h]
  char v36; // [rsp+60h] [rbp-128h]
  int v37; // [rsp+68h] [rbp-120h] BYREF
  size_t Size; // [rsp+70h] [rbp-118h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-110h] BYREF
  __int64 v40; // [rsp+88h] [rbp-100h]
  unsigned int v41; // [rsp+90h] [rbp-F8h]
  struct DXGDEVICE *v42[2]; // [rsp+98h] [rbp-F0h] BYREF
  ULONG64 v43; // [rsp+A8h] [rbp-E0h]
  _BYTE v44[16]; // [rsp+B0h] [rbp-D8h] BYREF
  _BYTE v45[160]; // [rsp+C0h] [rbp-C8h] BYREF

  v43 = a1;
  v34 = -1;
  v35 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v36 = 1;
    v34 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2093);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 2093);
  Current = DXGPROCESS::GetCurrent();
  v5 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 7800;
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
LABEL_38:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( v36 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit, v32, v34);
    }
    return v6;
  }
  v7 = (*((_DWORD *)Current + 102) & 4) == 0;
  *(_OWORD *)Src = 0LL;
  v40 = 0LL;
  v8 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Src, v8, 0x18uLL);
  if ( (unsigned int)(HIDWORD(Src[0]) - 1) > 6 )
  {
    CurrentProcess = PsGetCurrentProcess(HIDWORD(Src[0]));
    v6 = -1073741811;
    WdLogSingleEntry3(2LL, HIDWORD(Src[0]), -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 7837;
    v33 = PsGetCurrentProcess(v30);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"CheckMultiPlaneOverlaySupport multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      HIDWORD(Src[0]),
      -1073741811LL,
      v33,
      0LL,
      0LL);
    goto LABEL_38;
  }
  v9 = 120LL * HIDWORD(Src[0]);
  v10 = -1;
  if ( v9 <= 0xFFFFFFFF )
    v10 = 120 * HIDWORD(Src[0]);
  LODWORD(Size) = v10;
  v11 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v41 = v11;
  if ( v9 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 7845;
LABEL_14:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v34);
    return v11;
  }
  v15 = 120LL * HIDWORD(Src[0]);
  if ( !is_mul_ok(HIDWORD(Src[0]), 0x78uLL) )
    v15 = -1LL;
  v17 = (struct DXGDEVICE *)operator new[](v15, 0x4B677844u, 256LL);
  v42[1] = v17;
  if ( !v17 )
  {
    v18 = PsGetCurrentProcess(v16);
    v6 = -1073741801;
    WdLogSingleEntry2(3LL, -1073741801LL, v18);
    WdLogGlobalForLineNumber = 7858;
    goto LABEL_38;
  }
  v19 = (unsigned int)Size;
  v20 = Src[1];
  v21 = (char *)Src[1] + (unsigned int)Size;
  if ( v21 < Src[1] || (unsigned __int64)v21 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v17, v20, v19);
  Src[1] = v17;
  v42[0] = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&Size, (unsigned int)Src[0], v5, v42);
  v22 = (ADAPTER_RENDER **)v42[0];
  if ( !v42[0] )
  {
    v6 = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 7887;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      LODWORD(Src[0]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&Size);
    goto LABEL_38;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44, v42[0]);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, (__int64)v22, 2, v23, 0);
  v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v45, 0LL);
  v25 = v24;
  if ( v24 >= 0 )
  {
    v37 = 0;
    if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport(
                v22,
                HIDWORD(Src[0]),
                (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *)Src[1],
                v7,
                &v37) >= 0 )
    {
      v28 = (void *)(v43 + 16);
      if ( v43 + 16 >= MmUserProbeAddress )
        v28 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v28, &v37, 4uLL);
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&Size);
    goto LABEL_14;
  }
  WdLogSingleEntry2(3LL, v22, v24);
  WdLogGlobalForLineNumber = 7904;
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&Size);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v34);
  return v25;
}
