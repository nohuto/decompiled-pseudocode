/*
 * XREFs of IoRemoveShareAccess @ 0x1408AD7A0
 * Callers:
 *     DifIoRemoveShareAccessWrapper @ 0x140628F40 (DifIoRemoveShareAccessWrapper.c)
 * Callees:
 *     IoRemoveLinkShareAccessEx @ 0x1408AD7C0 (IoRemoveLinkShareAccessEx.c)
 */

void __stdcall IoRemoveShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoRemoveLinkShareAccessEx(FileObject, ShareAccess, 0LL, 0LL);
}
