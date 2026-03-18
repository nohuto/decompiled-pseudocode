/*
 * XREFs of IoUpdateShareAccess @ 0x1409FE490
 * Callers:
 *     DifIoUpdateShareAccessWrapper @ 0x14061F5C0 (DifIoUpdateShareAccessWrapper.c)
 * Callees:
 *     IoUpdateLinkShareAccessEx @ 0x1409FE4B0 (IoUpdateLinkShareAccessEx.c)
 */

void __stdcall IoUpdateShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoUpdateLinkShareAccessEx(FileObject, ShareAccess, 0LL, 0LL);
}
