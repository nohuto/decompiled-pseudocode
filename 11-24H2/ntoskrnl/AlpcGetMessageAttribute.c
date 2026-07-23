/*
 * XREFs of AlpcGetMessageAttribute @ 0x140440E90
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1402BB090 (PopUmpoSendPowerMessage.c)
 *     SshpAlpcMessageCallback @ 0x140767E40 (SshpAlpcMessageCallback.c)
 *     DbgkpSendErrorMessage @ 0x1409E93F0 (DbgkpSendErrorMessage.c)
 *     PopUmpoProcessMessages @ 0x140A17FA0 (PopUmpoProcessMessages.c)
 *     CmFcpCreateAlpcSectionView @ 0x140ABC10C (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x140440F30 (AlpcGetHeaderSize.c)
 */

PVOID __cdecl AlpcGetMessageAttribute(PALPC_MESSAGE_ATTRIBUTES Buffer, ULONG AttributeFlag)
{
  if ( (Buffer->AllocatedAttributes & AttributeFlag) == 0 || ((AttributeFlag - 1) & AttributeFlag) != 0 )
    return 0LL;
  else
    return (char *)Buffer + AlpcGetHeaderSize(Buffer->AllocatedAttributes & (-2 * AttributeFlag));
}
