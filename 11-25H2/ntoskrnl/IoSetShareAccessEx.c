/*
 * XREFs of IoSetShareAccessEx @ 0x14099CB10
 * Callers:
 *     <none>
 * Callees:
 *     IoSetLinkShareAccess @ 0x14099DA10 (IoSetLinkShareAccess.c)
 */

void __stdcall IoSetShareAccessEx(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess,
        PBOOLEAN WritePermission)
{
  unsigned int v5; // eax

  if ( !WritePermission || *WritePermission )
    v5 = 0;
  else
    v5 = 0x80000000;
  IoSetLinkShareAccess(DesiredAccess, DesiredShareAccess, (_DWORD)FileObject, (_DWORD)ShareAccess, 0LL, v5);
}
