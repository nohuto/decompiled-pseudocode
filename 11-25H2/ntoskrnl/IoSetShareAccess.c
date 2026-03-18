/*
 * XREFs of IoSetShareAccess @ 0x14099D9F0
 * Callers:
 *     DifIoSetShareAccessWrapper @ 0x14061F160 (DifIoSetShareAccessWrapper.c)
 * Callees:
 *     IoSetLinkShareAccess @ 0x14099DA10 (IoSetLinkShareAccess.c)
 */

void __stdcall IoSetShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess)
{
  IoSetLinkShareAccess(DesiredAccess, DesiredShareAccess, (_DWORD)FileObject, (_DWORD)ShareAccess, 0LL, 0);
}
