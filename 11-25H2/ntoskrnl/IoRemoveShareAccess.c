/*
 * XREFs of IoRemoveShareAccess @ 0x14099D620
 * Callers:
 *     DifIoRemoveShareAccessWrapper @ 0x14061E9C0 (DifIoRemoveShareAccessWrapper.c)
 * Callees:
 *     IoRemoveLinkShareAccessEx @ 0x14099D640 (IoRemoveLinkShareAccessEx.c)
 */

void __stdcall IoRemoveShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoRemoveLinkShareAccessEx(FileObject, ShareAccess, 0LL, 0LL);
}
