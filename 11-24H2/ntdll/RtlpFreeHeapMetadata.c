/*
 * XREFs of RtlpFreeHeapMetadata @ 0x18004EBD8
 * Callers:
 *     LdrShutdownThread @ 0x1800045E0 (LdrShutdownThread.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x18004EF28 (RtlpHpMetadataFree.c)
 */

__int64 __fastcall RtlpFreeHeapMetadata(__int64 a1, unsigned __int64 a2)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    return RtlFreeHeap(a1, 0, a2);
  v3 = *(_OWORD *)a1;
  return RtlpHpMetadataFree(a2, &v3);
}
