/*
 * XREFs of IoUpdateShareAccess @ 0x1409F8070
 * Callers:
 *     DifIoUpdateShareAccessWrapper @ 0x14062B580 (DifIoUpdateShareAccessWrapper.c)
 * Callees:
 *     IoUpdateLinkShareAccessEx @ 0x1409F8090 (IoUpdateLinkShareAccessEx.c)
 */

void __stdcall IoUpdateShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoUpdateLinkShareAccessEx(FileObject, ShareAccess, 0LL, 0LL);
}
