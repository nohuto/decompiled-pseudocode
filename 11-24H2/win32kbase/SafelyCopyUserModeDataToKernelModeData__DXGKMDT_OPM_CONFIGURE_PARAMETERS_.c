/*
 * XREFs of SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_ @ 0x14008A5D4
 * Callers:
 *     NtGdiConfigureOPMProtectedOutput @ 0x14008A6A0 (NtGdiConfigureOPMProtectedOutput.c)
 * Callees:
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_(void *a1, const void *a2)
{
  memmove(a1, a2, 0x1000uLL);
  return 0LL;
}
