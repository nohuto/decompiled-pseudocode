/*
 * XREFs of ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1401E08AC
 * Callers:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1401E03D4 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1400396F4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_NI@Z @ 0x14003B098 (-VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDM.c)
 *     ?VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K3@Z @ 0x14003B124 (-VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MUL.c)
 *     ?VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400582F0 (-VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAP.c)
 *     ?VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x140058AD0 (-VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@E@Z @ 0x140228BDC (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402A0560 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1402A1CA8 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1402F8FE8 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x140361554 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1403981B8 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x140408DB8 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int Resident; // edi
  __int64 v7; // r9
  __int64 v9; // r14
  int v10; // r12d
  unsigned int v11; // r15d
  int v12; // r13d
  unsigned int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // r9
  int v16; // edi
  _BYTE *Pool2; // rcx
  void *v18; // rax
  char v19; // r12
  __int64 v20; // rcx
  unsigned int v21; // r14d
  __int64 v22; // r13
  unsigned int v23; // eax
  __int64 v24; // r8
  int v25; // ecx
  struct DXGRESOURCE *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // r13
  struct DXGPROCESS *Current; // rax
  char v31; // r15
  char v32; // r15
  __int64 v33; // rcx
  int v34; // eax
  D3DKMT_HANDLE v35; // r8d
  __int64 v36; // rax
  __int64 v37; // [rsp+28h] [rbp-D8h]
  unsigned __int64 PagingFenceValue; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v39; // [rsp+58h] [rbp-A8h] BYREF
  struct VIDMM_PAGING_QUEUE *v40; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h]
  struct DXGPROCESS *v42; // [rsp+70h] [rbp-90h]
  _BYTE v43[8]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v44; // [rsp+80h] [rbp-80h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v45; // [rsp+88h] [rbp-78h] BYREF
  __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  void *v47; // [rsp+98h] [rbp-68h]
  __int128 v48; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+C0h] [rbp-40h]
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v51; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v52[13]; // [rsp+F0h] [rbp-10h] BYREF
  D3DDDI_MAPGPUVIRTUALADDRESS v53; // [rsp+160h] [rbp+60h] BYREF
  PVOID P; // [rsp+1D0h] [rbp+D0h]
  _BYTE v55[320]; // [rsp+1D8h] [rbp+D8h] BYREF
  int v56; // [rsp+318h] [rbp+218h]

  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)a2 + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 233;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      233LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = *(_QWORD *)this;
  v50 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  Resident = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(a2, &v48, v4, v5);
  if ( Resident < 0 )
  {
    WdLogSingleEntry1(4LL, a2);
    WdLogGlobalForLineNumber = 240;
    return (unsigned int)Resident;
  }
  v9 = HIDWORD(v49);
  v10 = v50;
  v11 = HIDWORD(v49) + v50;
  if ( (unsigned int)(HIDWORD(v49) + v50) < HIDWORD(v49) )
  {
    WdLogSingleEntry0(2LL);
    v36 = 249LL;
  }
  else
  {
    v12 = DWORD2(v49);
    v13 = v11 + DWORD2(v49);
    if ( v11 + DWORD2(v49) >= v11 )
    {
      v14 = v13;
      v47 = (void *)operator new[](v13, 0x674D444Fu, 256LL, v7);
      if ( !v47 )
      {
        WdLogSingleEntry2(6LL, this, (unsigned int)v14);
        WdLogGlobalForLineNumber = 264;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          0xFFFFFFFFLL,
          L"KeyedMutex 0x%I64x failed to allocate PrivateDriverData buffer of 0x%I64d bytes",
          (__int64)this,
          v14,
          0LL,
          0LL,
          0LL);
        return 3221225495LL;
      }
      memset(v52, 0, sizeof(v52));
      P = 0LL;
      v56 = 0;
      v16 = HIDWORD(v50);
      if ( HIDWORD(v50) <= 4 )
      {
        Pool2 = v55;
        P = v55;
        if ( HIDWORD(v50) )
        {
          memset(v55, 0, 80LL * HIDWORD(v50));
          Pool2 = P;
        }
      }
      else
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(v50) < 0x50 )
          goto LABEL_17;
        Pool2 = (_BYTE *)ExAllocatePool2(256LL, 80LL * HIDWORD(v50), 1265072196LL, v15);
        P = Pool2;
      }
      v56 = v16;
      if ( !Pool2 )
      {
LABEL_17:
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 276;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          0xFFFFFFFFLL,
          L"Failed to allocate memory for D3DDDI_OPENALLOCATIONINFO2",
          276LL,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( P != v55 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
        return 3221225495LL;
      }
      LODWORD(v52[0]) = *((_DWORD *)a2 + 117);
      v18 = (void *)v52[9];
      v52[3] = Pool2;
      if ( (_DWORD)v9 )
        v18 = v47;
      LODWORD(v52[2]) = v16;
      v52[9] = v18;
      LODWORD(v52[8]) = v9;
      if ( v10 )
        v52[7] = (char *)v47 + v9;
      LODWORD(v52[6]) = v10;
      v19 = 0;
      if ( v12 )
        v52[5] = (char *)v47 + v11;
      LODWORD(v52[4]) = v12;
      Resident = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(a2, 0, 0LL, 0, 0LL, 0LL, 0LL);
      if ( Resident < 0 )
      {
        WdLogSingleEntry2(4LL, this, *(_QWORD *)this);
        WdLogGlobalForLineNumber = 457;
        goto LABEL_63;
      }
      v20 = *((_QWORD *)this + 1);
      v21 = v52[10];
      *((_DWORD *)this + 22) = v52[10];
      v22 = *(_QWORD *)(v20 + 40);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v22 + 248));
      v23 = (v21 >> 6) & 0xFFFFFF;
      if ( v23 < *(_DWORD *)(v22 + 296) )
      {
        v24 = *(_QWORD *)(v22 + 280);
        if ( ((v21 >> 25) & 0x60) == (*(_BYTE *)(v24 + 16LL * v23 + 8) & 0x60)
          && (*(_DWORD *)(v24 + 16LL * v23 + 8) & 0x2000) == 0 )
        {
          v25 = *(_DWORD *)(v24 + 16LL * v23 + 8) & 0x1F;
          if ( v25 )
          {
            if ( v25 == 4 )
            {
              v26 = *(struct DXGRESOURCE **)(v24 + 16LL * v23);
LABEL_34:
              DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v46, v26);
              _InterlockedDecrement((volatile signed __int32 *)(v22 + 264));
              ExReleasePushLockSharedEx(v22 + 248, 0LL);
              KeLeaveCriticalRegion();
              v27 = v46;
              if ( !v46 )
              {
                WdLogSingleEntry2(2LL, this, *((unsigned int *)this + 22));
                v37 = *((unsigned int *)this + 22);
                WdLogGlobalForLineNumber = 451;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"KeyedMutex 0x%I64x failed to find resource for handle 0x%I64x",
                  (__int64)this,
                  v37,
                  0LL,
                  0LL,
                  0LL);
                Resident = -1073741811;
                goto LABEL_61;
              }
              *((_DWORD *)this + 23) = *(_DWORD *)(*(_QWORD *)(v46 + 24) + 16LL);
              v28 = *((_QWORD *)a2 + 2);
              PagingFenceValue = 0LL;
              v40 = 0LL;
              v45 = 0LL;
              v29 = *(_QWORD *)(v27 + 24);
              Current = DXGPROCESS::GetCurrent();
              v31 = *((_BYTE *)a2 + 1901);
              v42 = Current;
              v41 = *(_QWORD *)(v28 + 16);
              v32 = v31 & 1;
              if ( !v32
                && (DXGDEVICE::UmdManagesResidency(a2)
                 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2468LL) & 0x40) != 0) )
              {
                VIDMM_EXPORT::VidMmGetDevicePagingQueue(
                  *(VIDMM_EXPORT **)(v28 + 760),
                  *((struct VIDMM_DEVICE **)a2 + 99),
                  (*(_DWORD *)(v29 + 72) >> 12) & 0x3F,
                  &v40,
                  &v45);
              }
              if ( DXGDEVICE::UmdManagesResidency(a2) )
              {
                v39 = 0LL;
                v44 = 0LL;
                if ( v32 )
                {
                  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(
                    (DXGALLOCATIONREFERENCE *)v43,
                    (struct DXGALLOCATION *)v29);
                  Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                               (DXG_GUEST_VIRTUALGPU_VMBUS *)(v41 + 4664),
                               *((_DWORD *)v42 + 122),
                               *((_DWORD *)a2 + 118),
                               0,
                               (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                               1u,
                               (const struct DXGALLOCATIONREFERENCE *)v43,
                               &v39,
                               &v44);
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v43);
                }
                else
                {
                  Resident = VIDMM_EXPORT::VidMmMakeResident(
                               *(VIDMM_EXPORT **)(v28 + 760),
                               *(struct VIDMM_GLOBAL **)(v28 + 768),
                               v40,
                               (struct VIDMM_MULTI_ALLOC **)(v29 + 24),
                               1u,
                               3u,
                               &v39,
                               &v44);
                }
                if ( Resident < 0 )
                {
                  WdLogSingleEntry1(3LL, Resident);
                  WdLogGlobalForLineNumber = 375;
LABEL_61:
                  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v46);
LABEL_63:
                  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v47);
                  if ( P != v55 && P )
                    ExFreePoolWithTag(P, 0);
                  return (unsigned int)Resident;
                }
                if ( Resident == 259 )
                {
                  v19 = 1;
                  PagingFenceValue = v39;
                  Resident = 0;
                }
              }
              if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2468LL) & 0x40) != 0 )
              {
                memset(&v53, 0, sizeof(v53));
                v33 = *(_QWORD *)(v28 + 16);
                v53.Protection.Value = 1LL;
                v53.MinimumAddress = *(_QWORD *)(v33 + 2952);
                v53.MaximumAddress = *(_QWORD *)(v33 + 2960);
                if ( v32 )
                  v34 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v41 + 4664),
                          *((_DWORD *)v42 + 122),
                          a2,
                          0,
                          *(_DWORD *)(v29 + 16),
                          &v53);
                else
                  v34 = VIDMM_EXPORT::VidMmMapGpuVirtualAddress(
                          *(VIDMM_EXPORT **)(v28 + 760),
                          *(struct VIDMM_GLOBAL **)(v28 + 768),
                          v40,
                          *(struct VIDMM_MULTI_ALLOC **)(v29 + 24),
                          &v53,
                          1,
                          0xFFFFFFFE);
                Resident = v34;
                if ( v34 >= 0 )
                {
                  if ( v34 == 259 )
                  {
                    PagingFenceValue = v53.PagingFenceValue;
                    Resident = 0;
                    goto LABEL_55;
                  }
                }
                else
                {
                  WdLogSingleEntry1(3LL, v34);
                  WdLogGlobalForLineNumber = 418;
                }
              }
              if ( !v19 )
                goto LABEL_61;
LABEL_55:
              if ( v32 )
              {
                v35 = *((_DWORD *)a2 + 118);
                v51.ObjectHandleArray = 0LL;
                *(_OWORD *)&v51.hAsyncEvent = 0LL;
                v51.hDevice = v35;
                v51.ObjectCount = 1;
                v51.FenceValueArray = &PagingFenceValue;
                Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
                             (DXG_GUEST_VIRTUALGPU_VMBUS *)(v41 + 4664),
                             v42,
                             v35,
                             &v51,
                             1u);
              }
              else
              {
                VIDMM_EXPORT::VidMmWaitForFences(
                  *(VIDMM_EXPORT **)(v28 + 760),
                  *(struct VIDMM_GLOBAL **)(v28 + 768),
                  &v45,
                  &PagingFenceValue);
              }
              goto LABEL_61;
            }
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      v26 = 0LL;
      goto LABEL_34;
    }
    WdLogSingleEntry0(2LL);
    v36 = 255LL;
  }
  WdLogGlobalForLineNumber = v36;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Overflow while calculating buffer size",
    v36,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225621LL;
}
