/*
 * XREFs of PspWriteProcessSecurityDomain @ 0x1404A7B40
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall PspWriteProcessSecurityDomain(__int64 a1, __int64 a2, int a3)
{
  *(_QWORD *)(a1 + 1888) = a2;
  if ( a3 )
    *(_QWORD *)(a1 + 1896) = a2;
}
