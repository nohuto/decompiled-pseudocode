/*
 * XREFs of NvmeCopyCachedLogPage @ 0x14012AC98
 * Callers:
 *     NvmeQueryProtocolInfoLogPageData @ 0x14012C13C (NvmeQueryProtocolInfoLogPageData.c)
 * Callees:
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall NvmeCopyCachedLogPage(__int64 a1, const void *a2, unsigned int a3)
{
  if ( !a2 )
    return 3221225485LL;
  memmove((void *)(a1 + *(unsigned int *)(a1 + 16)), a2, a3);
  return 0LL;
}
