/*
 * XREFs of ZwQueryAttributesFile @ 0x1406A6BB0
 * Callers:
 *     BiResolveLocateDevice @ 0x14081243C (BiResolveLocateDevice.c)
 *     CmpOpenHiveFile @ 0x14092FE64 (CmpOpenHiveFile.c)
 *     BiDoesHiveExist @ 0x1409C2478 (BiDoesHiveExist.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryAttributesFile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
