/*
 * XREFs of IoIsFileOriginRemote @ 0x14040C220
 * Callers:
 *     CcForceWriteThrough @ 0x14040C010 (CcForceWriteThrough.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140709FE4 (FsRtlpOplockTryPrepForAckTimeout.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIsFileOriginRemote(PFILE_OBJECT FileObject)
{
  return HIBYTE(FileObject->Flags) & 1;
}
