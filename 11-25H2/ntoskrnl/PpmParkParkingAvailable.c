/*
 * XREFs of PpmParkParkingAvailable @ 0x140A4D7C8
 * Callers:
 *     PpmParkRegisterParking @ 0x1405D55E0 (PpmParkRegisterParking.c)
 *     PpmCheckReInit @ 0x140A4D648 (PpmCheckReInit.c)
 *     PpmParkApplyForcedMask @ 0x140AB1350 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x140AB5804 (PpmParkClearForcedMask.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 */

unsigned __int8 PpmParkParkingAvailable()
{
  unsigned __int8 result; // al
  unsigned __int8 v1; // bl
  unsigned int i; // esi
  __int64 v3; // rdi
  unsigned int j; // ecx
  __int64 v5; // rdx
  unsigned __int8 v6; // al

  if ( PpmParkNumNodes == 1 && KeGetCurrentPrcb()->LogicalProcessorsPerCore == *(unsigned __int8 *)(PpmParkNodes + 10) )
    return 0;
  v1 = 0;
  for ( i = 0; i < PpmParkNumNodes; ++i )
  {
    v3 = PpmParkNodes + 208LL * i;
    if ( *(_BYTE *)(v3 + 112)
      || *(_BYTE *)(v3 + 114)
      || *(_QWORD *)(v3 + 24)
      || !(unsigned int)KeIsEmptyAffinityEx(&PpmPerfCoreParkingMask.Count) )
    {
      v1 = 1;
      break;
    }
    for ( j = 0; j < *(unsigned __int8 *)(v3 + 11); ++j )
    {
      v5 = *(_QWORD *)(v3 + 200) + 104LL * j;
      if ( *(_BYTE *)v5 )
      {
        v6 = *(_BYTE *)(v5 + 2);
        if ( *(_BYTE *)(v5 + 1) < v6 || v6 < *(_BYTE *)v5 )
        {
          v1 = 1;
          break;
        }
        if ( *(_QWORD *)(v5 + 24) )
          v1 = 1;
      }
    }
  }
  result = v1;
  PpmIsParkingEnabled = v1;
  return result;
}
