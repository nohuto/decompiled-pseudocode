/*
 * XREFs of ObpHandleRevocationBlockRemoveObject @ 0x1409C2750
 * Callers:
 *     PfSnGetFileInformation @ 0x14022B790 (PfSnGetFileInformation.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     NtTraceEvent @ 0x1402CE8A0 (NtTraceEvent.c)
 *     IopProcessWorkItem @ 0x1402D1B40 (IopProcessWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     IoRemoveIoCompletion @ 0x1402D3950 (IoRemoveIoCompletion.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403AD210 (NtReleaseWorkerFactoryWorker.c)
 *     ObpDereferenceNamedObject @ 0x1403B0688 (ObpDereferenceNamedObject.c)
 *     ExpSetTimerObject2 @ 0x1403B09D8 (ExpSetTimerObject2.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403B1560 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x1403B1A30 (IopUnloadSafeCompletion.c)
 *     IopDeleteFileObjectExtension @ 0x1403B1BD0 (IopDeleteFileObjectExtension.c)
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     IopReferenceFileObject @ 0x1403EB740 (IopReferenceFileObject.c)
 *     IopFreeWaitCompletionPacket @ 0x14040F850 (IopFreeWaitCompletionPacket.c)
 *     ObpProcessRemoveObjectQueue @ 0x1409C2460 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x1409C2778 (ObpHandleRevocationBlockRemoveInsertedObject.c)
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
