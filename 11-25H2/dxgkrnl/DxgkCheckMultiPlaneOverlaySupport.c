/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport @ 0x1401B98D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1401B6FD4 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v5; // r15
  unsigned int v6; // esi
  bool v7; // si
  const void *v8; // rdx
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  int v11; // ecx
  unsigned int v12; // r13d
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  struct DXGDEVICE *v18; // r14
  __int64 v19; // rax
  size_t v20; // r8
  const void *v21; // rdx
  char *v22; // rcx
  ADAPTER_RENDER **v23; // r15
  __int64 v24; // r9
  int v25; // eax
  unsigned int v26; // r12d
  __int64 v27; // rcx
  __int64 v28; // r8
  void *v29; // rcx
  __int64 CurrentProcess; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // [rsp+30h] [rbp-158h]
  int v35; // [rsp+50h] [rbp-138h] BYREF
  __int64 v36; // [rsp+58h] [rbp-130h]
  char v37; // [rsp+60h] [rbp-128h]
  int v38; // [rsp+68h] [rbp-120h] BYREF
  size_t Size; // [rsp+70h] [rbp-118h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-110h] BYREF
  __int64 v41; // [rsp+88h] [rbp-100h]
  unsigned int v42; // [rsp+90h] [rbp-F8h]
  struct DXGDEVICE *v43[2]; // [rsp+98h] [rbp-F0h] BYREF
  ULONG64 v44; // [rsp+A8h] [rbp-E0h]
  _BYTE v45[16]; // [rsp+B0h] [rbp-D8h] BYREF
  _BYTE v46[160]; // [rsp+C0h] [rbp-C8h] BYREF

  v44 = a1;
  v35 = -1;
  v36 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2093);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 2093);
  Current = DXGPROCESS::GetCurrent();
  v5 = Current;
  if ( !Current )
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 7561;
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
LABEL_38:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( v37 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v35);
    }
    return v6;
  }
  v7 = (*((_DWORD *)Current + 102) & 4) == 0;
  *(_OWORD *)Src = 0LL;
  v41 = 0LL;
  v8 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Src, v8, 0x18uLL);
  if ( (unsigned int)(HIDWORD(Src[0]) - 1) > 6 )
  {
    CurrentProcess = PsGetCurrentProcess(HIDWORD(Src[0]));
    v6 = -1073741811;
    WdLogSingleEntry3(2LL, HIDWORD(Src[0]), -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 7598;
    v34 = PsGetCurrentProcess(v31);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"CheckMultiPlaneOverlaySupport multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      HIDWORD(Src[0]),
      -1073741811LL,
      v34,
      0LL,
      0LL);
    goto LABEL_38;
  }
  v10 = 120LL * HIDWORD(Src[0]);
  v11 = -1;
  if ( v10 <= 0xFFFFFFFF )
    v11 = 120 * HIDWORD(Src[0]);
  LODWORD(Size) = v11;
  v12 = v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v42 = v12;
  if ( v10 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 7606;
LABEL_14:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v35);
    return v12;
  }
  v16 = 120LL * HIDWORD(Src[0]);
  if ( !is_mul_ok(HIDWORD(Src[0]), 0x78uLL) )
    v16 = -1LL;
  v18 = (struct DXGDEVICE *)operator new[](v16, 0x4B677844u, 256LL, v9);
  v43[1] = v18;
  if ( !v18 )
  {
    v19 = PsGetCurrentProcess(v17);
    v6 = -1073741801;
    WdLogSingleEntry2(3LL, -1073741801LL, v19);
    WdLogGlobalForLineNumber = 7619;
    goto LABEL_38;
  }
  v20 = (unsigned int)Size;
  v21 = Src[1];
  v22 = (char *)Src[1] + (unsigned int)Size;
  if ( v22 < Src[1] || (unsigned __int64)v22 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v18, v21, v20);
  Src[1] = v18;
  v43[0] = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&Size, (unsigned int)Src[0], v5, v43);
  v23 = (ADAPTER_RENDER **)v43[0];
  if ( !v43[0] )
  {
    v6 = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 7648;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      LODWORD(Src[0]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&Size);
    goto LABEL_38;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45, v43[0]);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v46, (__int64)v23, 2, v24, 0);
  v25 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v46, 0LL);
  v26 = v25;
  if ( v25 >= 0 )
  {
    v38 = 0;
    if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport(
                v23,
                HIDWORD(Src[0]),
                (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *)Src[1],
                v7,
                &v38) >= 0 )
    {
      v29 = (void *)(v44 + 16);
      if ( v44 + 16 >= MmUserProbeAddress )
        v29 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v29, &v38, 4uLL);
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v46);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&Size);
    goto LABEL_14;
  }
  WdLogSingleEntry2(3LL, v23, v25);
  WdLogGlobalForLineNumber = 7665;
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v46);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&Size);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v35);
  return v26;
}
