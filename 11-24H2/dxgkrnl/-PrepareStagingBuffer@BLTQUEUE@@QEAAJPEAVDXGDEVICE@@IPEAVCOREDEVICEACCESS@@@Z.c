/*
 * XREFs of ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1403F9C8C
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A7094 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002BEA0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x140281EF4 (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402F57E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1402F9BAC (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x140354F2C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1403FB920 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1404012B0 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 */

__int64 __fastcall BLTQUEUE::PrepareStagingBuffer(
        BLTQUEUE *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4)
{
  struct COREDEVICEACCESS *v5; // r13
  __int64 v6; // rsi
  __int64 v8; // r14
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r9
  int v12; // edx
  struct _EX_RUNDOWN_REF *v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rsi
  int v17; // eax
  int v18; // eax
  ADAPTER_RENDER *v19; // r8
  int v20; // eax
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rsi
  __int64 v25; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v27; // esi
  struct DXGPROCESS *v28; // r13
  volatile signed __int32 *v29; // r14
  unsigned int v30; // ecx
  __int64 v31; // r8
  __int64 v32; // rdx
  int v33; // ecx
  int v34; // ecx
  struct _EX_RUNDOWN_REF *v35; // rdx
  struct COREDEVICEACCESS *v36; // rax
  int Resident; // eax
  D3DKMT_HANDLE v38; // eax
  int v39; // eax
  UINT Width; // ecx
  UINT Height; // eax
  unsigned int v43; // [rsp+28h] [rbp-D8h]
  unsigned int v44; // [rsp+30h] [rbp-D0h]
  unsigned int v45[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v46; // [rsp+58h] [rbp-A8h]
  struct _EX_RUNDOWN_REF *v47; // [rsp+60h] [rbp-A0h] BYREF
  DXGSYNCOBJECT *v48; // [rsp+68h] [rbp-98h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v49; // [rsp+70h] [rbp-90h] BYREF
  struct _D3DKMT_LOCK2 v50; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v51[12]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v52[54]; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v53[2]; // [rsp+2D0h] [rbp+1D0h] BYREF
  int v54; // [rsp+2D8h] [rbp+1D8h]

  *(_QWORD *)v45 = a4;
  v5 = a4;
  v6 = a3;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)a2 + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5318;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      5318LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LODWORD(v8) = 0;
  v9 = *((_QWORD *)a2 + 5);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v9 + 248));
  v10 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( v10 < *(_DWORD *)(v9 + 296)
    && (v11 = *(_QWORD *)(v9 + 280), (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x60))
    && (*(_DWORD *)(v11 + 16LL * v10 + 8) & 0x2000) == 0
    && (v12 = *(_DWORD *)(v11 + 16LL * v10 + 8) & 0x1F) != 0 )
  {
    if ( v12 == 5 )
    {
      v13 = *(struct _EX_RUNDOWN_REF **)(v11 + 16LL * v10);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      v13 = 0LL;
    }
  }
  else
  {
    v13 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v47, v13);
  _InterlockedDecrement((volatile signed __int32 *)(v9 + 264));
  ExReleasePushLockSharedEx(v9 + 248, 0LL);
  KeLeaveCriticalRegion();
  memset(&v49, 0, sizeof(v49));
  if ( !v47 )
  {
    WdLogSingleEntry3(3LL, -1073741811LL, this, v6);
    WdLogGlobalForLineNumber = 5351;
    goto LABEL_18;
  }
  v14 = *((_QWORD *)a2 + 2);
  v15 = *(_QWORD *)(v47[1].Count + 16);
  if ( *(_QWORD *)(v15 + 16) == *(_QWORD *)(v14 + 16) )
  {
    v49.hAllocation = *(HANDLE *)(v47[6].Count + 16);
    v17 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v14 + 16) + 3128LL), &v49, v15);
    v16 = v17;
    if ( v17 < 0 )
    {
      WdLogSingleEntry1(2LL, v17);
      WdLogGlobalForLineNumber = 5344;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"DdiDescribeAllocation failed: 0x%I64x",
        v16,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_54;
    }
LABEL_18:
    if ( !*((_DWORD *)this + 734) )
    {
      *((_QWORD *)this + 369) = 0LL;
      memset(v51, 0, sizeof(v51));
      v18 = *((_DWORD *)a2 + 117);
      v19 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
      HIDWORD(v51[1]) |= 0x80u;
      LODWORD(v51[0]) = v18;
      LODWORD(v51[1]) = 5;
      v48 = 0LL;
      v20 = CreateSynchronizationObjectInternal(
              (__int64)a2,
              0,
              v19,
              (__int64)v51,
              12,
              0,
              &v48,
              (__int64 *)this + 368,
              0LL);
      v8 = v20;
      if ( v20 < 0 )
      {
        WdLogSingleEntry1(2LL, v20);
        WdLogGlobalForLineNumber = 5377;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"DxgkCreateSynchronizationObjectInternal failed: 0x%I64x",
          v8,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_53:
        LODWORD(v16) = v8;
        goto LABEL_54;
      }
      v21 = *((_QWORD *)a2 + 5);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v21 + 248));
      v46 = v51[11];
      v22 = (LODWORD(v51[11]) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v22 < *(_DWORD *)(v21 + 296) )
      {
        v23 = *(_QWORD *)(v21 + 280);
        if ( ((LODWORD(v51[11]) >> 25) & 0x60) == (*(_BYTE *)(v23 + 16 * v22 + 8) & 0x60)
          && (*(_DWORD *)(v23 + 16 * v22 + 8) & 0x1F) != 0 )
        {
          v24 = 2 * ((v51[11] >> 6) & 0xFFFFFFLL);
          if ( (*(_DWORD *)(v23 + 16 * ((v51[11] >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 224;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              224LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(*(_QWORD *)(v21 + 280) + 8 * v24 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v21 + 256) = 0LL;
      ExReleasePushLockExclusiveEx(v21 + 248, 0LL);
      KeLeaveCriticalRegion();
      v5 = *(struct COREDEVICEACCESS **)v45;
      *((_DWORD *)this + 734) = v46;
    }
    if ( *((_DWORD *)this + 728) )
    {
      if ( v49.Width != *((_DWORD *)this + 730) || v49.Height != *((_DWORD *)this + 731) )
        BLTQUEUE::DestroyStagingBuffer(this);
      if ( *((_DWORD *)this + 728) )
        goto LABEL_53;
    }
    memset(v52, 0, 424);
    v53[0] = v49.Width;
    v53[1] = v49.Height;
    v54 = 0;
    v52[3] = v53;
    HIDWORD(v52[0]) = 0;
    LODWORD(v52[2]) = 3;
    LODWORD(v8) = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v52, v5);
    if ( (int)v8 < 0 )
      goto LABEL_53;
    *((_DWORD *)this + 726) = HIDWORD(v52[6]);
    *((_DWORD *)this + 728) = v52[1];
    Current = DXGPROCESS::GetCurrent(v25);
    v27 = HIDWORD(v52[6]);
    v28 = Current;
    v29 = (volatile signed __int32 *)((char *)Current + 248);
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
    v30 = (v27 >> 6) & 0xFFFFFF;
    if ( v30 < *((_DWORD *)v28 + 74) )
    {
      v31 = *((_QWORD *)v28 + 35);
      v32 = 2LL * v30;
      v33 = *(_DWORD *)(v31 + 16LL * v30 + 8);
      if ( ((v27 >> 25) & 0x60) == (v33 & 0x60) && (v33 & 0x2000) == 0 )
      {
        v34 = v33 & 0x1F;
        if ( v34 )
        {
          if ( v34 == 5 )
          {
            v35 = *(struct _EX_RUNDOWN_REF **)(v31 + 8 * v32);
            goto LABEL_41;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v35 = 0LL;
LABEL_41:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v45, v35);
    _InterlockedDecrement(v29 + 4);
    ExReleasePushLockSharedEx(v29, 0LL);
    KeLeaveCriticalRegion();
    v36 = *(struct COREDEVICEACCESS **)v45;
    if ( !*(_QWORD *)v45 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5422;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"AllocRef.m_pAllocation != NULL",
        5422LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v36 = *(struct COREDEVICEACCESS **)v45;
    }
    *((_DWORD *)this + 727) = *((_DWORD *)v36 + 5);
    Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 4664LL),
                 *((_DWORD *)v28 + 122),
                 *((_DWORD *)a2 + 118),
                 0,
                 (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                 1u,
                 (const struct DXGALLOCATIONREFERENCE *)v45,
                 0LL,
                 0LL);
    v8 = Resident;
    if ( Resident >= 0 )
    {
      v38 = *((_DWORD *)this + 726);
      memset(&v50, 0, sizeof(v50));
      v50.hAllocation = v38;
      LODWORD(v8) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                      (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 4664LL),
                      v28,
                      a2,
                      &v50,
                      0,
                      v43,
                      v44);
      if ( (int)v8 < 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 5448;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"VmBusSendLock2 failed", 5448LL, 0LL, 0LL, 0LL, 0LL);
      }
      *((_QWORD *)this + 366) = v50.pData;
      if ( (int)v8 >= 0 )
      {
        v39 = v54;
        if ( !v54 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5454;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"0 != StagingSurfaceData.Pitch",
            5454LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v39 = v54;
        }
        Width = v49.Width;
        *((_QWORD *)this + 370) = 0LL;
        *((_DWORD *)this + 729) = v39;
        Height = v49.Height;
        *((_DWORD *)this + 731) = v49.Height;
        *((_DWORD *)this + 743) = Height;
        *((_DWORD *)this + 730) = Width;
        *((_DWORD *)this + 742) = Width;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, Resident);
      WdLogGlobalForLineNumber = 5439;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"VmBusSendMakeResident failed: 0x%I64x",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v45);
    goto LABEL_53;
  }
  LODWORD(v16) = -1073741811;
  WdLogSingleEntry3(2LL, a2, v47, -1073741811LL);
  WdLogGlobalForLineNumber = 5335;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
    (__int64)a2,
    (__int64)v47,
    -1073741811LL,
    0LL,
    0LL);
LABEL_54:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v47);
  return (unsigned int)v16;
}
