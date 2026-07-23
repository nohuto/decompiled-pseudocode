/*
 * XREFs of ZwUnloadKey @ 0x1406AAEF0
 * Callers:
 *     DifZwUnloadKeyWrapper @ 0x140648020 (DifZwUnloadKeyWrapper.c)
 *     VrpUnloadDifferencingHive @ 0x14092CC8C (VrpUnloadDifferencingHive.c)
 *     BiLoadHive @ 0x1409A87E0 (BiLoadHive.c)
 *     BiUnloadHiveByName @ 0x140A81BF0 (BiUnloadHiveByName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKey(POBJECT_ATTRIBUTES TargetKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
