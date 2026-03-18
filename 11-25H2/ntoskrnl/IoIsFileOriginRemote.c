/*
 * XREFs of IoIsFileOriginRemote @ 0x1403A5880
 * Callers:
 *     CcForceWriteThrough @ 0x1403A5660 (CcForceWriteThrough.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140700570 (FsRtlpOplockTryPrepForAckTimeout.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIsFileOriginRemote(PFILE_OBJECT FileObject)
{
  return HIBYTE(FileObject->Flags) & 1;
}
