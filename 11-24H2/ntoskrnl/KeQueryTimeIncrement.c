/*
 * XREFs of KeQueryTimeIncrement @ 0x140444C20
 * Callers:
 *     sub_1406FA584 @ 0x1406FA584 (sub_1406FA584.c)
 *     sub_1407B85B0 @ 0x1407B85B0 (sub_1407B85B0.c)
 *     EtwpSendDataBlock @ 0x14083A3F4 (EtwpSendDataBlock.c)
 *     SPCallServerHandleQueryPolicy @ 0x140976EFC (SPCallServerHandleQueryPolicy.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1409E6800 (FsRtlCancellableWaitForMultipleObjects.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x140A0B5C0 (FsRtlCancellableWaitForSingleObject.c)
 *     sub_140C5C7CC @ 0x140C5C7CC (sub_140C5C7CC.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
