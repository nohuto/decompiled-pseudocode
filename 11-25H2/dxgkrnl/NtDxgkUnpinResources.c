/*
 * XREFs of NtDxgkUnpinResources @ 0x1402E0370
 * Callers:
 *     <none>
 * Callees:
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
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1402E0900 (-UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall NtDxgkUnpinResources(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rsi
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v6; // rdi
  bool v7; // r15
  DXGDEVICE *v8; // r14
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // edi
  unsigned int i; // esi
  unsigned int *v13; // r12
  __int64 v14; // r12
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGDEVICE *v21; // [rsp+50h] [rbp-128h] BYREF
  int v22; // [rsp+58h] [rbp-120h] BYREF
  __int64 v23; // [rsp+60h] [rbp-118h]
  char v24; // [rsp+68h] [rbp-110h]
  struct DXGDEVICE *v25; // [rsp+70h] [rbp-108h] BYREF
  int v26; // [rsp+78h] [rbp-100h]
  unsigned int v27[4]; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v28; // [rsp+90h] [rbp-E8h]
  _BYTE v29[24]; // [rsp+98h] [rbp-E0h] BYREF
  _BYTE v30[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v3 = (const void *)a1;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2080;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2080);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 2080);
  Current = DXGPROCESS::GetCurrent(v4);
  v6 = Current;
  if ( !Current )
  {
    v11 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6448;
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
    goto LABEL_21;
  }
  v7 = (*((_DWORD *)Current + 102) & 4) == 0;
  *(_OWORD *)v27 = 0LL;
  v28 = 0LL;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v27, v3, 0x18uLL);
  if ( !*(_QWORD *)&v27[2] || !v27[1] )
  {
    v11 = -1073741811;
    WdLogSingleEntry2(3LL, v27[0], -1073741811LL);
    WdLogGlobalForLineNumber = 6480;
    goto LABEL_21;
  }
  v25 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v21, v27[0], v6, &v25);
  v8 = v25;
  if ( !v25 )
  {
    v11 = -1073741811;
    WdLogSingleEntry2(2LL, v27[0], -1073741811LL);
    WdLogGlobalForLineNumber = 6491;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v27[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_26:
    if ( v21 )
    {
LABEL_19:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
    }
LABEL_21:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v22);
    }
    return v11;
  }
  if ( (*((_BYTE *)v25 + 1901) & 1) == 0 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29, v25);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)v8, 2, v9, 0);
    v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v30, 0LL);
    v11 = v10;
    if ( v10 >= 0 )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= v27[1] )
        {
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v21);
          goto LABEL_21;
        }
        v26 = 0;
        v13 = (unsigned int *)(*(_QWORD *)&v27[2] + 4LL * i);
        if ( v13 + 1 < v13 || (unsigned __int64)(v13 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v14 = *v13;
        v26 = v14;
        v15 = DXGDEVICE::UnpinResource(v8, v14, v7, (struct COREDEVICEACCESS *)v30);
        v11 = v15;
        if ( v15 < 0 )
          break;
      }
      WdLogSingleEntry2(3LL, v14, v15);
      WdLogGlobalForLineNumber = 6537;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
      if ( !v21 )
        goto LABEL_21;
      goto LABEL_19;
    }
    WdLogSingleEntry2(3LL, v8, v10);
    WdLogGlobalForLineNumber = 6512;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
    goto LABEL_26;
  }
  if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v22);
  return 0LL;
}
