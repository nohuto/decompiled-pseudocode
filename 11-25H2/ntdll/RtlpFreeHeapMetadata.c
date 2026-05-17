/*
 * XREFs of RtlpFreeHeapMetadata @ 0x18000A864
 * Callers:
 *     LdrShutdownThread @ 0x180009100 (LdrShutdownThread.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x18000AB68 (RtlpHpMetadataFree.c)
 */

__int64 __fastcall RtlpFreeHeapMetadata(__int128 *a1, __int64 a2)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)a1 + 4) != -571548178 )
    return RtlFreeHeap(a1, 0LL, a2);
  v3 = *a1;
  return RtlpHpMetadataFree(a2, &v3);
}
