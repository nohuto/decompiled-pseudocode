/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1403530D4
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x140351948 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x140353EC0 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x140389AA4 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x14041F9CC (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x140007CCC (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x14000C48C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140011820 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002BEA0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14006B8A4 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x14032B83C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140356E10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2@Z @ 0x1403DF2A0 (-VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2.c)
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
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // r12
  unsigned int v23; // eax
  __int64 v24; // rbx
  int v25; // edx
  int v26; // edi
  __int64 v27; // rax
  unsigned int v28; // eax
  unsigned int v29; // edx
  const wchar_t *v30; // r9
  unsigned int v31; // ecx
  unsigned int v32; // eax
  unsigned __int64 v33; // rax
  D3DDDI_ALLOCATIONINFO *v34; // r8
  D3DKMT_HANDLE v35; // eax
  D3DKMT_CREATESTANDARDALLOCATION *v36; // r9
  size_t v37; // rdx
  unsigned int v38; // eax
  char *v39; // r15
  _QWORD *v40; // rdi
  unsigned int v41; // edx
  unsigned int v42; // ecx
  const void *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  unsigned int v47; // r12d
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
  struct DXGPROCESS *v61; // rbx
  unsigned int v62; // eax
  __int64 v63; // r9
  int v64; // ecx
  struct _EX_RUNDOWN_REF *v65; // rdx
  unsigned int v66; // eax
  __int64 v67; // r9
  int v68; // ecx
  struct _EX_RUNDOWN_REF *v69; // rdx
  struct _EX_RUNDOWN_REF *v70; // r15
  int v71; // eax
  ULONG_PTR Count; // r13
  __int64 v73; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v75; // r8
  __int64 v77; // [rsp+28h] [rbp-D8h]
  __int64 v78; // [rsp+30h] [rbp-D0h]
  _BYTE v79[16]; // [rsp+80h] [rbp-80h] BYREF
  struct _EX_RUNDOWN_REF *v80; // [rsp+90h] [rbp-70h] BYREF
  __int64 v81; // [rsp+98h] [rbp-68h]
  struct DXGPROCESS *Current; // [rsp+A0h] [rbp-60h]
  __int64 v83; // [rsp+A8h] [rbp-58h]
  __int64 v84; // [rsp+B0h] [rbp-50h]
  __int64 v85; // [rsp+B8h] [rbp-48h]
  struct _EX_RUNDOWN_REF *v86[2]; // [rsp+C0h] [rbp-40h] BYREF
  struct _D3DKMT_CREATEALLOCATION v87; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v88[8]; // [rsp+120h] [rbp+20h] BYREF
  char *v89; // [rsp+128h] [rbp+28h]
  int v90; // [rsp+130h] [rbp+30h]
  D3DDDI_ALLOCATIONINFO *v91; // [rsp+180h] [rbp+80h]
  __int64 v92; // [rsp+198h] [rbp+98h] BYREF

  v92 = a4;
  v10 = 0;
  v11 = a3;
  v91 = 0LL;
  memset(&v87, 0, sizeof(v87));
  v14 = (ADAPTER_RENDER *)*((_QWORD *)a1 + 2);
  a7 = 0;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(v14) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7863;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      7863LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent(v15);
  v16 = Current;
  v17 = BYTE1(*((_DWORD *)Current + 102)) & 1;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v79);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v79);
  if ( !(_DWORD)v11 )
  {
    v26 = -1073741811;
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    v30 = L"Device 0x%I64x: Caller passed NULL for both the NT object and the global shared handle. Returning 0x%I64x";
    WdLogGlobalForLineNumber = 7916;
    goto LABEL_107;
  }
  if ( v17 )
  {
    v20 = *((_DWORD *)v16 + 102);
    if ( (v20 & 0x100) != 0 )
      v21 = *((_QWORD *)v16 + 74);
    else
      v21 = (unsigned __int64)v16 & -(__int64)((v20 & 0x80u) != 0);
    v22 = v21 + 248;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v21 + 248));
    v23 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
    if ( v23 < *(_DWORD *)(v21 + 296)
      && (v24 = *(_QWORD *)(v21 + 280), (((unsigned int)v11 >> 25) & 0x60) == (*(_BYTE *)(v24 + 16LL * v23 + 8) & 0x60))
      && (*(_DWORD *)(v24 + 16LL * v23 + 8) & 0x2000) == 0
      && (v25 = *(_DWORD *)(v24 + 16LL * v23 + 8) & 0x1F) != 0 )
    {
      if ( v25 == 2 )
      {
        ObjectA = *(_QWORD *)(v24 + 16LL * v23);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        ObjectA = 0LL;
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      ObjectA = 0LL;
    }
    _InterlockedAdd((volatile signed __int32 *)(v22 + 16), 0xFFFFFFFF);
    ExReleasePushLockSharedEx(v22, 0LL);
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
    v26 = -1073741811;
    WdLogSingleEntry3(3LL, a1, v11, -1073741811LL);
    WdLogGlobalForLineNumber = 7907;
LABEL_108:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v79);
    goto LABEL_109;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(ObjectA + 136) - 44LL) & 2) != 0 )
  {
    v27 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 88LL);
    if ( v27 )
    {
      if ( !(*(unsigned int (**)(void))(v27 + 224))() )
      {
        v26 = -1073741790;
        WdLogSingleEntry1(4LL, -1073741790LL);
        WdLogGlobalForLineNumber = 7926;
        goto LABEL_108;
      }
    }
  }
  v28 = *(_DWORD *)(ObjectA + 132);
  v29 = *(_DWORD *)(a2 + 8);
  if ( v28 != v29 )
  {
    v26 = -1073741811;
    WdLogSingleEntry4(2LL, a1, v28, v29, -1073741811LL);
    v78 = *(unsigned int *)(a2 + 8);
    v77 = *(unsigned int *)(ObjectA + 132);
    WdLogGlobalForLineNumber = 7938;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Caller specified incorrect number of allocations, should have been 0x%I64x but was 0x%I64x, returning 0x%I64x",
      (__int64)a1,
      v77,
      v78,
      -1073741811LL,
      0LL);
    goto LABEL_108;
  }
  if ( (*(_DWORD *)(ObjectA + 12) & 4) != 0 )
  {
    v26 = -1073741811;
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    v30 = L"Device 0x%I64x: PrivateRuntimeData has been marked as invalid, returning 0x%I64x";
    WdLogGlobalForLineNumber = 7949;
LABEL_107:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v30, (__int64)a1, -1073741811LL, 0LL, 0LL, 0LL);
    goto LABEL_108;
  }
  if ( !v17 )
  {
    v31 = *(_DWORD *)(a2 + 32);
    v32 = *(_DWORD *)(ObjectA + 112);
    if ( v31 != v32 )
    {
      v26 = -1073741811;
      WdLogSingleEntry4(3LL, a1, v31, v32, -1073741811LL);
      WdLogGlobalForLineNumber = 7963;
      goto LABEL_108;
    }
    if ( v32 )
      memmove(*(void **)(a2 + 24), *(const void **)(ObjectA + 104), *(unsigned int *)(ObjectA + 112));
  }
  v33 = 96LL * *(unsigned int *)(a2 + 8);
  if ( !is_mul_ok(*(unsigned int *)(a2 + 8), 0x60uLL) )
    v33 = -1LL;
  v34 = (D3DDDI_ALLOCATIONINFO *)operator new[](v33, 0x4B677844u, 256LL);
  v91 = v34;
  if ( !v34 )
  {
    WdLogSingleEntry3(3LL, a1, *(unsigned int *)(a2 + 8), -1073741801LL);
    WdLogGlobalForLineNumber = 7982;
LABEL_37:
    v26 = -1073741801;
    goto LABEL_108;
  }
  v35 = *(_DWORD *)a2;
  v36 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 40);
  v37 = *(unsigned int *)(a2 + 48);
  v87.NumAllocations = *(_DWORD *)(a2 + 8);
  v87.hDevice = v35;
  v87.pStandardAllocation = v36;
  v87.PrivateDriverDataSize = v37;
  v87.hGlobalShare = v11;
  v87.pAllocationInfo = v34;
  v87.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v87.Flags & 0xFFEFFF3F | (32
                                                                                 * (*(_DWORD *)(ObjectA + 12) & 0x8000)) | 1);
  if ( !v17 )
  {
    v38 = *(_DWORD *)(ObjectA + 128);
    if ( (_DWORD)v37 != v38 )
    {
      v26 = -1073741811;
      WdLogSingleEntry4(3LL, a1, (unsigned int)v37, v38, -1073741811LL);
      WdLogGlobalForLineNumber = 8009;
      goto LABEL_108;
    }
  }
  if ( (_DWORD)v37 )
  {
    memmove(v36, *(const void **)(ObjectA + 120), v37);
    v34 = v91;
  }
  v39 = *(char **)(a2 + 56);
  v40 = *(_QWORD **)(ObjectA + 136);
  if ( *(_DWORD *)(a2 + 8) )
  {
    v41 = a7;
    while ( 1 )
    {
      v42 = *((_DWORD *)v40 - 2);
      if ( v42 + v41 < v41 )
        break;
      if ( v42 + v41 > *(_DWORD *)(a2 + 64) )
      {
        WdLogSingleEntry2(3LL, a1, -1073741801LL);
        WdLogGlobalForLineNumber = 8044;
        goto LABEL_37;
      }
      v43 = (const void *)*(v40 - 2);
      if ( v43 )
      {
        memmove(v39, v43, v42);
        v34 = v91;
      }
      v44 = v10++;
      v45 = 96 * v44;
      *(D3DKMT_HANDLE *)((char *)&v34->hAllocation + v45) = 0;
      *(const void **)((char *)&v34->pSystemMem + v45) = 0LL;
      LODWORD(v44) = *((_DWORD *)v40 - 11);
      *(UINT *)((char *)&v34->Flags.Value + v45) = 0;
      *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v34->VidPnSourceId + v45) = ((unsigned int)v44 >> 6) & 0xF;
      LODWORD(v44) = *((_DWORD *)v40 - 11);
      *(void **)((char *)&v34->pPrivateDriverData + v45) = v39;
      *(UINT *)((char *)&v34->Flags.Value + v45) = v44 & 1 | ((((unsigned int)v44 | ((unsigned int)v44 >> 12)) & 2) != 0);
      *(UINT *)((char *)&v34->PrivateDriverDataSize + v45) = *((_DWORD *)v40 - 2);
      v46 = *((unsigned int *)v40 - 2);
      v39 += v46;
      v40 = (_QWORD *)*v40;
      v41 = v46 + a7;
      a7 += v46;
      if ( v10 >= *(_DWORD *)(a2 + 8) )
        goto LABEL_50;
    }
    v26 = -1073741675;
    WdLogSingleEntry2(3LL, a1, -1073741675LL);
    WdLogGlobalForLineNumber = 8035;
    goto LABEL_108;
  }
LABEL_50:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v79);
  v47 = 0;
  v48 = DXGDEVICE::CreateAllocation(a1, &v87, 0, 1u, 0LL, 0LL, a6, a5, a8, a9, a10, 0LL, 0LL, 0LL, 0);
  v26 = v48;
  if ( v48 < 0 )
  {
    WdLogSingleEntry1(3LL, v48);
    WdLogGlobalForLineNumber = 8075;
    goto LABEL_109;
  }
  hResource = v87.hResource;
  if ( !v87.hResource )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8080;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"KMCreateAlloc.hResource != 0", 8080LL, 0LL, 0LL, 0LL, 0LL);
    hResource = v87.hResource;
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
      *v51 = *(&v87.pAllocationInfo->hAllocation + 24 * v53);
      v51 += 20;
      *((_QWORD *)v51 - 9) = *(_QWORD *)(a2 + 56)
                           + (unsigned int)(*((_DWORD *)&v87.pAllocationInfo->pPrivateDriverData + 24 * v53)
                                          - *(_DWORD *)(a2 + 56));
      *(v51 - 16) = *(&v87.pAllocationInfo->PrivateDriverDataSize + 24 * v53);
      v52 = *(unsigned int *)(a2 + 8);
    }
    while ( v50 < (unsigned int)v52 );
  }
  if ( (*((_BYTE *)a1 + 1917) & 1) != 0 )
  {
    v54 = 4 * v52;
    if ( !is_mul_ok(v52, 4uLL) )
      v54 = -1LL;
    v81 = operator new[](v54, 0x4B677844u, 256LL);
    v55 = (unsigned int *)v81;
    if ( !v81 )
    {
      v26 = -1073741801;
      goto LABEL_109;
    }
    if ( (*(_DWORD *)(ObjectA + 12) & 8) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8109;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"!pSharedResource->m_NtSecuritySharing || pSharedAllocObject",
        8109LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v56 = *(_DWORD *)(a2 + 64);
    v57 = *(_DWORD *)(a2 + 8);
    v58 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) + 4664LL);
    v59 = *(_DWORD *)(ObjectA + 12) >> 3;
    LODWORD(v92) = 0;
    if ( (v59 & 1) != 0 )
      v60 = MEMORY[0x28];
    else
      v60 = *(_DWORD *)(ObjectA + 28);
    v61 = Current;
    v26 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
            v58,
            Current,
            a1,
            v59 & 1,
            v60,
            v57,
            v56,
            (unsigned int *)&v92,
            v55);
    if ( v26 < 0 )
    {
LABEL_105:
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v55);
      goto LABEL_109;
    }
    v90 = 0;
    v89 = (char *)v61 + 248;
    if ( v61 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v61 + 32) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1512;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1512LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v88);
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
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v65 = 0LL;
LABEL_79:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v86, v65);
    if ( v86[0] )
    {
      HIDWORD(v86[0][2].Ptr) = v92;
      if ( *(_DWORD *)(a2 + 8) )
      {
        while ( 1 )
        {
          v66 = (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v47) >> 6) & 0xFFFFFF;
          if ( v66 < *((_DWORD *)Current + 74)
            && (v67 = *((_QWORD *)Current + 35),
                ((*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v47) >> 25) & 0x60) == (*(_BYTE *)(v67 + 16LL * v66 + 8) & 0x60))
            && (*(_DWORD *)(v67 + 16LL * v66 + 8) & 0x2000) == 0
            && (v68 = *(_DWORD *)(v67 + 16LL * v66 + 8) & 0x1F) != 0 )
          {
            if ( v68 == 5 )
            {
              v69 = *(struct _EX_RUNDOWN_REF **)(v67 + 16LL * v66);
            }
            else
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 318;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Handle type mismatch",
                318LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v69 = 0LL;
            }
          }
          else
          {
            v69 = 0LL;
          }
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v80, v69);
          v70 = v80;
          if ( !v80 )
            break;
          v71 = *(_DWORD *)(v81 + 4LL * v47);
          LOBYTE(v80[16].Count) |= 4u;
          HIDWORD(v70[2].Ptr) = v71;
          a7 = v71;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
          {
            Count = v70[5].Count;
            if ( Count )
            {
              v83 = *(_QWORD *)(Count + 48);
              v84 = *(unsigned int *)(Count + 16);
            }
            else
            {
              v83 = 0LL;
              v84 = 0LL;
            }
            v86[1] = (struct _EX_RUNDOWN_REF *)LODWORD(v70[2].Count);
            if ( Count )
              v85 = *(_QWORD *)(Count + 56);
            else
              v85 = 0LL;
            v73 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
            CurrentProcessId = PsGetCurrentProcessId();
            McTemplateK0ppppppppppppq_EtwWriteTransfer(
              v85,
              &EventCreateDeviceAllocation,
              v75,
              CurrentProcessId,
              a1,
              v73,
              v70);
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v80);
          if ( ++v47 >= *(_DWORD *)(a2 + 8) )
            goto LABEL_103;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 8137;
        v26 = -1073741811;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v80);
LABEL_103:
        v55 = (unsigned int *)v81;
      }
    }
    else
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 8126;
      v26 = -1073741811;
    }
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(v86);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v88);
    goto LABEL_105;
  }
LABEL_109:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v91);
  return (unsigned int)v26;
}
