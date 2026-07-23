/*
 * XREFs of HalpDmaIndexToTranslationEntry @ 0x14048541C
 * Callers:
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x1404D2668 (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x140539C14 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x140550370 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaIndexToTranslationEntry(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 *v3; // r9
  unsigned int v4; // eax

  v3 = *(__int64 **)(a1 + 48);
  while ( 1 )
  {
    if ( !v3 )
      return 0LL;
    v4 = *((_DWORD *)v3 + 2);
    if ( a2 < v4 )
      break;
    v3 = (__int64 *)*v3;
    a2 -= v4;
  }
  if ( a3 )
    *a3 = v3;
  return v3[2] + 72LL * a2;
}
