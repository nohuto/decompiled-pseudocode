/*
 * XREFs of PopPowerLimitSxTransition @ 0x1405CB134
 * Callers:
 *     PopThermalSxEntry @ 0x1404DA77C (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x1405CF378 (PopThermalSxExit.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopUpdatePowerLimitTimeTracking @ 0x1405CB23C (PopUpdatePowerLimitTimeTracking.c)
 *     PopTracePowerLimitHistogram @ 0x1405D18AC (PopTracePowerLimitHistogram.c)
 */

__int64 __fastcall PopPowerLimitSxTransition(char a1)
{
  __int64 i; // rdi
  __int64 *j; // rbx
  unsigned int k; // esi
  unsigned int v5; // edx
  __int64 m; // r8
  __int64 v7; // rax

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerLimitExtensionLock);
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
  return PopReleaseRwLock(&PopPowerLimitExtensionLock);
}
