/*
 * XREFs of MiMapCacheExceptionFilter @ 0x140A23174
 * Callers:
 *     MiMakePageAvoidRead @ 0x140253334 (MiMakePageAvoidRead.c)
 *     MmCopyToCachedPage @ 0x14034F0D4 (MmCopyToCachedPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMapCacheExceptionFilter(int *a1, int **a2)
{
  int *v2; // r8
  int v3; // eax

  v2 = *a2;
  v3 = **a2;
  if ( v3 == -1073741818 )
  {
    if ( (unsigned int)v2[6] < 3 )
      goto LABEL_4;
    v3 = v2[12];
  }
  if ( v3 == -1073741819 )
    v3 = -1073741592;
LABEL_4:
  *a1 = v3;
  return 1LL;
}
