/*
 * XREFs of DxgkCreateOverlay @ 0x1401E3350
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1400287A4 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x140076738 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1401B72BC (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  __int64 v15; // r9
  void *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  size_t PrivateDriverDataSize; // r9
  const void *v20; // rdx
  ULONG64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r9
  void *v24; // rcx
  int v25; // [rsp+50h] [rbp-168h] BYREF
  __int64 v26; // [rsp+58h] [rbp-160h]
  char v27; // [rsp+60h] [rbp-158h]
  _BYTE v28[8]; // [rsp+68h] [rbp-150h] BYREF
  DXGDEVICE *v29; // [rsp+70h] [rbp-148h] BYREF
  _BYTE v30[16]; // [rsp+78h] [rbp-140h] BYREF
  _BYTE v31[24]; // [rsp+88h] [rbp-130h] BYREF
  _D3DKMT_CREATEOVERLAY v32; // [rsp+A0h] [rbp-118h] BYREF
  _BYTE v33[160]; // [rsp+F0h] [rbp-C8h] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2022;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2022);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 2022);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 549;
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
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v25);
    }
    return (unsigned int)v5;
  }
  memset(&v32, 0, sizeof(v32));
  v6 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v32, v6, 0x48uLL);
  v29 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v28, v32.hDevice, Current, &v29);
  v7 = (struct ADAPTER_RENDER **)v29;
  if ( !v29 )
  {
    v5 = -1073741811;
    WdLogSingleEntry2(2LL, v32.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 574;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v32.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_11:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v28);
    goto LABEL_12;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30, v29);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, (__int64)v7, 0, v11, 0);
  v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v33, 0LL);
  if ( v12 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v28);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v25);
    return (unsigned int)v12;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 224LL))() )
  {
    v5 = -1073741790;
    WdLogSingleEntry1(4LL, -1073741790LL);
    WdLogGlobalForLineNumber = 594;
LABEL_23:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
    goto LABEL_11;
  }
  if ( !v32.OverlayInfo.PrivateDriverDataSize || !v32.OverlayInfo.pPrivateDriverData )
  {
    v32.OverlayInfo.PrivateDriverDataSize = 0;
    v32.OverlayInfo.pPrivateDriverData = 0LL;
LABEL_36:
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v7) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 638;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDevice->IsSupportOverlay()", 638LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v31, v7[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
    v5 = DXGDEVICE::CreateOverlay((DXGDEVICE *)v7, &v32, v22, v23);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v32.OverlayInfo.pPrivateDriverData);
    v32.OverlayInfo.pPrivateDriverData = 0LL;
    if ( v5 >= 0 )
    {
      v24 = (void *)(a1 + 64);
      if ( a1 + 64 >= MmUserProbeAddress )
        v24 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v24, &v32.hOverlay, 4uLL);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v31);
    goto LABEL_23;
  }
  v16 = (void *)operator new[](v32.OverlayInfo.PrivateDriverDataSize, 0x4B677844u, 256LL, v15);
  v32.OverlayInfo.pPrivateDriverData = v16;
  if ( v16 )
  {
    PrivateDriverDataSize = v32.OverlayInfo.PrivateDriverDataSize;
    v20 = *(const void **)(a1 + 48);
    v21 = (ULONG64)v20 + v32.OverlayInfo.PrivateDriverDataSize;
    if ( v21 < (unsigned __int64)v20 || v21 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v16, v20, PrivateDriverDataSize);
    goto LABEL_36;
  }
  WdLogSingleEntry3(3LL, v7, v32.OverlayInfo.PrivateDriverDataSize, -1073741801LL);
  WdLogGlobalForLineNumber = 611;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v28);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v25);
  return 3221225495LL;
}
