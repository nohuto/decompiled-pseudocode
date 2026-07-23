/*
 * XREFs of KeQueryTimeIncrement @ 0x14043CEE0
 * Callers:
 *     sub_1406F81C4 @ 0x1406F81C4 (sub_1406F81C4.c)
 *     sub_1407B8A00 @ 0x1407B8A00 (sub_1407B8A00.c)
 *     EtwpSendDataBlock @ 0x140834A64 (EtwpSendDataBlock.c)
 *     SPCallServerHandleQueryPolicy @ 0x14095F70C (SPCallServerHandleQueryPolicy.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1409E17C0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x140A0A800 (FsRtlCancellableWaitForSingleObject.c)
 *     sub_140C5E95C @ 0x140C5E95C (sub_140C5E95C.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
