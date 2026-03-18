/*
 * XREFs of ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1400E5800
 * Callers:
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400BB638 (-EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C0220 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1400CBC98 (-OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DD034 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?FindNewAllocOwner@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E5760 (-FindNewAllocOwner@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1400E5AD0 (-TransferOwnershipToProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEA.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1400E62B4 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLO.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmRecordAlloc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // r13
  unsigned __int16 v8; // ax
  unsigned int v9; // ebx
  int v10; // r12d
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned int i; // ecx
  __int64 v17; // rdx
  int v18; // r9d
  int v19; // r9d
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // r9
  int v25; // edx
  __int64 v26; // rax
  unsigned __int16 v27; // [rsp+50h] [rbp+8h]

  v7 = *(unsigned __int16 *)(a4 + 40);
  v27 = *(_WORD *)(a4 + 420);
  v8 = 0;
  v9 = *(_DWORD *)(*(_QWORD *)a2 + 44LL);
  if ( (*(_DWORD *)(a4 + 104) & 0x1000) == 0 )
    v8 = v7 + 1;
  v10 = v8;
  v11 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 240LL);
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL) + 8 * v11);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v12 + 120, 0LL);
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL) + 8 * v11);
  if ( v13 )
    v14 = *(_QWORD *)(304LL * v27 + *(_QWORD *)(v13 + 16)) + 184 * v7;
  else
    v14 = 0LL;
  if ( !v9 || (v9 & 0x1F) == v10 )
  {
    v21 = *(_DWORD *)(v14 + 64);
    v22 = *(_QWORD *)(v14 + 72);
    if ( a6 )
    {
      *(_DWORD *)(v14 + 64) = v21 - 1;
      *(_QWORD *)(v14 + 72) = v22 - a5;
    }
    else
    {
      *(_DWORD *)(v14 + 64) = v21 + 1;
      *(_QWORD *)(v14 + 72) = v22 + a5;
    }
  }
  else
  {
    v15 = 1LL;
    for ( i = 6; i < 0x1E; i += 6 )
    {
      if ( ((v9 >> i) & 0x1F) == v10 )
      {
        v17 = 2 * v15;
        v18 = *(_DWORD *)(v14 + 8 * v17 + 64);
        if ( a6 )
          v19 = v18 - 1;
        else
          v19 = v18 + 1;
        v20 = a5 + *(_QWORD *)(v14 + 8 * v17 + 72);
        if ( a6 )
          v20 = *(_QWORD *)(v14 + 8 * v17 + 72) - a5;
        *(_QWORD *)(v14 + 8 * v17 + 72) = v20;
        *(_DWORD *)(v14 + 8 * v17 + 64) = v19;
        goto LABEL_15;
      }
      v15 = (unsigned int)(v15 + 1);
    }
    v23 = *(_DWORD *)(v14 + 144);
    v24 = *(_QWORD *)(v14 + 152);
    v25 = v23 + 1;
    if ( a6 )
      v25 = v23 - 1;
    v26 = a5 + v24;
    if ( a6 )
      v26 = v24 - a5;
    *(_QWORD *)(v14 + 152) = v26;
    *(_DWORD *)(v14 + 144) = v25;
  }
LABEL_15:
  ExReleasePushLockExclusiveEx(v12 + 120, 0LL);
  KeLeaveCriticalRegion();
}
