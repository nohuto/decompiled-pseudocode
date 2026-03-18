/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport2 @ 0x1401B9F90
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
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1401B6E18 (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport2(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v5; // r15
  unsigned int v6; // esi
  bool v7; // si
  const void *v8; // rdx
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  unsigned int v11; // ecx
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
  ULONG64 v29; // rsi
  void *v30; // rcx
  void *v31; // rcx
  __int64 CurrentProcess; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // [rsp+30h] [rbp-168h]
  int v37; // [rsp+50h] [rbp-148h] BYREF
  __int64 v38; // [rsp+58h] [rbp-140h]
  char v39; // [rsp+60h] [rbp-138h]
  int v40; // [rsp+68h] [rbp-130h] BYREF
  D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v41; // [rsp+6Ch] [rbp-12Ch] BYREF
  size_t Size; // [rsp+70h] [rbp-128h] BYREF
  unsigned int v43; // [rsp+78h] [rbp-120h]
  unsigned int v44[4]; // [rsp+80h] [rbp-118h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-108h]
  struct DXGDEVICE *v46[2]; // [rsp+A0h] [rbp-F8h] BYREF
  ULONG64 v47; // [rsp+B0h] [rbp-E8h]
  _BYTE v48[24]; // [rsp+B8h] [rbp-E0h] BYREF
  _BYTE v49[160]; // [rsp+D0h] [rbp-C8h] BYREF

  v47 = a1;
  v37 = -1;
  v38 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2093);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 2093);
  Current = DXGPROCESS::GetCurrent();
  v5 = Current;
  if ( !Current )
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 9510;
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
LABEL_40:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit, v35, v37);
    }
    return v6;
  }
  v7 = (*((_DWORD *)Current + 102) & 4) == 0;
  *(_OWORD *)v44 = 0LL;
  *(_OWORD *)Src = 0LL;
  v8 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v44, v8, 0x20uLL);
  if ( v44[2] - 1 > 6 )
  {
    CurrentProcess = PsGetCurrentProcess(v44[2]);
    v6 = -1073741811;
    WdLogSingleEntry3(2LL, v44[2], -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 9547;
    v36 = PsGetCurrentProcess(v33);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"CheckMultiPlaneOverlaySupport2 multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v44[2],
      -1073741811LL,
      v36,
      0LL,
      0LL);
    goto LABEL_40;
  }
  v10 = (unsigned __int64)v44[2] << 7;
  v11 = -1;
  if ( v10 <= 0xFFFFFFFF )
    v11 = v44[2] << 7;
  LODWORD(Size) = v11;
  v12 = v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v43 = v12;
  if ( v10 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 9555;
LABEL_14:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v37);
    return v12;
  }
  v16 = (unsigned __int64)v44[2] << 7;
  if ( !is_mul_ok(v44[2], 0x80uLL) )
    v16 = -1LL;
  v18 = (struct DXGDEVICE *)operator new[](v16, 0x4B677844u, 256LL, v9);
  v46[1] = v18;
  if ( !v18 )
  {
    v19 = PsGetCurrentProcess(v17);
    v6 = -1073741801;
    WdLogSingleEntry2(3LL, -1073741801LL, v19);
    WdLogGlobalForLineNumber = 9568;
    goto LABEL_40;
  }
  v20 = (unsigned int)Size;
  v21 = Src[0];
  v22 = (char *)Src[0] + (unsigned int)Size;
  if ( v22 < Src[0] || (unsigned __int64)v22 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v18, v21, v20);
  Src[0] = v18;
  v46[0] = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&Size, v44[1], v5, v46);
  v23 = (ADAPTER_RENDER **)v46[0];
  if ( !v46[0] )
  {
    v6 = -1073741811;
    WdLogSingleEntry2(2LL, v44[1], -1073741811LL);
    WdLogGlobalForLineNumber = 9597;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v44[1],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&Size);
    goto LABEL_40;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48, v46[0]);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v49, (__int64)v23, 2, v24, 0);
  v25 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v49, 0LL);
  v26 = v25;
  if ( v25 >= 0 )
  {
    v40 = 0;
    v41.0 = 0;
    if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport2(
                v23,
                v44[2],
                (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *)Src[0],
                v7,
                &v40,
                &v41) >= 0 )
    {
      v29 = v47;
      v30 = (void *)(v47 + 24);
      if ( v47 + 24 >= MmUserProbeAddress )
        v30 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v30, &v40, 4uLL);
      v31 = (void *)(v29 + 28);
      if ( v29 + 28 >= MmUserProbeAddress )
        v31 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v31, &v41, 4uLL);
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&Size);
    goto LABEL_14;
  }
  WdLogSingleEntry2(3LL, v23, v25);
  WdLogGlobalForLineNumber = 9614;
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&Size);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v37);
  return v26;
}
