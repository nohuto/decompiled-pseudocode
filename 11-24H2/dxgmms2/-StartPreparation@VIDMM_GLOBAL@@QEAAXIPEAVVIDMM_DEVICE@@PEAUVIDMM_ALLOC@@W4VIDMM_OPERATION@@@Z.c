/*
 * XREFs of ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400B4E94
 * Callers:
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x14008FF64 (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@33W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400960E0 (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAV.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400B1AC0 (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400B1BBC (-CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400B3090 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?ProcessSegmentOfferLists@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400CF570 (-ProcessSegmentOfferLists@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400E6508 (-CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400EB160 (-ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400ECFEC (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x140114F00 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::StartPreparation(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rsi
  int v9; // ecx
  __int64 v10; // rdi
  int v11; // ecx

  v6 = *(int *)(a1 + 8);
  if ( (_DWORD)v6 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 64LL, a1, v6, (int)a5);
    WdLogGlobalForLineNumber = 195;
    goto LABEL_16;
  }
  ++*(_QWORD *)(a1 + 4552);
  result = a5;
  *(_DWORD *)(a1 + 8) = a5;
  *(_DWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 6960) = a3;
  *(_QWORD *)(a1 + 6968) = a4;
  if ( a2 != -1 )
  {
    v10 = a2;
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer();
    v11 = *(_DWORD *)(a1 + 4 * v10 + 1656);
    if ( v11 == *(_DWORD *)(a1 + 4 * v10 + 1912) )
    {
      result = *(unsigned int *)(a1 + 4 * v10 + 2168);
      if ( (_DWORD)result == *(_DWORD *)(a1 + 4 * v10 + 2424) )
      {
        *(_DWORD *)(a1 + 4 * v10 + 3784) = 0;
        *(_DWORD *)(a1 + 4 * v10 + 4040) = v11;
        *(_DWORD *)(a1 + 4 * v10 + 4296) = result;
        return result;
      }
    }
LABEL_16:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 33LL, a1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
    goto LABEL_17;
  }
  v8 = 0LL;
  if ( *(_DWORD *)(a1 + 6944) )
  {
    while ( 1 )
    {
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0p_EtwWriteTransfer();
      v9 = *(_DWORD *)(a1 + 4 * v8 + 1656);
      if ( v9 != *(_DWORD *)(a1 + 4 * v8 + 1912) )
        break;
      result = *(unsigned int *)(a1 + 4 * v8 + 2168);
      if ( (_DWORD)result != *(_DWORD *)(a1 + 4 * v8 + 2424) )
        break;
      *(_DWORD *)(a1 + 4 * v8 + 3784) = 0;
      *(_DWORD *)(a1 + 4 * v8 + 4040) = v9;
      *(_DWORD *)(a1 + 4 * v8 + 4296) = result;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 6944) )
        return result;
    }
LABEL_17:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 33LL, a1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
    JUMPOUT(0x1400B507ALL);
  }
  return result;
}
