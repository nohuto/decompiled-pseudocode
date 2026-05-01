/*
 * XREFs of AslpFileLargeMapDelete @ 0x1800A7588
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1800A6E20 (AslpFileLargeEnsureLargeFileMapping.c)
 *     AslpFileLargeMapCreate @ 0x1800A7360 (AslpFileLargeMapCreate.c)
 * Callees:
 *     AslFree @ 0x18009D6FC (AslFree.c)
 *     AslpFilePartialViewFree @ 0x1800A75F4 (AslpFilePartialViewFree.c)
 */

BOOLEAN __fastcall AslpFileLargeMapDelete(_QWORD **a1)
{
  _QWORD *v1; // rbx
  void *v3; // rcx
  BOOLEAN result; // al

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      AslpFilePartialViewFree(v1 + 5);
      AslpFilePartialViewFree(v1 + 2);
      v3 = (void *)v1[1];
      if ( v3 )
        ZwClose(v3);
      result = AslFree(NtCurrentPeb()->ProcessHeap, v1);
      *a1 = 0LL;
    }
  }
  return result;
}
