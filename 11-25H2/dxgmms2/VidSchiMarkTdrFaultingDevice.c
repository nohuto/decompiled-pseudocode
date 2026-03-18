/*
 * XREFs of VidSchiMarkTdrFaultingDevice @ 0x1400A67D0
 * Callers:
 *     VidSchiReportHwHang @ 0x140046CF8 (VidSchiReportHwHang.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x14002BEA0 (VidSchMarkDeviceAsError.c)
 */

void __fastcall VidSchiMarkTdrFaultingDevice(__int64 a1)
{
  if ( a1 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 256LL) )
  {
    *(_BYTE *)(a1 + 204) = 1;
    VidSchMarkDeviceAsError(a1, 7);
  }
}
