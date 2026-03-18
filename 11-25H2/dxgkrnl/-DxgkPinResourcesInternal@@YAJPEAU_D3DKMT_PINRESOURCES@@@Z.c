/*
 * XREFs of ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1402DF238
 * Callers:
 *     NtDxgkPinResources @ 0x1402DF1B0 (NtDxgkPinResources.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x14001415C (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x14001DFA4 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x140029BB0 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x14002D7A8 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033640 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     DxgkpIsDrtEnabled @ 0x140188BF0 (DxgkpIsDrtEnabled.c)
 *     ?PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z @ 0x1401B8CE4 (-PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402A0560 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1402DFDE0 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 *     ??1?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1402E01C4 (--1-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1402E0234 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DxgkPinResourcesInternal(struct _D3DKMT_PINRESOURCES *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v6; // rbx
  bool v7; // r12
  struct _D3DKMT_PINRESOURCES *v8; // rdx
  __int64 v9; // r9
  DXGDEVICE *v10; // r14
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rdx
  struct DXGRESOURCEREFERENCE *v14; // r13
  unsigned int v15; // ebx
  __int64 v16; // r9
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  bool v27; // cf
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  struct DXGRESOURCEREFERENCE *v30; // rbx
  unsigned int *v31; // r15
  __int64 v32; // r15
  DXGRESOURCEREFERENCE *ResourceSafe; // rax
  __int64 v34; // r8
  unsigned int i; // ecx
  _QWORD *v36; // rdx
  struct DXGDEVICE *v37; // [rsp+50h] [rbp-1A8h] BYREF
  int v38; // [rsp+58h] [rbp-1A0h] BYREF
  __int64 v39; // [rsp+60h] [rbp-198h]
  char v40; // [rsp+68h] [rbp-190h]
  __int64 v41; // [rsp+70h] [rbp-188h] BYREF
  struct _D3DKMT_PINRESOURCES *v42; // [rsp+78h] [rbp-180h]
  unsigned int v43[4]; // [rsp+80h] [rbp-178h] BYREF
  unsigned int v44[4]; // [rsp+90h] [rbp-168h]
  unsigned __int64 v45; // [rsp+A0h] [rbp-158h] BYREF
  int v46; // [rsp+A8h] [rbp-150h]
  __int64 *v47; // [rsp+B0h] [rbp-148h]
  DXGDEVICE *v48; // [rsp+B8h] [rbp-140h] BYREF
  struct DXGPAGINGQUEUE *v49; // [rsp+C0h] [rbp-138h] BYREF
  struct DXGPAGINGQUEUE *v50; // [rsp+C8h] [rbp-130h]
  DXGDEVICE *v51; // [rsp+D0h] [rbp-128h] BYREF
  int v52; // [rsp+D8h] [rbp-120h]
  struct _EX_RUNDOWN_REF *v53; // [rsp+E0h] [rbp-118h] BYREF
  struct DXGRESOURCEREFERENCE *v54; // [rsp+E8h] [rbp-110h] BYREF
  char v55; // [rsp+F0h] [rbp-108h] BYREF
  int v56; // [rsp+110h] [rbp-E8h]
  _BYTE v57[160]; // [rsp+120h] [rbp-D8h] BYREF

  v42 = a1;
  v38 = -1;
  v39 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v40 = 1;
    v38 = 2079;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2079);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v38, 2079);
  Current = DXGPROCESS::GetCurrent(v4);
  v6 = Current;
  v45 = (unsigned __int64)Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6178;
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
    goto LABEL_33;
  }
  v7 = (*((_DWORD *)Current + 102) & 4) == 0;
  *(_OWORD *)v43 = 0LL;
  *(_OWORD *)v44 = 0LL;
  v8 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v8 = (struct _D3DKMT_PINRESOURCES *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v43, v8, 0x20uLL);
  v48 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v37, v43[0], v6, &v48);
  v10 = v48;
  if ( !v48 )
  {
    WdLogSingleEntry2(2LL, v43[0], -1073741811LL);
    WdLogGlobalForLineNumber = 6211;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v43[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_44;
  }
  if ( (v44[0] & 1) != 0 )
  {
    if ( v44[1] )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 6223;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Pinning DirectFlip resources may not specify a paging queue",
        6223LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_44;
    }
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v48 + 2) + 16LL) + 444LL) & 0x200) == 0 && !DxgkpIsDrtEnabled() )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 6234;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Pinning non-DirectFlip resources can only be done on xbox",
      6234LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_79:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v37);
LABEL_33:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v38);
    return 3221225485LL;
  }
  if ( !*(_QWORD *)&v43[2] || !v43[1] )
  {
    WdLogSingleEntry2(3LL, v43[0], -1073741811LL);
    WdLogGlobalForLineNumber = 6244;
    goto LABEL_44;
  }
  v50 = 0LL;
  v49 = 0LL;
  v41 = 0LL;
  if ( v44[1] )
  {
    DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v41, v44[1], v6, &v49, 1);
    v50 = v49;
    if ( v49 )
    {
      if ( *((DXGDEVICE **)v49 + 2) == v10 )
        goto LABEL_12;
      WdLogSingleEntry2(2LL, v43[0], v44[1]);
      WdLogGlobalForLineNumber = 6267;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Paging queue must belong to the supplied device. hDevice=0x%.8x, hPagingQueue=0x%.8x",
        v43[0],
        v44[1],
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, v44[1]);
      WdLogGlobalForLineNumber = 6261;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid hPagingQueue (0x%.8x) specified",
        v44[1],
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_78:
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v41);
    goto LABEL_79;
  }
LABEL_12:
  v54 = 0LL;
  v56 = 0;
  v11 = v43[1];
  if ( v43[1] <= 4 )
  {
    v54 = (struct DXGRESOURCEREFERENCE *)&v55;
    if ( v43[1] )
    {
      v12 = 0LL;
      v13 = v43[1];
      do
      {
        *(_QWORD *)((char *)v54 + v12) = 0LL;
        v12 += 8LL;
        --v13;
      }
      while ( v13 );
    }
LABEL_16:
    v56 = v11;
    goto LABEL_17;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v43[1] >= 8 )
  {
    v26 = 8LL * v43[1];
    if ( !is_mul_ok(v43[1], 8uLL) )
      v26 = -1LL;
    v27 = __CFADD__(v26, 8LL);
    v28 = v26 + 8;
    if ( v27 )
      v28 = -1LL;
    v29 = operator new[](v28, 0x4B677844u, 256LL, v9);
    if ( v29 )
    {
      *(_QWORD *)v29 = v11;
      v30 = (struct DXGRESOURCEREFERENCE *)(v29 + 8);
      `vector constructor iterator'(
        (char *)(v29 + 8),
        8LL,
        v11,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
      v54 = v30;
    }
    goto LABEL_16;
  }
LABEL_17:
  v14 = v54;
  if ( !v54 )
  {
    v18 = -1073741801;
    WdLogSingleEntry2(6LL, v43[1], -1073741801LL);
    WdLogGlobalForLineNumber = 6281;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate temporary buffer for %d handle, returning 0x%I64x",
      v43[1],
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_85;
  }
  v15 = 0;
LABEL_19:
  if ( v15 < v43[1] )
  {
    v46 = 0;
    v31 = (unsigned int *)(*(_QWORD *)&v43[2] + 4LL * v15);
    if ( v31 + 1 < v31 || (unsigned __int64)(v31 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v32 = *v31;
    v46 = v32;
    v47 = (__int64 *)((char *)v14 + 8 * v15);
    ResourceSafe = DXGPROCESS::GetResourceSafe(v45, (DXGRESOURCEREFERENCE *)&v53, v32);
    DXGRESOURCEREFERENCE::MoveAssign(v47, ResourceSafe);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v53);
    v34 = *v47;
    if ( *v47 && (*(_DWORD *)(v34 + 4) & 1) != 0 && *(_QWORD *)(v34 + 56) )
    {
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 8) + 16LL) + 16LL) == *(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) )
      {
        for ( i = 0; ; ++i )
        {
          if ( i >= v15 )
          {
            ++v15;
            goto LABEL_19;
          }
          if ( *((_QWORD *)v14 + i) == v34 )
            break;
        }
        WdLogSingleEntry2(3LL, v32, -1073741811LL);
        WdLogGlobalForLineNumber = 6329;
      }
      else
      {
        WdLogSingleEntry3(2LL, v10, v34, -1073741811LL);
        WdLogGlobalForLineNumber = 6319;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Device 0x%p does not match resource 0x%p owner, returning 0x%I64x",
          (__int64)v10,
          *v47,
          -1073741811LL,
          0LL,
          0LL);
      }
      PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v54);
      goto LABEL_78;
    }
    WdLogSingleEntry2(3LL, v32, -1073741811LL);
    WdLogGlobalForLineNumber = 6311;
    PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v54);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v41);
LABEL_44:
    if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    goto LABEL_33;
  }
  if ( (*((_BYTE *)v10 + 1901) & 1) == 0 )
  {
    v51 = v10;
    v52 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v51);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v57, (__int64)v10, 2, v16, 0);
    v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v57, 0LL);
    v18 = v17;
    if ( v17 >= 0 )
    {
      if ( (v44[0] & 1) != 0 )
      {
        v18 = DXGDEVICE::PinDirectFlipResources(v10, v43[1], v14, v7);
      }
      else
      {
        v45 = 0LL;
        v18 = DXGDEVICE::PinResources(v10, v43[1], v14, v50, &v45);
        if ( v18 == 259 )
        {
          v36 = (_QWORD *)((char *)v42 + 24);
          if ( (unsigned __int64)v42 + 24 >= MmUserProbeAddress )
            v36 = (_QWORD *)MmUserProbeAddress;
          *v36 = v45;
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
      if ( v51 && v52 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v51 + 17));
        KeLeaveCriticalRegion();
      }
      PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v54);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v41);
      if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
      goto LABEL_30;
    }
    WdLogSingleEntry2(3LL, v10, v17);
    WdLogGlobalForLineNumber = 6351;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v51);
LABEL_85:
    PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v54);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v41);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v37);
LABEL_30:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v38);
    }
    return v18;
  }
  PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v54);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v41);
  if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v38);
  return 0LL;
}
