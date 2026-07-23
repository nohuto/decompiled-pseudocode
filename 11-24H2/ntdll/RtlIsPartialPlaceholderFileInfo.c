/*
 * XREFs of RtlIsPartialPlaceholderFileInfo @ 0x180144EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlIsPartialPlaceholderFileInfo(
        PVOID InfoBuffer,
        FILE_INFORMATION_CLASS InfoClass,
        PBOOLEAN IsPartialPlaceholder)
{
  bool v3; // zf
  int v4; // eax
  NTSTATUS result; // eax

  if ( InfoClass <= FileStatInformation )
  {
    if ( InfoClass == FileStatInformation )
      goto LABEL_22;
    if ( InfoClass != FileFullDirectoryInformation && InfoClass != FileBothDirectoryInformation )
    {
      if ( InfoClass == FileAttributeTagInformation )
      {
        v4 = *(_DWORD *)InfoBuffer;
LABEL_23:
        *IsPartialPlaceholder = (v4 & 0x440000) != 0;
        return 0;
      }
      if ( InfoClass != FileIdBothDirectoryInformation && InfoClass != FileIdFullDirectoryInformation )
      {
        if ( InfoClass != FileIdExtdDirectoryInformation )
        {
          v3 = InfoClass == FileIdExtdBothDirectoryInformation;
          goto LABEL_18;
        }
LABEL_22:
        v4 = *((_DWORD *)InfoBuffer + 14);
        goto LABEL_23;
      }
    }
    v4 = *((_DWORD *)InfoBuffer + 14);
    goto LABEL_23;
  }
  if ( InfoClass == FileStatLxInformation
    || InfoClass == FileStatBasicInformation
    || InfoClass == FileId64ExtdDirectoryInformation
    || InfoClass == FileId64ExtdBothDirectoryInformation
    || InfoClass == FileIdAllExtdDirectoryInformation )
  {
    goto LABEL_22;
  }
  v3 = InfoClass == FileIdAllExtdBothDirectoryInformation;
LABEL_18:
  if ( v3 )
    goto LABEL_22;
  result = -1073741637;
  if ( InfoClass >= FileMaximumInformation )
    return -1073741821;
  return result;
}
