/*
 * XREFs of ZwLoadKey2 @ 0x1406A95D0
 * Callers:
 *     BiLoadHive @ 0x1409A87E0 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKey2(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
