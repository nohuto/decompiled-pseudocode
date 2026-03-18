/*
 * XREFs of AlpcGetMessageAttribute @ 0x14044A490
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140426264 (PopUmpoSendPowerMessage.c)
 *     SshpAlpcMessageCallback @ 0x140758260 (SshpAlpcMessageCallback.c)
 *     DbgkpSendErrorMessage @ 0x1408B6DA4 (DbgkpSendErrorMessage.c)
 *     PopUmpoProcessMessages @ 0x140A18864 (PopUmpoProcessMessages.c)
 *     CmFcpCreateAlpcSectionView @ 0x140ABCEFC (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x14044A530 (AlpcGetHeaderSize.c)
 */

char *__fastcall AlpcGetMessageAttribute(_DWORD *a1, int a2)
{
  if ( (*a1 & a2) == 0 || ((a2 - 1) & a2) != 0 )
    return 0LL;
  else
    return (char *)a1 + (unsigned int)AlpcGetHeaderSize(*a1 & (unsigned int)(-2 * a2));
}
