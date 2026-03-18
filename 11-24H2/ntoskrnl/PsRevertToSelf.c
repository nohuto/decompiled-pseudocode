/*
 * XREFs of PsRevertToSelf @ 0x140930F00
 * Callers:
 *     CmpOpenHiveFile @ 0x14092FE64 (CmpOpenHiveFile.c)
 *     EtwpDelayCreate @ 0x1409DB6A0 (EtwpDelayCreate.c)
 * Callees:
 *     PsImpersonateClient @ 0x1409102D0 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
