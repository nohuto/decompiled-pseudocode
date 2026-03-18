/*
 * XREFs of RtlFindMostSignificantBit @ 0x1404489A0
 * Callers:
 *     NtMapViewOfSection @ 0x140899970 (NtMapViewOfSection.c)
 *     MiValidateZeroBits @ 0x1408DFE40 (MiValidateZeroBits.c)
 *     MiStoreGraphicsProtectionInVad @ 0x140AC0730 (MiStoreGraphicsProtectionInVad.c)
 * Callees:
 *     <none>
 */

CCHAR __stdcall RtlFindMostSignificantBit(ULONGLONG Set)
{
  bool v1; // zf
  __int64 v2; // rdx
  CCHAR result; // al

  v1 = !_BitScanReverse64((unsigned __int64 *)&v2, Set);
  result = -1;
  if ( !v1 )
    return v2;
  return result;
}
