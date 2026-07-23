/*
 * XREFs of HalpInterruptGetIdentifiers @ 0x1404B5B80
 * Callers:
 *     HalpConnectThermalInterrupt @ 0x140553810 (HalpConnectThermalInterrupt.c)
 *     HalpNumaQueryProcessorNode @ 0x140555B90 (HalpNumaQueryProcessorNode.c)
 *     HalpNumaSwapP0NodeToFront @ 0x140556280 (HalpNumaSwapP0NodeToFront.c)
 *     HalpMcLoadMicrocodeWorker @ 0x140557660 (HalpMcLoadMicrocodeWorker.c)
 *     Amd64InitializeCacheStatusEnhanced @ 0x140568914 (Amd64InitializeCacheStatusEnhanced.c)
 *     Amd64InitializeCacheStatusOriginal @ 0x140568B50 (Amd64InitializeCacheStatusOriginal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptGetIdentifiers(int a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v4; // eax
  int v5; // r10d
  ULONG_PTR v6; // r8
  int v7; // eax
  unsigned int i; // eax
  ULONG_PTR v9; // rcx

  v4 = 0;
  v5 = a1;
  while ( 1 )
  {
    if ( v4 >= (unsigned int)HalpInterruptProcessorCount )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= (unsigned int)HalpInterruptProcessorCount )
          return 3221226021LL;
        v9 = HalpInterruptProcessorState + ((unsigned __int64)i << 6);
        if ( !*(_BYTE *)(v9 + 13) && !*(_BYTE *)(v9 + 12) && !*(_BYTE *)(v9 + 56) )
        {
          if ( !v5 )
          {
            if ( a2 )
              *a2 = *(_DWORD *)v9;
            if ( a3 )
            {
              v7 = *(_DWORD *)(v9 + 4);
              goto LABEL_23;
            }
            return 0LL;
          }
          --v5;
        }
      }
    }
    v6 = HalpInterruptProcessorState + ((unsigned __int64)v4 << 6);
    if ( !*(_BYTE *)(v6 + 56) )
    {
      if ( *(_BYTE *)(v6 + 13) )
      {
        --v5;
        if ( *(_DWORD *)(v6 + 20) == a1 )
          break;
      }
    }
    ++v4;
  }
  if ( a2 )
    *a2 = *(_DWORD *)v6;
  if ( a3 )
  {
    v7 = *(_DWORD *)(v6 + 4);
LABEL_23:
    *a3 = v7;
  }
  return 0LL;
}
