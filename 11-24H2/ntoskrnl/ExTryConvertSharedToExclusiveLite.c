/*
 * XREFs of ExTryConvertSharedToExclusiveLite @ 0x140656E3C
 * Callers:
 *     CmpTryConvertRegistryExclusive @ 0x1407D87EC (CmpTryConvertRegistryExclusive.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x140656F90 (ExpTryConvertSharedToExclusiveLite.c)
 */

__int64 ExTryConvertSharedToExclusiveLite()
{
  if ( (CmpRegistryLock->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)CmpRegistryLock, 0LL, 0LL);
  return ExpTryConvertSharedToExclusiveLite();
}
