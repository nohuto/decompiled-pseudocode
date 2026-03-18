/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x140361554
 * Callers:
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1401E08AC (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x14035B3A4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1403BCA40 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1400172A0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
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
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  D3DDDI_ALLOCATIONINFO *v23; // rax
  __int64 v24; // rcx
  char *v25; // r8
  D3DKMT_CREATESTANDARDALLOCATION *v26; // r9
  size_t v27; // rdx
  unsigned int v28; // ecx
  char *v29; // r9
  unsigned int *v30; // r15
  _QWORD *v31; // rdi
  unsigned int v32; // edx
  int v33; // eax
  int v34; // edi
  D3DKMT_HANDLE hResource; // eax
  unsigned int v36; // r10d
  _DWORD *v37; // r9
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  unsigned int v41; // ecx
  const void *v42; // rdx
  __int64 v43; // rdx
  unsigned int v44; // eax
  unsigned int v45; // eax
  __int64 v46; // rax
  unsigned int v47; // eax
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned int *v50; // r12
  __int64 v51; // rax
  unsigned int v52; // r9d
  unsigned int v53; // edx
  DXG_GUEST_VIRTUALGPU_VMBUS *v54; // rcx
  unsigned int v55; // r9d
  unsigned int v56; // eax
  struct DXGPROCESS *v57; // r15
  unsigned int v58; // eax
  __int64 v59; // r9
  int v60; // ecx
  struct _EX_RUNDOWN_REF *v61; // rdx
  unsigned int v62; // r12d
  unsigned int v63; // eax
  __int64 v64; // r9
  int v65; // ecx
  struct _EX_RUNDOWN_REF *v66; // rdx
  struct _EX_RUNDOWN_REF *v67; // r15
  unsigned int v68; // eax
  ULONG_PTR Count; // r13
  __int64 v70; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v72; // r8
  __int64 v73; // [rsp+28h] [rbp-D8h]
  __int64 v74; // [rsp+30h] [rbp-D0h]
  char *v75; // [rsp+80h] [rbp-80h]
  unsigned int *v76; // [rsp+80h] [rbp-80h]
  _BYTE v77[16]; // [rsp+88h] [rbp-78h] BYREF
  struct _EX_RUNDOWN_REF *v78; // [rsp+98h] [rbp-68h] BYREF
  __int64 v79; // [rsp+A0h] [rbp-60h]
  __int64 v80; // [rsp+A8h] [rbp-58h]
  __int64 v81; // [rsp+B0h] [rbp-50h]
  struct DXGPROCESS *Current; // [rsp+B8h] [rbp-48h]
  struct _EX_RUNDOWN_REF *v83[2]; // [rsp+C0h] [rbp-40h] BYREF
  struct _D3DKMT_CREATEALLOCATION v84; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v85[80]; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v86; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v87; // [rsp+190h] [rbp+90h]
  void *v88; // [rsp+198h] [rbp+98h]

  v87 = a3;
  v10 = 0;
  v14 = 0LL;
  memset(&v84, 0, sizeof(v84));
  v15 = (ADAPTER_RENDER *)*((_QWORD *)a1 + 2);
  v87 = 0;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(v15) )
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
  Current = DXGPROCESS::GetCurrent(v16);
  v17 = BYTE1(*((_DWORD *)Current + 102)) & 1;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v77);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v77);
  if ( !a4 )
  {
    v34 = -1073741811;
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    WdLogGlobalForLineNumber = 7868;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Caller passed NULL for both the NT object and the global shared handle. Returning 0x%I64x",
      (__int64)a1,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_35;
  }
  v19 = *(_QWORD *)(a4 + 16);
  if ( !v19 )
  {
    v34 = -1073741811;
    WdLogSingleEntry3(3LL, a1, a4, -1073741811LL);
    WdLogGlobalForLineNumber = 7837;
LABEL_35:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v77);
    goto LABEL_27;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v19 + 136) - 44LL) & 2) != 0 )
  {
    v48 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 88LL);
    if ( v48 )
    {
      if ( !(*(unsigned int (**)(void))(v48 + 224))() )
      {
        v34 = -1073741790;
        WdLogSingleEntry1(4LL, -1073741790LL);
        WdLogGlobalForLineNumber = 7878;
        goto LABEL_35;
      }
    }
  }
  v20 = *(unsigned int *)(v19 + 132);
  if ( (_DWORD)v20 != *(_DWORD *)(a2 + 16) )
  {
    v34 = -1073741811;
    WdLogSingleEntry4(2LL, a1, v20, *(unsigned int *)(a2 + 16), -1073741811LL);
    v74 = *(unsigned int *)(a2 + 16);
    v73 = *(unsigned int *)(v19 + 132);
    WdLogGlobalForLineNumber = 7890;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Caller specified incorrect number of allocations, should have been 0x%I64x but was 0x%I64x, returning 0x%I64x",
      (__int64)a1,
      v73,
      v74,
      -1073741811LL,
      0LL);
    goto LABEL_35;
  }
  if ( (*(_DWORD *)(v19 + 12) & 4) != 0 )
  {
    v34 = -1073741811;
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    WdLogGlobalForLineNumber = 7901;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
    v21 = *(unsigned int *)(v19 + 112);
    if ( *(_DWORD *)(a2 + 32) != (_DWORD)v21 )
    {
      v34 = -1073741811;
      WdLogSingleEntry4(3LL, a1, *(unsigned int *)(a2 + 32), v21, -1073741811LL);
      WdLogGlobalForLineNumber = 7915;
      goto LABEL_35;
    }
    if ( (_DWORD)v21 )
      memmove(*(void **)(a2 + 40), *(const void **)(v19 + 104), (unsigned int)v21);
  }
  v22 = 96LL * *(unsigned int *)(a2 + 16);
  if ( !is_mul_ok(*(unsigned int *)(a2 + 16), 0x60uLL) )
    v22 = -1LL;
  v23 = (D3DDDI_ALLOCATIONINFO *)operator new[](v22, 0x4B677844u, 256LL, v18);
  v24 = *(unsigned int *)(a2 + 16);
  v25 = (char *)v23;
  v88 = v23;
  if ( !v23 )
  {
    WdLogSingleEntry3(3LL, a1, v24, -1073741801LL);
    WdLogGlobalForLineNumber = 7934;
    goto LABEL_41;
  }
  v26 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 56);
  v27 = *(unsigned int *)(a2 + 48);
  v84.hDevice = *(_DWORD *)a2;
  v84.NumAllocations = v24;
  v84.hGlobalShare = 0;
  v84.pStandardAllocation = v26;
  v28 = *(_DWORD *)&v84.Flags & 0xFFFFFF7F | ((a7 & 1) << 7) | 0x41;
  v84.PrivateDriverDataSize = v27;
  v84.pAllocationInfo = v23;
  v84.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(v28 ^ (v28 ^ (32 * *(_DWORD *)(v19 + 12))) & 0x100000);
  if ( !v17 )
  {
    v47 = *(_DWORD *)(v19 + 128);
    if ( (_DWORD)v27 != v47 )
    {
      v34 = -1073741811;
      WdLogSingleEntry4(3LL, a1, v27, v47, -1073741811LL);
      WdLogGlobalForLineNumber = 7961;
      goto LABEL_39;
    }
  }
  if ( (_DWORD)v27 )
  {
    memmove(v26, *(const void **)(v19 + 120), v27);
    v25 = (char *)v88;
  }
  v29 = *(char **)(a2 + 72);
  v30 = (unsigned int *)(a2 + 64);
  v31 = *(_QWORD **)(v19 + 136);
  v32 = 0;
  while ( 1 )
  {
    v75 = v29;
    if ( v10 >= *(_DWORD *)(a2 + 16) )
      break;
    v41 = *((_DWORD *)v31 - 2);
    if ( v41 + v32 < v32 )
    {
      v34 = -1073741675;
      WdLogSingleEntry2(3LL, a1, -1073741675LL);
      WdLogGlobalForLineNumber = 7987;
      goto LABEL_39;
    }
    v30 = (unsigned int *)(a2 + 64);
    if ( v41 + v32 > *(_DWORD *)(a2 + 64) )
    {
      WdLogSingleEntry2(3LL, a1, -1073741801LL);
      WdLogGlobalForLineNumber = 7996;
LABEL_41:
      v34 = -1073741801;
LABEL_39:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v77);
      goto LABEL_26;
    }
    v42 = (const void *)*(v31 - 2);
    if ( v42 )
    {
      memmove(v29, v42, v41);
      v29 = v75;
      v25 = (char *)v88;
    }
    v43 = 96LL * v10;
    *(_DWORD *)&v25[v43] = 0;
    *(_QWORD *)&v25[v43 + 8] = 0LL;
    v44 = *((_DWORD *)v31 - 11);
    *(_DWORD *)&v25[v43 + 32] = 0;
    *(_DWORD *)&v25[v43 + 28] = (v44 >> 6) & 0xF;
    v45 = *((_DWORD *)v31 - 11);
    *(_QWORD *)&v25[v43 + 16] = v29;
    *(_DWORD *)&v25[v43 + 32] = v45 & 1 | (((v45 | (v45 >> 12)) & 2) != 0);
    *(_DWORD *)&v25[v43 + 24] = *((_DWORD *)v31 - 2);
    v46 = *((unsigned int *)v31 - 2);
    v29 += v46;
    v31 = (_QWORD *)*v31;
    v32 = v46 + v87;
    v87 += v46;
    ++v10;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v77);
  v33 = DXGDEVICE::CreateAllocation(
          a1,
          &v84,
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
  v34 = v33;
  if ( v33 < 0 )
  {
    WdLogSingleEntry1(3LL, v33);
    WdLogGlobalForLineNumber = 8027;
    goto LABEL_26;
  }
  hResource = v84.hResource;
  if ( !v84.hResource )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8032;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"KMCreateAlloc.hResource != 0", 8032LL, 0LL, 0LL, 0LL, 0LL);
    hResource = v84.hResource;
    v30 = (unsigned int *)(a2 + 64);
  }
  v36 = 0;
  v37 = *(_DWORD **)(a2 + 24);
  *v30 = v87;
  v38 = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 80) = hResource;
  if ( (_DWORD)v38 )
  {
    do
    {
      v39 = v36++;
      *v37 = *(&v84.pAllocationInfo->hAllocation + 24 * v39);
      v37 += 20;
      *((_QWORD *)v37 - 9) = *(_QWORD *)(a2 + 72)
                           + (unsigned int)(*((_DWORD *)&v84.pAllocationInfo->pPrivateDriverData + 24 * v39)
                                          - *(_DWORD *)(a2 + 72));
      *(v37 - 16) = *(&v84.pAllocationInfo->PrivateDriverDataSize + 24 * v39);
      v38 = *(unsigned int *)(a2 + 16);
    }
    while ( v36 < (unsigned int)v38 );
  }
  if ( (*((_BYTE *)a1 + 1901) & 1) != 0 )
  {
    v49 = 4 * v38;
    if ( !is_mul_ok(v38, 4uLL) )
      v49 = -1LL;
    v76 = (unsigned int *)operator new[](v49, 0x4B677844u, 256LL, (__int64)v37);
    v50 = v76;
    if ( !v76 )
    {
      v34 = -1073741801;
      goto LABEL_26;
    }
    v51 = *((_QWORD *)a1 + 2);
    v52 = *(_DWORD *)(v19 + 12);
    v86 = 0;
    v53 = *v30;
    v54 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(v51 + 16) + 4664LL);
    v55 = v52 >> 3;
    if ( (v55 & 1) != 0 )
      v56 = *(_DWORD *)(a4 + 40);
    else
      v56 = *(_DWORD *)(v19 + 28);
    v57 = Current;
    v34 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
            v54,
            Current,
            a1,
            v55 & 1,
            v56,
            *(_DWORD *)(a2 + 16),
            v53,
            &v86,
            v76);
    if ( v34 < 0 )
      goto LABEL_92;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v85, v57);
    v58 = (*(_DWORD *)(a2 + 80) >> 6) & 0xFFFFFF;
    if ( v58 < *((_DWORD *)v57 + 74) )
    {
      v59 = *((_QWORD *)v57 + 35);
      if ( ((*(_DWORD *)(a2 + 80) >> 25) & 0x60) == (*(_BYTE *)(v59 + 16LL * v58 + 8) & 0x60)
        && (*(_DWORD *)(v59 + 16LL * v58 + 8) & 0x2000) == 0 )
      {
        v60 = *(_DWORD *)(v59 + 16LL * v58 + 8) & 0x1F;
        if ( v60 )
        {
          if ( v60 == 4 )
          {
            v61 = *(struct _EX_RUNDOWN_REF **)(v59 + 16LL * v58);
            goto LABEL_66;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v61 = 0LL;
LABEL_66:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v83, v61);
    if ( !v83[0] )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 8078;
      v34 = -1073741811;
      goto LABEL_91;
    }
    v62 = 0;
    HIDWORD(v83[0][2].Ptr) = v86;
    while ( 1 )
    {
      if ( v62 >= *(_DWORD *)(a2 + 16) )
      {
LABEL_90:
        v50 = v76;
LABEL_91:
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(v83);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v85);
LABEL_92:
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v50);
        goto LABEL_26;
      }
      v63 = (*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80LL * v62) >> 6) & 0xFFFFFF;
      if ( v63 >= *((_DWORD *)v57 + 74) )
        goto LABEL_77;
      v64 = *((_QWORD *)v57 + 35);
      if ( ((*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80LL * v62) >> 25) & 0x60) != (*(_BYTE *)(v64 + 16LL * v63 + 8) & 0x60) )
        goto LABEL_77;
      if ( (*(_DWORD *)(v64 + 16LL * v63 + 8) & 0x2000) != 0 )
        goto LABEL_77;
      v65 = *(_DWORD *)(v64 + 16LL * v63 + 8) & 0x1F;
      if ( !v65 )
        goto LABEL_77;
      if ( v65 != 5 )
        break;
      v66 = *(struct _EX_RUNDOWN_REF **)(v64 + 16LL * v63);
LABEL_78:
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v78, v66);
      v67 = v78;
      if ( !v78 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 8089;
        v34 = -1073741811;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v78);
        goto LABEL_90;
      }
      v68 = v76[v62];
      LOBYTE(v78[16].Count) |= 4u;
      HIDWORD(v67[2].Ptr) = v68;
      v87 = v68;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
      {
        Count = v67[5].Count;
        if ( Count )
        {
          v79 = *(_QWORD *)(Count + 48);
          v80 = *(unsigned int *)(Count + 16);
        }
        else
        {
          v79 = 0LL;
          v80 = 0LL;
        }
        v83[1] = (struct _EX_RUNDOWN_REF *)LODWORD(v67[2].Count);
        if ( Count )
          v81 = *(_QWORD *)(Count + 56);
        else
          v81 = 0LL;
        v70 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
        CurrentProcessId = PsGetCurrentProcessId();
        McTemplateK0ppppppppppppq_EtwWriteTransfer(
          v81,
          &EventCreateDeviceAllocation,
          v72,
          CurrentProcessId,
          a1,
          v70,
          v67);
      }
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v78);
      v57 = Current;
      ++v62;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_77:
    v66 = 0LL;
    goto LABEL_78;
  }
LABEL_26:
  v14 = v88;
LABEL_27:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
  return (unsigned int)v34;
}
