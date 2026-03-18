/*
 * XREFs of DxgkGetResourcePresentPrivateDriverData @ 0x1403A43C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x14001294C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x14001415C (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedBuffer@@PEAU_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA@@@Z @ 0x14004AA54 (-GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedB.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402A0560 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkGetResourcePresentPrivateDriverData(ULONG64 a1)
{
  char *v2; // rbx
  const void *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v8; // r14
  DXGRESOURCEREFERENCE *ResourceSafe; // rax
  struct _EX_RUNDOWN_REF *v10; // r15
  __int64 v11; // r9
  int v12; // eax
  unsigned int PresentPrivateDriverDataFromResource; // r14d
  KSPIN_LOCK *v14; // rcx
  void *v15; // r9
  size_t PrivateDriverDataSize; // r8
  PVOID pPrivateDriverData; // rcx
  char *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rbx
  int v23; // [rsp+50h] [rbp-128h] BYREF
  __int64 v24; // [rsp+58h] [rbp-120h]
  char v25; // [rsp+60h] [rbp-118h]
  struct DXGDEVICE *v26; // [rsp+68h] [rbp-110h] BYREF
  struct _EX_RUNDOWN_REF *v27; // [rsp+70h] [rbp-108h] BYREF
  struct _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA Src; // [rsp+78h] [rbp-100h] BYREF
  struct DXGDEVICE *v29; // [rsp+88h] [rbp-F0h] BYREF
  unsigned int v30; // [rsp+90h] [rbp-E8h]
  PVOID Entry; // [rsp+98h] [rbp-E0h] BYREF
  struct _EX_RUNDOWN_REF *v32[2]; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v33[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v2 = 0LL;
  Entry = 0LL;
  Src = 0LL;
  v3 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&Src, v3, 0x10uLL);
  v23 = -1;
  v24 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2123;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerEnter, v5, 2123);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2123);
  Current = DXGPROCESS::GetCurrent(v6);
  v8 = Current;
  if ( !Current )
  {
    PresentPrivateDriverDataFromResource = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 13968;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid DXG proces, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_26;
  }
  ResourceSafe = DXGPROCESS::GetResourceSafe((__int64)Current, (DXGRESOURCEREFERENCE *)v32, Src.hResource);
  v27 = *(struct _EX_RUNDOWN_REF **)ResourceSafe;
  v10 = v27;
  *(_QWORD *)ResourceSafe = 0LL;
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(v32);
  if ( v10 )
  {
    v30 = *(_DWORD *)(v10[1].Count + 468);
    v29 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v26, v30, v8, &v29);
    if ( v29 )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, (__int64)v29, 0, v11, 0);
      v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v33, 0LL);
      PresentPrivateDriverDataFromResource = v12;
      if ( v12 < 0 )
      {
        WdLogSingleEntry2(4LL, v12, v29);
        WdLogGlobalForLineNumber = 14003;
      }
      else
      {
        if ( (HIDWORD(v10->Ptr) & 1) != 0 )
        {
          v14 = *(KSPIN_LOCK **)(v10[7].Count + 176);
          if ( v14 )
          {
            PresentPrivateDriverDataFromResource = GetPresentPrivateDriverDataFromResource(
                                                     v14,
                                                     (KSPIN_LOCK *)&Entry,
                                                     &Src);
            v2 = (char *)Entry;
          }
          else
          {
            WdLogSingleEntry1(3LL, 0LL);
            WdLogGlobalForLineNumber = 14018;
            Src.PrivateDriverDataSize = 0;
          }
          v15 = (void *)(a1 + 4);
          if ( a1 + 4 >= MmUserProbeAddress )
            v15 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v15, &Src.PrivateDriverDataSize, 4uLL);
          if ( Src.PrivateDriverDataSize && v2 )
          {
            PrivateDriverDataSize = Src.PrivateDriverDataSize;
            pPrivateDriverData = Src.pPrivateDriverData;
            v18 = (char *)Src.pPrivateDriverData + Src.PrivateDriverDataSize;
            if ( v18 <= Src.pPrivateDriverData || (unsigned __int64)v18 > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(pPrivateDriverData, v2 + 16, PrivateDriverDataSize);
          }
          if ( v2 )
            CRefCountedBuffer::RefCountedBufferRelease(v2);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
          if ( v26 && _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v26 + 2), v26);
          goto LABEL_25;
        }
        PresentPrivateDriverDataFromResource = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        WdLogGlobalForLineNumber = 14010;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Shared resource is expected, returning 0x%I64x",
          -1073741811LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
    }
    else
    {
      v22 = v30;
      PresentPrivateDriverDataFromResource = -1073741811;
      WdLogSingleEntry2(2LL, v30, -1073741811LL);
      WdLogGlobalForLineNumber = 13995;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
        v22,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
    }
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v26);
  }
  else
  {
    PresentPrivateDriverDataFromResource = -1073741811;
    WdLogSingleEntry2(2LL, Src.hResource, -1073741811LL);
    WdLogGlobalForLineNumber = 13983;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid resource hande (0x%I64x) specified, returning 0x%I64x",
      Src.hResource,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_25:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v27);
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v23);
  return PresentPrivateDriverDataFromResource;
}
