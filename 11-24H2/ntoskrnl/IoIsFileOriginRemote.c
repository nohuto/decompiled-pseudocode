/*
 * XREFs of IoIsFileOriginRemote @ 0x1402CE220
 * Callers:
 *     CcForceWriteThrough @ 0x1402CE010 (CcForceWriteThrough.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x14070C450 (FsRtlpOplockTryPrepForAckTimeout.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIsFileOriginRemote(PFILE_OBJECT FileObject)
{
  return HIBYTE(FileObject->Flags) & 1;
}
