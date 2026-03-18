/*
 * XREFs of AssociateKernelIocpWcp @ 0x140060B50
 * Callers:
 *     NtMITDispatchCompletion @ 0x140060480 (NtMITDispatchCompletion.c)
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1400607D0 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x140060A5C (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AssociateKernelIocpWcp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ZwAssociateWaitCompletionPacket(a1, a2, a3, a4);
}
