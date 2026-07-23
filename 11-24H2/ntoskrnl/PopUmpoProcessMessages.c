/*
 * XREFs of PopUmpoProcessMessages @ 0x140A17FA0
 * Callers:
 *     PopUmpoMessageCallback @ 0x140442A10 (PopUmpoMessageCallback.c)
 *     PopUmpoInitializeChannel @ 0x140C34578 (PopUmpoInitializeChannel.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x140440E90 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x140440ED0 (AlpcInitializeMessageAttribute.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1406A8570 (ZwAlpcSendWaitReceivePort.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopDiagTraceUmpoAlpcProcessingError @ 0x140756780 (PopDiagTraceUmpoAlpcProcessingError.c)
 *     PopUmpoProcessMessage @ 0x140A180D8 (PopUmpoProcessMessage.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void PopUmpoProcessMessages()
{
  _PORT_MESSAGE *ReceiveMessage; // rdi
  _ALPC_CONTEXT_ATTR *MessageAttribute; // rax
  NTSTATUS v2; // ebx
  ULONG_PTR BufferLength; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp-B8h] BYREF
  ULONG_PTR RequiredBufferSize[2]; // [rsp+58h] [rbp-B0h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES Buffer; // [rsp+68h] [rbp-A0h] BYREF

  BufferLength = 0LL;
  Timeout.QuadPart = 0LL;
  ReceiveMessage = (_PORT_MESSAGE *)ExAllocatePool2(0x100uLL, 0x1000uLL, 0x6F706D55u);
  if ( !ReceiveMessage )
    goto LABEL_6;
  memset_0(&Buffer, 0, 0xA0uLL);
  while ( 1 )
  {
    AlpcInitializeMessageAttribute(0x20000000u, &Buffer, 0xA0uLL, RequiredBufferSize);
    BufferLength = 4096LL;
    v2 = ZwAlpcSendWaitReceivePort(PopAlpcServerPort, 0, 0LL, 0LL, ReceiveMessage, &BufferLength, &Buffer, &Timeout);
    if ( v2 )
      break;
    MessageAttribute = (_ALPC_CONTEXT_ATTR *)AlpcGetMessageAttribute(&Buffer, 0x20000000u);
    PopUmpoProcessMessage(ReceiveMessage, MessageAttribute);
  }
  ExFreePoolWithTag(ReceiveMessage, 0);
  if ( v2 < 0 )
LABEL_6:
    PopDiagTraceUmpoAlpcProcessingError();
}
