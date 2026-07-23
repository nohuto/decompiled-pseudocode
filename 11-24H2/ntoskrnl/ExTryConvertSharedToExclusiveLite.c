/*
 * XREFs of ExTryConvertSharedToExclusiveLite @ 0x14065553C
 * Callers:
 *     CmpTryConvertRegistryExclusive @ 0x1407D8D3C (CmpTryConvertRegistryExclusive.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x140655690 (ExpTryConvertSharedToExclusiveLite.c)
 */

__int64 ExTryConvertSharedToExclusiveLite()
{
  if ( (CmpRegistryLock->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)CmpRegistryLock, 0LL, 0LL);
  return ExpTryConvertSharedToExclusiveLite();
}
