/*
 * XREFs of ??_GNDIS_PD_CLIENT@@QEAAPEAXI@Z @ 0x140139700
 * Callers:
 *     NdisPDStartup @ 0x1400A4FD0 (NdisPDStartup.c)
 *     ?NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z @ 0x14013A1D0 (-NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z.c)
 * Callees:
 *     <none>
 */

NDIS_PD_CLIENT *__fastcall NDIS_PD_CLIENT::`scalar deleting destructor'(NDIS_PD_CLIENT *this)
{
  if ( this )
    ExFreePoolWithTag(this, 0x6341444Eu);
  return this;
}
