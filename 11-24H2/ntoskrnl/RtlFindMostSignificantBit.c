/*
 * XREFs of RtlFindMostSignificantBit @ 0x1404410F0
 * Callers:
 *     NtMapViewOfSection @ 0x1408A2010 (NtMapViewOfSection.c)
 *     MiValidateZeroBits @ 0x1409169F0 (MiValidateZeroBits.c)
 *     MiStoreGraphicsProtectionInVad @ 0x140ABB894 (MiStoreGraphicsProtectionInVad.c)
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
