/*
 * XREFs of RtlULongSub @ 0x140491DA8
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x14057C3C0 (DbgkpTriageDumpSnapData.c)
 *     KiDeduplicateTriageDumpDataArrays @ 0x1405B0630 (KiDeduplicateTriageDumpDataArrays.c)
 *     BcpDisplayCriticalStringCentered @ 0x140699EB0 (BcpDisplayCriticalStringCentered.c)
 *     _RegRtlQueryKeyPathName @ 0x1408218F8 (_RegRtlQueryKeyPathName.c)
 *     PiForEachDriverQueryRoutine @ 0x1409BB7E0 (PiForEachDriverQueryRoutine.c)
 *     BiGetFilePathFromEfiPath @ 0x140A72ACC (BiGetFilePathFromEfiPath.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongSub(ULONG ulMinuend, ULONG ulSubtrahend, ULONG *pulResult)
{
  ULONG v3; // r9d

  if ( ulMinuend < ulSubtrahend )
    v3 = -1;
  else
    v3 = ulMinuend - ulSubtrahend;
  *pulResult = v3;
  return ulMinuend < ulSubtrahend ? 0xC0000095 : 0;
}
