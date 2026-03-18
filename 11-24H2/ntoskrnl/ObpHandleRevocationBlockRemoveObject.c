/*
 * XREFs of ObpHandleRevocationBlockRemoveObject @ 0x1409D2920
 * Callers:
 *     PfSnGetFileInformation @ 0x140276200 (PfSnGetFileInformation.c)
 *     IopProcessWorkItem @ 0x1402A2410 (IopProcessWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     IoRemoveIoCompletion @ 0x1402A4220 (IoRemoveIoCompletion.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     NtTraceEvent @ 0x140325D10 (NtTraceEvent.c)
 *     ObFastDereferenceObject @ 0x140356880 (ObFastDereferenceObject.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403BE580 (NtReleaseWorkerFactoryWorker.c)
 *     ObpDereferenceNamedObject @ 0x1403C1AC8 (ObpDereferenceNamedObject.c)
 *     ExpSetTimerObject2 @ 0x1403C1E18 (ExpSetTimerObject2.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403C29A0 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x1403C2E70 (IopUnloadSafeCompletion.c)
 *     IopDeleteFileObjectExtension @ 0x1403C3010 (IopDeleteFileObjectExtension.c)
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     IopReferenceFileObject @ 0x1403F5300 (IopReferenceFileObject.c)
 *     IopFreeWaitCompletionPacket @ 0x14041BD10 (IopFreeWaitCompletionPacket.c)
 *     ObpProcessRemoveObjectQueue @ 0x1409D2630 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x1409D2948 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

__int64 __fastcall ObpHandleRevocationBlockRemoveObject(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 > 2 )
    return ObpHandleRevocationBlockRemoveInsertedObject(a1, v1, 0LL, 0LL);
  return result;
}
