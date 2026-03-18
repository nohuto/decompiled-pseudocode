/*
 * XREFs of PopUmpoProcessMessages @ 0x140A18864
 * Callers:
 *     PopUmpoMessageCallback @ 0x14044C310 (PopUmpoMessageCallback.c)
 *     PopUmpoInitializeChannel @ 0x140C21334 (PopUmpoInitializeChannel.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x14044A490 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x14044A4D0 (AlpcInitializeMessageAttribute.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14069C300 (ZwAlpcSendWaitReceivePort.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopDiagTraceUmpoAlpcProcessingError @ 0x14074C24C (PopDiagTraceUmpoAlpcProcessingError.c)
 *     PopUmpoProcessMessage @ 0x140A1899C (PopUmpoProcessMessage.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void PopUmpoProcessMessages()
{
  void *Pool2; // rdi
  char *MessageAttribute; // rax
  int v2; // ebx
  __int64 v3; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v4[40]; // [rsp+68h] [rbp-A0h] BYREF

  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    goto LABEL_6;
  memset_0(v4, 0, sizeof(v4));
  while ( 1 )
  {
    AlpcInitializeMessageAttribute(0x20000000LL, v4, 0xA0uLL, &v3);
    v2 = ZwAlpcSendWaitReceivePort(PopAlpcServerPort, 0LL);
    if ( v2 )
      break;
    MessageAttribute = AlpcGetMessageAttribute(v4, 0x20000000);
    PopUmpoProcessMessage(Pool2, MessageAttribute, 0LL);
  }
  ExFreePoolWithTag(Pool2, 0);
  if ( v2 < 0 )
LABEL_6:
    PopDiagTraceUmpoAlpcProcessingError();
}
