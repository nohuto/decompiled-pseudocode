/*
 * XREFs of ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x14033A348
 * Callers:
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140336F2C (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x14033A0C0 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x14033A2DC (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140356E10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1400390AC (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ??_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z @ 0x14003B798 (--_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z.c)
 *     ?VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1400412B4 (-VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_L.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x140046860 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x140047224 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?VidMmWaitOnAllocationDmaReferences@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@IK@Z @ 0x1400477B8 (-VidMmWaitOnAllocationDmaReferences@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400560B8 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmWaitOnAllocationPresentQueue@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x140067898 (-VidMmWaitOnAllocationPresentQueue@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@I.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x14018894C (-TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1401E74B0 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVCOREDEVICEACCESS@@@Z @ 0x14022A12C (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x14032578C (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z @ 0x140325B54 (-DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x140325C3C (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x140335510 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x14034A930 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x140376424 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?RemoveDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAXIPEAVDXGALLOCATION@@@Z @ 0x1403B27E8 (-RemoveDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAXIPEAVDXGALLOCATION@@@Z.c)
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1403C8D1C (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        int a3,
        struct DXGALLOCATION *a4,
        PERESOURCE **a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  __int64 v6; // rax
  struct DXGALLOCATION *v8; // rsi
  __int64 v10; // rcx
  struct DXGRESOURCE *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r14
  int v18; // esi
  int v19; // edi
  struct DXGPROCESS *Current; // rax
  struct DXGALLOCATION *v21; // r14
  struct DXGALLOCATION *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rsi
  int v25; // edi
  struct DXGPROCESS *v26; // rax
  __int64 v27; // rax
  struct DXGALLOCATION *v28; // r9
  __int64 v29; // rax
  unsigned int v30; // edx
  unsigned int v31; // r8d
  __int64 v32; // rcx
  DXGOVERLAY *i; // rdi
  unsigned int v34; // edx
  unsigned int v35; // edx
  __int64 v36; // rdx
  const char *v37; // rdx
  struct DXGPROCESS *v38; // rdi
  char v39; // di
  const char *v40; // rdx
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rax
  const char *v45; // rdx
  void *v46; // rcx
  void *v47; // rdx
  ADAPTER_RENDER *v48; // rcx
  void *v49; // r12
  unsigned int v50; // edx
  char v51; // di
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v55; // rcx
  __int64 v56; // rbx
  DXGADAPTER *v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned int v60; // r8d
  struct DXGALLOCATION *v61; // rbx
  struct DXGALLOCATION *v62; // r14
  struct DXGALLOCATION *v63; // rax
  struct DXGALLOCATION *v64; // rsi
  struct DXGADAPTERALLOCATION *v65; // rdx
  void *v66; // rcx
  DXGADAPTERALLOCATION *v67; // rcx
  struct DXGALLOCATION *v68; // rbx
  char v69; // [rsp+50h] [rbp-B0h]
  void **v71; // [rsp+58h] [rbp-A8h]
  unsigned int v72; // [rsp+60h] [rbp-A0h] BYREF
  void *v73; // [rsp+68h] [rbp-98h]
  struct DXGALLOCATION *v74; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v75; // [rsp+78h] [rbp-88h]
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGKARG_CLOSEALLOCATION v77; // [rsp+88h] [rbp-78h] BYREF
  struct _DXGKARG_DESTROYALLOCATION v78; // [rsp+98h] [rbp-68h] BYREF
  struct DXGALLOCATION *v79; // [rsp+B8h] [rbp-48h]
  struct DXGRESOURCE *v80; // [rsp+C0h] [rbp-40h]
  _BYTE v81[16]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v82[24]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v83[128]; // [rsp+F0h] [rbp-10h] BYREF

  v6 = *((_QWORD *)this + 2);
  v8 = a4;
  v75 = a4;
  v10 = *(_QWORD *)(v6 + 16);
  v11 = a2;
  v80 = a2;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1311;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      1311LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  memset(v83, 0, sizeof(v83));
  if ( ((unsigned __int64)v11 & -(__int64)(a3 != 0)) == 0
    || (v71 = *(void ***)(((unsigned __int64)v11 & -(__int64)(a3 != 0)) + 0x40)) == 0LL )
  {
    v71 = (void **)v83;
  }
  v77 = 0LL;
  if ( v11 && a3 )
  {
    v16 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    *(_QWORD *)(v16 + 24) = v11;
    v13 = *((_QWORD *)v11 + 1);
    v12 = *(_QWORD *)(v13 + 40);
    *(_QWORD *)(v16 + 32) = v12;
    WdLogGlobalForLineNumber = 1354;
  }
  LOBYTE(v12) = 0;
  v69 = 0;
  v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( *(_BYTE *)(v17 + 209) && a3 && v11 )
  {
    v18 = *((_DWORD *)v11 + 5);
    if ( v18 )
    {
      v19 = *((_DWORD *)this + 118);
      Current = DXGPROCESS::GetCurrent(v13);
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
        (DXG_GUEST_VIRTUALGPU_VMBUS *)(v17 + 4664),
        *((_DWORD *)Current + 122),
        v19,
        v18,
        0,
        0LL,
        a6,
        a5);
      *((_DWORD *)v11 + 5) = 0;
      LOBYTE(v12) = 1;
      v69 = 1;
    }
    v8 = v75;
  }
  v74 = v8;
  v21 = v8;
  if ( v8 )
  {
    v22 = v8;
    v23 = (__int64)v8;
    do
    {
      v79 = (struct DXGALLOCATION *)*((_QWORD *)v22 + 8);
      v24 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( *(_BYTE *)(v24 + 209) )
      {
        if ( !(_BYTE)v12 && (*(_BYTE *)(v23 + 128) & 4) != 0 )
        {
          v25 = *((_DWORD *)this + 118);
          v26 = DXGPROCESS::GetCurrent(v23);
          DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v24 + 4664),
            *((_DWORD *)v26 + 122),
            v25,
            0,
            1u,
            &v74,
            a6,
            a5);
        }
        *((_BYTE *)v21 + 128) &= ~4u;
      }
      v27 = WdLogNewEntry5_WdTrace(v23, v12, v14, v15);
      *(_QWORD *)(v27 + 24) = v21;
      *(_QWORD *)(v27 + 32) = *(_QWORD *)(*((_QWORD *)v21 + 1) + 40LL);
      v29 = *((_QWORD *)v21 + 6);
      WdLogGlobalForLineNumber = 1403;
      v30 = *(_DWORD *)(v29 + 4);
      if ( (v30 & 1) != 0 )
      {
        v31 = *((_DWORD *)this + 476);
        if ( v31 || (*(_DWORD *)(*((_QWORD *)this + 5) + 408LL) & 0x100) == 0 )
        {
          if ( ((v30 >> 6) & 0xF) >= v31 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1409;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"VidPnSourceId < this->GetNumVidPnSources()",
              1409LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          DXGDEVICE::RemovePrimaryAllocation(this, v21);
        }
      }
      v32 = *(unsigned int *)(*((_QWORD *)v21 + 6) + 4LL);
      if ( (v32 & 8) != 0 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v81, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 856LL), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v81);
        for ( i = (DXGOVERLAY *)*((_QWORD *)this + 64); i != (DXGDEVICE *)((char *)this + 512) && i; i = *(DXGOVERLAY **)i )
        {
          if ( *((struct DXGALLOCATION **)i + 6) == v21 )
            DXGOVERLAY::Destroy(i);
        }
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v81);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v81);
      }
      v34 = *(_DWORD *)(*((_QWORD *)v21 + 6) + 4LL);
      if ( (v34 & 0x2000) != 0 && *((_QWORD *)v21 + 3) )
        DXGDEVICE::RemoveDirectFlipAllocationFromRequestedPinnedList(this, (v34 >> 6) & 0xF, v21);
      v35 = *(_DWORD *)(*((_QWORD *)v21 + 6) + 4LL);
      if ( (v35 & 0x200A) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary((struct _KTHREAD **)this, (v35 >> 6) & 0xF, v21, v28);
      v36 = *((_QWORD *)v21 + 3);
      if ( v36 && (*((_DWORD *)v21 + 18) & 0x800) != 0 )
      {
        if ( _bittest((const signed __int32 *)(*((_QWORD *)v21 + 6) + 4LL), 0xDu) )
        {
          v72 = 0;
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                                              + 8LL)
                                                                                  + 640LL))(
                 *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                 v36,
                 &v72) )
          {
            if ( v72 <= 1 && a5 && !DXGADAPTER::IsCoreResourceExclusiveOwner(a5[3]) )
            {
              COREDEVICEACCESS::Release((COREDEVICEACCESS *)a5);
              VIDMM_EXPORT::VidMmWaitOnAllocationPresentQueue(
                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                *((struct VIDMM_MULTI_ALLOC **)v21 + 3),
                (*(_DWORD *)(*((_QWORD *)v21 + 6) + 4LL) >> 6) & 0xF);
              COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a5, v37);
            }
          }
        }
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
          *((struct VIDMM_MULTI_ALLOC **)v21 + 3));
        *((_DWORD *)v21 + 18) &= ~0x800u;
      }
      v38 = DXGPROCESS::GetCurrent(v32);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v38 + 248));
      HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)v38 + 280), *((_DWORD *)v21 + 4));
      DxgkUnreferenceDxgAllocation(v21);
      *((_QWORD *)v38 + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v38 + 248, 0LL);
      KeLeaveCriticalRegion();
      v39 = 0;
      if ( a5 && !DXGADAPTER::IsCoreResourceExclusiveOwner(a5[3]) )
      {
        v39 = 1;
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a5);
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v21 + 11);
      if ( v39 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a5, v40);
      v41 = *((_QWORD *)v21 + 3);
      if ( v41 )
      {
        Object = 0LL;
        v42 = (*(__int64 (__fastcall **)(_QWORD, __int64, PVOID *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                  + 760LL)
                                                                                      + 8LL)
                                                                          + 144LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                v41,
                &Object,
                a6.Value);
        if ( v42 < 0 )
        {
          if ( v42 != -1071775486 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1522;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"ntStatus == STATUS_GRAPHICS_ALLOCATION_BUSY",
              1522LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v44 = WdLogNewEntry5_WdTrace(v43, v12, v14, v15);
          *(_QWORD *)(v44 + 24) = *((_QWORD *)this + 99);
          *(_QWORD *)(v44 + 32) = *((_QWORD *)v21 + 3);
          WdLogGlobalForLineNumber = 1524;
          if ( a5 && !DXGADAPTER::IsCoreResourceExclusiveOwner(a5[3]) )
          {
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)a5);
            if ( Object )
            {
              if ( KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL) == 257 )
              {
                DXGDEVICE::FlushScheduler(this, 3LL, 4294967293LL, 0LL);
                KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
              }
            }
            else
            {
              VIDMM_EXPORT::VidMmWaitOnAllocationDmaReferences(
                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                *((struct VIDMM_MULTI_ALLOC **)v21 + 3),
                0,
                4u);
            }
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a5, v45);
          }
          VIDMM_EXPORT::VidMmCloseAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
            *((struct VIDMM_MULTI_ALLOC **)v21 + 3),
            0LL,
            a6);
        }
        *((_QWORD *)v21 + 3) = 0LL;
      }
      else
      {
        DXGDEVICE::TraceCloseParavirtualizedAllocation(this, v21);
      }
      v46 = (void *)*((_QWORD *)v21 + 4);
      if ( v46 )
      {
        v71[v77.NumAllocations++] = v46;
        *((_QWORD *)v21 + 4) = 0LL;
      }
      v22 = v79;
      LOBYTE(v12) = v69;
      v21 = v79;
      v74 = v79;
      v23 = (__int64)v79;
    }
    while ( v79 );
    v11 = v80;
    v8 = v75;
  }
  if ( v77.NumAllocations )
  {
    v47 = (void *)*((_QWORD *)this + 77);
    v48 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    v77.pOpenHandleList = v71;
    ADAPTER_RENDER::DdiCloseAllocation(v48, v47, &v77);
  }
  v49 = 0LL;
  v50 = 1;
  v73 = 0LL;
  v51 = 1;
  if ( v11 )
  {
    if ( (*((_DWORD *)v11 + 1) & 1) != 0 )
    {
      v52 = *((_QWORD *)v11 + 7);
      if ( v52 )
      {
        v53 = *(_QWORD *)(v52 + 152);
        if ( v53 )
        {
          if ( *(DXGDEVICE **)(v53 + 80) == this && (*(_DWORD *)(v53 + 72))-- == 1 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v82,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)v11 + 7) + 152LL) + 8LL),
              0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v82);
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 7) + 152LL) + 80LL) = 0LL;
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v82);
            v50 = 1;
          }
        }
        v55 = *((_QWORD *)v11 + 7);
        v56 = *(_QWORD *)(v55 + 136);
        if ( (*(_DWORD *)(v56 - 44) & 2) != 0 )
        {
          if ( *(_DWORD *)(v55 + 132) != 1 )
          {
            v57 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
            if ( *((_DWORD *)v57 + 74) <= 1u || !DXGADAPTER::IsDxgmms2(v57) )
            {
              WdLogSingleEntry0(v50);
              WdLogGlobalForLineNumber = 1642;
              DxgkLogInternalTriageEvent(
                0LL,
                262146LL,
                0xFFFFFFFFLL,
                L"1 == pResource->m_pSharedResource->m_AllocationCount || GetRenderAdapter()->GetPhysicalAdapterCount() > "
                 "1 && GetRenderAdapter()->IsDxgmms2()",
                1642LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v50 = 1;
            }
          }
          if ( ((*(_DWORD *)(v56 - 44) >> 6) & 0xFu) >= *((_DWORD *)this + 476)
            && ((unsigned __int8)BYTE1(*(_DWORD *)(*((_QWORD *)this + 5) + 408LL)) & (unsigned __int8)v50) == 0 )
          {
            WdLogSingleEntry0(v50);
            WdLogGlobalForLineNumber = 1643;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"pAdapterAlloc->m_VidPnSourceId < this->GetNumVidPnSources() || GetProcess()->IsVmProcess()",
              1643LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v58 = (*(_DWORD *)(v56 - 44) >> 6) & 0xF;
          if ( *((struct DXGRESOURCE **)this + v58 + 83) == v11 )
            *((_QWORD *)this + v58 + 83) = 0LL;
        }
        v59 = *((_QWORD *)v11 + 3);
        v60 = 0;
        while ( v59 )
        {
          v59 = *(_QWORD *)(v59 + 64);
          ++v60;
        }
        DXGSHAREDRESOURCE::ReleaseReference(*((DXGSHAREDRESOURCE **)v11 + 7), v71, v60);
        *((_QWORD *)v11 + 7) = 0LL;
      }
      v51 = 0;
    }
    else
    {
      v49 = (void *)*((_QWORD *)v11 + 7);
      v73 = v49;
    }
  }
  v61 = v8;
  v74 = v8;
  memset(&v78, 0, sizeof(v78));
  if ( v8 )
  {
    v62 = v8;
    v63 = v8;
    while ( 1 )
    {
      v64 = (struct DXGALLOCATION *)*((_QWORD *)v62 + 8);
      v62 = v64;
      if ( (*((_DWORD *)v63 + 18) & 0x800) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1695;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pCurrentAlloc->m_Pinned == FALSE",
          1695LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (*((_DWORD *)v61 + 18) & 0x7FE) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1696;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pCurrentAlloc->m_DirectFlipIndex == 0",
          1696LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v65 = (struct DXGADAPTERALLOCATION *)*((_QWORD *)v61 + 6);
      if ( v65 )
      {
        if ( !v51 )
          goto LABEL_110;
        DXGDEVICE::DestroyAdapterAllocation(this, v65);
        v66 = *(void **)(*((_QWORD *)v61 + 6) + 16LL);
        if ( v66 )
        {
          v71[v78.NumAllocations++] = v66;
          *(_QWORD *)(*((_QWORD *)v61 + 6) + 16LL) = 0LL;
        }
      }
      else if ( !v51 )
      {
LABEL_110:
        if ( !v11 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1718;
          DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pResource", 1718LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( (*((_DWORD *)v11 + 1) & 1) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1719;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"pResource->m_SharedResource",
            1719LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( !a3 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1720;
          DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"bDestroyResource", 1720LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v67 = (DXGADAPTERALLOCATION *)*((_QWORD *)v61 + 6);
      if ( (!v11 || (*((_DWORD *)v11 + 1) & 1) == 0) && v67 )
        DXGADAPTERALLOCATION::`scalar deleting destructor'(v67);
      v61 = v64;
      v63 = v64;
      v74 = v64;
      if ( !v64 )
      {
        v8 = v75;
        v49 = v73;
        break;
      }
    }
  }
  if ( v51 )
  {
    v78.Flags.Value = 0;
    if ( v11 )
      v78.Flags.Value = a3 != 0;
    v78.hResource = v49;
    if ( v78.NumAllocations )
    {
      v78.pAllocationList = v71;
    }
    else
    {
      v78.pAllocationList = 0LL;
      if ( !a3 || !v49 )
        goto LABEL_135;
    }
    ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)this + 2), &v78, 0LL);
    if ( v11 && !a3 )
    {
      if ( (*((_DWORD *)v11 + 1) & 1) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1768;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"!(pResource->m_SharedResource)",
          1768LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_QWORD *)v11 + 7) = v78.hResource;
    }
  }
LABEL_135:
  if ( v8 )
  {
    v68 = v8;
    do
    {
      v68 = (struct DXGALLOCATION *)*((_QWORD *)v68 + 8);
      DXGALLOCATION::`scalar deleting destructor'(v8);
      v8 = v68;
    }
    while ( v68 );
  }
}
