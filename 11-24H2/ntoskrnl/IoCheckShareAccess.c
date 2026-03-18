/*
 * XREFs of IoCheckShareAccess @ 0x1409A2A40
 * Callers:
 *     DifIoCheckShareAccessWrapper @ 0x1406265D0 (DifIoCheckShareAccessWrapper.c)
 * Callees:
 *     IoCheckLinkShareAccess @ 0x1409A2A70 (IoCheckLinkShareAccess.c)
 */

NTSTATUS __stdcall IoCheckShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess,
        BOOLEAN Update)
{
  return IoCheckLinkShareAccess(
           DesiredAccess,
           DesiredShareAccess,
           (_DWORD)FileObject,
           (_DWORD)ShareAccess,
           0LL,
           Update != 0);
}
