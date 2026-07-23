/*
 * XREFs of AslpFileLargeMapDelete @ 0x140810DB8
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x140810600 (AslpFileLargeEnsureLargeFileMapping.c)
 *     AslpFileLargeMapCreate @ 0x140810B50 (AslpFileLargeMapCreate.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     AslpFilePartialViewFree @ 0x140810E10 (AslpFilePartialViewFree.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
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
