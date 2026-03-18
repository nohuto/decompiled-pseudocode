/*
 * XREFs of DxgkCreateOverlay @ 0x1401E8580
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
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
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x140028A34 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x140077178 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1401B986C (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateOverlay(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rsi
  int v5; // edi
  const void *v6; // rdx
  struct ADAPTER_RENDER **v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // r9
  int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // r8
  void *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  size_t PrivateDriverDataSize; // r9
  const void *v19; // rdx
  ULONG64 v20; // r8
  void *v21; // rcx
  int v22; // [rsp+50h] [rbp-168h] BYREF
  __int64 v23; // [rsp+58h] [rbp-160h]
  char v24; // [rsp+60h] [rbp-158h]
  _BYTE v25[8]; // [rsp+68h] [rbp-150h] BYREF
  DXGDEVICE *v26; // [rsp+70h] [rbp-148h] BYREF
  _BYTE v27[16]; // [rsp+78h] [rbp-140h] BYREF
  _BYTE v28[24]; // [rsp+88h] [rbp-130h] BYREF
  _D3DKMT_CREATEOVERLAY v29; // [rsp+A0h] [rbp-118h] BYREF
  _BYTE v30[160]; // [rsp+F0h] [rbp-C8h] BYREF

  v22 = -1;
  v23 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2022;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2022);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 2022);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 549;
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
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v22);
    }
    return (unsigned int)v5;
  }
  memset(&v29, 0, sizeof(v29));
  v6 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v29, v6, 0x48uLL);
  v26 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v25, v29.hDevice, (struct _KTHREAD **)Current, &v26);
  v7 = (struct ADAPTER_RENDER **)v26;
  if ( !v26 )
  {
    v5 = -1073741811;
    WdLogSingleEntry2(2LL, v29.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 574;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v29.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_11:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v25);
    goto LABEL_12;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27, v26);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)v7, 0, v11, 0);
  v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v30, 0LL);
  if ( v12 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v22);
    return (unsigned int)v12;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 224LL))() )
  {
    v5 = -1073741790;
    WdLogSingleEntry1(4LL, -1073741790LL);
    WdLogGlobalForLineNumber = 594;
LABEL_23:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
    goto LABEL_11;
  }
  if ( !v29.OverlayInfo.PrivateDriverDataSize || !v29.OverlayInfo.pPrivateDriverData )
  {
    v29.OverlayInfo.PrivateDriverDataSize = 0;
    v29.OverlayInfo.pPrivateDriverData = 0LL;
LABEL_36:
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v7) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 638;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pDevice->IsSupportOverlay()", 638LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v28, v7[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
    v5 = DXGDEVICE::CreateOverlay((DXGDEVICE *)v7, &v29);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v29.OverlayInfo.pPrivateDriverData);
    v29.OverlayInfo.pPrivateDriverData = 0LL;
    if ( v5 >= 0 )
    {
      v21 = (void *)(a1 + 64);
      if ( a1 + 64 >= MmUserProbeAddress )
        v21 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v21, &v29.hOverlay, 4uLL);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
    goto LABEL_23;
  }
  v15 = (void *)operator new[](v29.OverlayInfo.PrivateDriverDataSize, 0x4B677844u, 256LL);
  v29.OverlayInfo.pPrivateDriverData = v15;
  if ( v15 )
  {
    PrivateDriverDataSize = v29.OverlayInfo.PrivateDriverDataSize;
    v19 = *(const void **)(a1 + 48);
    v20 = (ULONG64)v19 + v29.OverlayInfo.PrivateDriverDataSize;
    if ( v20 < (unsigned __int64)v19 || v20 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v15, v19, PrivateDriverDataSize);
    goto LABEL_36;
  }
  WdLogSingleEntry3(3LL, v7, v29.OverlayInfo.PrivateDriverDataSize, -1073741801LL);
  WdLogGlobalForLineNumber = 611;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v25);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v22);
  return 3221225495LL;
}
