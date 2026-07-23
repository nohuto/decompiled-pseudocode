/*
 * XREFs of IoUpdateShareAccess @ 0x1409F09E0
 * Callers:
 *     DifIoUpdateShareAccessWrapper @ 0x140629B40 (DifIoUpdateShareAccessWrapper.c)
 * Callees:
 *     IoUpdateLinkShareAccessEx @ 0x1409F0A00 (IoUpdateLinkShareAccessEx.c)
 */

void __stdcall IoUpdateShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoUpdateLinkShareAccessEx(FileObject, ShareAccess, 0LL, 0LL);
}
