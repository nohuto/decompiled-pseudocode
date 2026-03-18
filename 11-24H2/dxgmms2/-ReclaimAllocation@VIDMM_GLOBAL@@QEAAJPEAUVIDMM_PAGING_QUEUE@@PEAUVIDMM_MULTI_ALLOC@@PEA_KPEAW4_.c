/*
 * XREFs of ?ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1400ED64C
 * Callers:
 *     VidMmReclaimAllocation @ 0x14003AC40 (VidMmReclaimAllocation.c)
 * Callees:
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1400ED714 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReclaimAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_MULTI_ALLOC *a3,
        unsigned __int64 *a4,
        enum _D3DDDI_RECLAIM_RESULT *a5)
{
  int v5; // r10d
  int v8; // r8d

  v5 = dword_1400815B8;
  if ( dword_1400815B8 == -1 )
    v5 = *((_DWORD *)this + 8) >= 0x5022u ? 2 : 0;
  if ( a5 )
  {
    v8 = *((_DWORD *)this + 1746);
    if ( (v8 & 0x10000) != 0 && (*(_DWORD *)(**(_QWORD **)a3 + 32LL) & 0x40) != 0 )
      *a5 = D3DDDI_RECLAIM_RESULT_NOT_COMMITTED;
    else
      *a5 = ((unsigned __int8)v8 >> 3) & 1;
  }
  if ( !v5 )
    return 0LL;
  if ( v5 == 2 )
  {
    if ( a2 )
      return VIDMM_GLOBAL::ReclaimOneAllocation(this, a2, a3, a4, a5);
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 6285;
  }
  return 3221225473LL;
}
