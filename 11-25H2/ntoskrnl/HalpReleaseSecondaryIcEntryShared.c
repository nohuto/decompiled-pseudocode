/*
 * XREFs of HalpReleaseSecondaryIcEntryShared @ 0x140443CE0
 * Callers:
 *     HalpDisableSecondaryInterrupt @ 0x140443D28 (HalpDisableSecondaryInterrupt.c)
 *     HalpInterruptRequestSecondaryInterrupt @ 0x140553368 (HalpInterruptRequestSecondaryInterrupt.c)
 *     HalpUnregisterSecondaryIcInterface @ 0x1405534F0 (HalpUnregisterSecondaryIcInterface.c)
 *     HalpEnableSecondaryInterrupt @ 0x1406EF620 (HalpEnableSecondaryInterrupt.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x140A9BADC (HalpQueryPrimaryInterruptInformation.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     HalpInsertSecondarySignalList @ 0x1405531BC (HalpInsertSecondarySignalList.c)
 */

LONG __fastcall HalpReleaseSecondaryIcEntryShared(__int64 a1, __int64 a2)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 112));
  if ( (_BYTE)a2 )
  {
    if ( result == 1 )
    {
      result = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 116), 0, 0);
      if ( result )
      {
        if ( KeGetCurrentIrql() <= 2u )
          return KeSetEvent((PRKEVENT)(a1 + 120), 0, 0);
        else
          return HalpInsertSecondarySignalList(a1, a2, 0LL);
      }
    }
  }
  return result;
}
