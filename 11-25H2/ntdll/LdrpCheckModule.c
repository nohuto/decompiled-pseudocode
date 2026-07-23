/*
 * XREFs of LdrpCheckModule @ 0x180071F80
 * Callers:
 *     LdrpSendPostSnapNotifications @ 0x1800713A0 (LdrpSendPostSnapNotifications.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     CompatCachepLookupCdb @ 0x1800712A4 (CompatCachepLookupCdb.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

unsigned int __fastcall LdrpCheckModule(wchar_t *Src)
{
  unsigned int result; // eax
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r14
  char *Heap; // rax
  char *v7; // rsi
  __int64 v8; // rbp

  result = CompatCachepLookupCdb(Src, 16);
  if ( result )
  {
    v3 = -1LL;
    v4 = -1LL;
    do
      ++v4;
    while ( Src[v4] );
    if ( g_pShimmedModuleList )
      v5 = v4 + g_pShimmedModuleListLength + 1;
    else
      v5 = v4 + 2;
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * v5);
    v7 = Heap;
    if ( Heap )
    {
      if ( g_pShimmedModuleList )
      {
        v8 = 2 * g_pShimmedModuleListLength;
        memmove(Heap, g_pShimmedModuleList, 2 * g_pShimmedModuleListLength);
        do
          ++v3;
        while ( Src[v3] );
        memmove(&v7[v8 + 2], Src, 2 * v3);
        result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, g_pShimmedModuleList);
      }
      else
      {
        do
          ++v3;
        while ( Src[v3] );
        result = (unsigned int)memmove(Heap, Src, 2 * v3);
      }
      g_pShimmedModuleList = v7;
      g_pShimmedModuleListLength = v5;
    }
    else
    {
      return LdrpLogInternal(
               "minkernel\\ldr\\ldrinit.c",
               3876LL,
               "LdrpCheckModule",
               0LL,
               "Failed to allocated memory for shimmed module list\n");
    }
  }
  return result;
}
