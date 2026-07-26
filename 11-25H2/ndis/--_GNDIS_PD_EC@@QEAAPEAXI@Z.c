/*
 * XREFs of ??_GNDIS_PD_EC@@QEAAPEAXI@Z @ 0x140144650
 * Callers:
 *     ?NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z @ 0x140147100 (-NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z.c)
 *     ?NdisPDStopEC@@YAXPEAUPD_EC_HANDLE__@@@Z @ 0x1401472F0 (-NdisPDStopEC@@YAXPEAUPD_EC_HANDLE__@@@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall NDIS_PD_EC::`scalar deleting destructor'(char *P)
{
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 40));
  if ( P )
    ExFreePoolWithTag(P, 0x6541444Eu);
  return P;
}
