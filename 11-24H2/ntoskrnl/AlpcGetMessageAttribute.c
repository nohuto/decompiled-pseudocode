/*
 * XREFs of AlpcGetMessageAttribute @ 0x140448770
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140331990 (PopUmpoSendPowerMessage.c)
 *     SshpAlpcMessageCallback @ 0x140767C20 (SshpAlpcMessageCallback.c)
 *     DbgkpSendErrorMessage @ 0x14093A900 (DbgkpSendErrorMessage.c)
 *     PopUmpoProcessMessages @ 0x140A23B90 (PopUmpoProcessMessages.c)
 *     CmFcpCreateAlpcSectionView @ 0x140AC0FAC (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x140448810 (AlpcGetHeaderSize.c)
 */

char *__fastcall AlpcGetMessageAttribute(_DWORD *a1, int a2)
{
  if ( (*a1 & a2) == 0 || ((a2 - 1) & a2) != 0 )
    return 0LL;
  else
    return (char *)a1 + (unsigned int)AlpcGetHeaderSize(*a1 & (unsigned int)(-2 * a2));
}
