/*
 * XREFs of ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DD034
 * Callers:
 *     ?Execute@VIDMM_TASK_PROCESS_TERMINATIONS@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z @ 0x14009F0B0 (-Execute@VIDMM_TASK_PROCESS_TERMINATIONS@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@.c)
 *     ExecutePagingCommand @ 0x14009F260 (ExecutePagingCommand.c)
 *     VidMmSubmitPacket @ 0x1400DCB90 (VidMmSubmitPacket.c)
 *     VidMmProcessPendingTerminations @ 0x1400DCF74 (VidMmProcessPendingTerminations.c)
 *     VidMmFlushDeferredEvictions @ 0x1400DEEE0 (VidMmFlushDeferredEvictions.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchMarkDeviceAsError @ 0x14002BEA0 (VidSchMarkDeviceAsError.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140033D04 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1400341A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140034390 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140035820 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ @ 0x14003822C (-HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ @ 0x140038A2C (-DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ.c)
 *     ?DecrementBudgetCounter@@YAXPEAXPEA_K_K@Z @ 0x14003965C (-DecrementBudgetCounter@@YAXPEAXPEA_K_K@Z.c)
 *     NeedsApertureForLock @ 0x140039994 (NeedsApertureForLock.c)
 *     VidSchCancelDeviceCommand @ 0x14003BC38 (VidSchCancelDeviceCommand.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14003C2C8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x14003C7B4 (-NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x140040244 (-InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x140090AD8 (-EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z.c)
 *     ?FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400A9564 (-FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400A95B8 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_A.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400AB430 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400AC280 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400ACAE4 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400B9DF0 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400BAA94 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ @ 0x1400BB478 (-EvictAllReclaimedAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ.c)
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400BB638 (-EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400BEF44 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400BF1DC (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400C2210 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?LockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N1KPEAPEAXPEA_N@Z @ 0x1400CD020 (-LockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N1KPEAPEAXPEA_N@Z.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400CD300 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400CD320 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1400CE3B8 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400DA950 (-RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1400DB064 (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400DC5B8 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E05F4 (-VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_A.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1400E1744 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E182C (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1400E194C (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1400E1F20 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1400E2184 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400E2D80 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 *     ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1400E3558 (-PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 *     ?FindNewAllocOwner@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E5760 (-FindNewAllocOwner@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1400E5800 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@PEAVVIDMM.c)
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x1400E59F4 (-TransferAllocationOwnership@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@Z.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400E66C0 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400E6810 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@QEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1400F496C (-VerifyBudgetGroups@VIDMM_GLOBAL@@QEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F515C (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@QEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1400F68A0 (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@QEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 *     ?CleanupAllocationCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400F68E0 (-CleanupAllocationCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z @ 0x1400F77E4 (-CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@QEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1400FACC0 (-GetMostPreferredSegment@VIDMM_GLOBAL@@QEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FC570 (-RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FDCE0 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140101AD4 (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140103FD4 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x140104004 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_A.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x140104E20 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x140104EA0 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ReleaseAllResidencyLocksForAllocation @ 0x140105718 (ReleaseAllResidencyLocksForAllocation.c)
 *     AcquireAllResidencyLocksForAllocation @ 0x140105D54 (AcquireAllResidencyLocksForAllocation.c)
 *     ?TransferAllocationDecommit@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x140106C34 (-TransferAllocationDecommit@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::ProcessDeferredCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_DEFERRED_COMMAND *a2,
        bool *a3,
        bool a4,
        _DWORD *a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        bool a7,
        struct VIDMM_ALLOC **a8)
{
  bool *v8; // rax
  VIDMM_GLOBAL *v9; // r15
  struct _VIDMM_DEFERRED_COMMAND *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // r14
  int v13; // ecx
  __int64 v14; // rax
  _DWORD **v15; // rdi
  unsigned int v16; // r13d
  void *v17; // r9
  int v18; // r10d
  _DWORD *v19; // rcx
  __int64 v20; // r11
  VIDMM_GLOBAL *v21; // rcx
  unsigned int v22; // eax
  int v23; // edx
  __int64 v24; // r8
  VIDMM_PROCESS *v25; // rcx
  bool *v26; // rdi
  __int64 v27; // rdx
  int v28; // r11d
  unsigned int inited; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // rcx
  VIDMM_PHYSICAL_ADAPTER *v34; // rbx
  unsigned int v35; // ebx
  int v36; // ecx
  int v37; // eax
  int v38; // eax
  VIDMM_GLOBAL *v39; // rcx
  __int64 v40; // rcx
  _DWORD *v41; // rax
  struct VIDMM_LOCAL_ALLOC *NewAllocOwner; // rdi
  VIDMM_PHYSICAL_ADAPTER *v43; // rcx
  _QWORD **v44; // rax
  _QWORD *v45; // rdx
  _QWORD *v46; // rax
  _QWORD *v47; // rdi
  VIDMM_GLOBAL *v48; // rcx
  __int64 v49; // rax
  _QWORD *v50; // rcx
  __int64 v51; // rax
  VIDMM_GLOBAL *v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  int updated; // eax
  struct VIDMM_GLOBAL_ALLOC *v56; // rbx
  char v57; // di
  unsigned int v58; // edx
  union _LARGE_INTEGER v59; // rbx
  unsigned int v60; // r8d
  struct _D3DDDI_SEGMENTPREFERENCE v61; // edi
  VIDMM_PHYSICAL_ADAPTER *v62; // r9
  int v63; // ecx
  int v64; // eax
  __int64 v65; // rax
  unsigned int v66; // r8d
  int v67; // eax
  int v68; // ecx
  int v69; // eax
  int v70; // r8d
  int v71; // ebx
  union _LARGE_INTEGER v72; // rdx
  int v73; // r10d
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r8
  VIDMM_GLOBAL *v78; // rcx
  char v79; // r8
  unsigned int v80; // edx
  char v81; // r9
  unsigned int v82; // ebx
  unsigned int v83; // eax
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  __int64 v85; // rcx
  VIDMM_PHYSICAL_ADAPTER *v86; // rdi
  VIDMM_PROCESS_ADAPTER_INFO *v87; // rdx
  __int64 v88; // r14
  __int64 v89; // rcx
  void *v90; // r14
  _QWORD *v91; // r12
  union _LARGE_INTEGER v92; // r15
  _QWORD *v93; // rdi
  __int64 v94; // rcx
  __int64 v95; // rcx
  VIDMM_SEGMENT *v96; // rcx
  unsigned __int16 v97; // ax
  __int64 v98; // rdx
  char v99; // bl
  struct _KTHREAD **v100; // rdx
  VIDMM_GLOBAL *v101; // rcx
  _QWORD **v102; // r13
  _QWORD *i; // rbx
  __int64 *j; // rdi
  unsigned int *v105; // rax
  struct _VIDSCH_SYNC_OBJECT *v107; // rcx
  unsigned __int16 v108; // r8
  int v109; // r11d
  unsigned int v110; // eax
  void **v112; // [rsp+28h] [rbp-D8h]
  int v113; // [rsp+30h] [rbp-D0h]
  char v114; // [rsp+50h] [rbp-B0h]
  char v115; // [rsp+50h] [rbp-B0h]
  bool v116; // [rsp+51h] [rbp-AFh]
  unsigned __int8 v117; // [rsp+51h] [rbp-AFh]
  bool v119; // [rsp+60h] [rbp-A0h] BYREF
  bool v120; // [rsp+61h] [rbp-9Fh]
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-98h] BYREF
  struct VIDMM_LOCAL_ALLOC *v122; // [rsp+70h] [rbp-90h]
  BOOL v123; // [rsp+78h] [rbp-88h]
  VIDMM_PHYSICAL_ADAPTER *v124; // [rsp+80h] [rbp-80h]
  unsigned int v125; // [rsp+88h] [rbp-78h]
  struct VIDMM_ALLOC **v126; // [rsp+90h] [rbp-70h]
  unsigned int v127; // [rsp+98h] [rbp-68h]
  int v128; // [rsp+9Ch] [rbp-64h]
  int v129; // [rsp+A0h] [rbp-60h]
  VIDMM_PHYSICAL_ADAPTER *v130; // [rsp+A8h] [rbp-58h]
  VIDMM_PROCESS_ADAPTER_INFO *v131; // [rsp+B0h] [rbp-50h] BYREF
  struct _VIDMM_DEFERRED_COMMAND *v132; // [rsp+B8h] [rbp-48h] BYREF
  char v133; // [rsp+C0h] [rbp-40h]
  VIDMM_GLOBAL *v134; // [rsp+C8h] [rbp-38h]
  __int64 v135; // [rsp+D0h] [rbp-30h]
  struct _VIDSCH_SYNC_OBJECT *v136; // [rsp+D8h] [rbp-28h]
  _BYTE v137[24]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v138[24]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v139[32]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v140[10]; // [rsp+130h] [rbp+30h] BYREF
  struct _KAPC_STATE v141; // [rsp+180h] [rbp+80h] BYREF
  PRKPROCESS *v142; // [rsp+1B0h] [rbp+B0h]

  v8 = a3;
  v134 = this;
  v9 = this;
  v120 = a4;
  v10 = a2;
  *a8 = 0LL;
  v11 = 0LL;
  v12 = *((_QWORD *)a2 + 2);
  v132 = a2;
  v136 = a6;
  v126 = a8;
  v135 = v12;
  v124 = 0LL;
  Interval.QuadPart = 0LL;
  v122 = 0LL;
  v130 = 0LL;
  LOBYTE(v123) = 0;
  if ( v12 )
  {
    v124 = *(VIDMM_PHYSICAL_ADAPTER **)v12;
    v11 = *(_QWORD *)v124;
    v13 = *(_DWORD *)(*(_QWORD *)v124 + 24LL);
    Interval = **(union _LARGE_INTEGER **)v124;
    v122 = *(struct VIDMM_LOCAL_ALLOC **)(v11 + 48);
    v14 = *((_QWORD *)v9 + 5029);
    v123 = (v13 & 0x40000000) != 0;
    v130 = *(VIDMM_PHYSICAL_ADAPTER **)(v14 + 8LL * (v13 & 0x3F));
    v8 = a3;
  }
  v15 = (_DWORD **)*((_QWORD *)a2 + 1);
  v16 = 0;
  v116 = 0;
  v127 = 0;
  if ( !v15 )
    v15 = *(_DWORD ***)(v12 + 8);
  *v8 = 0;
  VIDMM_GLOBAL::StartPreparation((__int64)v9, 0xFFFFFFFF, (__int64)v15, v12, *(_DWORD *)a2);
  v19 = v15[4];
  v20 = 0LL;
  if ( *((_BYTE *)v19 + 204) || _InterlockedCompareExchange(v19 + 50, 0, 0) || VIDMM_GLOBAL::IsTdrPending(v9) )
  {
    *((_DWORD *)v10 + 21) = -1071775232;
    *((_BYTE *)v10 + 80) = 1;
  }
  if ( *((_BYTE *)v10 + 80) != (_BYTE)v20 )
  {
    if ( *(_DWORD *)v10 == 113 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v138,
        (struct _KTHREAD **)(*((_QWORD *)v10 + 4) + 56LL));
      VIDMM_GLOBAL::CleanupVadReference(v21, (struct _VIDMM_DEFERRED_COMMAND *)((char *)v10 + 32));
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v138);
      v20 = 0LL;
    }
    if ( (v22 = *(_DWORD *)v10 - 203, v22 <= 0xB) && (v23 = 2281, _bittest(&v23, v22)) || *(_DWORD *)v10 == 113 )
    {
      v16 = *((_DWORD *)v10 + 21);
LABEL_222:
      v26 = a3;
      goto LABEL_223;
    }
  }
  v24 = *(int *)v10;
  if ( (int)v24 > 209 )
  {
    switch ( (_DWORD)v24 )
    {
      case 0xD2:
        if ( !VIDMM_ALLOC::HasAnyResidencyReferences((VIDMM_ALLOC *)v12) )
          goto LABEL_222;
        v26 = a3;
        if ( v108 < 2u )
        {
          LOBYTE(v17) = a7;
          v110 = VIDMM_GLOBAL::PageInOneAllocation(v9, v12, 0LL, v17, a3, a8, v109, -1LL);
          *(_DWORD *)(v11 + 28) &= ~0x40u;
          v16 = v110;
        }
        goto LABEL_223;
      case 0xD3:
        v102 = (_QWORD **)(*((_QWORD *)v10 + 4) + 112LL);
        for ( i = *v102; i != v102; i = (_QWORD *)*i )
        {
          for ( j = (__int64 *)*(i - 2); j != i - 2; j = (__int64 *)*j )
            VIDMM_GLOBAL::EvictOneAllocation(v9, (__int64 **)j - 5, 0);
        }
        v16 = v127;
        goto LABEL_222;
      case 0xD4:
        VIDMM_GLOBAL::UpdateAllocationPriority(v9, (struct _KTHREAD ****)v12, *((unsigned int *)v10 + 8), (__int64)v17);
        goto LABEL_222;
      case 0xD5:
        VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)v15);
        VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)v15);
        v99 = 0;
        if ( !v15[23] )
        {
          v100 = (struct _KTHREAD **)(*v15 + 11138);
          v119 = 1;
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v137, v100);
          VIDMM_GLOBAL::InsertToPenaltyBox(*v15, (__int64)v15, 4u);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v137);
          v99 = 1;
        }
        if ( v12 )
        {
          if ( (*(_DWORD *)(v12 + 28) & 3) == 2 )
            VIDMM_GLOBAL::FaultOneAllocation((VIDMM_GLOBAL *)*v15, (struct VIDMM_ALLOC *)v12);
        }
        else
        {
          VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v15);
        }
        VIDMM_GLOBAL::EvictFromFaultedList(v9, (struct VIDMM_DEVICE *)v15);
        v16 = VIDMM_GLOBAL::PageInFromFaultedList(v9, (struct VIDMM_DEVICE *)v15);
        VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v15);
        VIDMM_DEVICE::ResumePagingQueues((VIDMM_DEVICE *)v15);
        if ( v99 )
        {
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
            (DXGAUTOPUSHLOCKEXCLUSIVE *)v137,
            (struct _KTHREAD **)*v15 + 5569);
          VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v101, (struct _LIST_ENTRY *)(v15 + 23));
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v137);
        }
        goto LABEL_222;
    }
    if ( (_DWORD)v24 != 214 )
    {
      if ( (_DWORD)v24 == 215 )
      {
        v56 = (struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v10 + 4);
        v57 = v20;
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
          (DXGAUTOPUSHLOCKEXCLUSIVE *)v137,
          (struct _KTHREAD **)v9 + 4988);
        if ( *((_QWORD *)v56 + 35) )
        {
          VIDMM_GLOBAL::RemoveAllocationFromDecommitList(v9, v56);
          v57 = 1;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v137);
        if ( v57 )
          VIDMM_GLOBAL::DecommitGlobalAllocation(v9, v56);
        goto LABEL_222;
      }
      if ( (_DWORD)v24 == 217 )
        goto LABEL_134;
      goto LABEL_133;
    }
    v58 = *(_DWORD *)(v11 + 24);
    v59 = Interval;
    LODWORD(v122) = v58 & 0x3F;
    v60 = *(_DWORD *)(Interval.QuadPart + 40);
    v61.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(Interval.QuadPart + 44);
    v58 >>= 7;
    v62 = *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)v9 + 5029) + 8LL * (unsigned int)v122);
    LOBYTE(v58) = v58 & 1;
    v63 = *((_DWORD *)v10 + 12) >> 1;
    v64 = *((_DWORD *)v10 + 12) >> 2;
    v123 = v58;
    LOBYTE(v63) = v63 & 1;
    v124 = v62;
    LOBYTE(v64) = v64 & 1;
    v125 = v60;
    v129 = v63;
    v128 = v64;
    if ( (_BYTE)v63 )
    {
      v65 = *(_QWORD *)(Interval.QuadPart + 64);
      v66 = *((_DWORD *)v10 + 9);
      v125 = v66;
      if ( v65 && *(_DWORD *)(v11 + 72) != (_DWORD)v20 && !_bittest((const int *)&v66, *(unsigned __int8 *)(v65 + 40)) )
      {
        VidMmSuspendAccessToAllocation(*(struct VIDMM_WORKER_THREAD **)v9, (struct VIDMM_GLOBAL_ALLOC *)v11);
        VIDMM_GLOBAL::EvictAllocation(v9, (struct VIDMM_GLOBAL_ALLOC *)v11);
        VIDMM_PHYSICAL_ADAPTER::EvictAllReclaimedAllocation(v124);
        v62 = v124;
        v20 = 0LL;
        v66 = v125;
      }
      *(_DWORD *)(Interval.QuadPart + 40) = v66;
      v67 = *(_DWORD *)(v11 + 24);
      v68 = v67 ^ ((unsigned __int8)v67 ^ (unsigned __int8)(*((_BYTE *)v10 + 53) << 6)) & 0x40;
      *(_DWORD *)(v11 + 24) = v68;
      LOBYTE(v67) = *((_BYTE *)v10 + 52);
      v123 = v67;
      *(_DWORD *)(v11 + 24) = v68 ^ ((unsigned __int8)v68 ^ (unsigned __int8)((_BYTE)v67 << 7)) & 0x80;
    }
    v69 = *((_DWORD *)v10 + 12);
    LOBYTE(v18) = v20;
    LODWORD(v130) = v18;
    if ( (v69 & 1) != 0 )
    {
      v70 = **(_DWORD **)(v12 + 96);
      if ( (v70 & 0x8000) == 0 )
      {
        v71 = 1 << *((_BYTE *)v62 + 68);
        if ( (*((_DWORD *)v10 + 11) & 1) != 0 )
        {
          v72 = Interval;
          if ( *(_DWORD *)(v11 + 72) != (_DWORD)v20 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(Interval.QuadPart + 64) + 104LL) & 0x1000) != 0 )
            {
              VidMmSuspendAccessToAllocation(*(struct VIDMM_WORKER_THREAD **)v9, (struct VIDMM_GLOBAL_ALLOC *)v11);
              VIDMM_GLOBAL::EvictAllocation(v9, (struct VIDMM_GLOBAL_ALLOC *)v11);
              VIDMM_PHYSICAL_ADAPTER::EvictAllReclaimedAllocation(v124);
              v72 = Interval;
              v20 = 0LL;
              v62 = v124;
            }
            else
            {
              v73 = (unsigned __int8)v20;
              if ( (v70 & 0x10000) != 0 )
                v73 = 1;
              LODWORD(v130) = v73;
            }
          }
          if ( (*(_DWORD *)(v11 + 24) & 0x40) != 0 )
            *(_DWORD *)(v72.QuadPart + 40) &= ~v71;
          **(_DWORD **)(v12 + 96) |= 0x8000u;
        }
        v59 = Interval;
      }
    }
    if ( (_BYTE)v128 == (_BYTE)v20 )
    {
LABEL_175:
      if ( (*((_DWORD *)v10 + 12) & 8) != 0 )
        *(_DWORD *)(v11 + 28) ^= (*(_DWORD *)(v11 + 28) ^ (*((_DWORD *)v10 + 11) << 21)) & 0x400000;
      AcquireAllResidencyLocksForAllocation(v9, v11);
      v78 = (VIDMM_GLOBAL *)*(unsigned int *)(v11 + 24);
      v79 = v128;
      v80 = *(_DWORD *)(v11 + 24);
      v81 = v129;
      v82 = (unsigned int)v78 >> 13;
      if ( (_BYTE)v128 && (_BYTE)v129 )
      {
        v83 = (unsigned int)v78 ^ ((unsigned int)v78 ^ (*((_DWORD *)v10 + 8) << 13)) & 0x1E0000;
        *(_DWORD *)(v11 + 24) = v83;
        v80 = v83 ^ (v83 ^ (*((_DWORD *)v10 + 8) << 13)) & 0x1E000;
        *(_DWORD *)(v11 + 24) = v80;
      }
      if ( v79 != v81 )
      {
        if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(
                v78,
                *(struct _D3DDDI_SEGMENTPREFERENCE *)(Interval.QuadPart + 44),
                v125) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 11251;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL);
          VidSchMarkDeviceAsError(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 32LL), 21);
        }
        v119 = v123;
        MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(v9, (unsigned int)v122, v61, &v119);
        LODWORD(v131) = 0;
        if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
                v9,
                (unsigned int)v122,
                v125,
                MostPreferredSegment,
                (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v131) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 11263;
          DxgkLogInternalTriageEvent(v85, 0x40000LL);
          VidSchMarkDeviceAsError(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 32LL), 21);
        }
        v80 = *(_DWORD *)(v11 + 24) & 0xFFE01FFF | (((unsigned __int8)v131 & 0xF0) << 13) & 0xFFFE1FFF | (((unsigned __int8)v131 & 0xF) << 13);
        *(_DWORD *)(v11 + 24) = v80;
      }
      if ( (unsigned __int8)v82 >> 4 != ((v80 >> 17) & 0xF)
        || (((unsigned __int8)v82 ^ (unsigned __int8)(v80 >> 13)) & 0xF) != 0 )
      {
        v86 = *(VIDMM_PHYSICAL_ADAPTER **)(v11 + 112);
        v124 = v86;
        if ( v86 != (VIDMM_PHYSICAL_ADAPTER *)(v11 + 112) )
        {
          do
          {
            v87 = *(VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*((_QWORD *)v86 - 5) + 16LL)
                                                 + 8LL * *(unsigned int *)(*((_QWORD *)v9 + 3) + 240LL));
            v88 = *((_QWORD *)v87 + 2);
            v89 = 304LL * (*(_WORD *)(v11 + 24) & 0x3F) + 8;
            v131 = v87;
            v90 = (void *)(v89 + v88);
            VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(v87);
            v91 = (_QWORD *)*((_QWORD *)v86 - 2);
            if ( v91 != (_QWORD *)((char *)v86 - 16) )
            {
              v92 = Interval;
              v93 = (_QWORD *)((char *)v86 - 16);
              do
              {
                if ( VIDMM_ALLOC::HasAnyResidencyReferences((VIDMM_ALLOC *)(v91 - 5)) )
                {
                  if ( (((unsigned __int8)v82 ^ (unsigned __int8)(*(_DWORD *)(v11 + 24) >> 13)) & 0xF) != 0 )
                  {
                    DecrementBudgetCounter(
                      v90,
                      (unsigned __int64 *)v90 + (v82 & 0xF) + 17,
                      *(_QWORD *)(v92.QuadPart + 16));
                    v94 = (*(_DWORD *)(v11 + 24) >> 13) & 0xF;
                    *((_QWORD *)v90 + v94 + 17) += *(_QWORD *)(v92.QuadPart + 16);
                  }
                  if ( (unsigned __int8)v82 >> 4 != ((*(_DWORD *)(v11 + 24) >> 17) & 0xF) )
                  {
                    DecrementBudgetCounter(
                      v90,
                      (unsigned __int64 *)v90 + ((unsigned __int8)v82 >> 4) + 9,
                      *(_QWORD *)(v92.QuadPart + 16));
                    v95 = (*(_DWORD *)(v11 + 24) >> 17) & 0xF;
                    *((_QWORD *)v90 + v95 + 9) += *(_QWORD *)(v92.QuadPart + 16);
                  }
                }
                v91 = (_QWORD *)*v91;
              }
              while ( v91 != v93 );
              v9 = v134;
              v86 = v124;
            }
            VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(v131);
            v86 = *(VIDMM_PHYSICAL_ADAPTER **)v86;
            v124 = v86;
          }
          while ( v86 != (VIDMM_PHYSICAL_ADAPTER *)(v11 + 112) );
          v12 = v135;
          v10 = v132;
          v16 = v127;
        }
      }
      ReleaseAllResidencyLocksForAllocation(v9, v11);
      *((_DWORD *)v10 + 12) &= 0xFFFFFFF0;
      if ( (_BYTE)v130 )
      {
        v96 = *(VIDMM_SEGMENT **)(Interval.QuadPart + 64);
        if ( v96 )
        {
          v97 = VIDMM_SEGMENT::DriverId(v96);
          VIDMM_GLOBAL::NotifyResidency(
            (ADAPTER_RENDER **)v9,
            (struct VIDMM_GLOBAL_ALLOC *)v11,
            1u,
            v97,
            *(_QWORD *)(v98 + 72));
        }
      }
      if ( !VIDMM_ALLOC::HasAnyResidencyReferences((VIDMM_ALLOC *)v12) )
        goto LABEL_222;
      v26 = a3;
      if ( *(_WORD *)(*(_QWORD *)(v11 + 376) + 8LL) >= 2u )
        goto LABEL_223;
      v113 = 0;
      v112 = (void **)v126;
LABEL_44:
      LOBYTE(v17) = a7;
      inited = VIDMM_GLOBAL::PageInOneAllocation(v9, v12, 0LL, v17, v26, v112, v113, -1LL);
LABEL_45:
      v16 = inited;
      goto LABEL_223;
    }
    v61.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)*((_DWORD *)v10 + 10);
    v74 = v20;
    v75 = v20;
    v117 = v123;
    if ( v61.0 )
    {
      if ( (*(_BYTE *)&v61.0 & 0x1F) != 0 )
      {
        v74 = *(_QWORD *)(*((_QWORD *)v62 + 206) + 8LL * ((*((_DWORD *)v10 + 10) & 0x1Fu) - 1));
        v117 = *(_BYTE *)(v74 + 104) & 1;
      }
      if ( ((v61.Value >> 6) & 0x1F) != 0 )
        v75 = *(_QWORD *)(*((_QWORD *)v62 + 206) + 8LL * (((v61.Value >> 6) & 0x1F) - 1));
    }
    v115 = v20;
    if ( *(_DWORD *)(v11 + 72) != (_DWORD)v20 )
    {
      v76 = *(_QWORD *)(v59.QuadPart + 64);
      if ( v74 != v76 && v75 != v76 )
      {
        VidMmSuspendAccessToAllocation(*(struct VIDMM_WORKER_THREAD **)v9, (struct VIDMM_GLOBAL_ALLOC *)v11);
        VIDMM_GLOBAL::EvictAllocation(v9, (struct VIDMM_GLOBAL_ALLOC *)v11);
        VIDMM_PHYSICAL_ADAPTER::EvictAllReclaimedAllocation(v124);
LABEL_172:
        LODWORD(v20) = 0;
        goto LABEL_173;
      }
      if ( *(_DWORD *)(v59.QuadPart + 44) != v61.0 )
      {
        v77 = *(_QWORD *)(v11 + 48);
        if ( v77 )
        {
          if ( *(_QWORD *)(v77 + 8) != v20 )
          {
            v115 = 1;
            VidMmRecordAlloc(v9, v11, v77, v76, *(_QWORD *)(v59.QuadPart + 16), 1);
            goto LABEL_172;
          }
        }
      }
    }
LABEL_173:
    *(struct _D3DDDI_SEGMENTPREFERENCE *)(v59.QuadPart + 44) = v61;
    *(_DWORD *)(v11 + 24) ^= ((unsigned __int16)*(_DWORD *)(v11 + 24) ^ (unsigned __int16)(v117 << 10)) & 0x400;
    if ( v115 != (_BYTE)v20 )
      VidMmRecordAlloc(
        v9,
        v11,
        *(_QWORD *)(v11 + 48),
        *(_QWORD *)(v59.QuadPart + 64),
        *(_QWORD *)(v59.QuadPart + 16),
        v20);
    goto LABEL_175;
  }
  switch ( (_DWORD)v24 )
  {
    case 0xD1:
      v26 = a3;
      inited = VIDMM_GLOBAL::InitContextAllocation(v9, (struct VIDMM_ALLOC *)v12, 1u, a3, a8);
      goto LABEL_45;
    case 0x71:
      updated = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
                  (VIDMM_GLOBAL *)(unsigned int)(v24 - 113),
                  (struct _VIDMM_DEFERRED_COMMAND *)((char *)v10 + 32),
                  a8);
LABEL_123:
      v26 = a3;
      v16 = updated;
      if ( updated == -1073741267 )
        *a3 = 1;
      goto LABEL_223;
    case 0x77:
LABEL_121:
      updated = VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
                  v9,
                  *((struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **)v10 + 4),
                  a8);
      goto LABEL_123;
    case 0xC8:
      if ( g_IsInternalReleaseOrDbg != (_BYTE)v20 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace((unsigned int)(v24 - 200)) + 24) = v12;
        WdLogGlobalForLineNumber = 10553;
      }
      if ( !*(_DWORD *)(v12 + 104) && !*(_DWORD *)(v12 + 156) )
      {
        if ( (*(_BYTE *)(v12 + 25) & 1) != 0 )
          VIDMM_GLOBAL::UnpinOneAllocation(v9, v12, 3, 0);
        v38 = *(_DWORD *)(v12 + 28) & 3;
        if ( v38 == 2 )
        {
          VIDMM_GLOBAL::NotifyAllocationEviction(v9, (VIDMM_DEVICE **)v12, 0);
        }
        else if ( v38 == 1 )
        {
          VIDMM_DEVICE::UnfaultCommitment((VIDMM_DEVICE *)1, (struct VIDMM_ALLOC *)v12);
        }
        if ( (*(_DWORD *)(v12 + 28) & 0x10) != 0 && g_IsInternalRelease )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
          WdLogGlobalForLineNumber = 195;
        }
        VIDMM_DEVICE::CleanupAllocationCommitment((VIDMM_DEVICE *)v15, (struct VIDMM_ALLOC *)v12);
        DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v11 + 136));
        if ( *(int *)(*(_QWORD *)(v12 + 96) + 12LL) > 0 )
        {
          memset(v140, 0, sizeof(v140));
          v40 = (__int64)v15[4];
          LODWORD(v140[5]) = 3;
          v140[6] = v12;
          VidSchCancelDeviceCommand(v40, (__int64)v140, 1, 0);
        }
        v41 = *(_DWORD **)(v11 + 376);
        NewAllocOwner = 0LL;
        v126 = 0LL;
        v114 = 0;
        if ( (*v41 & 0x20000000) != 0 )
        {
          v43 = *(VIDMM_PHYSICAL_ADAPTER **)v12;
          v44 = (_QWORD **)(*(_QWORD *)v12 + 32LL);
          v45 = *v44;
          while ( v45 != v44 )
          {
            v46 = v45 - 5;
            v45 = (_QWORD *)*v45;
            if ( v46 != (_QWORD *)v12 && (*((_DWORD *)v46 + 7) & 4) == 0 )
              goto LABEL_101;
            v44 = (_QWORD **)((char *)v43 + 32);
          }
          if ( v43 != v122 )
          {
            *((_BYTE *)v43 + 24) |= 1u;
LABEL_101:
            DXGFASTMUTEX::Release((struct _KTHREAD **)(v11 + 136));
            if ( v114 )
            {
              DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
                (DXGAUTOPUSHLOCKEXCLUSIVE *)v139,
                (struct _KTHREAD **)v9 + 4988);
              v47 = (_QWORD *)(v11 + 280);
              if ( *(_QWORD *)(v11 + 280) )
              {
                v48 = (VIDMM_GLOBAL *)*(unsigned int *)(*((_QWORD *)v9 + 3) + 240LL);
                VIDMM_GLOBAL::RemoveAllocationFromDecommitList(
                  v48,
                  (struct VIDMM_GLOBAL_ALLOC *)v11,
                  *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*((_QWORD *)v122 + 1) + 16LL) + 8LL * (_QWORD)v48));
                if ( v126 )
                {
                  v49 = *(_QWORD *)(*((_QWORD *)v126[1] + 2) + 8LL * *(unsigned int *)(*((_QWORD *)v9 + 3) + 240LL));
                  v50 = *(_QWORD **)(v49 + 112);
                  v51 = v49 + 104;
                  if ( *v50 != v51 )
                    __fastfail(3u);
                  *v47 = v51;
                  *(_QWORD *)(v11 + 288) = v50;
                  *v50 = v47;
                  *(_QWORD *)(v51 + 8) = v47;
                }
              }
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v139);
            }
            if ( v116 && !v123 )
            {
              if ( *(_QWORD *)(Interval.QuadPart + 64) )
              {
                if ( g_IsInternalReleaseOrDbg )
                {
                  WdLogNewEntry5_WdTrace(0LL);
                  WdLogGlobalForLineNumber = 10798;
                }
                VIDMM_PHYSICAL_ADAPTER::EvictResources(
                  v130,
                  (struct VIDMM_PHYSICAL_ALLOC *)Interval.QuadPart,
                  0,
                  0,
                  1,
                  v122);
                VIDMM_GLOBAL::FlushPagingBufferInternal(v9, *(_DWORD *)(v11 + 24) & 0x3F, 0, 0LL, 0LL, 0, 0);
              }
              VIDMM_GLOBAL::EvictTemporaryResourceForCleanup(v9, (struct VIDMM_PHYSICAL_ALLOC *)Interval.QuadPart, v122);
              DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)v9 + 39904));
              if ( *(_QWORD *)(v11 + 264) )
                VIDMM_GLOBAL::RemoveAllocationFromOfferList(v52, (struct VIDMM_GLOBAL_ALLOC *)v11);
              Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
              *((_QWORD *)v9 + 4989) = 0LL;
              ExReleasePushLockExclusiveEx((char *)v9 + 39904, 0LL);
              KeLeaveCriticalRegion();
            }
            *(_DWORD *)(v12 + 28) |= 4u;
            v53 = *(_QWORD *)(v12 + 192);
            if ( v53 && _InterlockedExchangeAdd((volatile signed __int32 *)(v53 + 32), 0xFFFFFFFF) == 1 )
              ADAPTER_RENDER::NotifyDeferredDestructionComplete(
                *((ADAPTER_RENDER **)v9 + 2),
                *(struct DXGTERMINATIONTRACKER **)(v12 + 192));
            goto LABEL_222;
          }
          WdLogSingleEntry2(4LL, v11, v12);
          *((_BYTE *)v122 + 24) |= 1u;
          WdLogGlobalForLineNumber = 10691;
          NewAllocOwner = VIDMM_GLOBAL::FindNewAllocOwner(v9, (struct VIDMM_GLOBAL_ALLOC *)v11);
          v126 = (struct VIDMM_ALLOC **)NewAllocOwner;
          VIDMM_GLOBAL::EvictTemporaryResourceForCleanup(v9, (struct VIDMM_PHYSICAL_ALLOC *)Interval.QuadPart, v122);
          v116 = !VIDMM_GLOBAL::TransferAllocationOwnership(v9, (struct VIDMM_ALLOC *)v12, v122, NewAllocOwner);
          if ( (*(_DWORD *)(v11 + 32) & 4) != 0 )
          {
            NewAllocOwner = *(struct VIDMM_LOCAL_ALLOC **)(v11 + 48);
            v126 = (struct VIDMM_ALLOC **)NewAllocOwner;
          }
          WdLogSingleEntry1(4LL, *(_QWORD *)(v11 + 48));
          WdLogGlobalForLineNumber = 10717;
          v114 = 1;
        }
        else
        {
          v116 = 1;
          v114 = 1;
        }
        if ( (*(_BYTE *)(v11 + 32) & 0x60) == 0x60 )
          VIDMM_GLOBAL::TransferAllocationDecommit(v39, (struct VIDMM_GLOBAL_ALLOC *)v11, v122, NewAllocOwner);
        goto LABEL_101;
      }
      v54 = *(int *)(v12 + 104);
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 42LL, v9, v12, v54);
      WdLogGlobalForLineNumber = 195;
      goto LABEL_121;
  }
  if ( (_DWORD)v24 != 203 )
  {
    if ( (_DWORD)v24 != 206 )
    {
      if ( (_DWORD)v24 == 207 )
      {
        if ( !*(_DWORD *)(v12 + 152) && (*(_BYTE *)(v12 + 25) & 1) == 0 )
          VIDMM_GLOBAL::EvictOneAllocation(v9, (__int64 **)v12, *((_BYTE *)v10 + 32) & 1);
        _InterlockedDecrement((volatile signed __int32 *)(v12 + 164));
        goto LABEL_222;
      }
      if ( (_DWORD)v24 == 208 )
      {
        if ( g_IsInternalReleaseOrDbg != (_BYTE)v20 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace((unsigned int)(v24 - 207)) + 24) = v11;
          WdLogGlobalForLineNumber = 11048;
        }
        DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
          (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v132,
          (struct DXGPUSHLOCKFAST *)(v11 + 312),
          1);
        if ( !*((_BYTE *)v10 + 45) )
        {
          VIDMM_PHYSICAL_ADAPTER::FlushTemporaryResourcesForAllocation(
            *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)v9 + 5029) + 8LL * (*(_DWORD *)(v11 + 24) & 0x3F)),
            (struct VIDMM_PHYSICAL_ALLOC *)Interval.QuadPart);
          v142 = (PRKPROCESS *)*((_QWORD *)v124 + 1);
          VIDMM_PROCESS::SafeAttach(v142, &v141);
          v16 = VIDMM_GLOBAL::LockInternal(
                  v9,
                  (volatile signed __int32 **)v12,
                  1u,
                  *((_BYTE *)v10 + 44),
                  *((_DWORD *)v10 + 10),
                  *((void ***)v10 + 4),
                  (bool *)v10 + 45);
          VIDMM_PROCESS::SafeDetach(v25, &v141);
        }
        if ( *((_BYTE *)v10 + 45) )
        {
          DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v132);
          v26 = a3;
          v16 = VIDMM_GLOBAL::PageInOneAllocation(v9, v12, 2LL, 0LL, a3, v126, 0, -1LL);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v132, 0LL);
          Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
          v133 = 1;
          *((_QWORD *)v132 + 1) = KeGetCurrentThread();
        }
        else
        {
          v26 = a3;
        }
        DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v132);
        goto LABEL_223;
      }
LABEL_133:
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 5LL, v24, -1073741811LL, v20);
      WdLogGlobalForLineNumber = 195;
LABEL_134:
      Interval.QuadPart = -10000LL * *((unsigned int *)v10 + 8);
      KeDelayExecutionThread(0, 0, &Interval);
      goto LABEL_222;
    }
    if ( *(int *)(v11 + 184) > 0 && NeedsApertureForLock((__int64)v9, v11) && (*(_DWORD *)(v11 + 24) & 0x40) == 0 )
    {
      WdLogSingleEntry1(3LL, v27);
      WdLogGlobalForLineNumber = 10955;
      v16 = -1073741823;
      goto LABEL_222;
    }
    if ( !VIDMM_ALLOC::HasAnyResidencyReferences((VIDMM_ALLOC *)v12) )
      goto LABEL_222;
    v26 = a3;
    if ( *(_WORD *)(*(_QWORD *)(v11 + 376) + 8LL) >= 2u )
      goto LABEL_223;
    v113 = v28;
    v112 = (void **)a8;
    goto LABEL_44;
  }
  if ( g_IsInternalReleaseOrDbg != (_BYTE)v20 )
  {
    v30 = WdLogNewEntry5_WdTrace((unsigned int)(v24 - 203));
    v20 = 0LL;
    *(_QWORD *)(v30 + 24) = v12;
    WdLogGlobalForLineNumber = 10858;
  }
  if ( *(_BYTE *)(v11 + 41) != (_BYTE)v20 )
  {
    v16 = -1071775482;
    goto LABEL_222;
  }
  v31 = *(unsigned int *)(*(_QWORD *)(v11 + 376) + 16LL);
  if ( !(_DWORD)v31 && !_bittest(*(const signed __int32 **)(v11 + 376), 0x11u) )
  {
    if ( g_IsInternalReleaseOrDbg != (_BYTE)v20 )
    {
      WdLogNewEntry5_WdTrace(v31);
      v20 = 0LL;
      WdLogGlobalForLineNumber = 10881;
    }
    if ( *(_QWORD *)(Interval.QuadPart + 64) != v20 )
    {
      v32 = **(_DWORD **)(v11 + 376);
      if ( (v32 & 0x40000000) == 0 && ((v32 & 0x20000000) == 0 || v32 >= 0) && (v32 & 0x80000) == 0 )
      {
        v33 = *(_DWORD *)(v11 + 24) & 0x3F;
        v34 = *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)v9 + 5029) + 8 * v33);
        if ( g_IsInternalReleaseOrDbg != (_BYTE)v20 )
        {
          WdLogNewEntry5_WdTrace(v33);
          WdLogGlobalForLineNumber = 10896;
        }
        VidMmSuspendAccessToAllocation(*(struct VIDMM_WORKER_THREAD **)v9, (struct VIDMM_GLOBAL_ALLOC *)v11);
        VIDMM_GLOBAL::EvictAllocation(v9, (struct VIDMM_GLOBAL_ALLOC *)v11);
        VIDMM_PHYSICAL_ADAPTER::EvictAllReclaimedAllocation(v34);
      }
    }
  }
  v35 = 4;
  v36 = **(_DWORD **)(v11 + 376);
  if ( (v36 & 0x20000) != 0 )
  {
    v35 = *((_DWORD *)v10 + 8);
  }
  else if ( (v36 & 0x40000000) != 0 || v36 < 0 )
  {
    v35 = 3;
  }
  if ( *((_QWORD *)v10 + 5) != -1LL )
    *(_DWORD *)(v11 + 28) |= 0x1000u;
  v26 = a3;
  LOBYTE(v17) = a7;
  v37 = VIDMM_GLOBAL::PageInOneAllocation(v9, v12, v35, v17, a3, v126, *((_DWORD *)v10 + 9), *((_QWORD *)v10 + 5));
  *(_DWORD *)(v11 + 28) &= ~0x1000u;
  v16 = v37;
  if ( v37 >= 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 376) + 16LL));
  VIDMM_GLOBAL::RecommitTrimmedList(v9);
LABEL_223:
  if ( *v26 )
  {
    a5 = 0LL;
    v120 = 0;
    v107 = 0LL;
  }
  else
  {
    v105 = (unsigned int *)*((_QWORD *)v10 + 3);
    if ( v105 )
      *v105 = v16;
    v107 = v136;
  }
  LOBYTE(v17) = v120;
  VIDMM_GLOBAL::EndPreparation(v9, 0xFFFFFFFF, 0LL, v17, a5, v107);
  if ( *(_DWORD *)v10 == 200 )
  {
    KeSetEvent((PRKEVENT)(*((_QWORD *)v10 + 2) + 72LL), 0, 0);
  }
  else if ( !*v26 && v12 )
  {
    VIDMM_ALLOC::DecrementPagingPacketReferenceCount((VIDMM_ALLOC *)v12);
  }
  *((_DWORD *)v10 + 21) = v16;
  return v16;
}
