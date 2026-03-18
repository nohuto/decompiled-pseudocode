/*
 * XREFs of DxgkGetResourcePresentPrivateDriverData @ 0x140329770
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x140010F54 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140021DDC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedBuffer@@PEAU_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA@@@Z @ 0x14004A344 (-GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedB.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkGetResourcePresentPrivateDriverData(ULONG64 a1)
{
  char *v2; // rbx
  const void *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v8; // r14
  DXGRESOURCEREFERENCE *ResourceSafe; // rax
  __int64 v10; // r15
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
  __int64 v27; // [rsp+70h] [rbp-108h] BYREF
  struct _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA Src; // [rsp+78h] [rbp-100h] BYREF
  struct DXGDEVICE *v29; // [rsp+88h] [rbp-F0h] BYREF
  unsigned int v30; // [rsp+90h] [rbp-E8h]
  PVOID Entry; // [rsp+98h] [rbp-E0h] BYREF
  _BYTE v32[16]; // [rsp+A0h] [rbp-D8h] BYREF
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
  if ( (qword_14015E4B0 & 2) != 0 )
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
  v8 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    PresentPrivateDriverDataFromResource = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 14034;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
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
  v27 = *(_QWORD *)ResourceSafe;
  v10 = v27;
  *(_QWORD *)ResourceSafe = 0LL;
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v32);
  if ( v10 )
  {
    v30 = *(_DWORD *)(*(_QWORD *)(v10 + 8) + 468LL);
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
        WdLogGlobalForLineNumber = 14069;
      }
      else
      {
        if ( (*(_DWORD *)(v10 + 4) & 1) != 0 )
        {
          v14 = *(KSPIN_LOCK **)(*(_QWORD *)(v10 + 56) + 176LL);
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
            WdLogGlobalForLineNumber = 14084;
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
        WdLogGlobalForLineNumber = 14076;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
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
      WdLogGlobalForLineNumber = 14061;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
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
    WdLogGlobalForLineNumber = 14049;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid resource hande (0x%I64x) specified, returning 0x%I64x",
      Src.hResource,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_25:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v27);
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v23);
  return PresentPrivateDriverDataFromResource;
}
