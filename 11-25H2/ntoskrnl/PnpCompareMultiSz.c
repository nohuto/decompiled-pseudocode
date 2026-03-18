/*
 * XREFs of PnpCompareMultiSz @ 0x140726D3C
 * Callers:
 *     PipMatchPersistentMemory @ 0x1407103CC (PipMatchPersistentMemory.c)
 *     PipMatchPersistentMemoryV1 @ 0x1407104B0 (PipMatchPersistentMemoryV1.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140A92448 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140A9DAA0 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1408694A0 (RtlCompareUnicodeStrings.c)
 *     PnpGetMultiSzLength @ 0x140A6D1C4 (PnpGetMultiSzLength.c)
 */

bool __fastcall PnpCompareMultiSz(PCWCH String1, PCWCH String2, BOOLEAN CaseInSensitive)
{
  char v4; // bl
  SIZE_T String2Length[3]; // [rsp+30h] [rbp-18h] BYREF
  SIZE_T String1Length; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  String1Length = 0LL;
  String2Length[0] = 0LL;
  if ( (int)PnpGetMultiSzLength(String1, 0x7FFFFFFFLL, &String1Length) >= 0
    && (int)PnpGetMultiSzLength(String2, 0x7FFFFFFFLL, String2Length) >= 0
    && String1Length == String2Length[0] )
  {
    return RtlCompareUnicodeStrings(String1, String1Length, String2, String2Length[0], CaseInSensitive) == 0;
  }
  return v4;
}
