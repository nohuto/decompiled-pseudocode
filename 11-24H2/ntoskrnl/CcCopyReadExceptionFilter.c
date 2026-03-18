/*
 * XREFs of CcCopyReadExceptionFilter @ 0x1404B3C44
 * Callers:
 *     CcCopyBytesToUserBuffer @ 0x14040C970 (CcCopyBytesToUserBuffer.c)
 *     CcMapAndCopyInToCache @ 0x1404DD240 (CcMapAndCopyInToCache.c)
 *     CcCompleteAsyncRead @ 0x1404DF87C (CcCompleteAsyncRead.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcCopyReadExceptionFilter(int **a1, _DWORD *a2)
{
  int v2; // r8d

  v2 = **a1;
  *a2 = v2;
  if ( v2 == -1073741818 && (unsigned int)(*a1)[6] >= 3 )
    *a2 = (*a1)[12];
  return 1LL;
}
