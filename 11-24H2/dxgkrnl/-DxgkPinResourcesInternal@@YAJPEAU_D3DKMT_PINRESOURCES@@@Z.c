/*
 * XREFs of ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x14032BC18
 * Callers:
 *     NtDxgkPinResources @ 0x14032CCA0 (NtDxgkPinResources.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x14000E9C4 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x140010F54 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x14002A350 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x14002F238 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033510 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     DxgkpIsDrtEnabled @ 0x14018AED8 (DxgkpIsDrtEnabled.c)
 *     ?PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z @ 0x1401BB450 (-PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x14032C7C0 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 *     ??1?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x14032CBE4 (--1-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x14032CC54 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DxgkPinResourcesInternal(struct _D3DKMT_PINRESOURCES *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v6; // rbx
  bool v7; // r12
  struct _D3DKMT_PINRESOURCES *v8; // rdx
  struct DXGDEVICE *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct DXGRESOURCEREFERENCE *v13; // r13
  unsigned int v14; // ebx
  __int64 v15; // r9
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  bool v26; // cf
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  struct DXGRESOURCEREFERENCE *v29; // rbx
  unsigned int *v30; // r15
  __int64 v31; // r15
  DXGRESOURCEREFERENCE *ResourceSafe; // rax
  __int64 v33; // r8
  unsigned int i; // ecx
  _QWORD *v35; // rdx
  struct DXGDEVICE *v36; // [rsp+50h] [rbp-1A8h] BYREF
  int v37; // [rsp+58h] [rbp-1A0h] BYREF
  __int64 v38; // [rsp+60h] [rbp-198h]
  char v39; // [rsp+68h] [rbp-190h]
  __int64 v40; // [rsp+70h] [rbp-188h] BYREF
  struct _D3DKMT_PINRESOURCES *v41; // [rsp+78h] [rbp-180h]
  unsigned int v42[4]; // [rsp+80h] [rbp-178h] BYREF
  unsigned int v43[4]; // [rsp+90h] [rbp-168h]
  unsigned __int64 v44; // [rsp+A0h] [rbp-158h] BYREF
  int v45; // [rsp+A8h] [rbp-150h]
  __int64 *v46; // [rsp+B0h] [rbp-148h]
  struct DXGDEVICE *v47; // [rsp+B8h] [rbp-140h] BYREF
  struct DXGPAGINGQUEUE *v48; // [rsp+C0h] [rbp-138h] BYREF
  struct DXGPAGINGQUEUE *v49; // [rsp+C8h] [rbp-130h]
  struct DXGDEVICE *v50; // [rsp+D0h] [rbp-128h] BYREF
  int v51; // [rsp+D8h] [rbp-120h]
  struct _EX_RUNDOWN_REF *v52; // [rsp+E0h] [rbp-118h] BYREF
  struct DXGRESOURCEREFERENCE *v53; // [rsp+E8h] [rbp-110h] BYREF
  char v54; // [rsp+F0h] [rbp-108h] BYREF
  int v55; // [rsp+110h] [rbp-E8h]
  _BYTE v56[160]; // [rsp+120h] [rbp-D8h] BYREF

  v41 = a1;
  v37 = -1;
  v38 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 2079;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2079);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 2079);
  Current = DXGPROCESS::GetCurrent(v4);
  v6 = (struct _KTHREAD **)Current;
  v44 = (unsigned __int64)Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6369;
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
    goto LABEL_33;
  }
  v7 = (*((_DWORD *)Current + 102) & 4) == 0;
  *(_OWORD *)v42 = 0LL;
  *(_OWORD *)v43 = 0LL;
  v8 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v8 = (struct _D3DKMT_PINRESOURCES *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v42, v8, 0x20uLL);
  v47 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v36, v42[0], v6, &v47);
  v9 = v47;
  if ( !v47 )
  {
    WdLogSingleEntry2(2LL, v42[0], -1073741811LL);
    WdLogGlobalForLineNumber = 6402;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v42[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_44;
  }
  if ( (v43[0] & 1) != 0 )
  {
    if ( v43[1] )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 6414;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Pinning DirectFlip resources may not specify a paging queue",
        6414LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_44;
    }
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v47 + 2) + 16LL) + 444LL) & 0x200) == 0 && !DxgkpIsDrtEnabled() )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 6425;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Pinning non-DirectFlip resources can only be done on xbox",
      6425LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_79:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v36);
LABEL_33:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v37);
    return 3221225485LL;
  }
  if ( !*(_QWORD *)&v42[2] || !v42[1] )
  {
    WdLogSingleEntry2(3LL, v42[0], -1073741811LL);
    WdLogGlobalForLineNumber = 6435;
    goto LABEL_44;
  }
  v49 = 0LL;
  v48 = 0LL;
  v40 = 0LL;
  if ( v43[1] )
  {
    DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v40, v43[1], v6, &v48, 1);
    v49 = v48;
    if ( v48 )
    {
      if ( *((struct DXGDEVICE **)v48 + 2) == v9 )
        goto LABEL_12;
      WdLogSingleEntry2(2LL, v42[0], v43[1]);
      WdLogGlobalForLineNumber = 6458;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Paging queue must belong to the supplied device. hDevice=0x%.8x, hPagingQueue=0x%.8x",
        v42[0],
        v43[1],
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, v43[1]);
      WdLogGlobalForLineNumber = 6452;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid hPagingQueue (0x%.8x) specified",
        v43[1],
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_78:
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v40);
    goto LABEL_79;
  }
LABEL_12:
  v53 = 0LL;
  v55 = 0;
  v10 = v42[1];
  if ( v42[1] <= 4 )
  {
    v53 = (struct DXGRESOURCEREFERENCE *)&v54;
    if ( v42[1] )
    {
      v11 = 0LL;
      v12 = v42[1];
      do
      {
        *(_QWORD *)((char *)v53 + v11) = 0LL;
        v11 += 8LL;
        --v12;
      }
      while ( v12 );
    }
LABEL_16:
    v55 = v10;
    goto LABEL_17;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v42[1] >= 8 )
  {
    v25 = 8LL * v42[1];
    if ( !is_mul_ok(v42[1], 8uLL) )
      v25 = -1LL;
    v26 = __CFADD__(v25, 8LL);
    v27 = v25 + 8;
    if ( v26 )
      v27 = -1LL;
    v28 = operator new[](v27, 0x4B677844u, 256LL);
    if ( v28 )
    {
      *(_QWORD *)v28 = v10;
      v29 = (struct DXGRESOURCEREFERENCE *)(v28 + 8);
      `vector constructor iterator'(
        (char *)(v28 + 8),
        8LL,
        v10,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
      v53 = v29;
    }
    goto LABEL_16;
  }
LABEL_17:
  v13 = v53;
  if ( !v53 )
  {
    v17 = -1073741801;
    WdLogSingleEntry2(6LL, v42[1], -1073741801LL);
    WdLogGlobalForLineNumber = 6472;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate temporary buffer for %d handle, returning 0x%I64x",
      v42[1],
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_85;
  }
  v14 = 0;
LABEL_19:
  if ( v14 < v42[1] )
  {
    v45 = 0;
    v30 = (unsigned int *)(*(_QWORD *)&v42[2] + 4LL * v14);
    if ( v30 + 1 < v30 || (unsigned __int64)(v30 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v31 = *v30;
    v45 = v31;
    v46 = (__int64 *)((char *)v13 + 8 * v14);
    ResourceSafe = DXGPROCESS::GetResourceSafe(v44, (DXGRESOURCEREFERENCE *)&v52, v31);
    DXGRESOURCEREFERENCE::MoveAssign(v46, ResourceSafe);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v52);
    v33 = *v46;
    if ( *v46 && (*(_DWORD *)(v33 + 4) & 1) != 0 && *(_QWORD *)(v33 + 56) )
    {
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 8) + 16LL) + 16LL) == *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL) )
      {
        for ( i = 0; ; ++i )
        {
          if ( i >= v14 )
          {
            ++v14;
            goto LABEL_19;
          }
          if ( *((_QWORD *)v13 + i) == v33 )
            break;
        }
        WdLogSingleEntry2(3LL, v31, -1073741811LL);
        WdLogGlobalForLineNumber = 6520;
      }
      else
      {
        WdLogSingleEntry3(2LL, v9, v33, -1073741811LL);
        WdLogGlobalForLineNumber = 6510;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Device 0x%p does not match resource 0x%p owner, returning 0x%I64x",
          (__int64)v9,
          *v46,
          -1073741811LL,
          0LL,
          0LL);
      }
      PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v53);
      goto LABEL_78;
    }
    WdLogSingleEntry2(3LL, v31, -1073741811LL);
    WdLogGlobalForLineNumber = 6502;
    PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v53);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v40);
LABEL_44:
    if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
    goto LABEL_33;
  }
  if ( (*((_BYTE *)v9 + 1917) & 1) == 0 )
  {
    v50 = v9;
    v51 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v50);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v56, (__int64)v9, 2, v15, 0);
    v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v56, 0LL);
    v17 = v16;
    if ( v16 >= 0 )
    {
      if ( (v43[0] & 1) != 0 )
      {
        v17 = DXGDEVICE::PinDirectFlipResources(v9, v42[1], v13, v7);
      }
      else
      {
        v44 = 0LL;
        v17 = DXGDEVICE::PinResources(v9, v42[1], v13, v49, &v44);
        if ( v17 == 259 )
        {
          v35 = (_QWORD *)((char *)v41 + 24);
          if ( (unsigned __int64)v41 + 24 >= MmUserProbeAddress )
            v35 = (_QWORD *)MmUserProbeAddress;
          *v35 = v44;
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
      if ( v50 && v51 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v50 + 17));
        KeLeaveCriticalRegion();
      }
      PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v53);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v40);
      if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
      goto LABEL_30;
    }
    WdLogSingleEntry2(3LL, v9, v16);
    WdLogGlobalForLineNumber = 6542;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v50);
LABEL_85:
    PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v53);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v40);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v36);
LABEL_30:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v37);
    }
    return v17;
  }
  PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v53);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v40);
  if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v37);
  return 0LL;
}
