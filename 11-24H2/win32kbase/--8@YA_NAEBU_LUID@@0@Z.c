/*
 * XREFs of ??8@YA_NAEBU_LUID@@0@Z @ 0x14014D718
 * Callers:
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x140155484 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x14015C734 (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1];
}
