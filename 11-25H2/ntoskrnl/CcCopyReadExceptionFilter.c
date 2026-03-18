/*
 * XREFs of CcCopyReadExceptionFilter @ 0x1404B4340
 * Callers:
 *     CcCopyBytesToUserBuffer @ 0x140404FD0 (CcCopyBytesToUserBuffer.c)
 *     CcMapAndCopyInToCache @ 0x1404DDB50 (CcMapAndCopyInToCache.c)
 *     CcCompleteAsyncRead @ 0x1404E018C (CcCompleteAsyncRead.c)
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
