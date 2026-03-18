/*
 * XREFs of ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1400B93C8
 * Callers:
 *     VidMmMakeResident @ 0x1400384D0 (VidMmMakeResident.c)
 *     AddDmaBufferToPool @ 0x1400B8988 (AddDmaBufferToPool.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1400DBD28 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchMarkDeviceAsError @ 0x14001F860 (VidSchMarkDeviceAsError.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ @ 0x140036B84 (-HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ.c)
 *     VidMmiShouldChargeAllocationAgainstBudget @ 0x1400D980C (VidMmiShouldChargeAllocationAgainstBudget.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400DA7B0 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400DA900 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1400E8018 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 *     ?CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1400EC038 (-CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     ?CommitProjectedMemoryUsage@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400F5B48 (-CommitProjectedMemoryUsage@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::MakeResident(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_MULTI_ALLOC **a3,
        unsigned __int64 a4,
        char a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7)
{
  int v7; // ebx
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  struct _KTHREAD **v13; // rdi
  __int64 v14; // rcx
  _QWORD *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // rcx
  struct VIDMM_MULTI_ALLOC **v19; // r10
  __int64 **v20; // rax
  __int64 *v21; // rdi
  __int64 v22; // r15
  VIDMM_ALLOC *v23; // r9
  __int64 v24; // r10
  struct VIDMM_MULTI_ALLOC **v25; // r11
  __int64 **v26; // r9
  __int64 v27; // rcx
  unsigned int v28; // eax
  struct VIDMM_MULTI_ALLOC **v29; // rdx
  struct VIDMM_MULTI_ALLOC **j; // rcx
  __int64 v31; // rax
  VIDMM_ALLOC **v32; // r10
  __int64 *v33; // r15
  __int64 v34; // rbp
  __int64 v35; // rdi
  __int64 v36; // r9
  __int64 v37; // r10
  VIDMM_ALLOC **v38; // r11
  _QWORD *v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rcx
  _QWORD *v42; // rdx
  __int64 v43; // rcx
  _BYTE v45[8]; // [rsp+50h] [rbp-58h] BYREF
  struct _KTHREAD **v46; // [rsp+58h] [rbp-50h]
  int i; // [rsp+60h] [rbp-48h]

  v7 = 0;
  *a6 = 0LL;
  *a7 = 0LL;
  v10 = *((_QWORD *)a2 + 12);
  v11 = *(_QWORD *)(v10 + 16);
  v12 = v11 == -48;
  v13 = (struct _KTHREAD **)(v11 + 48);
  v46 = v13;
  if ( !v12 && v13[1] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(v14, 262146LL);
  }
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v13);
  v15 = *(_QWORD **)(v10 + 16);
  v16 = 0LL;
  for ( i = 2; (unsigned int)v16 < *(_DWORD *)(*v15 + 6944LL); v18[17] = v18[13] )
  {
    v17 = (unsigned __int16)v16;
    v16 = (unsigned int)(v16 + 1);
    v18 = (_QWORD *)(v15[2] + 304 * v17);
    v18[14] = v18[10];
    v18[15] = v18[11];
    v18[16] = v18[12];
  }
  v19 = a3;
  if ( a3 != &a3[a4] )
  {
    do
    {
      v20 = *(__int64 ***)*v19;
      v21 = *v20;
      v22 = **v20;
      if ( (unsigned __int8)VidMmiShouldChargeAllocationAgainstBudget(*v19, v16)
        && !VIDMM_ALLOC::HasAnyResidencyReferences(v23)
        && !*((_BYTE *)v26 + 27) )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL) + 304 * (v21[3] & 0x3F);
        v27 = **v26;
        if ( (*((_BYTE *)v26 + 36) & 1) != 0 && (*(_DWORD *)(v27 + 24) & 0x1E0000) == 0x40000 )
          v28 = 0;
        else
          v28 = (*(_DWORD *)(v27 + 24) >> 17) & 0xF;
        *(_QWORD *)(v16 + 8LL * v28 + 112) += *(_QWORD *)(v22 + 16);
        *((_BYTE *)v26 + 27) = 1;
      }
      v19 = (struct VIDMM_MULTI_ALLOC **)(v24 + 8);
    }
    while ( v19 != v25 );
  }
  VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(*(VIDMM_PROCESS_ADAPTER_INFO **)(v10 + 16), a7, a5 & 1, 0);
  v29 = &a3[a4];
  for ( j = a3; j != v29; *(_BYTE *)(v31 + 27) = 0 )
    v31 = (__int64)*j++;
  if ( *a7 )
  {
    v7 = -1073741801;
  }
  else
  {
    VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v10 + 16));
    v32 = a3;
    if ( a3 != &a3[a4] )
    {
      do
      {
        v33 = **(__int64 ***)*v32;
        v34 = *v33;
        v35 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL) + 304 * (v33[3] & 0x3F);
        if ( !VIDMM_ALLOC::HasAnyResidencyReferences(*v32) )
        {
          v39 = (_QWORD *)(v36 + 112);
          v40 = *(_QWORD *)(v36 + 112);
          if ( *(_QWORD *)(v40 + 8) != v36 + 112
            || (v41 = *(_QWORD **)(v36 + 120), (_QWORD *)*v41 != v39)
            || (*v41 = v40, *(_QWORD *)(v40 + 8) = v41, v42 = *(_QWORD **)(v10 + 160), *v42 != v10 + 152) )
          {
            __fastfail(3u);
          }
          *v39 = v10 + 152;
          *(_QWORD *)(v36 + 120) = v42;
          *v42 = v39;
          *(_QWORD *)(v10 + 160) = v39;
          if ( (unsigned __int8)VidMmiShouldChargeAllocationAgainstBudget(v36, v42) )
          {
            v43 = (*((_DWORD *)v33 + 6) >> 13) & 0xF;
            *(_QWORD *)(v35 + 8 * v43 + 144) += *(_QWORD *)(v34 + 16);
          }
        }
        v32 = (VIDMM_ALLOC **)(v37 + 8);
        ++*(_DWORD *)(v36 + 168);
      }
      while ( v32 != v38 );
    }
    VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v10 + 16));
    VIDMM_PROCESS_ADAPTER_INFO::CommitProjectedMemoryUsage(*(VIDMM_PROCESS_ADAPTER_INFO **)(v10 + 16));
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v45);
  if ( v7 != -1073741801 )
    return VIDMM_GLOBAL::CommitAllocationList(this, a2, a3, a4, a6);
  if ( (a5 & 2) != 0 )
    VidSchMarkDeviceAsError(*(_QWORD *)(v10 + 32), 12LL);
  return 3221225495LL;
}
