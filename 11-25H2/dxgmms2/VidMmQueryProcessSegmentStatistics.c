/*
 * XREFs of VidMmQueryProcessSegmentStatistics @ 0x14003E7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryProcessSegmentStatistics@VIDMM_GLOBAL@@QEAAJGIPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION@@@Z @ 0x1400F924C (-QueryProcessSegmentStatistics@VIDMM_GLOBAL@@QEAAJGIPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTI.c)
 */

__int64 __fastcall VidMmQueryProcessSegmentStatistics(
        VIDMM_GLOBAL *a1,
        unsigned __int16 a2,
        unsigned int a3,
        struct VIDMM_PROCESS *a4,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION *a5)
{
  return VIDMM_GLOBAL::QueryProcessSegmentStatistics(a1, a2, a3, a4, a5);
}
