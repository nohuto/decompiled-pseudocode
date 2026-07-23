/*
 * XREFs of PspJobHasChildren @ 0x1406F9694
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x140772974 (PspConvertSiloToServerSilo.c)
 *     PsInsertPermanentSiloContextEx @ 0x1409DBE54 (PsInsertPermanentSiloContextEx.c)
 *     PspCreateSilo @ 0x140A6D570 (PspCreateSilo.c)
 * Callees:
 *     <none>
 */

char __fastcall PspJobHasChildren(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)(a1 + 212) || *(_QWORD *)(a1 + 1288) != a1 + 1288 )
    return 1;
  return v1;
}
