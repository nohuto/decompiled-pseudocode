/*
 * XREFs of HalpMmIsInsideHalVa @ 0x1405406F0
 * Callers:
 *     ExtEnvFreeMemory @ 0x14055D3A0 (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14055D3E0 (ExtEnvFreePhysicalMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpMmIsInsideHalVa(unsigned __int64 a1, bool *a2)
{
  bool v2; // al

  v2 = 0;
  if ( !HalpOriginalHeapStart || !HalpOriginalHeapEnd )
    return 3221225473LL;
  if ( a1 >= HalpOriginalHeapStart )
    v2 = a1 <= HalpOriginalHeapEnd;
  *a2 = v2;
  return 0LL;
}
