/*
 * XREFs of ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1401E5AAC
 * Callers:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1401E55D8 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002BEA0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1400392F4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_NI@Z @ 0x140039658 (-VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDM.c)
 *     ?VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K3@Z @ 0x1400396E4 (-VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MUL.c)
 *     ?VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x140057D70 (-VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAP.c)
 *     ?VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x1400585C0 (-VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     Feature_4078915896__private_IsEnabledDeviceUsageNoInline @ 0x14006B7A8 (Feature_4078915896__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@E@Z @ 0x14022F4C8 (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x14032B83C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x140356384 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x14038CF98 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1403DF090 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1404012B0 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int Resident; // edi
  __int64 v8; // r14
  int v9; // r12d
  unsigned int v10; // r15d
  int v11; // r13d
  unsigned int v12; // eax
  __int64 v13; // rdi
  int v14; // edi
  _BYTE *Pool2; // rcx
  void *v16; // rax
  char v17; // r12
  __int64 v18; // rcx
  unsigned int v19; // r14d
  __int64 v20; // r13
  unsigned int v21; // eax
  __int64 v22; // r8
  int v23; // ecx
  struct DXGRESOURCE *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // r13
  struct DXGPROCESS *Current; // rax
  char v29; // r15
  char v30; // r15
  __int64 v31; // rcx
  int v32; // eax
  D3DKMT_HANDLE v33; // r8d
  __int64 v34; // rax
  __int64 v35; // [rsp+28h] [rbp-D8h]
  unsigned __int64 PagingFenceValue; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  struct VIDMM_PAGING_QUEUE *v38; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+68h] [rbp-98h]
  struct DXGPROCESS *v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v42[8]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v43; // [rsp+88h] [rbp-78h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v44; // [rsp+90h] [rbp-70h] BYREF
  void *v45; // [rsp+98h] [rbp-68h]
  __int128 v46; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+C0h] [rbp-40h]
  _BYTE v49[16]; // [rsp+C8h] [rbp-38h] BYREF
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v50; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v51[13]; // [rsp+100h] [rbp+0h] BYREF
  D3DDDI_MAPGPUVIRTUALADDRESS v52; // [rsp+170h] [rbp+70h] BYREF
  PVOID P; // [rsp+1E0h] [rbp+E0h]
  _BYTE v54[320]; // [rsp+1E8h] [rbp+E8h] BYREF
  int v55; // [rsp+328h] [rbp+228h]

  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)a2 + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 233;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      233LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = *(_QWORD *)this;
  v48 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  Resident = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(a2, &v46, v4, v5);
  if ( Resident < 0 )
  {
    WdLogSingleEntry1(4LL, a2);
    WdLogGlobalForLineNumber = 240;
    return (unsigned int)Resident;
  }
  v8 = HIDWORD(v47);
  v9 = v48;
  v10 = HIDWORD(v47) + v48;
  if ( (unsigned int)(HIDWORD(v47) + v48) < HIDWORD(v47) )
  {
    WdLogSingleEntry0(2LL);
    v34 = 249LL;
  }
  else
  {
    v11 = DWORD2(v47);
    v12 = v10 + DWORD2(v47);
    if ( v10 + DWORD2(v47) >= v10 )
    {
      v13 = v12;
      v45 = (void *)operator new[](v12, 0x674D444Fu, 256LL);
      if ( !v45 )
      {
        WdLogSingleEntry2(6LL, this, (unsigned int)v13);
        WdLogGlobalForLineNumber = 264;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"KeyedMutex 0x%I64x failed to allocate PrivateDriverData buffer of 0x%I64d bytes",
          (__int64)this,
          v13,
          0LL,
          0LL,
          0LL);
        return 3221225495LL;
      }
      memset(v51, 0, sizeof(v51));
      P = 0LL;
      v55 = 0;
      v14 = HIDWORD(v48);
      if ( HIDWORD(v48) <= 4 )
      {
        Pool2 = v54;
        P = v54;
        if ( HIDWORD(v48) )
        {
          memset(v54, 0, 80LL * HIDWORD(v48));
          Pool2 = P;
        }
      }
      else
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(v48) < 0x50 )
          goto LABEL_17;
        Pool2 = (_BYTE *)ExAllocatePool2(256LL, 80LL * HIDWORD(v48), 1265072196LL);
        P = Pool2;
      }
      v55 = v14;
      if ( !Pool2 )
      {
LABEL_17:
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 276;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"Failed to allocate memory for D3DDDI_OPENALLOCATIONINFO2",
          276LL,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( P != v54 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
        return 3221225495LL;
      }
      LODWORD(v51[0]) = *((_DWORD *)a2 + 117);
      v16 = (void *)v51[9];
      v51[3] = Pool2;
      if ( (_DWORD)v8 )
        v16 = v45;
      LODWORD(v51[2]) = v14;
      v51[9] = v16;
      LODWORD(v51[8]) = v8;
      if ( v9 )
        v51[7] = (char *)v45 + v8;
      LODWORD(v51[6]) = v9;
      v17 = 0;
      if ( v11 )
        v51[5] = (char *)v45 + v10;
      LODWORD(v51[4]) = v11;
      Resident = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(a2, 0, 0LL, 0, 0LL, 0LL, 0LL);
      if ( Resident < 0 )
      {
        WdLogSingleEntry2(4LL, this, *(_QWORD *)this);
        WdLogGlobalForLineNumber = 463;
        goto LABEL_66;
      }
      v18 = *((_QWORD *)this + 1);
      v19 = v51[10];
      *((_DWORD *)this + 22) = v51[10];
      v20 = *(_QWORD *)(v18 + 40);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v20 + 248));
      v21 = (v19 >> 6) & 0xFFFFFF;
      if ( v21 < *(_DWORD *)(v20 + 296) )
      {
        v22 = *(_QWORD *)(v20 + 280);
        if ( ((v19 >> 25) & 0x60) == (*(_BYTE *)(v22 + 16LL * v21 + 8) & 0x60)
          && (*(_DWORD *)(v22 + 16LL * v21 + 8) & 0x2000) == 0 )
        {
          v23 = *(_DWORD *)(v22 + 16LL * v21 + 8) & 0x1F;
          if ( v23 )
          {
            if ( v23 == 4 )
            {
              v24 = *(struct DXGRESOURCE **)(v22 + 16LL * v21);
LABEL_34:
              DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v41, v24);
              _InterlockedDecrement((volatile signed __int32 *)(v20 + 264));
              ExReleasePushLockSharedEx(v20 + 248, 0LL);
              KeLeaveCriticalRegion();
              if ( !v41 )
              {
                WdLogSingleEntry2(2LL, this, *((unsigned int *)this + 22));
                v35 = *((unsigned int *)this + 22);
                WdLogGlobalForLineNumber = 457;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"KeyedMutex 0x%I64x failed to find resource for handle 0x%I64x",
                  (__int64)this,
                  v35,
                  0LL,
                  0LL,
                  0LL);
                Resident = -1073741811;
                goto LABEL_64;
              }
              DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v49, (struct DXGFASTMUTEX *const)(v41 + 80), 0);
              if ( (unsigned int)Feature_4078915896__private_IsEnabledDeviceUsageNoInline() )
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v49);
              v25 = v41;
              *((_DWORD *)this + 23) = *(_DWORD *)(*(_QWORD *)(v41 + 24) + 16LL);
              v26 = *((_QWORD *)a2 + 2);
              PagingFenceValue = 0LL;
              v38 = 0LL;
              v44 = 0LL;
              v27 = *(_QWORD *)(v25 + 24);
              Current = DXGPROCESS::GetCurrent();
              v29 = *((_BYTE *)a2 + 1917);
              v40 = Current;
              v39 = *(_QWORD *)(v26 + 16);
              v30 = v29 & 1;
              if ( !v30
                && (DXGDEVICE::UmdManagesResidency(a2)
                 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2468LL) & 0x40) != 0) )
              {
                VIDMM_EXPORT::VidMmGetDevicePagingQueue(
                  *(VIDMM_EXPORT **)(v26 + 760),
                  *((struct VIDMM_DEVICE **)a2 + 99),
                  (*(_DWORD *)(v27 + 72) >> 12) & 0x3F,
                  &v38,
                  &v44);
              }
              if ( DXGDEVICE::UmdManagesResidency(a2) )
              {
                v37 = 0LL;
                v43 = 0LL;
                if ( v30 )
                {
                  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(
                    (DXGALLOCATIONREFERENCE *)v42,
                    (struct DXGALLOCATION *)v27);
                  Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                               (DXG_GUEST_VIRTUALGPU_VMBUS *)(v39 + 4664),
                               *((_DWORD *)v40 + 122),
                               *((_DWORD *)a2 + 118),
                               0,
                               (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                               1u,
                               (const struct DXGALLOCATIONREFERENCE *)v42,
                               &v37,
                               &v43);
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v42);
                }
                else
                {
                  Resident = VIDMM_EXPORT::VidMmMakeResident(
                               *(VIDMM_EXPORT **)(v26 + 760),
                               *(struct VIDMM_GLOBAL **)(v26 + 768),
                               v38,
                               (struct VIDMM_MULTI_ALLOC **)(v27 + 24),
                               1u,
                               3u,
                               &v37,
                               &v43);
                }
                if ( Resident < 0 )
                {
                  WdLogSingleEntry1(3LL, Resident);
                  WdLogGlobalForLineNumber = 381;
LABEL_62:
                  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v49);
LABEL_64:
                  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v41);
LABEL_66:
                  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v45);
                  if ( P != v54 && P )
                    ExFreePoolWithTag(P, 0);
                  return (unsigned int)Resident;
                }
                if ( Resident == 259 )
                {
                  v17 = 1;
                  PagingFenceValue = v37;
                  Resident = 0;
                }
              }
              if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2468LL) & 0x40) != 0 )
              {
                memset(&v52, 0, sizeof(v52));
                v31 = *(_QWORD *)(v26 + 16);
                v52.Protection.Value = 1LL;
                v52.MinimumAddress = *(_QWORD *)(v31 + 2952);
                v52.MaximumAddress = *(_QWORD *)(v31 + 2960);
                if ( v30 )
                  v32 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v39 + 4664),
                          *((_DWORD *)v40 + 122),
                          a2,
                          0,
                          *(_DWORD *)(v27 + 16),
                          &v52);
                else
                  v32 = VIDMM_EXPORT::VidMmMapGpuVirtualAddress(
                          *(VIDMM_EXPORT **)(v26 + 760),
                          *(struct VIDMM_GLOBAL **)(v26 + 768),
                          v38,
                          *(struct VIDMM_MULTI_ALLOC **)(v27 + 24),
                          &v52,
                          1,
                          0xFFFFFFFE);
                Resident = v32;
                if ( v32 >= 0 )
                {
                  if ( v32 == 259 )
                  {
                    PagingFenceValue = v52.PagingFenceValue;
                    Resident = 0;
                    goto LABEL_57;
                  }
                }
                else
                {
                  WdLogSingleEntry1(3LL, v32);
                  WdLogGlobalForLineNumber = 424;
                }
              }
              if ( !v17 )
                goto LABEL_62;
LABEL_57:
              if ( v30 )
              {
                v33 = *((_DWORD *)a2 + 118);
                v50.ObjectHandleArray = 0LL;
                *(_OWORD *)&v50.hAsyncEvent = 0LL;
                v50.hDevice = v33;
                v50.ObjectCount = 1;
                v50.FenceValueArray = &PagingFenceValue;
                Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
                             (DXG_GUEST_VIRTUALGPU_VMBUS *)(v39 + 4664),
                             v40,
                             v33,
                             &v50,
                             1u);
              }
              else
              {
                VIDMM_EXPORT::VidMmWaitForFences(
                  *(VIDMM_EXPORT **)(v26 + 760),
                  *(struct VIDMM_GLOBAL **)(v26 + 768),
                  &v44,
                  &PagingFenceValue);
              }
              goto LABEL_62;
            }
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      v24 = 0LL;
      goto LABEL_34;
    }
    WdLogSingleEntry0(2LL);
    v34 = 255LL;
  }
  WdLogGlobalForLineNumber = v34;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Overflow while calculating buffer size",
    v34,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225621LL;
}
