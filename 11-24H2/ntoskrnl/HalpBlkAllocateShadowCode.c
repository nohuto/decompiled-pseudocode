/*
 * XREFs of HalpBlkAllocateShadowCode @ 0x140C14DC4
 * Callers:
 *     HalpBlkInitializeVirtualAddressSpace @ 0x140C14FAC (HalpBlkInitializeVirtualAddressSpace.c)
 * Callees:
 *     HalpBlkAddVirtualMapping @ 0x140C14AF0 (HalpBlkAddVirtualMapping.c)
 *     HalpBlkAllocateShadowCodePages @ 0x140C14E4C (HalpBlkAllocateShadowCodePages.c)
 */

__int64 HalpBlkAllocateShadowCode()
{
  __int64 result; // rax
  __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  result = HalpBlkAllocateShadowCodePages(HalpLMStub, HalpLMStubEnd - (char *)HalpLMStub, &v1);
  if ( (int)result >= 0 )
  {
    result = HalpBlkAddVirtualMapping(HalpBlkTiledMemoryMapPa, v1, (unsigned __int64)HalpLMStub, 1, 32);
    if ( (int)result >= 0 )
      return HalpBlkAllocateShadowCodePages(
               *(_QWORD *)(*(_QWORD *)(HalpMmLoaderBlock + 240) + 3504LL),
               *(_QWORD *)(*(_QWORD *)(HalpMmLoaderBlock + 240) + 3512LL),
               0LL);
  }
  return result;
}
