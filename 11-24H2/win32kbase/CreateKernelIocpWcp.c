/*
 * XREFs of CreateKernelIocpWcp @ 0x140060AF0
 * Callers:
 *     NtMITDispatchCompletion @ 0x140060480 (NtMITDispatchCompletion.c)
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1400607D0 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x140060A5C (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 CreateKernelIocpWcp()
{
  _QWORD v1[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v2; // [rsp+40h] [rbp-18h]
  __int64 v3; // [rsp+60h] [rbp+8h] BYREF

  v1[0] = 48LL;
  v1[3] = 512LL;
  v1[1] = 0LL;
  v1[2] = 0LL;
  v3 = 0LL;
  v2 = 0LL;
  ZwCreateWaitCompletionPacket(&v3, 1LL, v1);
  return v3;
}
