/*
 * XREFs of RtlpGetReservedBlockSize @ 0x180001B70
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x18000129C (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpGetReservedBlockSize(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 38) & 3) != 0 )
    return (((16 * (*(unsigned __int16 *)(a1 + 36) + 256LL)) & 0xFFFFFFFFFFFFF000uLL) + 4096) >> 4;
  else
    return *(unsigned __int16 *)(a1 + 36);
}
