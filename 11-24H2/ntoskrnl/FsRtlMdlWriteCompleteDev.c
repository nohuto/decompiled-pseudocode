/*
 * XREFs of FsRtlMdlWriteCompleteDev @ 0x140A7B8D0
 * Callers:
 *     <none>
 * Callees:
 *     CcMdlWriteComplete2 @ 0x1404567A4 (CcMdlWriteComplete2.c)
 */

BOOLEAN __stdcall FsRtlMdlWriteCompleteDev(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        PMDL MdlChain,
        PDEVICE_OBJECT DeviceObject)
{
  if ( (FileObject->Flags & 0x10) != 0 )
    return 0;
  CcMdlWriteComplete2((__int64)FileObject, (__int64 *)FileOffset, MdlChain);
  return 1;
}
