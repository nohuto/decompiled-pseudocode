/*
 * XREFs of PopDirectedDripsUmDirectedFxSetMode @ 0x140764948
 * Callers:
 *     PopDirectedDripsUmPowerInformationInternal @ 0x1406F8004 (PopDirectedDripsUmPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopDirectedDripsUmDirectedFxSetMode(unsigned int a1, __int64 a2)
{
  unsigned int v3; // ebx

  if ( a1 >= 0xC )
  {
    PopAcquireRwLockExclusive(&PopDirectedDripsUmLock);
    v3 = 0;
    PopDirectedDripsUmTestPermissive = *(_BYTE *)(a2 + 8) != 0;
    PopReleaseRwLock((signed __int64 *)&PopDirectedDripsUmLock);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
