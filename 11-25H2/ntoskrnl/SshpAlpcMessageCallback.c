/*
 * XREFs of SshpAlpcMessageCallback @ 0x140758260
 * Callers:
 *     SshpAlpcInitialize @ 0x140C23138 (SshpAlpcInitialize.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     AlpcGetMessageAttribute @ 0x14044A490 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x14044A4D0 (AlpcInitializeMessageAttribute.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14069C300 (ZwAlpcSendWaitReceivePort.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14075844C (SshpAlpcProcessAlpcMessage.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

void __fastcall SshpAlpcMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  _DWORD *Pool2; // rbx
  void *v4; // rdi
  char *MessageAttribute; // rax
  _QWORD v6[2]; // [rsp+48h] [rbp-10h] BYREF

  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v4 = (void *)ExAllocatePool2(0x100uLL);
    if ( v4 )
    {
      memset_0(Pool2, 0, 0xA0uLL);
      memset_0(v4, 0, 0x40uLL);
      AlpcInitializeMessageAttribute(0x20000000LL, Pool2, 0xA0uLL, v6);
      while ( !(unsigned int)ZwAlpcSendWaitReceivePort(SshpAlpcContext, 0LL) )
      {
        MessageAttribute = AlpcGetMessageAttribute(Pool2, 0x20000000);
        SshpAlpcProcessAlpcMessage(v4, MessageAttribute);
        AlpcInitializeMessageAttribute(0x20000000LL, Pool2, 0xA0uLL, v6);
      }
      CmpFreeTransientPoolWithTag(v4, 0x70687373u);
    }
    CmpFreeTransientPoolWithTag(Pool2, 0x70687373u);
  }
}
