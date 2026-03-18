/*
 * XREFs of ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x140354F2C
 * Callers:
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x140197118 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x140217710 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1403506F4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x140351948 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?CreateStandardAllocCallout@@YAXPEAX@Z @ 0x140354F00 (-CreateStandardAllocCallout@@YAXPEAX@Z.c)
 *     ?DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403B8C50 (-DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCAT.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1403BBC84 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1403F9C8C (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140416310 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400313D0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402CCEDC (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x140355CBC (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x140355CF0 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140356E10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     GetPixelSizeInBytes @ 0x1403F45F0 (GetPixelSizeInBytes.c)
 */

__int64 __fastcall DXGDEVICE::CreateStandardAllocation(
        DXGDEVICE *this,
        struct _D3DKM_CREATESTANDARDALLOCATION *a2,
        struct COREDEVICEACCESS *a3)
{
  __int64 v5; // rcx
  UINT v6; // r12d
  struct _EX_RUNDOWN_REF *v7; // rbx
  __int64 v8; // r14
  unsigned int NumDifferentPhysicalAdapters; // r15d
  D3DDDI_ALLOCATIONINFO *Pool2; // r13
  ADAPTER_RENDER *v11; // rcx
  D3DKMDT_STANDARDALLOCATION_TYPE v12; // eax
  int StandardAllocationDriverData; // eax
  __int64 v14; // r15
  unsigned __int64 AllocationPrivateDriverDataSize; // rcx
  void *v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  unsigned int *v19; // r12
  int PixelSizeInBytes; // eax
  unsigned int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // ecx
  char v25; // dl
  int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // r12d
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r8
  int v32; // edx
  struct _EX_RUNDOWN_REF *v33; // rdx
  __int64 v34; // rcx
  int v35; // edx
  bool v36; // zf
  __int64 v37; // rax
  void **p_pPrivateDriverData; // r13
  __int64 v39; // rbx
  const wchar_t *v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // rdi
  const wchar_t *v46; // r9
  __int64 v47; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v49; // rax
  __int64 v50; // r10
  int v51; // r8d
  struct DXGRESOURCE *v52; // rbx
  __int64 v53; // rax
  int v54; // r8d
  UINT v55; // [rsp+80h] [rbp-80h]
  unsigned int v56; // [rsp+80h] [rbp-80h]
  char v57; // [rsp+84h] [rbp-7Ch]
  UINT v58; // [rsp+88h] [rbp-78h]
  unsigned int v59; // [rsp+88h] [rbp-78h]
  unsigned int v60; // [rsp+8Ch] [rbp-74h]
  struct COREDEVICEACCESS *v61; // [rsp+90h] [rbp-70h] BYREF
  void *v62; // [rsp+98h] [rbp-68h]
  struct _EX_RUNDOWN_REF *v63; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v64; // [rsp+A8h] [rbp-58h] BYREF
  struct _D3DKMT_CREATEALLOCATION v65; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v66[32]; // [rsp+130h] [rbp+30h] BYREF
  PVOID P; // [rsp+150h] [rbp+50h]
  _BYTE v68[384]; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v69; // [rsp+2D8h] [rbp+1D8h]

  v61 = a3;
  memset(&v65, 0, sizeof(v65));
  v5 = *((_QWORD *)this + 2);
  v6 = 0;
  v7 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v60 = 0;
  v8 = *(_QWORD *)(v5 + 16);
  NumDifferentPhysicalAdapters = 1;
  v58 = 1;
  if ( *((_DWORD *)a2 + 4) == 1 )
  {
    if ( *(_BYTE *)(v8 + 3023) || DXGADAPTER::ReplicateGdiContent((DXGADAPTER *)v8) )
    {
LABEL_75:
      NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)v8);
      v58 = NumDifferentPhysicalAdapters;
      goto LABEL_3;
    }
    v5 = *((_QWORD *)this + 2);
  }
  if ( DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(v5 + 16)) && *((_DWORD *)a2 + 4) == 4 )
  {
    v44 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL);
    if ( ((v44 - 1) & 0xFFFFFFFC) != 0 || v44 == 2 )
      goto LABEL_4;
    goto LABEL_75;
  }
LABEL_3:
  if ( *((_DWORD *)a2 + 4) == 1 && !*(_QWORD *)(v8 + 3120) )
    *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL) = 0;
LABEL_4:
  P = 0LL;
  Pool2 = 0LL;
  v69 = 0;
  if ( NumDifferentPhysicalAdapters <= 4 )
  {
    Pool2 = (D3DDDI_ALLOCATIONINFO *)v68;
    P = v68;
    if ( NumDifferentPhysicalAdapters )
    {
      memset(v68, 0, 96LL * NumDifferentPhysicalAdapters);
      Pool2 = (D3DDDI_ALLOCATIONINFO *)P;
    }
    goto LABEL_7;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / NumDifferentPhysicalAdapters >= 0x60 )
  {
    Pool2 = (D3DDDI_ALLOCATIONINFO *)ExAllocatePool2(256LL, 96LL * NumDifferentPhysicalAdapters, 1265072196LL);
    P = Pool2;
LABEL_7:
    v69 = NumDifferentPhysicalAdapters;
  }
  v11 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v57 = *(_BYTE *)(*((_QWORD *)v11 + 2) + 209LL);
  v12 = *((_DWORD *)a2 + 4);
  memset(&v64, 0, sizeof(v64));
  v64.StandardAllocationType = v12;
  v64.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)*((_QWORD *)a2 + 3);
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v11, &v64);
  v14 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    WdLogSingleEntry2(2LL, this, StandardAllocationDriverData);
    WdLogGlobalForLineNumber = 7546;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Failed to find size of PrivateDriverData buffers, returning 0x%I64x",
      (__int64)this,
      v14,
      0LL,
      0LL,
      0LL);
    goto LABEL_52;
  }
  AllocationPrivateDriverDataSize = v64.AllocationPrivateDriverDataSize;
  if ( !v64.AllocationPrivateDriverDataSize && !v64.ResourcePrivateDriverDataSize )
  {
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 7554;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Driver returned zero size for pAllocationPrivateDriverData and pResourcePrivateDriverData buffer, "
       "returning 0x%I64x",
      (__int64)this,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_87;
  }
  if ( (*(_DWORD *)a2 & 0x40) == 0 )
    goto LABEL_11;
  if ( *((_DWORD *)a2 + 90) != v64.ResourcePrivateDriverDataSize )
  {
    v45 = 1LL;
    WdLogSingleEntry3(2LL, this, -1073741811LL, 1LL);
    v46 = L"Device 0x%I64x: Input ResourcePrivateDriverDataSize does not match the driver's ResourcePrivateDriverDataSize,"
           " returning 0x%I64x";
    WdLogGlobalForLineNumber = 7568;
LABEL_86:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v46, (__int64)this, -1073741811LL, v45, 0LL, 0LL);
LABEL_87:
    if ( P != v68 && P )
      ExFreePoolWithTag(P, 0);
    LODWORD(v14) = -1073741811;
    goto LABEL_53;
  }
  if ( *((_DWORD *)a2 + 94) != v64.AllocationPrivateDriverDataSize )
  {
    v45 = 2LL;
    WdLogSingleEntry3(2LL, this, -1073741811LL, 2LL);
    v46 = L"Device 0x%I64x: Input TotalPrivateDriverDataBufferSize does not match the driver's AllocationPrivateDriverData"
           "Size, returning 0x%I64x";
    WdLogGlobalForLineNumber = 7575;
    goto LABEL_86;
  }
LABEL_11:
  if ( v64.ResourcePrivateDriverDataSize )
  {
    v62 = (void *)operator new[](v64.ResourcePrivateDriverDataSize, 0x4B677844u, 256LL);
    if ( !v62 )
    {
      LODWORD(v14) = -1073741801;
      WdLogSingleEntry3(3LL, this, v64.ResourcePrivateDriverDataSize, -1073741801LL);
      WdLogGlobalForLineNumber = 7589;
      goto LABEL_51;
    }
    AllocationPrivateDriverDataSize = v64.AllocationPrivateDriverDataSize;
  }
  while ( 1 )
  {
    v55 = v6;
    if ( v6 >= v58 )
      break;
    v16 = 0LL;
    if ( (_DWORD)AllocationPrivateDriverDataSize )
    {
      v16 = (void *)operator new[](AllocationPrivateDriverDataSize, 0x4B677844u, 256LL);
      if ( !v16 )
      {
        LODWORD(v14) = -1073741801;
        WdLogSingleEntry3(3LL, this, v64.AllocationPrivateDriverDataSize, -1073741801LL);
        WdLogGlobalForLineNumber = 7607;
        goto LABEL_48;
      }
      ++v60;
    }
    v17 = 96LL * v6;
    *(void **)((char *)&Pool2->pPrivateDriverData + v17) = v16;
    *(UINT *)((char *)&Pool2->PrivateDriverDataSize + v17) = v64.AllocationPrivateDriverDataSize;
    v64.pAllocationPrivateDriverData = v16;
    v64.pResourcePrivateDriverData = v62;
    if ( v58 > 1 )
      v64.PhysicalAdapterIndex = v6;
    else
      v64.PhysicalAdapterIndex = *((_DWORD *)a2 + 95);
    v18 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(*((ADAPTER_RENDER **)this + 2), &v64);
    v14 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry3(1LL, this, v18, 0LL);
      WdLogGlobalForLineNumber = 7628;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: Driver fialed to generate pPrivateDriverData buffer, returning 0x%I64x",
        (__int64)this,
        v14,
        0LL,
        0LL,
        0LL);
      goto LABEL_48;
    }
    if ( (*(_DWORD *)a2 & 0x60) != 0 )
    {
      v19 = (unsigned int *)*((_QWORD *)a2 + 3);
      if ( v19[2] )
      {
        PixelSizeInBytes = GetPixelSizeInBytes();
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 444LL) & 8) == 0 )
        {
          if ( PixelSizeInBytes )
          {
            v21 = v19[5];
            if ( v21 )
            {
              if ( v21 != ((PixelSizeInBytes * *v19 + 127) & 0xFFFFFF80) )
              {
                LODWORD(v14) = -1073741811;
                WdLogSingleEntry4(2LL, this, v21, *v19, -1073741811LL);
                v22 = *v19;
                v23 = v19[5];
                WdLogGlobalForLineNumber = 7654;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Device 0x%I64x: Driver returned invalid pitch (0x%I64x) for the cross adapter allocation width (0x%I64"
                   "x), returning 0x%I64x",
                  (__int64)this,
                  v23,
                  v22,
                  -1073741811LL,
                  0LL);
                goto LABEL_48;
              }
            }
          }
        }
      }
      v6 = v55;
    }
    if ( (*(_BYTE *)a2 & 0xC0) == 0xC0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7664;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"!pCreateStandardAllocation->Flags.OpenCrossAdapter || !pCreateStandardAllocation->Flags.Primary",
        7664LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_DWORD *)a2 + 4) == 1 )
    {
      *(&Pool2->VidPnSourceId + 24 * v6) = *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL);
      *(&Pool2->Flags.Value + 24 * v6) |= 1u;
    }
    AllocationPrivateDriverDataSize = v64.AllocationPrivateDriverDataSize;
    ++v6;
  }
  v24 = *(_DWORD *)a2;
  v25 = *(_DWORD *)a2;
  v65.hDevice = *((_DWORD *)a2 + 1);
  v65.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)v62;
  v65.PrivateDriverDataSize = v64.ResourcePrivateDriverDataSize;
  v65.pPrivateRuntimeData = (const void *)*((_QWORD *)a2 + 39);
  v65.PrivateRuntimeDataSize = *((_DWORD *)a2 + 80);
  *(_QWORD *)&v65.hResource = 0LL;
  v65.NumAllocations = v58;
  v65.pAllocationInfo = Pool2;
  v65.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v65.Flags & 0xFFFFA094 | (v24 >> 4) & 0x440 | (*((_BYTE *)a2 + 408) == 0) | (2 * (v24 & 1 | (2 * (v24 & 2 | (2 * (v24 & 0x800 | v24 & 4 | (4 * (v24 & 0x18 | (2 * (v25 & 0x60)))))))))));
  v26 = DXGDEVICE::CreateAllocation(this, &v65, 0, 0, 0LL, a2, v61, 0, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  LODWORD(v14) = v26;
  if ( v26 < 0 )
  {
    WdLogSingleEntry3(3LL, this, v26, 1LL);
    WdLogGlobalForLineNumber = 7707;
    goto LABEL_48;
  }
  v27 = 0LL;
  v28 = v58;
  while ( 1 )
  {
    v56 = v27;
    if ( (unsigned int)v27 >= v28 )
      break;
    v29 = *((_QWORD *)this + 5);
    v59 = *(&Pool2->hAllocation + 24 * v27);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v29 + 248));
    v30 = (v59 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v30 < *(_DWORD *)(v29 + 296) )
    {
      v31 = *(_QWORD *)(v29 + 280);
      v32 = *(_DWORD *)(v31 + 16 * v30 + 8);
      if ( ((v59 >> 25) & 0x60) == (*(_BYTE *)(v31 + 16 * v30 + 8) & 0x60) && (v32 & 0x2000) == 0 && (v32 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(v31 + 16 * (((unsigned __int64)v59 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
        {
          v33 = *(struct _EX_RUNDOWN_REF **)(v31 + 16 * (((unsigned __int64)v59 >> 6) & 0xFFFFFF));
          goto LABEL_35;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v33 = 0LL;
LABEL_35:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v61, v33);
    _InterlockedDecrement((volatile signed __int32 *)(v29 + 264));
    ExReleasePushLockSharedEx(v29 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( v63 )
      ExReleaseRundownProtection(v63 + 11);
    v7 = (struct _EX_RUNDOWN_REF *)v61;
    v61 = 0LL;
    v63 = v7;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v61);
    v34 = 96LL * v56;
    if ( !v7 )
    {
      LODWORD(v14) = -1073741811;
      WdLogSingleEntry3(1LL, this, *(unsigned int *)((char *)&Pool2->hAllocation + v34), -1073741811LL);
      v41 = L"Device 0x%I64x: created standard allocation but the allocation handle (0x%I64x) lookup failed!, returning 0x%I64x";
      WdLogGlobalForLineNumber = 7721;
      v42 = 262146LL;
      v43 = *(&Pool2->hAllocation + 24 * v56);
      goto LABEL_97;
    }
    *((_DWORD *)a2 + v56 + 13) = *(D3DKMT_HANDLE *)((char *)&Pool2->hAllocation + v34);
    if ( !v57
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                    + 160LL))(*(_QWORD *)(v7[6].Count + 8)) )
    {
      v35 = *((_DWORD *)a2 + 4);
      if ( v35 == 4 )
      {
        if ( *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) != 2 )
          goto LABEL_42;
      }
      else if ( v35 == 5 )
      {
        goto LABEL_42;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2468LL) & 0x200) == 0 || v35 != 1 )
      {
        LODWORD(v14) = -1073741811;
        WdLogSingleEntry3(2LL, this, *((int *)a2 + 4), -1073741811LL);
        v43 = *((int *)a2 + 4);
        v41 = L"Device 0x%I64x: Driver did not create CPUVisible allocation for standard allocation type 0x%I64x, returning 0x%I64x";
        WdLogGlobalForLineNumber = 7747;
        v42 = 0x40000LL;
LABEL_97:
        DxgkLogInternalTriageEvent(0LL, v42, 0xFFFFFFFFLL, v41, (__int64)this, v43, -1073741811LL, 0LL, 0LL);
        if ( !v65.hResource )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 7789;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"CreateAlloc.hResource != NULL",
            7789LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        Current = DXGPROCESS::GetCurrent(v47);
        if ( !Current )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 7797;
          DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pProcess != NULL", 7797LL, 0LL, 0LL, 0LL, 0LL);
        }
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v66, Current);
        v49 = (v65.hResource >> 6) & 0xFFFFFF;
        if ( (unsigned int)v49 < *((_DWORD *)Current + 74)
          && (v50 = *((_QWORD *)Current + 35),
              v51 = *(_DWORD *)(v50 + 16 * v49 + 8),
              ((v65.hResource >> 25) & 0x60) == (*(_BYTE *)(v50 + 16 * v49 + 8) & 0x60))
          && (v51 & 0x2000) == 0
          && (v51 & 0x1F) != 0 )
        {
          if ( (*(_BYTE *)(v50 + 16 * (((unsigned __int64)v65.hResource >> 6) & 0xFFFFFF) + 8) & 0x1F) != 4 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
            goto LABEL_107;
          }
          v52 = *(struct DXGRESOURCE **)(v50 + 16 * (((unsigned __int64)v65.hResource >> 6) & 0xFFFFFF));
          if ( v52 )
          {
            v53 = (v65.hResource >> 6) & 0xFFFFFF;
            if ( (unsigned int)v53 < *((_DWORD *)Current + 74) )
            {
              v54 = *(_DWORD *)(v50 + 16 * v53 + 8);
              if ( ((v65.hResource >> 25) & 0x60) == (*(_BYTE *)(v50 + 16 * v53 + 8) & 0x60)
                && (v54 & 0x2000) == 0
                && (v54 & 0x1F) != 0 )
              {
                *(_DWORD *)(v50 + 16 * (((unsigned __int64)v65.hResource >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
              }
            }
            goto LABEL_109;
          }
        }
        else
        {
LABEL_107:
          v52 = 0LL;
        }
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 7803;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pResource != NULL", 7803LL, 0LL, 0LL, 0LL, 0LL);
LABEL_109:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v66);
        if ( v52 )
          DXGDEVICE::DestroyAllocationInternal(
            this,
            0,
            0LL,
            v52,
            0LL,
            (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
        goto LABEL_48;
      }
    }
LABEL_42:
    v27 = v56 + 1;
  }
  v36 = *((_DWORD *)a2 + 4) == 4;
  *((_DWORD *)a2 + 2) = v65.hResource;
  *((_DWORD *)a2 + 3) = v65.hGlobalShare;
  if ( v36 && ((*(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) - 6) & 0xFFFFFFFD) == 0 )
    v37 = (*(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 632LL))(v7[3].Count);
  else
    v37 = 0LL;
  *((_QWORD *)a2 + 41) = v37;
  if ( (*(_DWORD *)a2 & 0x40) != 0 )
  {
    memmove(*((void **)a2 + 46), Pool2->pPrivateDriverData, *((unsigned int *)a2 + 94));
    memmove(*((void **)a2 + 44), v64.pResourcePrivateDriverData, *((unsigned int *)a2 + 90));
  }
LABEL_48:
  if ( v60 )
  {
    p_pPrivateDriverData = &Pool2->pPrivateDriverData;
    v39 = v60;
    do
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*p_pPrivateDriverData);
      p_pPrivateDriverData += 12;
      --v39;
    }
    while ( v39 );
  }
LABEL_51:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v62);
LABEL_52:
  if ( P != v68 && P )
    ExFreePoolWithTag(P, 0);
LABEL_53:
  P = 0LL;
  v69 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v63);
  return (unsigned int)v14;
}
