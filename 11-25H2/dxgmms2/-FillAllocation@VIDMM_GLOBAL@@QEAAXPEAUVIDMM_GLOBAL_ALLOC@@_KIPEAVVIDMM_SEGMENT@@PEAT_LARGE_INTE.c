/*
 * XREFs of ?FillAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1400BD198
 * Callers:
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C10BC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1400BD1DC (-FillAllocationInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_L.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        __int64 a4,
        struct VIDMM_SEGMENT *a5,
        union _LARGE_INTEGER *a6)
{
  struct VIDMM_GLOBAL_ALLOC *v7; // r8
  unsigned int v8; // edx
  unsigned int v9; // [rsp+20h] [rbp-28h]

  v7 = a2;
  if ( a2 )
  {
    v8 = *((_DWORD *)a2 + 6) & 0x3F;
  }
  else
  {
    v7 = 0LL;
    v8 = 0;
  }
  VIDMM_GLOBAL::FillAllocationInternal(this, v8, v7, a3, v9, a5, a6);
}
