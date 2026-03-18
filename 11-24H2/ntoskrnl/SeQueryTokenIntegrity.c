/*
 * XREFs of SeQueryTokenIntegrity @ 0x140419484
 * Callers:
 *     EtwpPsProvTraceProcess @ 0x14094D000 (EtwpPsProvTraceProcess.c)
 *     NtQueryInformationToken @ 0x140AD3370 (NtQueryInformationToken.c)
 * Callees:
 *     SepCopyTokenIntegrity @ 0x1404194A0 (SepCopyTokenIntegrity.c)
 */

void __stdcall SeQueryTokenIntegrity(PACCESS_TOKEN Token, PSID_AND_ATTRIBUTES IntegritySA)
{
  SepCopyTokenIntegrity(Token, IntegritySA);
}
