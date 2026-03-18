/*
 * XREFs of ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1400E57A0
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400B2188 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C1A1C (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     ?TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@@Z @ 0x1400A5E70 (-TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_D.c)
 *     ?TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N@Z @ 0x1400E58C4 (-TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_D.c)
 *     ?AcquireTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400E5B48 (-AcquireTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_MEMORY_SEGMENT::TransferMemory(
        VIDMM_PHYSICAL_ADAPTER **this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        enum _DXGK_MEMORY_TRANSFER_DIRECTION a3,
        struct VIDMM_SEGMENT *a4,
        union _LARGE_INTEGER a5,
        bool *a6,
        bool *a7)
{
  union _LARGE_INTEGER v7; // rbx
  bool *v8; // r15
  __int64 v11; // rdx
  unsigned int v14; // r10d
  int v15; // eax

  v11 = *(_QWORD *)a2;
  v14 = -1073741823;
  if ( *(_DWORD *)(v11 + 36) )
  {
    v15 = VIDMM_PHYSICAL_ADAPTER::AcquireTemporaryResourcesForAllocation(this[4], (struct VIDMM_PHYSICAL_ALLOC *)v11);
    v14 = v15;
    if ( v15 < 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this[3] + 5029) + 8LL * *((unsigned __int16 *)this + 210)) + 476LL) & 0x20) == 0 )
        return v14;
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, a2, v15, 0LL);
      WdLogGlobalForLineNumber = 195;
    }
    else
    {
      v8 = a6;
      v7 = a5;
      v14 = VIDMM_MEMORY_SEGMENT::TransferMemoryFast((VIDMM_MEMORY_SEGMENT *)this, a2, a3, a4, a5, a6);
      if ( (v14 & 0x80000000) == 0 )
        return v14;
    }
    VIDMM_MEMORY_SEGMENT::TransferMemorySlow((VIDMM_MEMORY_SEGMENT *)this, a2, a3, a4, v7);
    v14 = 0;
    *v8 = 1;
    if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
      *a7 = 1;
  }
  return v14;
}
