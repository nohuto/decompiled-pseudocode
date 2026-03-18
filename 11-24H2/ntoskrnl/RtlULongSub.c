/*
 * XREFs of RtlULongSub @ 0x140497418
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x14057EF30 (DbgkpTriageDumpSnapData.c)
 *     KiDeduplicateTriageDumpDataArrays @ 0x1405B36BC (KiDeduplicateTriageDumpDataArrays.c)
 *     BcpDisplayCriticalStringCentered @ 0x140698E30 (BcpDisplayCriticalStringCentered.c)
 *     _RegRtlQueryKeyPathName @ 0x1408211B8 (_RegRtlQueryKeyPathName.c)
 *     PiForEachDriverQueryRoutine @ 0x140A0D3DC (PiForEachDriverQueryRoutine.c)
 *     BiGetFilePathFromEfiPath @ 0x140A787CC (BiGetFilePathFromEfiPath.c)
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
