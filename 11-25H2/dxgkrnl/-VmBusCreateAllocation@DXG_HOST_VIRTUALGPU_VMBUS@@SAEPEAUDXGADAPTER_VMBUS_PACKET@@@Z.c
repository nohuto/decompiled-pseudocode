/*
 * XREFs of ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402E34B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140015280 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14001E450 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002D660 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1400396F4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K3@Z @ 0x14003B124 (-VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MUL.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400582F0 (-VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAP.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140058A7C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     ?VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x140058AD0 (-VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402A2AD0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1402E3F98 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z @ 0x1403B0764 (-ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateAllocation(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // si
  __int64 v3; // rcx
  __int64 v4; // r14
  struct DXGPROCESS *Current; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // rax
  const wchar_t *v8; // r9
  unsigned int v9; // edx
  __int64 v10; // r8
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // ebx
  unsigned int v16; // edx
  unsigned int v17; // edi
  unsigned int v18; // r11d
  unsigned __int64 v19; // rax
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  _DWORD *v22; // r12
  __int64 v23; // r9
  unsigned int v24; // r13d
  UINT v25; // ecx
  unsigned int v26; // edx
  D3DKMT_CREATEALLOCATIONFLAGS v27; // ecx
  char *pAllocationInfo; // r8
  unsigned int i; // edi
  int v30; // eax
  __int64 v31; // rdx
  UINT v32; // ecx
  int v33; // eax
  char Flags; // al
  unsigned int v35; // r13d
  DXGPUSHLOCK *v36; // rdx
  unsigned int v37; // ebx
  unsigned int v38; // eax
  __int64 v39; // r8
  int v40; // ecx
  struct _EX_RUNDOWN_REF *v41; // rdx
  volatile signed __int32 *v42; // rax
  struct _EX_RUNDOWN_REF *v43; // r8
  __int64 v44; // rdi
  int v45; // edx
  int v46; // ecx
  int v47; // edx
  int v48; // ecx
  int v49; // edx
  int v50; // ecx
  int v51; // edx
  int v52; // ecx
  int v53; // edx
  int v54; // ecx
  int v55; // edx
  int v56; // ecx
  D3DDDI_ALLOCATIONINFO *v57; // rdx
  __int64 v58; // rcx
  char *v59; // rbx
  __int64 v60; // r8
  char v61; // cl
  struct DXGDEVICE *Count; // rbx
  unsigned __int64 v63; // rdx
  __int64 v64; // rdi
  struct VIDMM_DEVICE *v65; // rdx
  int Resident; // eax
  __int64 v67; // rbx
  unsigned __int64 v68; // rdx
  __int64 v69; // rbx
  struct _EX_RUNDOWN_REF *v71; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v72; // [rsp+60h] [rbp-A8h]
  void *v73; // [rsp+68h] [rbp-A0h]
  __int64 v74; // [rsp+70h] [rbp-98h]
  __int64 v75; // [rsp+78h] [rbp-90h]
  void *v76; // [rsp+80h] [rbp-88h]
  struct DXGPROCESS *v77; // [rsp+88h] [rbp-80h]
  struct VIDMM_PAGING_QUEUE *v78; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v79; // [rsp+98h] [rbp-70h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v80; // [rsp+A0h] [rbp-68h] BYREF
  volatile signed __int32 *v81; // [rsp+A8h] [rbp-60h]
  void *v82; // [rsp+B0h] [rbp-58h]
  _D3DKMT_CREATEALLOCATION v83; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v84; // [rsp+108h] [rbp+0h]
  unsigned __int64 v85; // [rsp+110h] [rbp+8h] BYREF
  struct DXGADAPTER_VMBUS_PACKET *v86; // [rsp+118h] [rbp+10h]
  _BYTE v87[24]; // [rsp+120h] [rbp+18h] BYREF
  char v88[8]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v89[64]; // [rsp+140h] [rbp+38h] BYREF
  _BYTE v90[64]; // [rsp+180h] [rbp+78h] BYREF
  struct DXGDEVICE *v91; // [rsp+1C0h] [rbp+B8h]
  char v92; // [rsp+1C8h] [rbp+C0h]

  v86 = a1;
  v2 = 0;
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
  if ( !v4 )
    return 0;
  Current = DXGPROCESS::GetCurrent(v3);
  v6 = *(unsigned int *)(v4 + 40);
  v77 = Current;
  v84 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL);
  LODWORD(v72) = *((_DWORD *)a1 + 38);
  if ( !(_DWORD)v6 )
  {
    WdLogSingleEntry0(2LL);
    v7 = 1299LL;
    goto LABEL_83;
  }
  if ( (*(_DWORD *)(v4 + 44) & 0x1000) == 0 )
  {
    v9 = 12 * v6;
    if ( 12 * v6 > 0xFFFFFFFF )
    {
      WdLogSingleEntry0(2LL);
      v7 = 1312LL;
LABEL_83:
      v8 = L"Invalid packet size";
      goto LABEL_84;
    }
    v10 = *((unsigned int *)a1 + 36);
    if ( v10 - 64 < (unsigned __int64)v9 )
    {
      WdLogSingleEntry0(2LL);
      v7 = 1318LL;
      goto LABEL_83;
    }
    v11 = v9 + 64;
    v12 = *(_DWORD *)(v4 + 32);
    LODWORD(v73) = v11;
    if ( (unsigned int)v10 - v11 < v12 )
    {
      WdLogSingleEntry0(2LL);
      v7 = 1324LL;
      goto LABEL_83;
    }
    v13 = v12 + v11;
    v14 = *(_DWORD *)(v4 + 36);
    LODWORD(v71) = v13;
    if ( (unsigned int)v10 - v13 < v14 )
    {
      WdLogSingleEntry0(2LL);
      v7 = 1330LL;
      goto LABEL_83;
    }
    v15 = v14 + v13;
    v16 = 0;
    v17 = v15;
    while ( v16 < (unsigned int)v6 )
    {
      v18 = *(_DWORD *)(v4 + 12LL * v16 + 68);
      if ( (unsigned int)v10 - v17 < v18 )
      {
        WdLogSingleEntry0(2LL);
        v7 = 1341LL;
        goto LABEL_83;
      }
      v17 += v18;
      ++v16;
    }
    v19 = 96 * v6;
    if ( !is_mul_ok(v6, 0x60uLL) )
      v19 = -1LL;
    v82 = (void *)operator new[](v19, 0x4B677844u, 256LL, v6);
    if ( !v82 )
    {
      WdLogSingleEntry0(2LL);
      v7 = 1352LL;
      v8 = L"Failed to allocate pAllocationInfo";
      goto LABEL_84;
    }
    v21 = 8LL * *(unsigned int *)(v4 + 40);
    v22 = 0LL;
    if ( !is_mul_ok(*(unsigned int *)(v4 + 40), 8uLL) )
      v21 = -1LL;
    v76 = (void *)operator new[](v21, 0x4B677844u, 256LL, v20);
    if ( !v76 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1360;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate pAllocationSizes",
        1360LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_81;
    }
    LODWORD(v74) = 72 * *(_DWORD *)(v4 + 40) + 16;
    v24 = v17 + v74 - v15;
    LODWORD(v75) = v24;
    v22 = (_DWORD *)operator new[](v24, 0x4B677844u, 64LL, v23);
    if ( !v22 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1370;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to allocate pOutput", 1370LL, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_81;
    }
    memset(&v83, 0, sizeof(v83));
    v25 = *(_DWORD *)(v4 + 32);
    v83.hDevice = *(_DWORD *)(v4 + 24);
    v83.hResource = *(_DWORD *)(v4 + 28);
    if ( v25 )
    {
      v83.PrivateRuntimeDataSize = v25;
      v83.pPrivateRuntimeData = (const void *)(v4 + (unsigned int)v73);
    }
    v26 = *(_DWORD *)(v4 + 36);
    if ( v26 )
    {
      v83.PrivateDriverDataSize = *(_DWORD *)(v4 + 36);
      v83.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)(v4 + (unsigned int)v71);
    }
    v27 = *(D3DKMT_CREATEALLOCATIONFLAGS *)(v4 + 44);
    pAllocationInfo = (char *)v82;
    v83.NumAllocations = *(_DWORD *)(v4 + 40);
    v83.hPrivateRuntimeResourceHandle = *(HANDLE *)(v4 + 48);
    v83.pAllocationInfo = (D3DDDI_ALLOCATIONINFO *)v82;
    v83.Flags = v27;
    if ( (*(_DWORD *)&v27 & 0x10000) != 0 )
    {
      if ( v26 < 0x18 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1397;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Standard allocation does not have valid data",
          1397LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_81;
      }
      v83.PrivateDriverDataSize = 0;
    }
    for ( i = 0; i < *(_DWORD *)(v4 + 40); ++i )
    {
      v30 = *(_DWORD *)(v4 + 44);
      v31 = 96LL * i;
      v32 = *(_DWORD *)(v4 + 12LL * i + 68);
      LODWORD(v71) = v32;
      if ( (v30 & 0x20) != 0 )
      {
        *(_QWORD *)&pAllocationInfo[v31 + 8] = 4096LL;
        pAllocationInfo = (char *)v83.pAllocationInfo;
      }
      *(_DWORD *)&pAllocationInfo[v31 + 32] = *(_DWORD *)(v4 + 12LL * i + 64);
      *(UINT *)((char *)&v83.pAllocationInfo->PrivateDriverDataSize + v31) = v32;
      if ( v32 )
        *(void **)((char *)&v83.pAllocationInfo->pPrivateDriverData + v31) = (void *)(v4 + v15);
      if ( (unsigned int)v72 >= 0x1E && (*(_BYTE *)(v4 + 56) & 2) != 0 )
      {
        if ( (*(UINT *)((_BYTE *)&v83.pAllocationInfo->Flags.Value + v31) & 1) == 0 || *(_DWORD *)(v4 + 40) != 1 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 1423;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"bVidPnSourceIsActuallyHostVidPnTarget must be used only with swapchain buffer",
            1423LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_81;
        }
        if ( (int)DXG_HOST_VIRTUALGPU_VMBUS::ConvertHostVidPnTargetIdToVidPnSourceId(
                    *(_DWORD *)(v4 + 24),
                    *(_DWORD *)(v4 + 12LL * i + 72),
                    (unsigned int *)((char *)&v83.pAllocationInfo->VidPnSourceId + v31)) < 0 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 1432;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Fail to locate VidPnSourceId",
            1432LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_81;
        }
      }
      else
      {
        *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v83.pAllocationInfo->VidPnSourceId + v31) = *(_DWORD *)(v4 + 12LL * i + 72);
      }
      v15 += (unsigned int)v71;
      pAllocationInfo = (char *)v83.pAllocationInfo;
    }
    v33 = DxgkCreateAllocationInternal(&v83, (unsigned __int64 *)v76);
    if ( v33 < 0 )
    {
      v69 = v33;
      WdLogSingleEntry1(2LL, v33);
      WdLogGlobalForLineNumber = 1550;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to create allocation: 0x%I64x",
        v69,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      Flags = (char)v83.Flags;
      *v22 = v83.Flags;
      if ( (Flags & 0x40) != 0 )
      {
        if ( v83.hGlobalShare )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1450;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"NULL == Args.hGlobalShare",
            1450LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        v22[2] = v83.hGlobalShare;
      }
      v22[1] = v83.hResource;
      v73 = (char *)v22 + (unsigned int)v74;
      if ( *(_DWORD *)(v4 + 40) )
      {
        v35 = 0;
        v36 = (struct DXGPROCESS *)((char *)v77 + 248);
        v81 = (volatile signed __int32 *)((char *)v77 + 248);
        while ( 1 )
        {
          v74 = 96LL * v35;
          v37 = *(D3DKMT_HANDLE *)((char *)&v83.pAllocationInfo->hAllocation + v74);
          DXGPUSHLOCK::AcquireShared(v36);
          v38 = (v37 >> 6) & 0xFFFFFF;
          if ( v38 < *((_DWORD *)v77 + 74) )
          {
            v39 = *((_QWORD *)v77 + 35);
            if ( ((v37 >> 25) & 0x60) == (*(_BYTE *)(v39 + 16LL * v38 + 8) & 0x60)
              && (*(_DWORD *)(v39 + 16LL * v38 + 8) & 0x2000) == 0 )
            {
              v40 = *(_DWORD *)(v39 + 16LL * v38 + 8) & 0x1F;
              if ( v40 )
              {
                if ( v40 == 5 )
                {
                  v41 = *(struct _EX_RUNDOWN_REF **)(v39 + 16LL * v38);
                  goto LABEL_65;
                }
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 318;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Handle type mismatch",
                  318LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
          }
          v41 = 0LL;
LABEL_65:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v71, v41);
          v42 = v81;
          _InterlockedAdd(v81 + 4, 0xFFFFFFFF);
          ExReleasePushLockSharedEx(v42, 0LL);
          KeLeaveCriticalRegion();
          v43 = v71;
          v44 = 9LL * v35;
          v45 = v22[18 * v35 + 6] ^ (*(_DWORD *)(v71[6].Count + 4) ^ v22[18 * v35 + 6]) & 1;
          v22[2 * v44 + 6] = v45;
          v46 = v45 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v45) & 2;
          v22[2 * v44 + 6] = v46;
          v47 = v46 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v46) & 4;
          v22[2 * v44 + 6] = v47;
          v48 = v47 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v47) & 8;
          v22[2 * v44 + 6] = v48;
          v49 = v48 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v48) & 0x20;
          v22[2 * v44 + 6] = v49;
          v50 = v49 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v49) & 0x800;
          v22[2 * v44 + 6] = v50;
          v51 = v50 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v50) & 0x1000;
          v22[2 * v44 + 6] = v51;
          v52 = v51 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v51) & 0x2000;
          v22[2 * v44 + 6] = v52;
          v53 = v52 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v52) & 0x4000;
          v22[2 * v44 + 6] = v53;
          v54 = v53 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v53) & 0x40000;
          v22[2 * v44 + 6] = v54;
          v55 = v54 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v54) & 0x80000;
          v22[2 * v44 + 6] = v55;
          v56 = v55 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v55) & 0x100000;
          v57 = v83.pAllocationInfo;
          v22[2 * v44 + 6] = v56;
          v58 = v74;
          v22[2 * v44 + 4] = *(D3DKMT_HANDLE *)((char *)&v57->hAllocation + v74);
          v22[2 * v44 + 5] = *(_DWORD *)(v4 + 12LL * v35 + 68);
          *(_QWORD *)&v22[2 * v44 + 8] = *((_QWORD *)v76 + v35);
          memmove(
            v73,
            *(const void **)((char *)&v57->pPrivateDriverData + v58),
            *(unsigned int *)(v4 + 12LL * v35 + 68));
          v59 = (char *)&v22[18 * v35];
          v73 = (char *)v73 + *(unsigned int *)(v4 + 12LL * v35 + 68);
          *((_QWORD *)v59 + 5) = *(_QWORD *)(v71[6].Count + 16);
          ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(v84 + 3128),
            (struct _DXGKARG_DESCRIBEALLOCATION *)(v59 + 40),
            v60);
          *((_QWORD *)v59 + 5) = 0LL;
          v61 = *(_BYTE *)(v4 + 56) & 1;
          if ( (unsigned int)v72 < 0x1E )
            v61 = *(_BYTE *)(v4 + 56);
          if ( v61 )
          {
            Count = (struct DXGDEVICE *)v71[1].Count;
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
              (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v87,
              Count);
            COREACCESS::COREACCESS((COREACCESS *)v89, *(struct DXGADAPTER *const *)(*((_QWORD *)Count + 2) + 16LL));
            COREACCESS::COREACCESS((COREACCESS *)v90, *(struct DXGADAPTER *const *)(*((_QWORD *)Count + 2) + 16LL));
            v91 = Count;
            v92 = 0;
            if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v88, 0LL) >= 0
              && DXGDEVICE::UmdManagesResidency(Count) )
            {
              v64 = *((_QWORD *)Count + 2);
              v65 = (struct VIDMM_DEVICE *)*((_QWORD *)Count + 99);
              v78 = 0LL;
              v80 = 0LL;
              VIDMM_EXPORT::VidMmGetDevicePagingQueue(*(VIDMM_EXPORT **)(v64 + 760), v65, 0, &v78, &v80);
              v79 = 0LL;
              v85 = 0LL;
              Resident = VIDMM_EXPORT::VidMmMakeResident(
                           *(VIDMM_EXPORT **)(v64 + 760),
                           *(struct VIDMM_GLOBAL **)(v64 + 768),
                           v78,
                           (struct VIDMM_MULTI_ALLOC **)&v71[3],
                           1u,
                           3u,
                           &v79,
                           &v85);
              if ( Resident >= 0 )
              {
                if ( Resident == 259 )
                  VIDMM_EXPORT::VidMmWaitForFences(
                    *(VIDMM_EXPORT **)(v64 + 760),
                    *(struct VIDMM_GLOBAL **)(v64 + 768),
                    &v80,
                    &v79);
              }
              else
              {
                v67 = Resident;
                WdLogSingleEntry1(2LL, Resident);
                WdLogGlobalForLineNumber = 1528;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Failed to make staging allocation resident. Returning 0x%I64x",
                  v67,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            COREACCESS::~COREACCESS((COREACCESS *)v90, v63);
            COREACCESS::~COREACCESS((COREACCESS *)v89, v68);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v87);
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v71);
          v36 = (DXGPUSHLOCK *)v81;
          if ( ++v35 >= *(_DWORD *)(v4 + 40) )
          {
            v24 = v75;
            break;
          }
        }
      }
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v86 + 16), v22, v24);
      v2 = 1;
    }
LABEL_81:
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v82);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v76);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v22);
    return v2;
  }
  WdLogSingleEntry0(2LL);
  v7 = 1305LL;
  v8 = L"OpenCrossAdapter is not supported";
LABEL_84:
  WdLogGlobalForLineNumber = v7;
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v8, v7, 0LL, 0LL, 0LL, 0LL);
  return 0;
}
