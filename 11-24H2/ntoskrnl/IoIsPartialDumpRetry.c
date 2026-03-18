/*
 * XREFs of IoIsPartialDumpRetry @ 0x140591BA0
 * Callers:
 *     HvlAddPagesCallbackRoutine @ 0x140589CB0 (HvlAddPagesCallbackRoutine.c)
 *     HvlAddSecureHvPagesCallbackRoutine @ 0x140589DD0 (HvlAddSecureHvPagesCallbackRoutine.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x140589E28 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlAddSecureSkPagesCallbackRoutine @ 0x14058A050 (HvlAddSecureSkPagesCallbackRoutine.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1405B2970 (KeValidateBugCheckCallbackRecord.c)
 * Callees:
 *     <none>
 */

char IoIsPartialDumpRetry()
{
  char result; // al

  result = CrashdmpDumpBlock;
  if ( CrashdmpDumpBlock )
    return (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 8) != 0;
  return result;
}
