/*
 * XREFs of HalpDmaGetMasterAdapterVersion @ 0x140387164
 * Callers:
 *     HalpDmaAllocateScatterPagesFromContiguousPool @ 0x140386D38 (HalpDmaAllocateScatterPagesFromContiguousPool.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x140386FA0 (HalpDmaAllocateScatterPagesFromScatterPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaGetMasterAdapterVersion(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 156);
  result = 2LL;
  if ( v1 != 2 )
  {
    result = 0xFFFFFFFFLL;
    if ( v1 == 3 )
      return 3LL;
  }
  return result;
}
