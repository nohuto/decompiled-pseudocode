/*
 * XREFs of KeQueryTimeIncrement @ 0x140443620
 * Callers:
 *     sub_1406EE700 @ 0x1406EE700 (sub_1406EE700.c)
 *     sub_1407A9100 @ 0x1407A9100 (sub_1407A9100.c)
 *     EtwpSendDataBlock @ 0x14089AEF8 (EtwpSendDataBlock.c)
 *     SPCallServerHandleQueryPolicy @ 0x14097D124 (SPCallServerHandleQueryPolicy.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1409EC8F0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x140A072B0 (FsRtlCancellableWaitForSingleObject.c)
 *     sub_140C4B44C @ 0x140C4B44C (sub_140C4B44C.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
