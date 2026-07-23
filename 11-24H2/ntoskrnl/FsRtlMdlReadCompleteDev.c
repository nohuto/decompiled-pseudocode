/*
 * XREFs of FsRtlMdlReadCompleteDev @ 0x140488AE0
 * Callers:
 *     <none>
 * Callees:
 *     CcMdlReadComplete2 @ 0x140A32058 (CcMdlReadComplete2.c)
 */

BOOLEAN __stdcall FsRtlMdlReadCompleteDev(PFILE_OBJECT FileObject, PMDL MdlChain, PDEVICE_OBJECT DeviceObject)
{
  CcMdlReadComplete2(FileObject, MdlChain, DeviceObject);
  return 1;
}
