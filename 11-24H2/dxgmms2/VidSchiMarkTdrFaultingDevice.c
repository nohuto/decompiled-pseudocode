/*
 * XREFs of VidSchiMarkTdrFaultingDevice @ 0x1400A8050
 * Callers:
 *     VidSchiReportHwHang @ 0x140044F38 (VidSchiReportHwHang.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x14001F860 (VidSchMarkDeviceAsError.c)
 */

void __fastcall VidSchiMarkTdrFaultingDevice(__int64 a1)
{
  if ( a1 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 256LL) )
  {
    *(_BYTE *)(a1 + 204) = 1;
    VidSchMarkDeviceAsError(a1, 7LL);
  }
}
