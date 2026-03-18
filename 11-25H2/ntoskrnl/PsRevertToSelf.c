/*
 * XREFs of PsRevertToSelf @ 0x14090E4C0
 * Callers:
 *     CmpOpenHiveFile @ 0x14090F91C (CmpOpenHiveFile.c)
 *     EtwpDelayCreate @ 0x1409927F8 (EtwpDelayCreate.c)
 * Callees:
 *     PsImpersonateClient @ 0x1408A51C0 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
