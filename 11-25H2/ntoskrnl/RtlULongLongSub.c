/*
 * XREFs of RtlULongLongSub @ 0x140477898
 * Callers:
 *     KiAdjustTimer2DueTimes @ 0x140454A68 (KiAdjustTimer2DueTimes.c)
 *     IopAddCodeRegion @ 0x14058FA6C (IopAddCodeRegion.c)
 *     IopFillTriageDumpDataBlocks @ 0x140590C98 (IopFillTriageDumpDataBlocks.c)
 *     AslpFileGetCrcChecksum @ 0x1407FD6DC (AslpFileGetCrcChecksum.c)
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
