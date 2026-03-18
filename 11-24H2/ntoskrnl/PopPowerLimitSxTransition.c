/*
 * XREFs of PopPowerLimitSxTransition @ 0x1405CF7E4
 * Callers:
 *     PopThermalSxEntry @ 0x1404D972C (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x1405D3D88 (PopThermalSxExit.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopUpdatePowerLimitTimeTracking @ 0x1405CF8EC (PopUpdatePowerLimitTimeTracking.c)
 *     PopTracePowerLimitHistogram @ 0x1405D620C (PopTracePowerLimitHistogram.c)
 */

__int64 __fastcall PopPowerLimitSxTransition(char a1)
{
  __int64 i; // rdi
  __int64 *j; // rbx
  unsigned int k; // esi
  unsigned int v5; // edx
  __int64 m; // r8
  __int64 v7; // rax

  PopAcquireRwLockExclusive(&PopPowerLimitExtensionLock);
  for ( i = PopPowerLimitExtensionList; (__int64 *)i != &PopPowerLimitExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 48) )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)(i + 32));
      for ( j = *(__int64 **)(i + 16); j != (__int64 *)(i + 16); j = (__int64 *)*j )
      {
        if ( *((_BYTE *)j + 16) )
        {
          if ( a1 )
          {
            for ( k = 0; k < *((_DWORD *)j + 8); ++k )
              PopUpdatePowerLimitTimeTracking(j, k);
            PopTracePowerLimitHistogram(j);
            *((_BYTE *)j + 48) = 0;
          }
          else
          {
            v5 = 0;
            for ( m = MEMORY[0xFFFFF78000000008]; v5 < *((_DWORD *)j + 8); *(_QWORD *)(104 * v7 + j[7]) = m )
              v7 = v5++;
            *((_BYTE *)j + 48) = 1;
          }
        }
      }
      PopReleaseRwLock((signed __int64 *)(i + 32));
    }
  }
  return PopReleaseRwLock((signed __int64 *)&PopPowerLimitExtensionLock);
}
