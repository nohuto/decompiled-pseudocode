/*
 * XREFs of HUBDSM_GettingAlternateDeviceDescriptor @ 0x1400227B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_GetDeviceDescriptorUsingControlTransfer @ 0x14002B850 (HUBDTX_GetDeviceDescriptorUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_GettingAlternateDeviceDescriptor(__int64 a1)
{
  HUBDTX_GetDeviceDescriptorUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
