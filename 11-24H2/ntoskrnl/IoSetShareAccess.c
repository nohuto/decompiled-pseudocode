/*
 * XREFs of IoSetShareAccess @ 0x1409A28E0
 * Callers:
 *     DifIoSetShareAccessWrapper @ 0x14062B120 (DifIoSetShareAccessWrapper.c)
 * Callees:
 *     IoSetLinkShareAccess @ 0x1409A2900 (IoSetLinkShareAccess.c)
 */

void __stdcall IoSetShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess)
{
  IoSetLinkShareAccess(DesiredAccess, DesiredShareAccess, (_DWORD)FileObject, (_DWORD)ShareAccess, 0LL, 0);
}
