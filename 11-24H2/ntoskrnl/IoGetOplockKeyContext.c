/*
 * XREFs of IoGetOplockKeyContext @ 0x140593A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

POPLOCK_KEY_ECP_CONTEXT __stdcall IoGetOplockKeyContext(PFILE_OBJECT FileObject)
{
  _QWORD *FileObjectExtension; // rcx
  _OPLOCK_KEY_ECP_CONTEXT *v2; // rdx
  __int64 v3; // rcx

  FileObjectExtension = FileObject->FileObjectExtension;
  v2 = 0LL;
  if ( FileObjectExtension )
  {
    v3 = FileObjectExtension[7];
    if ( v3 )
    {
      if ( (*(_BYTE *)(v3 + 2) & 2) != 0 )
        return (POPLOCK_KEY_ECP_CONTEXT)(v3 + 20);
    }
  }
  return v2;
}
