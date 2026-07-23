/*
 * XREFs of PopHeteroCapabilityDeepCopy @ 0x140A72C3C
 * Callers:
 *     PopIsSimulatedArchitecturalHeteroPresent @ 0x140AB519C (PopIsSimulatedArchitecturalHeteroPresent.c)
 *     PopInitializeHeteroProcessors @ 0x140AC57E0 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall PopHeteroCapabilityDeepCopy(__int64 a1, int *a2)
{
  unsigned int v2; // esi
  unsigned int v5; // r14d
  unsigned int v6; // ebp

  v2 = 0;
  if ( a2 )
  {
    if ( a1 )
    {
      if ( a2 != (int *)a1 )
      {
        v5 = *a2;
        if ( *a2 == *(_DWORD *)a1 )
        {
          v6 = a2[1];
          if ( v6 == *(_DWORD *)(a1 + 4) )
          {
            memmove(*(void **)(a1 + 8), *((const void **)a2 + 1), v5);
            memmove(*(void **)(a1 + 16), *((const void **)a2 + 2), 2LL * v6);
            v2 = v5 + v6 * (4 * v5 + 2);
            memmove((void *)(a1 + 24), a2 + 6, 4LL * v5 * v6);
          }
        }
      }
    }
  }
  return v2;
}
