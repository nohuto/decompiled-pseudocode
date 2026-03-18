/*
 * XREFs of AslpFileLargeMapDelete @ 0x140810678
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x14080FEC0 (AslpFileLargeEnsureLargeFileMapping.c)
 *     AslpFileLargeMapCreate @ 0x140810410 (AslpFileLargeMapCreate.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     AslpFilePartialViewFree @ 0x1408106D0 (AslpFilePartialViewFree.c)
 *     AslFree @ 0x14095CD24 (AslFree.c)
 */

__int64 __fastcall AslpFileLargeMapDelete(__int64 *a1)
{
  __int64 v1; // rbx
  void *v3; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      AslpFilePartialViewFree(v1 + 48);
      AslpFilePartialViewFree(v1 + 16);
      v3 = *(void **)(v1 + 8);
      if ( v3 )
        ZwClose(v3);
      result = AslFree(v3);
      *a1 = 0LL;
    }
  }
  return result;
}
