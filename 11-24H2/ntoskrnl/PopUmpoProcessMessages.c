/*
 * XREFs of PopUmpoProcessMessages @ 0x140A23B90
 * Callers:
 *     PopUmpoMessageCallback @ 0x14044B8D0 (PopUmpoMessageCallback.c)
 *     PopUmpoInitializeChannel @ 0x140C32438 (PopUmpoInitializeChannel.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x140448770 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x1404487B0 (AlpcInitializeMessageAttribute.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1406A75D0 (ZwAlpcSendWaitReceivePort.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopDiagTraceUmpoAlpcProcessingError @ 0x140758300 (PopDiagTraceUmpoAlpcProcessingError.c)
 *     PopUmpoProcessMessage @ 0x140A23CC8 (PopUmpoProcessMessage.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
