/*
 * XREFs of ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1400C37A0
 * Callers:
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@2IIPEAU_DXGK_PTE@@5II2W4_DXGK_PAGETABLEUPDATEMODE@@2U_DXGK_UPDATEPAGETABLEFLAGS@@2@Z @ 0x1400ABE20 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_AL.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400B2188 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C1A1C (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::RecordPageMappingHistory(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx

  if ( *(_QWORD *)(a1 + 41064) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a1 + 41008, 0LL);
    *(_QWORD *)(a1 + 41016) = KeGetCurrentThread();
    v10 = *(unsigned int *)(a1 + 41072);
    if ( (_DWORD)v10 == dword_1400814D4 )
    {
      *(_DWORD *)(a1 + 41072) = 0;
      v10 = 0LL;
    }
    v11 = *(_QWORD *)(a1 + 41064) + 48 * v10;
    *(_QWORD *)v11 = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(v11 + 32) = a5;
    *(_QWORD *)(v11 + 24) = a6;
    *(_DWORD *)(v11 + 36) = a2;
    *(_QWORD *)(v11 + 8) = a3;
    *(_QWORD *)(v11 + 16) = a4;
    *(_DWORD *)(v11 + 40) = *(_DWORD *)(a1 + 41000);
    ++*(_DWORD *)(a1 + 41072);
    *(_QWORD *)(a1 + 41016) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 41008, 0LL);
    KeLeaveCriticalRegion();
  }
}
