/*
 * XREFs of AlpcInitializeMessageAttribute @ 0x140440ED0
 * Callers:
 *     SshpAlpcMessageCallback @ 0x140767E40 (SshpAlpcMessageCallback.c)
 *     DbgkpSendErrorMessage @ 0x1409E93F0 (DbgkpSendErrorMessage.c)
 *     PopUmpoProcessMessages @ 0x140A17FA0 (PopUmpoProcessMessages.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x140440F30 (AlpcGetHeaderSize.c)
 */

NTSTATUS __cdecl AlpcInitializeMessageAttribute(
        ULONG AttributeFlags,
        PALPC_MESSAGE_ATTRIBUTES Buffer,
        SIZE_T BufferSize,
        PSIZE_T RequiredBufferSize)
{
  ULONG HeaderSize; // eax

  HeaderSize = AlpcGetHeaderSize(AttributeFlags);
  *RequiredBufferSize = HeaderSize;
  if ( HeaderSize > BufferSize )
    return -1073741789;
  if ( Buffer )
  {
    Buffer->ValidAttributes = 0;
    Buffer->AllocatedAttributes = AttributeFlags;
  }
  return 0;
}
