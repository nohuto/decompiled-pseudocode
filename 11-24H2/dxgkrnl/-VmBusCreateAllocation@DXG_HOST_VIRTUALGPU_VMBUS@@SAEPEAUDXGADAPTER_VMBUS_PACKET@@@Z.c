/*
 * XREFs of ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1404248C0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140012080 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002DDD0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1400392F4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K3@Z @ 0x1400396E4 (-VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MUL.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x140057D70 (-VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAP.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1400584FC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     ?VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x1400585C0 (-VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z @ 0x1402A9A9C (-ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402F57E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x140304ED8 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateAllocation(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // si
  __int64 v3; // rcx
  __int64 v4; // r14
  struct DXGPROCESS *Current; // rax
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  const wchar_t *v8; // r9
  unsigned int v9; // edx
  __int64 v10; // r9
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // ebx
  unsigned int v16; // edx
  unsigned int v17; // edi
  unsigned int v18; // r11d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  _DWORD *v21; // r12
  unsigned int v22; // r13d
  UINT v23; // ecx
  unsigned int v24; // edx
  D3DKMT_CREATEALLOCATIONFLAGS v25; // ecx
  char *pAllocationInfo; // r8
  void *v27; // rax
  UINT v28; // r9d
  unsigned int v29; // edi
  __int64 v30; // rdx
  UINT v31; // ecx
  int v32; // eax
  char Flags; // al
  __int64 v34; // rdi
  volatile signed __int32 *v35; // r13
  unsigned int v36; // ebx
  unsigned int v37; // eax
  __int64 v38; // r8
  int v39; // ecx
  struct _EX_RUNDOWN_REF *v40; // rdx
  struct _EX_RUNDOWN_REF *v41; // r8
  __int64 v42; // rdi
  __int64 v43; // r9
  int v44; // edx
  int v45; // ecx
  int v46; // edx
  int v47; // ecx
  int v48; // edx
  int v49; // ecx
  int v50; // edx
  int v51; // ecx
  int v52; // edx
  int v53; // ecx
  int v54; // edx
  int v55; // ecx
  D3DDDI_ALLOCATIONINFO *v56; // rdx
  char *v57; // rbx
  __int64 v58; // r8
  char v59; // cl
  struct DXGDEVICE *Count; // rbx
  __int64 v61; // r9
  __int64 v62; // rdi
  struct VIDMM_DEVICE *v63; // rdx
  int Resident; // eax
  __int64 v65; // rbx
  unsigned int v66; // ebx
  unsigned int v67; // ebx
  __int64 v68; // rbx
  unsigned int v70; // [rsp+58h] [rbp-B0h]
  unsigned int v71; // [rsp+58h] [rbp-B0h]
  unsigned int v72; // [rsp+60h] [rbp-A8h]
  UINT v73; // [rsp+60h] [rbp-A8h]
  char *v74; // [rsp+60h] [rbp-A8h]
  struct _EX_RUNDOWN_REF *v75; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v76; // [rsp+70h] [rbp-98h]
  unsigned int v77; // [rsp+74h] [rbp-94h]
  struct DXGPROCESS *v78; // [rsp+78h] [rbp-90h]
  void *v79; // [rsp+80h] [rbp-88h]
  struct VIDMM_PAGING_QUEUE *v80; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v81; // [rsp+90h] [rbp-78h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v82; // [rsp+98h] [rbp-70h] BYREF
  void *v83; // [rsp+A0h] [rbp-68h]
  _D3DKMT_CREATEALLOCATION v84; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v85; // [rsp+F8h] [rbp-10h]
  __int64 v86; // [rsp+100h] [rbp-8h]
  unsigned __int64 v87; // [rsp+108h] [rbp+0h] BYREF
  struct DXGADAPTER_VMBUS_PACKET *v88; // [rsp+110h] [rbp+8h]
  _BYTE v89[16]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v90[160]; // [rsp+128h] [rbp+20h] BYREF

  v88 = a1;
  v2 = 0;
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
  if ( v4 )
  {
    Current = DXGPROCESS::GetCurrent(v3);
    v6 = *(unsigned int *)(v4 + 40);
    v78 = Current;
    v86 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL);
    v76 = *((_DWORD *)a1 + 38);
    if ( !(_DWORD)v6 )
    {
      WdLogSingleEntry0(2LL);
      v7 = 1296LL;
      goto LABEL_84;
    }
    if ( (*(_DWORD *)(v4 + 44) & 0x1000) != 0 )
    {
      WdLogSingleEntry0(2LL);
      v7 = 1302LL;
      v8 = L"OpenCrossAdapter is not supported";
      goto LABEL_85;
    }
    v9 = 12 * v6;
    if ( 12 * v6 > 0xFFFFFFFF )
    {
      WdLogSingleEntry0(2LL);
      v7 = 1309LL;
    }
    else
    {
      v10 = *((unsigned int *)a1 + 36);
      if ( v10 - 64 < (unsigned __int64)v9 )
      {
        WdLogSingleEntry0(2LL);
        v7 = 1315LL;
        goto LABEL_84;
      }
      v11 = v9 + 64;
      v12 = *(_DWORD *)(v4 + 32);
      v70 = v11;
      if ( (unsigned int)v10 - v11 < v12 )
      {
        WdLogSingleEntry0(2LL);
        v7 = 1321LL;
        goto LABEL_84;
      }
      v13 = v12 + v11;
      v14 = *(_DWORD *)(v4 + 36);
      v72 = v13;
      if ( (unsigned int)v10 - v13 < v14 )
      {
        WdLogSingleEntry0(2LL);
        v7 = 1327LL;
        goto LABEL_84;
      }
      v15 = v14 + v13;
      v16 = 0;
      v17 = v15;
      while ( 1 )
      {
        v18 = *(_DWORD *)(v4 + 12LL * v16 + 68);
        if ( (unsigned int)v10 - v17 < v18 )
          break;
        v17 += v18;
        if ( ++v16 >= (unsigned int)v6 )
        {
          v19 = 96 * v6;
          if ( !is_mul_ok(v6, 0x60uLL) )
            v19 = -1LL;
          v83 = (void *)operator new[](v19, 0x4B677844u, 256LL);
          if ( !v83 )
          {
            WdLogSingleEntry0(2LL);
            v7 = 1349LL;
            v8 = L"Failed to allocate pAllocationInfo";
            goto LABEL_85;
          }
          v20 = 8LL * *(unsigned int *)(v4 + 40);
          v21 = 0LL;
          if ( !is_mul_ok(*(unsigned int *)(v4 + 40), 8uLL) )
            v20 = -1LL;
          v79 = (void *)operator new[](v20, 0x4B677844u, 256LL);
          if ( !v79 )
          {
            WdLogSingleEntry0(6LL);
            WdLogGlobalForLineNumber = 1357;
            DxgkLogInternalTriageEvent(
              0LL,
              262145LL,
              0xFFFFFFFFLL,
              L"Failed to allocate pAllocationSizes",
              1357LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_82;
          }
          LODWORD(v75) = 72 * *(_DWORD *)(v4 + 40) + 16;
          v22 = v17 + (_DWORD)v75 - v15;
          v77 = v22;
          v21 = (_DWORD *)operator new[](v22, 0x4B677844u, 64LL);
          if ( !v21 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 1367;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Failed to allocate pOutput",
              1367LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_82;
          }
          memset(&v84, 0, sizeof(v84));
          v23 = *(_DWORD *)(v4 + 32);
          v84.hDevice = *(_DWORD *)(v4 + 24);
          v84.hResource = *(_DWORD *)(v4 + 28);
          if ( v23 )
          {
            v84.PrivateRuntimeDataSize = v23;
            v84.pPrivateRuntimeData = (const void *)(v4 + v70);
          }
          v24 = *(_DWORD *)(v4 + 36);
          if ( v24 )
          {
            v84.PrivateDriverDataSize = *(_DWORD *)(v4 + 36);
            v84.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)(v4 + v72);
          }
          v25 = *(D3DKMT_CREATEALLOCATIONFLAGS *)(v4 + 44);
          pAllocationInfo = (char *)v83;
          v27 = *(void **)(v4 + 48);
          v28 = *(_DWORD *)(v4 + 40);
          v84.pAllocationInfo = (D3DDDI_ALLOCATIONINFO *)v83;
          v84.hPrivateRuntimeResourceHandle = v27;
          v84.NumAllocations = v28;
          v84.Flags = v25;
          if ( (*(_DWORD *)&v25 & 0x10000) != 0 )
          {
            if ( v24 < 0x18 )
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 1394;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Standard allocation does not have valid data",
                1394LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_82;
            }
            v84.PrivateDriverDataSize = 0;
          }
          v29 = 0;
          if ( v28 )
          {
            while ( 1 )
            {
              v30 = 96LL * v29;
              v31 = *(_DWORD *)(v4 + 12LL * v29 + 68);
              v73 = v31;
              if ( (*(_DWORD *)(v4 + 44) & 0x20) != 0 )
              {
                *(_QWORD *)&pAllocationInfo[v30 + 8] = 4096LL;
                pAllocationInfo = (char *)v84.pAllocationInfo;
              }
              *(_DWORD *)&pAllocationInfo[v30 + 32] = *(_DWORD *)(v4 + 12LL * v29 + 64);
              *(UINT *)((char *)&v84.pAllocationInfo->PrivateDriverDataSize + v30) = v31;
              if ( v31 )
                *(void **)((char *)&v84.pAllocationInfo->pPrivateDriverData + v30) = (void *)(v4 + v15);
              if ( v76 >= 0x1E && (*(_BYTE *)(v4 + 56) & 2) != 0 )
              {
                if ( (*(UINT *)((_BYTE *)&v84.pAllocationInfo->Flags.Value + v30) & 1) == 0 || *(_DWORD *)(v4 + 40) != 1 )
                {
                  WdLogSingleEntry0(2LL);
                  WdLogGlobalForLineNumber = 1420;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000LL,
                    0xFFFFFFFFLL,
                    L"bVidPnSourceIsActuallyHostVidPnTarget must be used only with swapchain buffer",
                    1420LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_82;
                }
                if ( (int)DXG_HOST_VIRTUALGPU_VMBUS::ConvertHostVidPnTargetIdToVidPnSourceId(
                            *(unsigned int *)(v4 + 24),
                            *(_DWORD *)(v4 + 12LL * v29 + 72),
                            (unsigned int *)((char *)&v84.pAllocationInfo->VidPnSourceId + v30)) < 0 )
                {
                  WdLogSingleEntry0(2LL);
                  WdLogGlobalForLineNumber = 1429;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000LL,
                    0xFFFFFFFFLL,
                    L"Fail to locate VidPnSourceId",
                    1429LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_82;
                }
              }
              else
              {
                *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v84.pAllocationInfo->VidPnSourceId + v30) = *(_DWORD *)(v4 + 12LL * v29 + 72);
              }
              v15 += v73;
              if ( ++v29 >= *(_DWORD *)(v4 + 40) )
                break;
              pAllocationInfo = (char *)v84.pAllocationInfo;
            }
          }
          v32 = DxgkCreateAllocationInternal(&v84, (struct DXGRESOURCE *)v79, (__int64)pAllocationInfo);
          if ( v32 < 0 )
          {
            v68 = v32;
            WdLogSingleEntry1(2LL, v32);
            WdLogGlobalForLineNumber = 1551;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Failed to create allocation: 0x%I64x",
              v68,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          else
          {
            Flags = (char)v84.Flags;
            *v21 = v84.Flags;
            if ( (Flags & 0x40) != 0 )
            {
              if ( v84.hGlobalShare )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 1447;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146LL,
                  0xFFFFFFFFLL,
                  L"NULL == Args.hGlobalShare",
                  1447LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            else
            {
              v21[2] = v84.hGlobalShare;
            }
            v21[1] = v84.hResource;
            v34 = 0LL;
            v74 = (char *)v21 + (unsigned int)v75;
            v71 = 0;
            if ( *(_DWORD *)(v4 + 40) )
            {
              v35 = (volatile signed __int32 *)((char *)v78 + 248);
              while ( 1 )
              {
                v85 = 96 * v34;
                v36 = *(&v84.pAllocationInfo->hAllocation + 24 * v34);
                DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v35);
                v37 = (v36 >> 6) & 0xFFFFFF;
                if ( v37 < *((_DWORD *)v78 + 74) )
                {
                  v38 = *((_QWORD *)v78 + 35);
                  if ( ((v36 >> 25) & 0x60) == (*(_BYTE *)(v38 + 16LL * v37 + 8) & 0x60)
                    && (*(_DWORD *)(v38 + 16LL * v37 + 8) & 0x2000) == 0 )
                  {
                    v39 = *(_DWORD *)(v38 + 16LL * v37 + 8) & 0x1F;
                    if ( v39 )
                    {
                      if ( v39 == 5 )
                      {
                        v40 = *(struct _EX_RUNDOWN_REF **)(v38 + 16LL * v37);
                        goto LABEL_64;
                      }
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
                    }
                  }
                }
                v40 = 0LL;
LABEL_64:
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v75, v40);
                _InterlockedAdd(v35 + 4, 0xFFFFFFFF);
                ExReleasePushLockSharedEx(v35, 0LL);
                KeLeaveCriticalRegion();
                v41 = v75;
                v42 = 9 * v34;
                v43 = v85;
                v44 = v21[2 * v42 + 6] ^ (*(_DWORD *)(v75[6].Count + 4) ^ v21[2 * v42 + 6]) & 1;
                v21[2 * v42 + 6] = v44;
                v45 = v44 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v44) & 2;
                v21[2 * v42 + 6] = v45;
                v46 = v45 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v45) & 4;
                v21[2 * v42 + 6] = v46;
                v47 = v46 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v46) & 8;
                v21[2 * v42 + 6] = v47;
                v48 = v47 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v47) & 0x20;
                v21[2 * v42 + 6] = v48;
                v49 = v48 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v48) & 0x800;
                v21[2 * v42 + 6] = v49;
                v50 = v49 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v49) & 0x1000;
                v21[2 * v42 + 6] = v50;
                v51 = v50 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v50) & 0x2000;
                v21[2 * v42 + 6] = v51;
                v52 = v51 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v51) & 0x4000;
                v21[2 * v42 + 6] = v52;
                v53 = v52 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v52) & 0x40000;
                v21[2 * v42 + 6] = v53;
                v54 = v53 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v53) & 0x80000;
                v21[2 * v42 + 6] = v54;
                v55 = v54 ^ (*(_DWORD *)(v41[6].Count + 4) ^ v54) & 0x100000;
                v56 = v84.pAllocationInfo;
                v21[2 * v42 + 6] = v55;
                v21[2 * v42 + 4] = *(D3DKMT_HANDLE *)((char *)&v56->hAllocation + v43);
                v21[2 * v42 + 5] = *(_DWORD *)(v4 + 12LL * v71 + 68);
                *(_QWORD *)&v21[2 * v42 + 8] = *((_QWORD *)v79 + v71);
                memmove(
                  v74,
                  *(const void **)((char *)&v56->pPrivateDriverData + v43),
                  *(unsigned int *)(v4 + 12LL * v71 + 68));
                v57 = (char *)&v21[2 * v42];
                v74 += *(unsigned int *)(v4 + 12LL * v71 + 68);
                *((_QWORD *)v57 + 5) = *(_QWORD *)(v75[6].Count + 16);
                ADAPTER_RENDER::DdiDescribeAllocation(
                  *(ADAPTER_RENDER **)(v86 + 3128),
                  (struct _DXGKARG_DESCRIBEALLOCATION *)(v57 + 40),
                  v58);
                *((_QWORD *)v57 + 5) = 0LL;
                v59 = *(_BYTE *)(v4 + 56) & 1;
                if ( v76 < 0x1E )
                  v59 = *(_BYTE *)(v4 + 56);
                if ( v59 )
                {
                  Count = (struct DXGDEVICE *)v75[1].Count;
                  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
                    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v89,
                    Count);
                  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v90, (__int64)Count, 0, v61, 0);
                  if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v90, 0LL) >= 0
                    && DXGDEVICE::UmdManagesResidency(Count) )
                  {
                    v62 = *((_QWORD *)Count + 2);
                    v63 = (struct VIDMM_DEVICE *)*((_QWORD *)Count + 99);
                    v80 = 0LL;
                    v82 = 0LL;
                    VIDMM_EXPORT::VidMmGetDevicePagingQueue(*(VIDMM_EXPORT **)(v62 + 760), v63, 0, &v80, &v82);
                    v81 = 0LL;
                    v87 = 0LL;
                    Resident = VIDMM_EXPORT::VidMmMakeResident(
                                 *(VIDMM_EXPORT **)(v62 + 760),
                                 *(struct VIDMM_GLOBAL **)(v62 + 768),
                                 v80,
                                 (struct VIDMM_MULTI_ALLOC **)&v75[3],
                                 1u,
                                 3u,
                                 &v81,
                                 &v87);
                    if ( Resident >= 0 )
                    {
                      if ( Resident == 259 )
                        VIDMM_EXPORT::VidMmWaitForFences(
                          *(VIDMM_EXPORT **)(v62 + 760),
                          *(struct VIDMM_GLOBAL **)(v62 + 768),
                          &v82,
                          &v81);
                    }
                    else
                    {
                      v65 = Resident;
                      WdLogSingleEntry1(2LL, Resident);
                      WdLogGlobalForLineNumber = 1525;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000LL,
                        0xFFFFFFFFLL,
                        L"Failed to make staging allocation resident. Returning 0x%I64x",
                        v65,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                  }
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v90);
                  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v89);
                }
                v66 = *(&v84.pAllocationInfo->hAllocation + 24 * v71);
                DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v35);
                v67 = (v66 >> 6) & 0xFFFFFF;
                if ( v67 < *((_DWORD *)v78 + 74) )
                  *(_DWORD *)(*((_QWORD *)v78 + 35) + 16LL * v67 + 8) &= ~0x4000u;
                *((_QWORD *)v35 + 1) = 0LL;
                ExReleasePushLockExclusiveEx(v35, 0LL);
                KeLeaveCriticalRegion();
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v75);
                v34 = v71 + 1;
                v71 = v34;
                if ( (unsigned int)v34 >= *(_DWORD *)(v4 + 40) )
                {
                  v22 = v77;
                  break;
                }
              }
            }
            VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v88 + 16), v21, v22);
            v2 = 1;
          }
LABEL_82:
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v83);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v79);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v21);
          return v2;
        }
      }
      WdLogSingleEntry0(2LL);
      v7 = 1338LL;
    }
LABEL_84:
    v8 = L"Invalid packet size";
LABEL_85:
    WdLogGlobalForLineNumber = v7;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v8, v7, 0LL, 0LL, 0LL, 0LL);
  }
  return 0;
}
