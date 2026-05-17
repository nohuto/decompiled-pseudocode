/*
 * XREFs of LdrpCheckModule @ 0x180071380
 * Callers:
 *     LdrpSendPostSnapNotifications @ 0x1800707A0 (LdrpSendPostSnapNotifications.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     CompatCachepLookupCdb @ 0x180072A0C (CompatCachepLookupCdb.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall LdrpCheckModule(wchar_t *Src)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r14
  char *Heap; // rax
  char *v7; // rsi
  __int64 v8; // rbp
  char v9; // [rsp+28h] [rbp-20h]

  result = CompatCachepLookupCdb(Src);
  if ( (_DWORD)result )
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
    Heap = (char *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 2 * v5);
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
        result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)g_pShimmedModuleList);
      }
      else
      {
        do
          ++v3;
        while ( Src[v3] );
        result = (__int64)memmove(Heap, Src, 2 * v3);
      }
      g_pShimmedModuleList = v7;
      g_pShimmedModuleListLength = v5;
    }
    else
    {
      return LdrpLogInternal(
               (__int64)"minkernel\\ldr\\ldrinit.c",
               3874,
               (__int64)"LdrpCheckModule",
               0,
               "Failed to allocated memory for shimmed module list\n",
               v9);
    }
  }
  return result;
}
