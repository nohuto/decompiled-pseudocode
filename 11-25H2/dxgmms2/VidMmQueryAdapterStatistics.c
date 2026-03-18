/*
 * XREFs of VidMmQueryAdapterStatistics @ 0x140041790
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryAdapterStatistics@VIDMM_GLOBAL@@QEAAJGPEAU_D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATION@@@Z @ 0x140113C9C (-QueryAdapterStatistics@VIDMM_GLOBAL@@QEAAJGPEAU_D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATION@@@Z.c)
 */

__int64 __fastcall VidMmQueryAdapterStatistics(
        VIDMM_GLOBAL *a1,
        unsigned __int16 a2,
        struct _D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATION *a3)
{
  return VIDMM_GLOBAL::QueryAdapterStatistics(a1, a2, a3);
}
