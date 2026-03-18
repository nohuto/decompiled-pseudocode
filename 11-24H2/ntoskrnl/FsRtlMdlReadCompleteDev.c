/*
 * XREFs of FsRtlMdlReadCompleteDev @ 0x14048E6B0
 * Callers:
 *     <none>
 * Callees:
 *     CcMdlReadComplete2 @ 0x140A3C878 (CcMdlReadComplete2.c)
 */

BOOLEAN __stdcall FsRtlMdlReadCompleteDev(PFILE_OBJECT FileObject, PMDL MdlChain, PDEVICE_OBJECT DeviceObject)
{
  CcMdlReadComplete2(FileObject, MdlChain, DeviceObject);
  return 1;
}
