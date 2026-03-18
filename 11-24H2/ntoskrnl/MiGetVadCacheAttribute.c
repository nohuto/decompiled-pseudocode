/*
 * XREFs of MiGetVadCacheAttribute @ 0x1404A5498
 * Callers:
 *     MiProtectAweRegion @ 0x1404C2558 (MiProtectAweRegion.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140682A70 (MiReferenceIncomingPhysicalPages.c)
 *     MiProcessVaContiguityInformation @ 0x14068D0DC (MiProcessVaContiguityInformation.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14069197C (MiAllocateLargeProcessPagesFromCache.c)
 *     MmRotatePhysicalView @ 0x140A2E770 (MmRotatePhysicalView.c)
 *     MiRotateToFrameBuffer @ 0x140A2E9A4 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A2ECC0 (MiRotateToFrameBufferNoCopy.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A64CA8 (MiReplaceRotateWithDemandZero.c)
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
