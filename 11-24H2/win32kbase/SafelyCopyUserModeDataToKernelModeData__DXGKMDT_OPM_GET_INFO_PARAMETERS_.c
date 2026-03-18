/*
 * XREFs of SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_ @ 0x14008C2D8
 * Callers:
 *     NtGdiGetOPMInformation @ 0x14008BAC0 (NtGdiGetOPMInformation.c)
 * Callees:
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_(void *a1, const void *a2)
{
  memmove(a1, a2, 0x1010uLL);
  return 0LL;
}
