/*
 * XREFs of ZwLoadKey @ 0x1406A95B0
 * Callers:
 *     DifZwLoadKeyWrapper @ 0x14063F150 (DifZwLoadKeyWrapper.c)
 *     BiLoadHive @ 0x1409A87E0 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKey(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
