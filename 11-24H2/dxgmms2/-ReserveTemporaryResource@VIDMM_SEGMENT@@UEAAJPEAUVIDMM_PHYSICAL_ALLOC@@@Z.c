/*
 * XREFs of ?ReserveTemporaryResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14009DA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_SEGMENT::ReserveTemporaryResource(VIDMM_SEGMENT *this, struct VIDMM_PHYSICAL_ALLOC *a2)
{
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 270LL, 13LL, 0LL, 0LL, 0LL);
  WdLogGlobalForLineNumber = 195;
  JUMPOUT(0x14009DAC1LL);
}
