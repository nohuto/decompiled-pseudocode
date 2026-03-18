/*
 * XREFs of HUBDSM_GettingConfigDescriptorWhileRenuemrating @ 0x140022750
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer @ 0x14002B388 (HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_GettingConfigDescriptorWhileRenuemrating(__int64 a1)
{
  HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
