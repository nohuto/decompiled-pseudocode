/*
 * XREFs of KiReleaseSecondarySignalListLock @ 0x1405B9D68
 * Callers:
 *     KeDispatchSecondaryInterrupt @ 0x14046F5A0 (KeDispatchSecondaryInterrupt.c)
 *     KiProcessSecondarySignalList @ 0x1405B9C90 (KiProcessSecondarySignalList.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiReleaseSecondarySignalListLock(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax

  v1 = a1;
  result = KxReleaseSpinLock((volatile signed __int64 *)&KiSecondarySignalListLock);
  if ( KiIrqlFlags )
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v1);
  __writecr8(v1);
  return result;
}
