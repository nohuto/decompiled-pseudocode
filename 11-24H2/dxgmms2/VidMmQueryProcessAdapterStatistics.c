/*
 * XREFs of VidMmQueryProcessAdapterStatistics @ 0x14004BF20
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryProcessAdapterStatistics@VIDMM_GLOBAL@@QEAAJGPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x140099098 (-QueryProcessAdapterStatistics@VIDMM_GLOBAL@@QEAAJGPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTIC.c)
 */

int __fastcall VidMmQueryProcessAdapterStatistics(
        VIDMM_GLOBAL *a1,
        unsigned __int16 a2,
        struct VIDMM_PROCESS *a3,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION *a4)
{
  return VIDMM_GLOBAL::QueryProcessAdapterStatistics(a1, a2, a3, a4);
}
