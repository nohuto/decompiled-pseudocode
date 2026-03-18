/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x140356384
 * Callers:
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1401E5AAC (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1403506F4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x140354890 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x140007CCC (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
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

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        struct DXGDEVICE *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        struct COREDEVICEACCESS *a6,
        char a7,
        struct _EPROCESS *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  unsigned int v10; // r12d
  void *v14; // r15
  ADAPTER_RENDER *v15; // rcx
  __int64 v16; // rcx
  char v17; // di
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  D3DDDI_ALLOCATIONINFO *v22; // rax
  __int64 v23; // rcx
  char *v24; // r8
  D3DKMT_CREATESTANDARDALLOCATION *v25; // r9
  size_t v26; // rdx
  unsigned int v27; // ecx
  char *v28; // r9
  unsigned int *v29; // r15
  _QWORD *v30; // rdi
  unsigned int v31; // edx
  int v32; // eax
  int v33; // edi
  D3DKMT_HANDLE hResource; // eax
  unsigned int v35; // r10d
  _DWORD *v36; // r9
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  unsigned int v40; // ecx
  const void *v41; // rdx
  __int64 v42; // rdx
  unsigned int v43; // eax
  unsigned int v44; // eax
  __int64 v45; // rax
  unsigned int v46; // eax
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned int *v49; // r12
  __int64 v50; // rax
  unsigned int v51; // r9d
  unsigned int v52; // edx
  DXG_GUEST_VIRTUALGPU_VMBUS *v53; // rcx
  unsigned int v54; // r9d
  unsigned int v55; // eax
  struct DXGPROCESS *v56; // r15
  unsigned int v57; // eax
  __int64 v58; // r9
  int v59; // ecx
  struct _EX_RUNDOWN_REF *v60; // rdx
  unsigned int v61; // r12d
  unsigned int v62; // eax
  __int64 v63; // r9
  int v64; // ecx
  struct _EX_RUNDOWN_REF *v65; // rdx
  struct _EX_RUNDOWN_REF *v66; // r15
  unsigned int v67; // eax
  ULONG_PTR Count; // r13
  __int64 v69; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v71; // r8
  __int64 v72; // [rsp+28h] [rbp-D8h]
  __int64 v73; // [rsp+30h] [rbp-D0h]
  char *v74; // [rsp+80h] [rbp-80h]
  unsigned int *v75; // [rsp+80h] [rbp-80h]
  _BYTE v76[16]; // [rsp+88h] [rbp-78h] BYREF
  struct _EX_RUNDOWN_REF *v77; // [rsp+98h] [rbp-68h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-60h]
  __int64 v79; // [rsp+A8h] [rbp-58h]
  __int64 v80; // [rsp+B0h] [rbp-50h]
  struct DXGPROCESS *Current; // [rsp+B8h] [rbp-48h]
  struct _EX_RUNDOWN_REF *v82[2]; // [rsp+C0h] [rbp-40h] BYREF
  struct _D3DKMT_CREATEALLOCATION v83; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v84[80]; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v85; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v86; // [rsp+190h] [rbp+90h]
  void *v87; // [rsp+198h] [rbp+98h]

  v86 = a3;
  v10 = 0;
  v14 = 0LL;
  memset(&v83, 0, sizeof(v83));
  v15 = (ADAPTER_RENDER *)*((_QWORD *)a1 + 2);
  v86 = 0;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(v15) )
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
  Current = DXGPROCESS::GetCurrent(v16);
  v17 = BYTE1(*((_DWORD *)Current + 102)) & 1;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v76);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v76);
  if ( !a4 )
  {
    v33 = -1073741811;
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    WdLogGlobalForLineNumber = 7916;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Caller passed NULL for both the NT object and the global shared handle. Returning 0x%I64x",
      (__int64)a1,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_35;
  }
  v18 = *(_QWORD *)(a4 + 16);
  if ( !v18 )
  {
    v33 = -1073741811;
    WdLogSingleEntry3(3LL, a1, a4, -1073741811LL);
    WdLogGlobalForLineNumber = 7885;
LABEL_35:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v76);
    goto LABEL_27;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v18 + 136) - 44LL) & 2) != 0 )
  {
    v47 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 88LL);
    if ( v47 )
    {
      if ( !(*(unsigned int (**)(void))(v47 + 224))() )
      {
        v33 = -1073741790;
        WdLogSingleEntry1(4LL, -1073741790LL);
        WdLogGlobalForLineNumber = 7926;
        goto LABEL_35;
      }
    }
  }
  v19 = *(unsigned int *)(v18 + 132);
  if ( (_DWORD)v19 != *(_DWORD *)(a2 + 16) )
  {
    v33 = -1073741811;
    WdLogSingleEntry4(2LL, a1, v19, *(unsigned int *)(a2 + 16), -1073741811LL);
    v73 = *(unsigned int *)(a2 + 16);
    v72 = *(unsigned int *)(v18 + 132);
    WdLogGlobalForLineNumber = 7938;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Caller specified incorrect number of allocations, should have been 0x%I64x but was 0x%I64x, returning 0x%I64x",
      (__int64)a1,
      v72,
      v73,
      -1073741811LL,
      0LL);
    goto LABEL_35;
  }
  if ( (*(_DWORD *)(v18 + 12) & 4) != 0 )
  {
    v33 = -1073741811;
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    WdLogGlobalForLineNumber = 7949;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: PrivateRuntimeData has been marked as invalid, returning 0x%I64x",
      (__int64)a1,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_35;
  }
  if ( !v17 )
  {
    v20 = *(unsigned int *)(v18 + 112);
    if ( *(_DWORD *)(a2 + 32) != (_DWORD)v20 )
    {
      v33 = -1073741811;
      WdLogSingleEntry4(3LL, a1, *(unsigned int *)(a2 + 32), v20, -1073741811LL);
      WdLogGlobalForLineNumber = 7963;
      goto LABEL_35;
    }
    if ( (_DWORD)v20 )
      memmove(*(void **)(a2 + 40), *(const void **)(v18 + 104), (unsigned int)v20);
  }
  v21 = 96LL * *(unsigned int *)(a2 + 16);
  if ( !is_mul_ok(*(unsigned int *)(a2 + 16), 0x60uLL) )
    v21 = -1LL;
  v22 = (D3DDDI_ALLOCATIONINFO *)operator new[](v21, 0x4B677844u, 256LL);
  v23 = *(unsigned int *)(a2 + 16);
  v24 = (char *)v22;
  v87 = v22;
  if ( !v22 )
  {
    WdLogSingleEntry3(3LL, a1, v23, -1073741801LL);
    WdLogGlobalForLineNumber = 7982;
    goto LABEL_41;
  }
  v25 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 56);
  v26 = *(unsigned int *)(a2 + 48);
  v83.hDevice = *(_DWORD *)a2;
  v83.NumAllocations = v23;
  v83.hGlobalShare = 0;
  v83.pStandardAllocation = v25;
  v27 = *(_DWORD *)&v83.Flags & 0xFFFFFF7F | ((a7 & 1) << 7) | 0x41;
  v83.PrivateDriverDataSize = v26;
  v83.pAllocationInfo = v22;
  v83.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(v27 ^ (v27 ^ (32 * *(_DWORD *)(v18 + 12))) & 0x100000);
  if ( !v17 )
  {
    v46 = *(_DWORD *)(v18 + 128);
    if ( (_DWORD)v26 != v46 )
    {
      v33 = -1073741811;
      WdLogSingleEntry4(3LL, a1, v26, v46, -1073741811LL);
      WdLogGlobalForLineNumber = 8009;
      goto LABEL_39;
    }
  }
  if ( (_DWORD)v26 )
  {
    memmove(v25, *(const void **)(v18 + 120), v26);
    v24 = (char *)v87;
  }
  v28 = *(char **)(a2 + 72);
  v29 = (unsigned int *)(a2 + 64);
  v30 = *(_QWORD **)(v18 + 136);
  v31 = 0;
  while ( 1 )
  {
    v74 = v28;
    if ( v10 >= *(_DWORD *)(a2 + 16) )
      break;
    v40 = *((_DWORD *)v30 - 2);
    if ( v40 + v31 < v31 )
    {
      v33 = -1073741675;
      WdLogSingleEntry2(3LL, a1, -1073741675LL);
      WdLogGlobalForLineNumber = 8035;
      goto LABEL_39;
    }
    v29 = (unsigned int *)(a2 + 64);
    if ( v40 + v31 > *(_DWORD *)(a2 + 64) )
    {
      WdLogSingleEntry2(3LL, a1, -1073741801LL);
      WdLogGlobalForLineNumber = 8044;
LABEL_41:
      v33 = -1073741801;
LABEL_39:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v76);
      goto LABEL_26;
    }
    v41 = (const void *)*(v30 - 2);
    if ( v41 )
    {
      memmove(v28, v41, v40);
      v28 = v74;
      v24 = (char *)v87;
    }
    v42 = 96LL * v10;
    *(_DWORD *)&v24[v42] = 0;
    *(_QWORD *)&v24[v42 + 8] = 0LL;
    v43 = *((_DWORD *)v30 - 11);
    *(_DWORD *)&v24[v42 + 32] = 0;
    *(_DWORD *)&v24[v42 + 28] = (v43 >> 6) & 0xF;
    v44 = *((_DWORD *)v30 - 11);
    *(_QWORD *)&v24[v42 + 16] = v28;
    *(_DWORD *)&v24[v42 + 32] = v44 & 1 | (((v44 | (v44 >> 12)) & 2) != 0);
    *(_DWORD *)&v24[v42 + 24] = *((_DWORD *)v30 - 2);
    v45 = *((unsigned int *)v30 - 2);
    v28 += v45;
    v30 = (_QWORD *)*v30;
    v31 = v45 + v86;
    v86 += v45;
    ++v10;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v76);
  v32 = DXGDEVICE::CreateAllocation(
          a1,
          &v83,
          0,
          1u,
          (struct _DXGSHAREDALLOCOBJECT *)a4,
          0LL,
          a6,
          a5,
          a8,
          a9,
          a10,
          0LL,
          0LL,
          0LL,
          0);
  v33 = v32;
  if ( v32 < 0 )
  {
    WdLogSingleEntry1(3LL, v32);
    WdLogGlobalForLineNumber = 8075;
    goto LABEL_26;
  }
  hResource = v83.hResource;
  if ( !v83.hResource )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8080;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"KMCreateAlloc.hResource != 0", 8080LL, 0LL, 0LL, 0LL, 0LL);
    hResource = v83.hResource;
    v29 = (unsigned int *)(a2 + 64);
  }
  v35 = 0;
  v36 = *(_DWORD **)(a2 + 24);
  *v29 = v86;
  v37 = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 80) = hResource;
  if ( (_DWORD)v37 )
  {
    do
    {
      v38 = v35++;
      *v36 = *(&v83.pAllocationInfo->hAllocation + 24 * v38);
      v36 += 20;
      *((_QWORD *)v36 - 9) = *(_QWORD *)(a2 + 72)
                           + (unsigned int)(*((_DWORD *)&v83.pAllocationInfo->pPrivateDriverData + 24 * v38)
                                          - *(_DWORD *)(a2 + 72));
      *(v36 - 16) = *(&v83.pAllocationInfo->PrivateDriverDataSize + 24 * v38);
      v37 = *(unsigned int *)(a2 + 16);
    }
    while ( v35 < (unsigned int)v37 );
  }
  if ( (*((_BYTE *)a1 + 1917) & 1) != 0 )
  {
    v48 = 4 * v37;
    if ( !is_mul_ok(v37, 4uLL) )
      v48 = -1LL;
    v75 = (unsigned int *)operator new[](v48, 0x4B677844u, 256LL);
    v49 = v75;
    if ( !v75 )
    {
      v33 = -1073741801;
      goto LABEL_26;
    }
    v50 = *((_QWORD *)a1 + 2);
    v51 = *(_DWORD *)(v18 + 12);
    v85 = 0;
    v52 = *v29;
    v53 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(v50 + 16) + 4664LL);
    v54 = v51 >> 3;
    if ( (v54 & 1) != 0 )
      v55 = *(_DWORD *)(a4 + 40);
    else
      v55 = *(_DWORD *)(v18 + 28);
    v56 = Current;
    v33 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
            v53,
            Current,
            a1,
            v54 & 1,
            v55,
            *(_DWORD *)(a2 + 16),
            v52,
            &v85,
            v75);
    if ( v33 < 0 )
      goto LABEL_92;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v84, v56);
    v57 = (*(_DWORD *)(a2 + 80) >> 6) & 0xFFFFFF;
    if ( v57 < *((_DWORD *)v56 + 74) )
    {
      v58 = *((_QWORD *)v56 + 35);
      if ( ((*(_DWORD *)(a2 + 80) >> 25) & 0x60) == (*(_BYTE *)(v58 + 16LL * v57 + 8) & 0x60)
        && (*(_DWORD *)(v58 + 16LL * v57 + 8) & 0x2000) == 0 )
      {
        v59 = *(_DWORD *)(v58 + 16LL * v57 + 8) & 0x1F;
        if ( v59 )
        {
          if ( v59 == 4 )
          {
            v60 = *(struct _EX_RUNDOWN_REF **)(v58 + 16LL * v57);
            goto LABEL_66;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v60 = 0LL;
LABEL_66:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v82, v60);
    if ( !v82[0] )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 8126;
      v33 = -1073741811;
      goto LABEL_91;
    }
    v61 = 0;
    HIDWORD(v82[0][2].Ptr) = v85;
    while ( 1 )
    {
      if ( v61 >= *(_DWORD *)(a2 + 16) )
      {
LABEL_90:
        v49 = v75;
LABEL_91:
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(v82);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v84);
LABEL_92:
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v49);
        goto LABEL_26;
      }
      v62 = (*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80LL * v61) >> 6) & 0xFFFFFF;
      if ( v62 >= *((_DWORD *)v56 + 74) )
        goto LABEL_77;
      v63 = *((_QWORD *)v56 + 35);
      if ( ((*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80LL * v61) >> 25) & 0x60) != (*(_BYTE *)(v63 + 16LL * v62 + 8) & 0x60) )
        goto LABEL_77;
      if ( (*(_DWORD *)(v63 + 16LL * v62 + 8) & 0x2000) != 0 )
        goto LABEL_77;
      v64 = *(_DWORD *)(v63 + 16LL * v62 + 8) & 0x1F;
      if ( !v64 )
        goto LABEL_77;
      if ( v64 != 5 )
        break;
      v65 = *(struct _EX_RUNDOWN_REF **)(v63 + 16LL * v62);
LABEL_78:
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v77, v65);
      v66 = v77;
      if ( !v77 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 8137;
        v33 = -1073741811;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v77);
        goto LABEL_90;
      }
      v67 = v75[v61];
      LOBYTE(v77[16].Count) |= 4u;
      HIDWORD(v66[2].Ptr) = v67;
      v86 = v67;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
      {
        Count = v66[5].Count;
        if ( Count )
        {
          v78 = *(_QWORD *)(Count + 48);
          v79 = *(unsigned int *)(Count + 16);
        }
        else
        {
          v78 = 0LL;
          v79 = 0LL;
        }
        v82[1] = (struct _EX_RUNDOWN_REF *)LODWORD(v66[2].Count);
        if ( Count )
          v80 = *(_QWORD *)(Count + 56);
        else
          v80 = 0LL;
        v69 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
        CurrentProcessId = PsGetCurrentProcessId();
        McTemplateK0ppppppppppppq_EtwWriteTransfer(
          v80,
          &EventCreateDeviceAllocation,
          v71,
          CurrentProcessId,
          a1,
          v69,
          v66);
      }
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v77);
      v56 = Current;
      ++v61;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_77:
    v65 = 0LL;
    goto LABEL_78;
  }
LABEL_26:
  v14 = v87;
LABEL_27:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
  return (unsigned int)v33;
}
