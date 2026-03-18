/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x14035DD88
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x14035C5F8 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x14035F710 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1403CE630 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x14040674C (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1400172A0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x14001BA6C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14006BB88 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402A0560 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1402A1CA8 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2@Z @ 0x1402F91F8 (-VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140361FE0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 */

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
        struct DXGDEVICE *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        struct COREDEVICEACCESS *a6,
        unsigned int a7,
        struct _EPROCESS *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  unsigned int v10; // r12d
  __int64 v11; // r15
  ADAPTER_RENDER *v14; // rcx
  __int64 v15; // rcx
  struct DXGPROCESS *v16; // r13
  char v17; // di
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rbx
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // r12
  unsigned int v24; // eax
  __int64 v25; // rbx
  int v26; // edx
  int v27; // edi
  __int64 v28; // rax
  unsigned int v29; // eax
  unsigned int v30; // edx
  const wchar_t *v31; // r9
  unsigned int v32; // ecx
  unsigned int v33; // eax
  unsigned __int64 v34; // rax
  D3DDDI_ALLOCATIONINFO *v35; // r8
  D3DKMT_HANDLE v36; // eax
  D3DKMT_CREATESTANDARDALLOCATION *v37; // r9
  size_t v38; // rdx
  unsigned int v39; // eax
  char *v40; // r15
  _QWORD *v41; // rdi
  unsigned int v42; // edx
  unsigned int v43; // ecx
  const void *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  int v48; // eax
  D3DKMT_HANDLE hResource; // eax
  unsigned int v50; // r10d
  _DWORD *v51; // r9
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned int *v55; // r15
  unsigned int v56; // edx
  unsigned int v57; // r8d
  DXG_GUEST_VIRTUALGPU_VMBUS *v58; // rcx
  int v59; // r9d
  unsigned int v60; // eax
  struct DXGPROCESS *v61; // r12
  unsigned int v62; // eax
  __int64 v63; // r9
  int v64; // ecx
  struct _EX_RUNDOWN_REF *v65; // rdx
  unsigned int v66; // r12d
  unsigned int v67; // eax
  __int64 v68; // r9
  int v69; // ecx
  struct _EX_RUNDOWN_REF *v70; // rdx
  struct _EX_RUNDOWN_REF *v71; // r15
  int v72; // eax
  ULONG_PTR Count; // r13
  __int64 v74; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v76; // r8
  __int64 v78; // [rsp+28h] [rbp-D8h]
  __int64 v79; // [rsp+30h] [rbp-D0h]
  _BYTE v80[16]; // [rsp+80h] [rbp-80h] BYREF
  struct _EX_RUNDOWN_REF *v81; // [rsp+90h] [rbp-70h] BYREF
  __int64 v82; // [rsp+98h] [rbp-68h]
  struct DXGPROCESS *Current; // [rsp+A0h] [rbp-60h]
  __int64 v84; // [rsp+A8h] [rbp-58h]
  __int64 v85; // [rsp+B0h] [rbp-50h]
  __int64 v86; // [rsp+B8h] [rbp-48h]
  struct _EX_RUNDOWN_REF *v87[2]; // [rsp+C0h] [rbp-40h] BYREF
  struct _D3DKMT_CREATEALLOCATION v88; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v89[8]; // [rsp+120h] [rbp+20h] BYREF
  char *v90; // [rsp+128h] [rbp+28h]
  int v91; // [rsp+130h] [rbp+30h]
  D3DDDI_ALLOCATIONINFO *v92; // [rsp+180h] [rbp+80h]
  __int64 v93; // [rsp+198h] [rbp+98h] BYREF

  v93 = a4;
  v10 = 0;
  v11 = a3;
  v92 = 0LL;
  memset(&v88, 0, sizeof(v88));
  v14 = (ADAPTER_RENDER *)*((_QWORD *)a1 + 2);
  a7 = 0;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(v14) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7815;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      7815LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent(v15);
  v16 = Current;
  v17 = BYTE1(*((_DWORD *)Current + 102)) & 1;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v80);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v80);
  if ( !(_DWORD)v11 )
  {
    v27 = -1073741811;
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    v31 = L"Device 0x%I64x: Caller passed NULL for both the NT object and the global shared handle. Returning 0x%I64x";
    WdLogGlobalForLineNumber = 7868;
    goto LABEL_107;
  }
  if ( v17 )
  {
    v21 = *((_DWORD *)v16 + 102);
    if ( (v21 & 0x100) != 0 )
      v22 = *((_QWORD *)v16 + 74);
    else
      v22 = (unsigned __int64)v16 & -(__int64)((v21 & 0x80u) != 0);
    v23 = v22 + 248;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v22 + 248));
    v24 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
    if ( v24 < *(_DWORD *)(v22 + 296)
      && (v25 = *(_QWORD *)(v22 + 280), (((unsigned int)v11 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0x60))
      && (*(_DWORD *)(v25 + 16LL * v24 + 8) & 0x2000) == 0
      && (v26 = *(_DWORD *)(v25 + 16LL * v24 + 8) & 0x1F) != 0 )
    {
      if ( v26 == 2 )
      {
        ObjectA = *(_QWORD *)(v25 + 16LL * v24);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        ObjectA = 0LL;
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      ObjectA = 0LL;
    }
    _InterlockedAdd((volatile signed __int32 *)(v23 + 16), 0xFFFFFFFF);
    ExReleasePushLockSharedEx(v23, 0LL);
    KeLeaveCriticalRegion();
    v10 = 0;
  }
  else
  {
    Global = DXGGLOBAL::GetGlobal();
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v11, 2);
  }
  if ( !ObjectA )
  {
    v27 = -1073741811;
    WdLogSingleEntry3(3LL, a1, v11, -1073741811LL);
    WdLogGlobalForLineNumber = 7859;
LABEL_108:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v80);
    goto LABEL_109;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(ObjectA + 136) - 44LL) & 2) != 0 )
  {
    v28 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 88LL);
    if ( v28 )
    {
      if ( !(*(unsigned int (**)(void))(v28 + 224))() )
      {
        v27 = -1073741790;
        WdLogSingleEntry1(4LL, -1073741790LL);
        WdLogGlobalForLineNumber = 7878;
        goto LABEL_108;
      }
    }
  }
  v29 = *(_DWORD *)(ObjectA + 132);
  v30 = *(_DWORD *)(a2 + 8);
  if ( v29 != v30 )
  {
    v27 = -1073741811;
    WdLogSingleEntry4(2LL, a1, v29, v30, -1073741811LL);
    v79 = *(unsigned int *)(a2 + 8);
    v78 = *(unsigned int *)(ObjectA + 132);
    WdLogGlobalForLineNumber = 7890;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Caller specified incorrect number of allocations, should have been 0x%I64x but was 0x%I64x, returning 0x%I64x",
      (__int64)a1,
      v78,
      v79,
      -1073741811LL,
      0LL);
    goto LABEL_108;
  }
  if ( (*(_DWORD *)(ObjectA + 12) & 4) != 0 )
  {
    v27 = -1073741811;
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    v31 = L"Device 0x%I64x: PrivateRuntimeData has been marked as invalid, returning 0x%I64x";
    WdLogGlobalForLineNumber = 7901;
LABEL_107:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v31, (__int64)a1, -1073741811LL, 0LL, 0LL, 0LL);
    goto LABEL_108;
  }
  if ( !v17 )
  {
    v32 = *(_DWORD *)(a2 + 32);
    v33 = *(_DWORD *)(ObjectA + 112);
    if ( v32 != v33 )
    {
      v27 = -1073741811;
      WdLogSingleEntry4(3LL, a1, v32, v33, -1073741811LL);
      WdLogGlobalForLineNumber = 7915;
      goto LABEL_108;
    }
    if ( v33 )
      memmove(*(void **)(a2 + 24), *(const void **)(ObjectA + 104), *(unsigned int *)(ObjectA + 112));
  }
  v34 = 96LL * *(unsigned int *)(a2 + 8);
  if ( !is_mul_ok(*(unsigned int *)(a2 + 8), 0x60uLL) )
    v34 = -1LL;
  v35 = (D3DDDI_ALLOCATIONINFO *)operator new[](v34, 0x4B677844u, 256LL, v20);
  v92 = v35;
  if ( !v35 )
  {
    WdLogSingleEntry3(3LL, a1, *(unsigned int *)(a2 + 8), -1073741801LL);
    WdLogGlobalForLineNumber = 7934;
LABEL_37:
    v27 = -1073741801;
    goto LABEL_108;
  }
  v36 = *(_DWORD *)a2;
  v37 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 40);
  v38 = *(unsigned int *)(a2 + 48);
  v88.NumAllocations = *(_DWORD *)(a2 + 8);
  v88.hDevice = v36;
  v88.pStandardAllocation = v37;
  v88.PrivateDriverDataSize = v38;
  v88.hGlobalShare = v11;
  v88.pAllocationInfo = v35;
  v88.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v88.Flags & 0xFFEFFF3F | (32
                                                                                 * (*(_DWORD *)(ObjectA + 12) & 0x8000)) | 1);
  if ( !v17 )
  {
    v39 = *(_DWORD *)(ObjectA + 128);
    if ( (_DWORD)v38 != v39 )
    {
      v27 = -1073741811;
      WdLogSingleEntry4(3LL, a1, (unsigned int)v38, v39, -1073741811LL);
      WdLogGlobalForLineNumber = 7961;
      goto LABEL_108;
    }
  }
  if ( (_DWORD)v38 )
  {
    memmove(v37, *(const void **)(ObjectA + 120), v38);
    v35 = v92;
  }
  v40 = *(char **)(a2 + 56);
  v41 = *(_QWORD **)(ObjectA + 136);
  if ( *(_DWORD *)(a2 + 8) )
  {
    v42 = a7;
    while ( 1 )
    {
      v43 = *((_DWORD *)v41 - 2);
      if ( v43 + v42 < v42 )
        break;
      if ( v43 + v42 > *(_DWORD *)(a2 + 64) )
      {
        WdLogSingleEntry2(3LL, a1, -1073741801LL);
        WdLogGlobalForLineNumber = 7996;
        goto LABEL_37;
      }
      v44 = (const void *)*(v41 - 2);
      if ( v44 )
      {
        memmove(v40, v44, v43);
        v35 = v92;
      }
      v45 = v10++;
      v46 = 96 * v45;
      *(D3DKMT_HANDLE *)((char *)&v35->hAllocation + v46) = 0;
      *(const void **)((char *)&v35->pSystemMem + v46) = 0LL;
      LODWORD(v45) = *((_DWORD *)v41 - 11);
      *(UINT *)((char *)&v35->Flags.Value + v46) = 0;
      *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v35->VidPnSourceId + v46) = ((unsigned int)v45 >> 6) & 0xF;
      LODWORD(v45) = *((_DWORD *)v41 - 11);
      *(void **)((char *)&v35->pPrivateDriverData + v46) = v40;
      *(UINT *)((char *)&v35->Flags.Value + v46) = v45 & 1 | ((((unsigned int)v45 | ((unsigned int)v45 >> 12)) & 2) != 0);
      *(UINT *)((char *)&v35->PrivateDriverDataSize + v46) = *((_DWORD *)v41 - 2);
      v47 = *((unsigned int *)v41 - 2);
      v40 += v47;
      v41 = (_QWORD *)*v41;
      v42 = v47 + a7;
      a7 += v47;
      if ( v10 >= *(_DWORD *)(a2 + 8) )
        goto LABEL_50;
    }
    v27 = -1073741675;
    WdLogSingleEntry2(3LL, a1, -1073741675LL);
    WdLogGlobalForLineNumber = 7987;
    goto LABEL_108;
  }
LABEL_50:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v80);
  v48 = DXGDEVICE::CreateAllocation(a1, &v88, 0, 1u, 0LL, 0LL, a6, a5, a8, a9, a10, 0LL, 0LL, 0LL, 0);
  v27 = v48;
  if ( v48 < 0 )
  {
    WdLogSingleEntry1(3LL, v48);
    WdLogGlobalForLineNumber = 8027;
    goto LABEL_109;
  }
  hResource = v88.hResource;
  if ( !v88.hResource )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8032;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"KMCreateAlloc.hResource != 0", 8032LL, 0LL, 0LL, 0LL, 0LL);
    hResource = v88.hResource;
  }
  v50 = 0;
  v51 = *(_DWORD **)(a2 + 16);
  *(_DWORD *)(a2 + 64) = a7;
  v52 = *(unsigned int *)(a2 + 8);
  *(_DWORD *)(a2 + 68) = hResource;
  if ( (_DWORD)v52 )
  {
    do
    {
      v53 = v50++;
      *v51 = *(&v88.pAllocationInfo->hAllocation + 24 * v53);
      v51 += 20;
      *((_QWORD *)v51 - 9) = *(_QWORD *)(a2 + 56)
                           + (unsigned int)(*((_DWORD *)&v88.pAllocationInfo->pPrivateDriverData + 24 * v53)
                                          - *(_DWORD *)(a2 + 56));
      *(v51 - 16) = *(&v88.pAllocationInfo->PrivateDriverDataSize + 24 * v53);
      v52 = *(unsigned int *)(a2 + 8);
    }
    while ( v50 < (unsigned int)v52 );
  }
  if ( (*((_BYTE *)a1 + 1901) & 1) != 0 )
  {
    v54 = 4 * v52;
    if ( !is_mul_ok(v52, 4uLL) )
      v54 = -1LL;
    v82 = operator new[](v54, 0x4B677844u, 256LL, (__int64)v51);
    v55 = (unsigned int *)v82;
    if ( !v82 )
    {
      v27 = -1073741801;
      goto LABEL_109;
    }
    if ( (*(_DWORD *)(ObjectA + 12) & 8) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8061;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"!pSharedResource->m_NtSecuritySharing || pSharedAllocObject",
        8061LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v56 = *(_DWORD *)(a2 + 64);
    v57 = *(_DWORD *)(a2 + 8);
    v58 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) + 4664LL);
    v59 = *(_DWORD *)(ObjectA + 12) >> 3;
    LODWORD(v93) = 0;
    if ( (v59 & 1) != 0 )
      v60 = MEMORY[0x28];
    else
      v60 = *(_DWORD *)(ObjectA + 28);
    v61 = Current;
    v27 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
            v58,
            Current,
            a1,
            v59 & 1,
            v60,
            v57,
            v56,
            (unsigned int *)&v93,
            v55);
    if ( v27 < 0 )
    {
LABEL_105:
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v55);
      goto LABEL_109;
    }
    v91 = 0;
    v90 = (char *)v61 + 248;
    if ( v61 != (struct DXGPROCESS *)-248LL )
    {
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      if ( *((struct _KTHREAD **)v61 + 32) == KeGetCurrentThread() )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1575;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
          1575LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v89);
    v62 = (*(_DWORD *)(a2 + 68) >> 6) & 0xFFFFFF;
    if ( v62 < *((_DWORD *)v61 + 74) )
    {
      v63 = *((_QWORD *)v61 + 35);
      if ( ((*(_DWORD *)(a2 + 68) >> 25) & 0x60) == (*(_BYTE *)(v63 + 16LL * v62 + 8) & 0x60)
        && (*(_DWORD *)(v63 + 16LL * v62 + 8) & 0x2000) == 0 )
      {
        v64 = *(_DWORD *)(v63 + 16LL * v62 + 8) & 0x1F;
        if ( v64 )
        {
          if ( v64 == 4 )
          {
            v65 = *(struct _EX_RUNDOWN_REF **)(v63 + 16LL * v62);
            goto LABEL_79;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v65 = 0LL;
LABEL_79:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v87, v65);
    if ( v87[0] )
    {
      v66 = 0;
      HIDWORD(v87[0][2].Ptr) = v93;
      if ( *(_DWORD *)(a2 + 8) )
      {
        while ( 1 )
        {
          v67 = (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v66) >> 6) & 0xFFFFFF;
          if ( v67 < *((_DWORD *)Current + 74)
            && (v68 = *((_QWORD *)Current + 35),
                ((*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v66) >> 25) & 0x60) == (*(_BYTE *)(v68 + 16LL * v67 + 8) & 0x60))
            && (*(_DWORD *)(v68 + 16LL * v67 + 8) & 0x2000) == 0
            && (v69 = *(_DWORD *)(v68 + 16LL * v67 + 8) & 0x1F) != 0 )
          {
            if ( v69 == 5 )
            {
              v70 = *(struct _EX_RUNDOWN_REF **)(v68 + 16LL * v67);
            }
            else
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 318;
              DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
              v70 = 0LL;
            }
          }
          else
          {
            v70 = 0LL;
          }
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v81, v70);
          v71 = v81;
          if ( !v81 )
            break;
          v72 = *(_DWORD *)(v82 + 4LL * v66);
          LOBYTE(v81[16].Count) |= 4u;
          HIDWORD(v71[2].Ptr) = v72;
          a7 = v72;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
          {
            Count = v71[5].Count;
            if ( Count )
            {
              v84 = *(_QWORD *)(Count + 48);
              v85 = *(unsigned int *)(Count + 16);
            }
            else
            {
              v84 = 0LL;
              v85 = 0LL;
            }
            v87[1] = (struct _EX_RUNDOWN_REF *)LODWORD(v71[2].Count);
            if ( Count )
              v86 = *(_QWORD *)(Count + 56);
            else
              v86 = 0LL;
            v74 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
            CurrentProcessId = PsGetCurrentProcessId();
            McTemplateK0ppppppppppppq_EtwWriteTransfer(
              v86,
              &EventCreateDeviceAllocation,
              v76,
              CurrentProcessId,
              a1,
              v74,
              v71);
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v81);
          if ( ++v66 >= *(_DWORD *)(a2 + 8) )
            goto LABEL_103;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 8089;
        v27 = -1073741811;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v81);
LABEL_103:
        v55 = (unsigned int *)v82;
      }
    }
    else
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 8078;
      v27 = -1073741811;
    }
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(v87);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v89);
    goto LABEL_105;
  }
LABEL_109:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v92);
  return (unsigned int)v27;
}
