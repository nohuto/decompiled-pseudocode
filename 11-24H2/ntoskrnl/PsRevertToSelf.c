/*
 * XREFs of PsRevertToSelf @ 0x140933040
 * Callers:
 *     CmpOpenHiveFile @ 0x140931FA4 (CmpOpenHiveFile.c)
 *     EtwpDelayCreate @ 0x1409D61B0 (EtwpDelayCreate.c)
 * Callees:
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
