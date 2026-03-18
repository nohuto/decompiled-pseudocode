/*
 * XREFs of PopCoolingSxTransition @ 0x140427860
 * Callers:
 *     PopThermalSxEntry @ 0x1404D972C (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x1405D3D88 (PopThermalSxExit.c)
 * Callees:
 *     PopTraceThermalRequestPassiveHistogram @ 0x140330D68 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1404AB004 (PopTraceThermalRequestActiveActivity.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140A8FAF8 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140AA26A4 (PopThermalUpdateActiveTimeTracking.c)
 */

__int64 __fastcall PopCoolingSxTransition(char a1)
{
  __int64 i; // rdi
  __int64 v3; // rdx
  __int64 j; // rbx
  __int64 v6; // rax

  PopAcquireRwLockExclusive(&PopCoolingExtensionLock);
  for ( i = PopCoolingExtensionList; (__int64 *)i != &PopCoolingExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) )
    {
      PopAcquireRwLockExclusive(i + 32);
      for ( j = *(_QWORD *)(i + 16); j != i + 16; j = *(_QWORD *)j )
      {
        if ( *(_BYTE *)(j + 18) )
        {
          if ( a1 )
          {
            if ( *(_QWORD *)(i + 136) )
            {
              LOBYTE(v3) = *(_BYTE *)(j + 16);
              PopThermalUpdatePassiveTimeTracking(j + 40, v3);
              PopTraceThermalRequestPassiveHistogram(j);
            }
            if ( *(_QWORD *)(i + 128) )
            {
              LOBYTE(v3) = *(_BYTE *)(j + 17) == 0;
              PopThermalUpdateActiveTimeTracking(j + 40, v3);
              PopTraceThermalRequestActiveActivity(j);
            }
            *(_BYTE *)(j + 40) = 1;
          }
          else
          {
            v6 = MEMORY[0xFFFFF78000000008];
            *(_QWORD *)(j + 48) = MEMORY[0xFFFFF78000000008];
            *(_QWORD *)(j + 56) = v6;
            *(_BYTE *)(j + 40) = 0;
          }
        }
      }
      PopReleaseRwLock((signed __int64 *)(i + 32));
    }
  }
  return PopReleaseRwLock((signed __int64 *)&PopCoolingExtensionLock);
}
