/*
 * XREFs of PspWriteProcessSecurityDomain @ 0x1404A2E04
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall PspWriteProcessSecurityDomain(__int64 a1, __int64 a2, int a3)
{
  *(_QWORD *)(a1 + 1888) = a2;
  if ( a3 )
    *(_QWORD *)(a1 + 1896) = a2;
}
