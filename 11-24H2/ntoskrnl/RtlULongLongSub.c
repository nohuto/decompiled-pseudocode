/*
 * XREFs of RtlULongLongSub @ 0x140473334
 * Callers:
 *     KiAdjustTimer2DueTimes @ 0x140449E60 (KiAdjustTimer2DueTimes.c)
 *     IopAddCodeRegion @ 0x140590288 (IopAddCodeRegion.c)
 *     IopFillTriageDumpDataBlocks @ 0x1405914B8 (IopFillTriageDumpDataBlocks.c)
 *     AslpFileGetCrcChecksum @ 0x14080D98C (AslpFileGetCrcChecksum.c)
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
