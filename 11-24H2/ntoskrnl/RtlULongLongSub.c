/*
 * XREFs of RtlULongLongSub @ 0x140476D94
 * Callers:
 *     KiAdjustTimer2DueTimes @ 0x1404551A0 (KiAdjustTimer2DueTimes.c)
 *     IopAddCodeRegion @ 0x140593264 (IopAddCodeRegion.c)
 *     IopFillTriageDumpDataBlocks @ 0x140594498 (IopFillTriageDumpDataBlocks.c)
 *     AslpFileGetCrcChecksum @ 0x14080D24C (AslpFileGetCrcChecksum.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongSub(ULONGLONG ullMinuend, ULONGLONG ullSubtrahend, ULONGLONG *pullResult)
{
  ULONGLONG v3; // r9

  if ( ullMinuend < ullSubtrahend )
    v3 = -1LL;
  else
    v3 = ullMinuend - ullSubtrahend;
  *pullResult = v3;
  return ullMinuend < ullSubtrahend ? 0xC0000095 : 0;
}
