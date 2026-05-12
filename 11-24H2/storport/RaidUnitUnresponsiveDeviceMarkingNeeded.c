/*
 * XREFs of RaidUnitUnresponsiveDeviceMarkingNeeded @ 0x1400A14EC
 * Callers:
 *     RaidUnitRequestTimeout @ 0x14002F338 (RaidUnitRequestTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidUnitUnresponsiveDeviceMarkingNeeded(__int64 a1)
{
  char v1; // bl
  int v2; // eax

  v1 = 0;
  if ( *(_BYTE *)(a1 + 3368) )
  {
    if ( (*(_BYTE *)(a1 + 506) & 2) == 0 )
    {
      v2 = *(_DWORD *)(a1 + 3380);
      if ( v2 )
      {
        if ( v2 == -1 )
        {
          return *(_QWORD *)(a1 + 1408) != 0LL;
        }
        else if ( *(_QWORD *)(a1 + 1408) )
        {
          return KeQueryUnbiasedInterruptTime() < *(_QWORD *)(a1 + 1408)
                                                + (unsigned __int64)(unsigned int)(10000 * *(_DWORD *)(a1 + 3380));
        }
      }
    }
  }
  return v1;
}
