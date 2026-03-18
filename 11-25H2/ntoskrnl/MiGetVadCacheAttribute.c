/*
 * XREFs of MiGetVadCacheAttribute @ 0x1404A60A4
 * Callers:
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140677250 (MiReferenceIncomingPhysicalPages.c)
 *     MiProcessVaContiguityInformation @ 0x14068184C (MiProcessVaContiguityInformation.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14068651C (MiAllocateLargeProcessPagesFromCache.c)
 *     MmRotatePhysicalView @ 0x140A28CF0 (MmRotatePhysicalView.c)
 *     MiRotateToFrameBuffer @ 0x140A28F1C (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A29238 (MiRotateToFrameBufferNoCopy.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A62AD8 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadCacheAttribute(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edx

  result = 1LL;
  v2 = (*(_DWORD *)(a1 + 48) >> 7) & 0x1F;
  if ( v2 >> 3 == 3 )
  {
    if ( (v2 & 7) != 0 )
      return 2LL;
  }
  else if ( v2 >> 3 == 1 )
  {
    return 0LL;
  }
  return result;
}
