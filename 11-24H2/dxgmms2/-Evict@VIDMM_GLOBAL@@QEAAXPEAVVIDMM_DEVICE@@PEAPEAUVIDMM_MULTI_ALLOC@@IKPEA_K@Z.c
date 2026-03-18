/*
 * XREFs of ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1400F0E04
 * Callers:
 *     VidMmEvict @ 0x14003AC60 (VidMmEvict.c)
 *     ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1400968B0 (-VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14000DB70 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ @ 0x140036B84 (-HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400DA7B0 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400DA900 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400DB060 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1400E8018 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400F18FC (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ValidateAllocationReferences @ 0x1400FBAF0 (ValidateAllocationReferences.c)
 */

void __fastcall VIDMM_GLOBAL::Evict(
        struct VIDMM_WORKER_THREAD **this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MULTI_ALLOC **a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v6; // rbx
  bool v7; // zf
  struct _KTHREAD **v8; // rbx
  __int64 v9; // rbp
  __int64 v13; // rcx
  VIDMM_PROCESS_ADAPTER_INFO *v14; // rcx
  struct VIDMM_MULTI_ALLOC **v15; // r15
  struct VIDMM_MULTI_ALLOC **i; // r14
  struct VIDMM_ALLOC *v17; // rbx
  __int64 *v18; // rax
  struct VIDMM_MULTI_ALLOC *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  struct VIDMM_MULTI_ALLOC *v22; // rdi
  __int64 v23; // r14
  char v24; // r9
  _BYTE v25[8]; // [rsp+50h] [rbp-A8h] BYREF
  struct _KTHREAD **v26; // [rsp+58h] [rbp-A0h]
  int v27; // [rsp+60h] [rbp-98h]
  _QWORD v28[12]; // [rsp+70h] [rbp-88h] BYREF

  v6 = *((_QWORD *)a2 + 2);
  v7 = v6 == -48;
  v8 = (struct _KTHREAD **)(v6 + 48);
  v9 = a4;
  v26 = v8;
  if ( !v7 && v8[1] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(v13, 262146LL);
  }
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v8);
  v14 = (VIDMM_PROCESS_ADAPTER_INFO *)*((_QWORD *)a2 + 2);
  v27 = 2;
  VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(v14);
  v15 = &a3[v9];
  for ( i = a3; i != v15; ++i )
  {
    v17 = *i;
    if ( *((_DWORD *)*i + 42) == ((*(_DWORD *)(**(_QWORD **)*i + 28LL) >> 5) & 1) )
    {
      WdLogSingleEntry2(1LL, *i, (*(_DWORD *)(**(_QWORD **)v17 + 28LL) >> 5) & 1);
      v18 = *(__int64 **)v17;
      WdLogGlobalForLineNumber = 1725;
      DxgkLogInternalTriageEvent(*v18, 0x40000LL);
    }
    else
    {
      v19 = *i;
      --*((_DWORD *)v17 + 42);
      ValidateAllocationReferences(v19);
      if ( !VIDMM_ALLOC::HasAnyResidencyReferences(v17) )
        VIDMM_DEVICE::NotifyAllocationEvicted(a2, v17);
    }
  }
  VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(*((VIDMM_GLOBAL ***)a2 + 2), a6, 0, 1u);
  VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)a2 + 2), v20, v21);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
  for ( ; a3 != v15; ++a3 )
  {
    v22 = *a3;
    v23 = **(_QWORD **)*a3;
    if ( (a5 & 2) != 0 )
    {
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v23 + 136));
      *(_BYTE *)(v23 + 43) = 1;
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 136));
    }
    if ( !VIDMM_ALLOC::HasAnyResidencyReferences(v22) && !*((_DWORD *)v22 + 43) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v22 + 45);
      memset(v28, 0, 0x58uLL);
      LODWORD(v28[0]) = 207;
      v28[2] = v22;
      LODWORD(v28[4]) = a5;
      v24 = dword_1400815B4 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 1) + 8LL) + 112LL) & 1) != 0;
      VIDMM_GLOBAL::QueueDeferredCommand(
        this,
        *(struct VIDMM_PAGING_QUEUE **)(32LL * (*(_DWORD *)(v23 + 24) & 0x3F) + *(_QWORD *)(*((_QWORD *)v22 + 1) + 80LL)),
        (struct _VIDMM_DEFERRED_COMMAND *)v28,
        v24,
        0LL);
    }
    if ( (byte_140081241 & 0x20) != 0 )
      McTemplateK0pq_EtwWriteTransfer();
  }
}
