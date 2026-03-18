/*
 * XREFs of HUBDSM_GettingAlternateConfigurationDescriptorWithReturnedLength @ 0x140022780
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer @ 0x14002B448 (HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_GettingAlternateConfigurationDescriptorWithReturnedLength(__int64 a1)
{
  HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
