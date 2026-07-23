/*
 * XREFs of PpmIdleSelectCoordinatedProcessorDependency @ 0x1405CC318
 * Callers:
 *     PpmIdleCheckCoordinatedDependencies @ 0x1405CB5E8 (PpmIdleCheckCoordinatedDependencies.c)
 * Callees:
 *     PpmIdleCheckProcessorStateEligibility @ 0x1405CBD84 (PpmIdleCheckProcessorStateEligibility.c)
 */

__int64 __fastcall PpmIdleSelectCoordinatedProcessorDependency(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  __int64 v10; // rbx
  __int64 v11; // r10
  __int64 v12; // rsi

  v10 = 0LL;
  v11 = 2147483649LL;
  while ( (unsigned int)v10 < *(_DWORD *)a5 )
  {
    v12 = *(_QWORD *)(a5 + 8);
    if ( *(_BYTE *)(v12 + 24 * v10 + 1) )
    {
      v11 = PpmIdleCheckProcessorStateEligibility(
              a1,
              a2,
              a3,
              a4,
              *(_DWORD *)(v12 + 24 * v10 + 4),
              PpmIdleCoordinatedMode == 0);
      if ( !v11 )
      {
        *a6 = *(_DWORD *)(v12 + 24 * v10 + 4);
        return v11;
      }
    }
    v10 = (unsigned int)(v10 + 1);
  }
  return v11;
}
