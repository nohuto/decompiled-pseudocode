/*
 * XREFs of IoCheckShareAccessEx @ 0x140713CC0
 * Callers:
 *     <none>
 * Callees:
 *     IoCheckLinkShareAccess @ 0x1409A2A70 (IoCheckLinkShareAccess.c)
 */

NTSTATUS __stdcall IoCheckShareAccessEx(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess,
        BOOLEAN Update,
        PBOOLEAN WritePermission)
{
  unsigned int v6; // eax

  if ( !WritePermission || (v6 = 0x80000000, *WritePermission) )
    v6 = 0;
  return IoCheckLinkShareAccess(
           DesiredAccess,
           DesiredShareAccess,
           (_DWORD)FileObject,
           (_DWORD)ShareAccess,
           0LL,
           v6 | (Update != 0));
}
