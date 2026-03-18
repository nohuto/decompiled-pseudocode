/*
 * XREFs of ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403600FC
 * Callers:
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x140194D90 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1402110B0 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x14035B3A4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x14035C5F8 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?CreateStandardAllocCallout@@YAXPEAX@Z @ 0x1403600D0 (-CreateStandardAllocCallout@@YAXPEAX@Z.c)
 *     ?DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403C4210 (-DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCAT.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1403C7634 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1403FFC9C (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400314B0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140333A6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x140360E8C (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x140360EC0 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140361FE0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     GetPixelSizeInBytes @ 0x1403FA810 (GetPixelSizeInBytes.c)
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
  __int64 v10; // r9
  D3DDDI_ALLOCATIONINFO *Pool2; // r13
  ADAPTER_RENDER *v12; // rcx
  D3DKMDT_STANDARDALLOCATION_TYPE v13; // eax
  int StandardAllocationDriverData; // eax
  __int64 v15; // r9
  __int64 v16; // r15
  unsigned __int64 AllocationPrivateDriverDataSize; // rcx
  void *v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  unsigned int *v21; // r12
  int PixelSizeInBytes; // eax
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // ecx
  char v27; // dl
  int v28; // eax
  __int64 v29; // rax
  unsigned int v30; // r12d
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r8
  int v34; // edx
  struct _EX_RUNDOWN_REF *v35; // rdx
  __int64 v36; // rcx
  int v37; // edx
  bool v38; // zf
  __int64 v39; // rax
  void **p_pPrivateDriverData; // r13
  __int64 v41; // rbx
  const wchar_t *v43; // r9
  int v44; // edx
  __int64 v45; // rax
  int v46; // ecx
  __int64 v47; // rdi
  const wchar_t *v48; // r9
  __int64 v49; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v51; // rax
  __int64 v52; // r10
  int v53; // r8d
  struct DXGRESOURCE *v54; // rbx
  __int64 v55; // rax
  int v56; // r8d
  UINT v57; // [rsp+80h] [rbp-80h]
  unsigned int v58; // [rsp+80h] [rbp-80h]
  char v59; // [rsp+84h] [rbp-7Ch]
  UINT v60; // [rsp+88h] [rbp-78h]
  unsigned int v61; // [rsp+88h] [rbp-78h]
  unsigned int v62; // [rsp+8Ch] [rbp-74h]
  struct COREDEVICEACCESS *v63; // [rsp+90h] [rbp-70h] BYREF
  void *v64; // [rsp+98h] [rbp-68h]
  struct _EX_RUNDOWN_REF *v65; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v66; // [rsp+A8h] [rbp-58h] BYREF
  struct _D3DKMT_CREATEALLOCATION v67; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v68[32]; // [rsp+130h] [rbp+30h] BYREF
  PVOID P; // [rsp+150h] [rbp+50h]
  _BYTE v70[384]; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v71; // [rsp+2D8h] [rbp+1D8h]

  v63 = a3;
  memset(&v67, 0, sizeof(v67));
  v5 = *((_QWORD *)this + 2);
  v6 = 0;
  v7 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v62 = 0;
  v8 = *(_QWORD *)(v5 + 16);
  NumDifferentPhysicalAdapters = 1;
  v60 = 1;
  if ( *((_DWORD *)a2 + 4) == 1 )
  {
    if ( *(_BYTE *)(v8 + 3023) || DXGADAPTER::ReplicateGdiContent((DXGADAPTER *)v8) )
    {
LABEL_75:
      NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)v8);
      v60 = NumDifferentPhysicalAdapters;
      goto LABEL_3;
    }
    v5 = *((_QWORD *)this + 2);
  }
  if ( DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(v5 + 16)) && *((_DWORD *)a2 + 4) == 4 )
  {
    v46 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL);
    if ( ((v46 - 1) & 0xFFFFFFFC) != 0 || v46 == 2 )
      goto LABEL_4;
    goto LABEL_75;
  }
LABEL_3:
  if ( *((_DWORD *)a2 + 4) == 1 && !*(_QWORD *)(v8 + 3120) )
    *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL) = 0;
LABEL_4:
  P = 0LL;
  Pool2 = 0LL;
  v71 = 0;
  if ( NumDifferentPhysicalAdapters <= 4 )
  {
    Pool2 = (D3DDDI_ALLOCATIONINFO *)v70;
    P = v70;
    if ( NumDifferentPhysicalAdapters )
    {
      memset(v70, 0, 96LL * NumDifferentPhysicalAdapters);
      Pool2 = (D3DDDI_ALLOCATIONINFO *)P;
    }
    goto LABEL_7;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / NumDifferentPhysicalAdapters >= 0x60 )
  {
    Pool2 = (D3DDDI_ALLOCATIONINFO *)ExAllocatePool2(256LL, 96LL * NumDifferentPhysicalAdapters, 1265072196LL, v10);
    P = Pool2;
LABEL_7:
    v71 = NumDifferentPhysicalAdapters;
  }
  v12 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v59 = *(_BYTE *)(*((_QWORD *)v12 + 2) + 209LL);
  v13 = *((_DWORD *)a2 + 4);
  memset(&v66, 0, sizeof(v66));
  v66.StandardAllocationType = v13;
  v66.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)*((_QWORD *)a2 + 3);
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v12, &v66);
  v16 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    WdLogSingleEntry2(2LL, this, StandardAllocationDriverData);
    WdLogGlobalForLineNumber = 7498;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Failed to find size of PrivateDriverData buffers, returning 0x%I64x",
      (__int64)this,
      v16,
      0LL,
      0LL,
      0LL);
    goto LABEL_52;
  }
  AllocationPrivateDriverDataSize = v66.AllocationPrivateDriverDataSize;
  if ( !v66.AllocationPrivateDriverDataSize && !v66.ResourcePrivateDriverDataSize )
  {
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 7506;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
  if ( *((_DWORD *)a2 + 90) != v66.ResourcePrivateDriverDataSize )
  {
    v47 = 1LL;
    WdLogSingleEntry3(2LL, this, -1073741811LL, 1LL);
    v48 = L"Device 0x%I64x: Input ResourcePrivateDriverDataSize does not match the driver's ResourcePrivateDriverDataSize,"
           " returning 0x%I64x";
    WdLogGlobalForLineNumber = 7520;
LABEL_86:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v48, (__int64)this, -1073741811LL, v47, 0LL, 0LL);
LABEL_87:
    if ( P != v70 && P )
      ExFreePoolWithTag(P, 0);
    LODWORD(v16) = -1073741811;
    goto LABEL_53;
  }
  if ( *((_DWORD *)a2 + 94) != v66.AllocationPrivateDriverDataSize )
  {
    v47 = 2LL;
    WdLogSingleEntry3(2LL, this, -1073741811LL, 2LL);
    v48 = L"Device 0x%I64x: Input TotalPrivateDriverDataBufferSize does not match the driver's AllocationPrivateDriverData"
           "Size, returning 0x%I64x";
    WdLogGlobalForLineNumber = 7527;
    goto LABEL_86;
  }
LABEL_11:
  if ( v66.ResourcePrivateDriverDataSize )
  {
    v64 = (void *)operator new[](v66.ResourcePrivateDriverDataSize, 0x4B677844u, 256LL, v15);
    if ( !v64 )
    {
      LODWORD(v16) = -1073741801;
      WdLogSingleEntry3(3LL, this, v66.ResourcePrivateDriverDataSize, -1073741801LL);
      WdLogGlobalForLineNumber = 7541;
      goto LABEL_51;
    }
    AllocationPrivateDriverDataSize = v66.AllocationPrivateDriverDataSize;
  }
  while ( 1 )
  {
    v57 = v6;
    if ( v6 >= v60 )
      break;
    v18 = 0LL;
    if ( (_DWORD)AllocationPrivateDriverDataSize )
    {
      v18 = (void *)operator new[](AllocationPrivateDriverDataSize, 0x4B677844u, 256LL, v15);
      if ( !v18 )
      {
        LODWORD(v16) = -1073741801;
        WdLogSingleEntry3(3LL, this, v66.AllocationPrivateDriverDataSize, -1073741801LL);
        WdLogGlobalForLineNumber = 7559;
        goto LABEL_48;
      }
      ++v62;
    }
    v19 = 96LL * v6;
    *(void **)((char *)&Pool2->pPrivateDriverData + v19) = v18;
    *(UINT *)((char *)&Pool2->PrivateDriverDataSize + v19) = v66.AllocationPrivateDriverDataSize;
    v66.pAllocationPrivateDriverData = v18;
    v66.pResourcePrivateDriverData = v64;
    if ( v60 > 1 )
      v66.PhysicalAdapterIndex = v6;
    else
      v66.PhysicalAdapterIndex = *((_DWORD *)a2 + 95);
    v20 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(*((ADAPTER_RENDER **)this + 2), &v66);
    v16 = v20;
    if ( v20 < 0 )
    {
      WdLogSingleEntry3(1LL, this, v20, 0LL);
      WdLogGlobalForLineNumber = 7580;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: Driver fialed to generate pPrivateDriverData buffer, returning 0x%I64x",
        (__int64)this,
        v16,
        0LL,
        0LL,
        0LL);
      goto LABEL_48;
    }
    if ( (*(_DWORD *)a2 & 0x60) != 0 )
    {
      v21 = (unsigned int *)*((_QWORD *)a2 + 3);
      if ( v21[2] )
      {
        PixelSizeInBytes = GetPixelSizeInBytes();
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 444LL) & 8) == 0 )
        {
          if ( PixelSizeInBytes )
          {
            v23 = v21[5];
            if ( v23 )
            {
              if ( v23 != ((PixelSizeInBytes * *v21 + 127) & 0xFFFFFF80) )
              {
                LODWORD(v16) = -1073741811;
                WdLogSingleEntry4(2LL, this, v23, *v21, -1073741811LL);
                v24 = *v21;
                v25 = v21[5];
                WdLogGlobalForLineNumber = 7606;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Device 0x%I64x: Driver returned invalid pitch (0x%I64x) for the cross adapter allocation width (0x%I64"
                   "x), returning 0x%I64x",
                  (__int64)this,
                  v25,
                  v24,
                  -1073741811LL,
                  0LL);
                goto LABEL_48;
              }
            }
          }
        }
      }
      v6 = v57;
    }
    if ( (*(_BYTE *)a2 & 0xC0) == 0xC0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7616;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"!pCreateStandardAllocation->Flags.OpenCrossAdapter || !pCreateStandardAllocation->Flags.Primary",
        7616LL,
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
    AllocationPrivateDriverDataSize = v66.AllocationPrivateDriverDataSize;
    ++v6;
  }
  v26 = *(_DWORD *)a2;
  v27 = *(_DWORD *)a2;
  v67.hDevice = *((_DWORD *)a2 + 1);
  v67.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)v64;
  v67.PrivateDriverDataSize = v66.ResourcePrivateDriverDataSize;
  v67.pPrivateRuntimeData = (const void *)*((_QWORD *)a2 + 39);
  v67.PrivateRuntimeDataSize = *((_DWORD *)a2 + 80);
  *(_QWORD *)&v67.hResource = 0LL;
  v67.NumAllocations = v60;
  v67.pAllocationInfo = Pool2;
  v67.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v67.Flags & 0xFFFFA094 | (v26 >> 4) & 0x440 | (*((_BYTE *)a2 + 408) == 0) | (2 * (v26 & 1 | (2 * (v26 & 2 | (2 * (v26 & 0x800 | v26 & 4 | (4 * (v26 & 0x18 | (2 * (v27 & 0x60)))))))))));
  v28 = DXGDEVICE::CreateAllocation(this, &v67, 0, 0, 0LL, a2, v63, 0, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  LODWORD(v16) = v28;
  if ( v28 < 0 )
  {
    WdLogSingleEntry3(3LL, this, v28, 1LL);
    WdLogGlobalForLineNumber = 7659;
    goto LABEL_48;
  }
  v29 = 0LL;
  v30 = v60;
  while ( 1 )
  {
    v58 = v29;
    if ( (unsigned int)v29 >= v30 )
      break;
    v31 = *((_QWORD *)this + 5);
    v61 = *(&Pool2->hAllocation + 24 * v29);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v31 + 248));
    v32 = (v61 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v32 < *(_DWORD *)(v31 + 296) )
    {
      v33 = *(_QWORD *)(v31 + 280);
      v34 = *(_DWORD *)(v33 + 16 * v32 + 8);
      if ( ((v61 >> 25) & 0x60) == (*(_BYTE *)(v33 + 16 * v32 + 8) & 0x60) && (v34 & 0x2000) == 0 && (v34 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(v33 + 16 * (((unsigned __int64)v61 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
        {
          v35 = *(struct _EX_RUNDOWN_REF **)(v33 + 16 * (((unsigned __int64)v61 >> 6) & 0xFFFFFF));
          goto LABEL_35;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v35 = 0LL;
LABEL_35:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v63, v35);
    _InterlockedDecrement((volatile signed __int32 *)(v31 + 264));
    ExReleasePushLockSharedEx(v31 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( v65 )
      ExReleaseRundownProtection(v65 + 11);
    v7 = (struct _EX_RUNDOWN_REF *)v63;
    v63 = 0LL;
    v65 = v7;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v63);
    v36 = 96LL * v58;
    if ( !v7 )
    {
      LODWORD(v16) = -1073741811;
      WdLogSingleEntry3(1LL, this, *(unsigned int *)((char *)&Pool2->hAllocation + v36), -1073741811LL);
      v43 = L"Device 0x%I64x: created standard allocation but the allocation handle (0x%I64x) lookup failed!, returning 0x%I64x";
      WdLogGlobalForLineNumber = 7673;
      v44 = 262146;
      v45 = *(&Pool2->hAllocation + 24 * v58);
      goto LABEL_97;
    }
    *((_DWORD *)a2 + v58 + 13) = *(D3DKMT_HANDLE *)((char *)&Pool2->hAllocation + v36);
    if ( !v59
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                    + 160LL))(*(_QWORD *)(v7[6].Count + 8)) )
    {
      v37 = *((_DWORD *)a2 + 4);
      if ( v37 == 4 )
      {
        if ( *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) != 2 )
          goto LABEL_42;
      }
      else if ( v37 == 5 )
      {
        goto LABEL_42;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2468LL) & 0x200) == 0 || v37 != 1 )
      {
        LODWORD(v16) = -1073741811;
        WdLogSingleEntry3(2LL, this, *((int *)a2 + 4), -1073741811LL);
        v45 = *((int *)a2 + 4);
        v43 = L"Device 0x%I64x: Driver did not create CPUVisible allocation for standard allocation type 0x%I64x, returning 0x%I64x";
        WdLogGlobalForLineNumber = 7699;
        v44 = 0x40000;
LABEL_97:
        DxgkLogInternalTriageEvent(0LL, v44, 0xFFFFFFFFLL, v43, (__int64)this, v45, -1073741811LL, 0LL, 0LL);
        if ( !v67.hResource )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 7741;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"CreateAlloc.hResource != NULL",
            7741LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        Current = DXGPROCESS::GetCurrent(v49);
        if ( !Current )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 7749;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pProcess != NULL", 7749LL, 0LL, 0LL, 0LL, 0LL);
        }
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v68, Current);
        v51 = (v67.hResource >> 6) & 0xFFFFFF;
        if ( (unsigned int)v51 < *((_DWORD *)Current + 74)
          && (v52 = *((_QWORD *)Current + 35),
              v53 = *(_DWORD *)(v52 + 16 * v51 + 8),
              ((v67.hResource >> 25) & 0x60) == (*(_BYTE *)(v52 + 16 * v51 + 8) & 0x60))
          && (v53 & 0x2000) == 0
          && (v53 & 0x1F) != 0 )
        {
          if ( (*(_BYTE *)(v52 + 16 * (((unsigned __int64)v67.hResource >> 6) & 0xFFFFFF) + 8) & 0x1F) != 4 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
            goto LABEL_107;
          }
          v54 = *(struct DXGRESOURCE **)(v52 + 16 * (((unsigned __int64)v67.hResource >> 6) & 0xFFFFFF));
          if ( v54 )
          {
            v55 = (v67.hResource >> 6) & 0xFFFFFF;
            if ( (unsigned int)v55 < *((_DWORD *)Current + 74) )
            {
              v56 = *(_DWORD *)(v52 + 16 * v55 + 8);
              if ( ((v67.hResource >> 25) & 0x60) == (*(_BYTE *)(v52 + 16 * v55 + 8) & 0x60)
                && (v56 & 0x2000) == 0
                && (v56 & 0x1F) != 0 )
              {
                *(_DWORD *)(v52 + 16 * (((unsigned __int64)v67.hResource >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
              }
            }
            goto LABEL_109;
          }
        }
        else
        {
LABEL_107:
          v54 = 0LL;
        }
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 7755;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pResource != NULL", 7755LL, 0LL, 0LL, 0LL, 0LL);
LABEL_109:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v68);
        if ( v54 )
          DXGDEVICE::DestroyAllocationInternal(
            this,
            0,
            0LL,
            v54,
            0LL,
            (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
        goto LABEL_48;
      }
    }
LABEL_42:
    v29 = v58 + 1;
  }
  v38 = *((_DWORD *)a2 + 4) == 4;
  *((_DWORD *)a2 + 2) = v67.hResource;
  *((_DWORD *)a2 + 3) = v67.hGlobalShare;
  if ( v38 && ((*(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) - 6) & 0xFFFFFFFD) == 0 )
    v39 = (*(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 632LL))(v7[3].Count);
  else
    v39 = 0LL;
  *((_QWORD *)a2 + 41) = v39;
  if ( (*(_DWORD *)a2 & 0x40) != 0 )
  {
    memmove(*((void **)a2 + 46), Pool2->pPrivateDriverData, *((unsigned int *)a2 + 94));
    memmove(*((void **)a2 + 44), v66.pResourcePrivateDriverData, *((unsigned int *)a2 + 90));
  }
LABEL_48:
  if ( v62 )
  {
    p_pPrivateDriverData = &Pool2->pPrivateDriverData;
    v41 = v62;
    do
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*p_pPrivateDriverData);
      p_pPrivateDriverData += 12;
      --v41;
    }
    while ( v41 );
  }
LABEL_51:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v64);
LABEL_52:
  if ( P != v70 && P )
    ExFreePoolWithTag(P, 0);
LABEL_53:
  P = 0LL;
  v71 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v65);
  return (unsigned int)v16;
}
