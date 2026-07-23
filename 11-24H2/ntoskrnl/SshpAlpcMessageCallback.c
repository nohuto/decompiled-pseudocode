/*
 * XREFs of SshpAlpcMessageCallback @ 0x140767E40
 * Callers:
 *     SshpAlpcInitialize @ 0x140C36544 (SshpAlpcInitialize.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     AlpcGetMessageAttribute @ 0x140440E90 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x140440ED0 (AlpcInitializeMessageAttribute.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1406A8570 (ZwAlpcSendWaitReceivePort.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14076802C (SshpAlpcProcessAlpcMessage.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void __fastcall SshpAlpcMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  _ALPC_MESSAGE_ATTRIBUTES *ReceiveMessageAttributes; // rbx
  _PORT_MESSAGE *ReceiveMessage; // rdi
  _ALPC_CONTEXT_ATTR *MessageAttribute; // rax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-18h] BYREF
  ULONG_PTR RequiredBufferSize[2]; // [rsp+48h] [rbp-10h] BYREF
  ULONG_PTR BufferLength; // [rsp+78h] [rbp+20h] BYREF

  BufferLength = 0LL;
  Timeout.QuadPart = 0LL;
  ReceiveMessageAttributes = (_ALPC_MESSAGE_ATTRIBUTES *)ExAllocatePool2(0x100uLL, 0xA0uLL, 0x70687373u);
  if ( ReceiveMessageAttributes )
  {
    ReceiveMessage = (_PORT_MESSAGE *)ExAllocatePool2(0x100uLL, 0x40uLL, 0x70687373u);
    if ( ReceiveMessage )
    {
      memset_0(ReceiveMessageAttributes, 0, 0xA0uLL);
      memset_0(ReceiveMessage, 0, 0x40uLL);
      AlpcInitializeMessageAttribute(0x20000000u, ReceiveMessageAttributes, 0xA0uLL, RequiredBufferSize);
      while ( 1 )
      {
        BufferLength = 64LL;
        if ( ZwAlpcSendWaitReceivePort(
               SshpAlpcContext,
               0,
               0LL,
               0LL,
               ReceiveMessage,
               &BufferLength,
               ReceiveMessageAttributes,
               &Timeout) )
        {
          break;
        }
        MessageAttribute = (_ALPC_CONTEXT_ATTR *)AlpcGetMessageAttribute(ReceiveMessageAttributes, 0x20000000u);
        SshpAlpcProcessAlpcMessage(ReceiveMessage, MessageAttribute);
        AlpcInitializeMessageAttribute(0x20000000u, ReceiveMessageAttributes, 0xA0uLL, RequiredBufferSize);
        Timeout.QuadPart = 0LL;
      }
      CmpFreeTransientPoolWithTag(ReceiveMessage, 0x70687373u);
    }
    CmpFreeTransientPoolWithTag(ReceiveMessageAttributes, 0x70687373u);
  }
}
