/*
 * XREFs of HalpReleaseSecondaryIcEntryShared @ 0x14047ECEC
 * Callers:
 *     HalpDisableSecondaryInterrupt @ 0x14047EC50 (HalpDisableSecondaryInterrupt.c)
 *     HalpInterruptRequestSecondaryInterrupt @ 0x140555C68 (HalpInterruptRequestSecondaryInterrupt.c)
 *     HalpUnregisterSecondaryIcInterface @ 0x140555DF0 (HalpUnregisterSecondaryIcInterface.c)
 *     HalpEnableSecondaryInterrupt @ 0x1406FB490 (HalpEnableSecondaryInterrupt.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x140AA136C (HalpQueryPrimaryInterruptInformation.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     HalpInsertSecondarySignalList @ 0x140555ABC (HalpInsertSecondarySignalList.c)
 */

LONG __fastcall HalpReleaseSecondaryIcEntryShared(__int64 a1, char a2)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 112));
  if ( a2 )
  {
    if ( result == 1 )
    {
      result = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 116), 0, 0);
      if ( result )
      {
        if ( KeGetCurrentIrql() <= 2u )
          return KeSetEvent((PRKEVENT)(a1 + 120), 0, 0);
        else
          return HalpInsertSecondarySignalList(a1);
      }
    }
  }
  return result;
}
