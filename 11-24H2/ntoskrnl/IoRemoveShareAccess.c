/*
 * XREFs of IoRemoveShareAccess @ 0x1409A2510
 * Callers:
 *     DifIoRemoveShareAccessWrapper @ 0x14062A980 (DifIoRemoveShareAccessWrapper.c)
 * Callees:
 *     IoRemoveLinkShareAccessEx @ 0x1409A2530 (IoRemoveLinkShareAccessEx.c)
 */

void __stdcall IoRemoveShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoRemoveLinkShareAccessEx(FileObject, ShareAccess, 0LL, 0LL);
}
