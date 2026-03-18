/*
 * XREFs of HalpInterruptStartBlockedProcessors @ 0x140554BD4
 * Callers:
 *     HalStartNextProcessor @ 0x140543990 (HalStartNextProcessor.c)
 *     HalpProcInitSystem @ 0x140B3D1C0 (HalpProcInitSystem.c)
 *     HalpInterruptReinitialize @ 0x140B5AD18 (HalpInterruptReinitialize.c)
 * Callees:
 *     HalpGetProcessorStateByNtIndex @ 0x1402016B8 (HalpGetProcessorStateByNtIndex.c)
 *     HalpBlkStartBlockedProcessor @ 0x140B409C0 (HalpBlkStartBlockedProcessor.c)
 */

__int64 __fastcall HalpInterruptStartBlockedProcessors(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v2; // edi
  int i; // esi
  ULONG_PTR v4; // rbx

  result = HalpGetProcessorStateByNtIndex(a1);
  v2 = 0;
  for ( i = *(_DWORD *)(result + 8); v2 < (unsigned int)HalpInterruptProcessorCount; ++v2 )
  {
    v4 = HalpInterruptProcessorState + ((unsigned __int64)v2 << 6);
    if ( *(_BYTE *)(v4 + 56) && *(_DWORD *)(v4 + 60) == i )
    {
      if ( HalpInterruptStartHyperthreadSiblings )
        result = HalpBlkStartBlockedProcessor(v2, *(unsigned int *)(v4 + 8));
      *(_WORD *)(v4 + 12) = 257;
    }
  }
  return result;
}
