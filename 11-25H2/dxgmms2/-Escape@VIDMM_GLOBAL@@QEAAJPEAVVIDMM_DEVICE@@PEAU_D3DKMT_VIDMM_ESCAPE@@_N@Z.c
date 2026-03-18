/*
 * XREFs of ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z @ 0x140093434
 * Callers:
 *     VidMmEscape @ 0x14004C550 (VidMmEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140032DD0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140036484 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEBAJ_N@Z @ 0x140045BE8 (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEBAJ_N@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14004D130 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14004D3B4 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?PerformDefragmentationEscape@VIDMM_GLOBAL@@QEAAXW4_D3DKMT_DEFRAG_ESCAPE_OPERATION@@IPEA_K111@Z @ 0x140095D80 (-PerformDefragmentationEscape@VIDMM_GLOBAL@@QEAAXW4_D3DKMT_DEFRAG_ESCAPE_OPERATION@@IPEA_K111@Z.c)
 *     ?VidMmFlushWorkerThread@@YAXPEAUVIDMM_WORKER_THREAD@@@Z @ 0x140098C54 (-VidMmFlushWorkerThread@@YAXPEAUVIDMM_WORKER_THREAD@@@Z.c)
 *     ?GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x140099738 (-GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400B4820 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400B4BE4 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400DB1D0 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1400EBF58 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Escape(
        struct _KTHREAD **this,
        struct VIDMM_DEVICE *a2,
        struct _D3DKMT_VIDMM_ESCAPE *a3,
        char a4)
{
  unsigned int v7; // esi
  unsigned int v8; // r8d
  unsigned __int64 *v9; // r9
  D3DKMT_VIDMMESCAPETYPE Type; // edx
  __int32 v11; // edx
  __int32 v12; // edx
  __int32 v13; // edx
  int v15; // eax
  __int64 v16; // rcx
  ULONG v17; // ecx
  D3DKMT_HANDLE v18; // edx
  UINT v19; // r8d
  __int32 v20; // edx
  __int32 v21; // edx
  __int32 v22; // edx
  UINT64 v23; // rdx
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD *v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  HANDLE hProcess; // r9
  UINT64 NtHandle; // r10
  VIDMM_GLOBAL **v33; // rdx
  VIDMM_GLOBAL *v34; // rcx
  unsigned int i; // r8d
  __int64 v36; // rax
  __int64 v37; // rcx
  VIDMM_GLOBAL *v38; // rax
  D3DKMT_VAD_ESCAPE_COMMAND Command; // eax
  __int64 Value; // rax
  __int64 v41; // r9
  __int64 v42; // r8
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r10
  __int64 v47; // r9
  __int64 v48; // r11
  unsigned __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rax
  VIDMM_PROCESS *v52; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  unsigned __int64 *v54; // [rsp+20h] [rbp-C8h]
  unsigned __int64 *v55; // [rsp+28h] [rbp-C0h]
  unsigned __int64 *v56; // [rsp+30h] [rbp-B8h]
  _BYTE v57[24]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v58[24]; // [rsp+68h] [rbp-80h] BYREF
  _DWORD v59[24]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v60; // [rsp+F8h] [rbp+10h]

  v7 = -1073741811;
  memset(v59, 0, 0x58uLL);
  Type = a3->Type;
  if ( a3->Type > D3DKMT_VIDMMESCAPETYPE_SET_TRIM_INTERVALS )
  {
    v20 = Type - 14;
    if ( !v20 )
    {
      v25 = *this;
      if ( a3->SetFault.Value )
        VidMmFlushWorkerThread(v25);
      else
        KeSetEvent(*((PRKEVENT *)v25 + 3), 0, 0);
      v7 = 0;
LABEL_31:
      if ( v7 != -1073741811 )
        return v7;
LABEL_32:
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v58, this + 5135);
      switch ( a3->Type )
      {
        case D3DKMT_VIDMMESCAPETYPE_GET_VAD_INFO:
          Command = a3->GetVads.Command;
          if ( Command == D3DKMT_VAD_ESCAPE_GET_SEGMENT_CAPS )
          {
            Value = a3->SetFault.Value;
            if ( (unsigned int)Value >= *((_DWORD *)this + 1736) )
            {
              a3->GetVads.Status = -1073741811;
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 17936;
              goto LABEL_69;
            }
            v41 = 0LL;
            v42 = *((_QWORD *)this[5029] + Value);
            a3->Evict.AllocationHandle = *(_DWORD *)(v42 + 64);
            while ( 1 )
            {
              v43 = *(unsigned int *)(v42 + 64);
              if ( (unsigned int)v43 > 0x20 )
                v43 = 32LL;
              if ( (unsigned int)v41 >= v43 )
                break;
              v44 = 3 * v41;
              v45 = *(_QWORD *)(*(_QWORD *)(v42 + 1648) + 8 * v41);
              a3->GetVads.GetSegmentCaps.SegmentCaps[v44 / 3].bAperture = *(_BYTE *)(v45 + 104) & 1;
              *(&a3->GetVads.GetVad.VadAddress + v44) = *(_QWORD *)(v45 + 72);
              *(&a3->GetVads.GetVad.NumMappedRanges + 2 * v44) = *(_DWORD *)(v45 + 416);
              *(&a3->GetVads.GetVad.VadType + 2 * v44) = *(unsigned __int16 *)(v45 + 40);
              a3->GetVads.GetPte.PageTableIndex[2 * v44 + 5] = *(_DWORD *)(v45 + 516);
              a3->GetVads.GetSegmentCaps.SegmentCaps[v44 / 3].bReservedSysMem = (*(_DWORD *)(v45 + 104) & 0x1000) != 0;
              v41 = (unsigned int)(v41 + 1);
            }
          }
          else
          {
            if ( Command != D3DKMT_VAD_ESCAPE_GET_GPUMMU_CAPS )
            {
              v52 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 8);
              if ( v52 )
                v52 = (VIDMM_PROCESS *)*((_QWORD *)v52 + 1);
              VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                          v52,
                                          *((_DWORD *)this[3] + 60),
                                          0xFFFFFFFF);
              if ( !VirtualAddressAllocator )
                goto LABEL_69;
              CVirtualAddressAllocator::GetVads(VirtualAddressAllocator, a3);
              break;
            }
            if ( a3->SetFault.Value >= *((_DWORD *)this + 1736) )
            {
              a3->GetVads.Status = -1073741811;
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 17963;
              goto LABEL_69;
            }
            v46 = *((_QWORD *)this[5029] + a3->SetFault.Value);
            v47 = *(_QWORD *)(v46 + 480);
            if ( !v47 )
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 17993;
              goto LABEL_69;
            }
            a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.ReadOnlyMemorySupported = *(_BYTE *)v47 & 1;
            a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.NoExecuteMemorySupported = (*(_DWORD *)v47 & 2) != 0;
            a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.ZeroInPteSupported = (*(_DWORD *)v47 & 4) != 0;
            a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.CacheCoherentMemorySupported = (*(_DWORD *)v47 & 0x10) != 0;
            a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.LargePageSupported = (*(_DWORD *)v47 & 0x40) != 0;
            a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.DualPteSupported = (*(_DWORD *)v47 & 0x80) != 0;
            v48 = 0LL;
            HIBYTE(a3->Defrag.TotalCommitted) = HIBYTE(a3->Defrag.TotalCommitted) & 0xFE | (*(_DWORD *)(v47 + 12) != 0);
            a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.AllowNonAlignedLargePageAddress = BYTE1(*(_DWORD *)v47) & 1;
            a3->GetVads.GetVad.NumMappedRanges = *(_DWORD *)(v47 + 8);
            for ( a3->GetVads.GetVad.VadType = *(_DWORD *)(v47 + 16);
                  (unsigned int)v48 < *(_DWORD *)(v47 + 16);
                  *(&a3->GetVads.GetVadRange.OwnerOffset + v49) = *(_QWORD *)(v46 + 8 * v50 + 168) )
            {
              v49 = 5 * v48;
              v50 = 6 * v48;
              a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[v49 / 5].IndexBitCount = *(_DWORD *)(v46 + 48 * v48 + 132);
              v51 = 3 * (v48 + 3);
              v48 = (unsigned int)(v48 + 1);
              *(&a3->GetVads.GetVad.EndAddress + v49) = *(_QWORD *)(v46 + 16 * v51);
              a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[v49 / 5].IndexShift = *(_QWORD *)(v46 + 8 * v50 + 152);
              *(&a3->GetVads.GetVadRange.pOwner + v49) = *(_QWORD *)(v46 + 8 * v50 + 160);
            }
          }
          a3->GetVads.Status = 0;
          break;
        case D3DKMT_VIDMMESCAPETYPE_SET_BUDGET:
          v29 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
          if ( v29 )
            v30 = *(_QWORD *)(v29 + 8);
          else
            v30 = 0LL;
          hProcess = a3->Evict.hProcess;
          NtHandle = a3->EvictByNtHandle.NtHandle;
          v33 = *(VIDMM_GLOBAL ***)(*(_QWORD *)(v30 + 16) + 8LL * *((unsigned int *)this[3] + 60));
          if ( v33 )
          {
            v34 = *v33;
            for ( i = 0; i < *((_DWORD *)*v33 + 1736); v34 = *v33 )
            {
              v36 = (unsigned __int16)i++;
              v37 = 304 * v36;
              v38 = v33[2];
              *(_QWORD *)((char *)v38 + v37 + 48) = NtHandle;
              *(_QWORD *)((char *)v38 + v37 + 56) = hProcess;
            }
            VIDMM_GLOBAL::RequestNewBudget(v34, 0);
          }
          break;
        case D3DKMT_VIDMMESCAPETYPE_GET_BUDGET:
          v26 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
          if ( v26 )
            v26 = *(_QWORD *)(v26 + 8);
          v27 = *((unsigned int *)this[3] + 60);
          v28 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 8 * v27);
          if ( v28 )
          {
            DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v57, (struct _KTHREAD **)(v28 + 48));
            VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(
              *(VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(v26 + 16) + 8 * v27),
              &a3->EvictByNtHandle.NtHandle,
              0,
              1);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v57);
          }
          else
          {
            a3->EvictByNtHandle.NtHandle = 0LL;
          }
          break;
        default:
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 18040;
LABEL_69:
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v58);
          return v7;
      }
      v7 = 0;
      goto LABEL_69;
    }
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = v21 - 2;
      if ( !v22 )
      {
        Current = DXGPROCESS::GetCurrent();
        if ( !Current || (*((_DWORD *)Current + 102) & 0x1000) == 0 )
          goto LABEL_32;
        v59[10] = a3->SetFault.0;
        v59[0] = 132;
        v15 = VIDMM_GLOBAL::QueueSystemCommandAndWait((VIDMM_GLOBAL *)this, (struct _VIDMM_SYSTEM_COMMAND *)v59, 1);
        goto LABEL_12;
      }
      if ( v22 != 1 )
        goto LABEL_32;
      v60 = (unsigned int)Feature_DelayedForceEviction__private_featureState;
      if ( (Feature_DelayedForceEviction__private_featureState & 0x10) == 0 )
      {
        LODWORD(v60) = Feature_DelayedForceEviction__private_featureState | 1;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_DelayedForceEviction__private_descriptor,
          v60,
          3LL);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v60,
          3,
          (__int64)&Feature_DelayedForceEviction__private_descriptor);
      }
      v23 = qword_140081658 / 10000000;
      qword_140081658 = 10000000 * a3->EvictByNtHandle.NtHandle;
      a3->EvictByNtHandle.NtHandle = v23;
    }
    else
    {
      VIDMM_GLOBAL::PerformDefragmentationEscape((VIDMM_GLOBAL *)this, a3->Defrag.Operation, v8, v9, v54, v55, v56);
    }
    return 0;
  }
  if ( Type == D3DKMT_VIDMMESCAPETYPE_SET_TRIM_INTERVALS )
  {
    v17 = dword_14008151C;
    v18 = dword_140081518;
    v19 = dword_140081510;
    dword_14008151C = a3->Wake.bFlush;
    dword_140081518 = a3->Evict.AllocationHandle;
    dword_140081510 = a3->SuspendProcess.bAllowWakeOnSubmission;
    a3->Evict.AllocationHandle = v18;
    a3->GetVads.GetVadRange.VaRangeIndex = v19;
    a3->SetFault.Value = v17;
    KeSetEvent(*((PRKEVENT *)*this + 3), 0, 0);
    return 0;
  }
  if ( Type == D3DKMT_VIDMMESCAPETYPE_SETFAULT )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 17794;
    DxgkLogInternalTriageEvent(v16, 0x40000LL);
    return (unsigned int)-1073741823;
  }
  v11 = Type - 1;
  if ( !v11 )
    return 0;
  v12 = v11 - 1;
  if ( !v12 )
    return 0;
  v13 = v12 - 1;
  if ( !v13 )
  {
    v15 = VIDMM_GLOBAL::ApertureCorruptionCheck((VIDMM_GLOBAL *)this, 0);
LABEL_12:
    v7 = v15;
    goto LABEL_31;
  }
  if ( v13 != 1 )
    goto LABEL_32;
  if ( a4 )
    return 0LL;
  return (unsigned int)-1073741790;
}
