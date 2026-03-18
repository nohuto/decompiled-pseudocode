/*
 * XREFs of ZwUnloadKey @ 0x1406A9F50
 * Callers:
 *     DifZwUnloadKeyWrapper @ 0x140649A60 (DifZwUnloadKeyWrapper.c)
 *     BiUnloadHiveByName @ 0x14085EE48 (BiUnloadHiveByName.c)
 *     VrpUnloadDifferencingHive @ 0x14092AB4C (VrpUnloadDifferencingHive.c)
 *     BiLoadHive @ 0x1409C2190 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
