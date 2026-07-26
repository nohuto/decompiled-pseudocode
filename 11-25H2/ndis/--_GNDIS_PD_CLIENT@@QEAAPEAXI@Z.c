/*
 * XREFs of ??_GNDIS_PD_CLIENT@@QEAAPEAXI@Z @ 0x1401445E8
 * Callers:
 *     NdisPDStartup @ 0x1400AD180 (NdisPDStartup.c)
 *     ?NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z @ 0x1401450B0 (-NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z.c)
 * Callees:
 *     <none>
 */

NDIS_PD_CLIENT *__fastcall NDIS_PD_CLIENT::`scalar deleting destructor'(NDIS_PD_CLIENT *this)
{
  if ( this )
    ExFreePoolWithTag(this, 0x6341444Eu);
  return this;
}
