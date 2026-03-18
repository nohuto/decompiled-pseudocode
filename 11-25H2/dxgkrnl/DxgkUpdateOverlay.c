/*
 * XREFs of DxgkUpdateOverlay @ 0x1401E49A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1400287A4 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1400766A0 (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1400766D4 (--1COREOVERLAYACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1400766F0 (-AcquireShared@COREOVERLAYACCESS@@QEAAJXZ.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x140076738 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z @ 0x1401E2F04 (-UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkUpdateOverlay(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rdi
  struct DXGPROCESS *Current; // rbx
  unsigned int updated; // ebx
  struct ADAPTER_RENDER **v6; // rdi
  D3DKMT_HANDLE hOverlay; // r9d
  D3DKMT_HANDLE v8; // eax
  __int64 v9; // rbx
  int v10; // edx
  struct DXGOVERLAY *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v15; // rdx
  int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  int v20; // [rsp+50h] [rbp-108h] BYREF
  __int64 v21; // [rsp+58h] [rbp-100h]
  char v22; // [rsp+60h] [rbp-F8h]
  _BYTE v23[8]; // [rsp+68h] [rbp-F0h] BYREF
  DXGDEVICE *v24; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v25[16]; // [rsp+78h] [rbp-E0h] BYREF
  _BYTE v26[16]; // [rsp+88h] [rbp-D0h] BYREF
  _BYTE v27[24]; // [rsp+98h] [rbp-C0h] BYREF
  _D3DKMT_UPDATEOVERLAY v28; // [rsp+B0h] [rbp-A8h] BYREF
  _BYTE v29[80]; // [rsp+F0h] [rbp-68h] BYREF

  v3 = (const void *)a1;
  v20 = -1;
  v21 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2023;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2023);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2023);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    updated = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 699;
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
LABEL_26:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v20);
    }
    return updated;
  }
  memset(&v28, 0, sizeof(v28));
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v28, v3, 0x40uLL);
  v24 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v23, v28.hDevice, Current, &v24);
  v6 = (struct ADAPTER_RENDER **)v24;
  if ( !v24 )
  {
    updated = -1073741811;
    WdLogSingleEntry2(2LL, v28.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 724;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v28.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_25:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v23);
    goto LABEL_26;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v25, v24);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v27, Current);
  hOverlay = v28.hOverlay;
  v8 = (v28.hOverlay >> 6) & 0xFFFFFF;
  if ( v8 >= *((_DWORD *)Current + 74) )
    goto LABEL_17;
  v9 = *((_QWORD *)Current + 35);
  if ( ((v28.hOverlay >> 25) & 0x60) != (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0x60) )
    goto LABEL_17;
  if ( (*(_DWORD *)(v9 + 16LL * v8 + 8) & 0x2000) != 0 )
    goto LABEL_17;
  v10 = *(_DWORD *)(v9 + 16LL * v8 + 8) & 0x1F;
  if ( !v10 )
    goto LABEL_17;
  if ( v10 != 6 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    hOverlay = v28.hOverlay;
LABEL_17:
    v11 = 0LL;
    goto LABEL_18;
  }
  v11 = *(struct DXGOVERLAY **)(v9 + 16LL * v8);
LABEL_18:
  if ( !v11 )
  {
    updated = -1073741811;
    WdLogSingleEntry2(3LL, hOverlay, -1073741811LL);
    WdLogGlobalForLineNumber = 748;
LABEL_23:
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v27);
LABEL_24:
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v25);
    goto LABEL_25;
  }
  if ( v6 != *((struct ADAPTER_RENDER ***)v11 + 2) )
  {
    updated = -1073741811;
    WdLogSingleEntry3(3LL, hOverlay, v28.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 758;
    goto LABEL_23;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v27);
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)v29, v11);
  v16 = COREOVERLAYACCESS::AcquireShared((COREOVERLAYACCESS *)v29);
  if ( v16 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v6) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 773;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDevice->IsSupportOverlay()", 773LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v26, v6[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
    updated = DXGOVERLAY::UpdateOverlay(v11, &v28);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v26);
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v29, v19);
    goto LABEL_24;
  }
  COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v29, v15);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v25);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v23);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v20);
  return (unsigned int)v16;
}
