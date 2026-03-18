/*
 * XREFs of SeQueryTokenIntegrity @ 0x14041C680
 * Callers:
 *     EtwpPsProvTraceProcess @ 0x140921388 (EtwpPsProvTraceProcess.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 * Callees:
 *     SepCopyTokenIntegrity @ 0x14041C6A0 (SepCopyTokenIntegrity.c)
 */

void __stdcall SeQueryTokenIntegrity(PACCESS_TOKEN Token, PSID_AND_ATTRIBUTES IntegritySA)
{
  SepCopyTokenIntegrity(Token, IntegritySA);
}
