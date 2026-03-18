/*
 * XREFs of ZwFilterBootOption @ 0x1406A8190
 * Callers:
 *     IopInitializeInMemoryDumpData @ 0x14059488C (IopInitializeInMemoryDumpData.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFilterBootOption(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
