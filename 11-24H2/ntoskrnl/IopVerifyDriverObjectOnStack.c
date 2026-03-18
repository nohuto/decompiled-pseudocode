/*
 * XREFs of IopVerifyDriverObjectOnStack @ 0x14059670C
 * Callers:
 *     IopGetDriverPathInformation @ 0x140596398 (IopGetDriverPathInformation.c)
 * Callees:
 *     IopGetDeviceAttachmentBase @ 0x1402D4B38 (IopGetDeviceAttachmentBase.c)
 */

char __fastcall IopVerifyDriverObjectOnStack(__int64 a1)
{
  __int64 i; // rax
  __int64 v2; // r8

  for ( i = IopGetDeviceAttachmentBase(a1); i; i = *(_QWORD *)(i + 24) )
  {
    if ( *(_QWORD *)(i + 8) == v2 )
    {
      LOBYTE(i) = 1;
      return i;
    }
  }
  return i;
}
