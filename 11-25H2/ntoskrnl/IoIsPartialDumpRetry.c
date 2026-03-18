/*
 * XREFs of IoIsPartialDumpRetry @ 0x14058E370
 * Callers:
 *     HvlAddPagesCallbackRoutine @ 0x140586640 (HvlAddPagesCallbackRoutine.c)
 *     HvlAddSecureHvPagesCallbackRoutine @ 0x140586760 (HvlAddSecureHvPagesCallbackRoutine.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x1405867B8 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlAddSecureSkPagesCallbackRoutine @ 0x1405869E0 (HvlAddSecureSkPagesCallbackRoutine.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1405AEFE0 (KeValidateBugCheckCallbackRecord.c)
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
