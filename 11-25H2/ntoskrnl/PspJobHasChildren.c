/*
 * XREFs of PspJobHasChildren @ 0x1406EFBE4
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x140762D94 (PspConvertSiloToServerSilo.c)
 *     PsInsertPermanentSiloContextEx @ 0x1409E3454 (PsInsertPermanentSiloContextEx.c)
 *     PspCreateSilo @ 0x140A7183C (PspCreateSilo.c)
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
