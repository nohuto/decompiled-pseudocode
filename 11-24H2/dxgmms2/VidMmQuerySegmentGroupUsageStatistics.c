/*
 * XREFs of VidMmQuerySegmentGroupUsageStatistics @ 0x14004BF80
 * Callers:
 *     <none>
 * Callees:
 *     ?QuerySegmentGroupUsageStatistics@VIDMM_GLOBAL@@QEAAJGW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_MEMORY_USAGE@@@Z @ 0x140099404 (-QuerySegmentGroupUsageStatistics@VIDMM_GLOBAL@@QEAAJGW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM_.c)
 */

__int64 __fastcall VidMmQuerySegmentGroupUsageStatistics(
        VIDMM_GLOBAL *a1,
        unsigned __int16 a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3,
        struct VIDMM_PROCESS *a4,
        struct _D3DKMT_QUERYSTATISTICS_MEMORY_USAGE *a5)
{
  return VIDMM_GLOBAL::QuerySegmentGroupUsageStatistics(a1, a2, a3, a4, a5);
}
