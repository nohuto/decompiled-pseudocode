/*
 * XREFs of RtlULongSub @ 0x1404977CC
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x14057BC10 (DbgkpTriageDumpSnapData.c)
 *     KiDeduplicateTriageDumpDataArrays @ 0x1405AFD10 (KiDeduplicateTriageDumpDataArrays.c)
 *     BcpDisplayCriticalStringCentered @ 0x14068DAE0 (BcpDisplayCriticalStringCentered.c)
 *     _RegRtlQueryKeyPathName @ 0x1408112B8 (_RegRtlQueryKeyPathName.c)
 *     PiForEachDriverQueryRoutine @ 0x140A473F0 (PiForEachDriverQueryRoutine.c)
 *     BiGetFilePathFromEfiPath @ 0x140A76A6C (BiGetFilePathFromEfiPath.c)
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
