/*
 * XREFs of MiAllocatePrcb @ 0x14068FE5C
 * Callers:
 *     MmInitializeProcessor @ 0x140B64108 (MmInitializeProcessor.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1402775A0 (ExAllocatePoolMm.c)
 */

__int64 __fastcall MiAllocatePrcb(int a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  _DWORD *v3; // rcx

  result = ExAllocatePoolMm(0x40uLL, 0xA270uLL, 1833986381, a1 | 0x80000000);
  if ( result )
  {
    v2 = 2LL;
    v3 = (_DWORD *)(result + 8660);
    *(_DWORD *)(result + 352) = 2;
    do
    {
      *v3 = 512;
      v3 += 5150;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
