/*
 * XREFs of KiMaskToLength @ 0x140B59A10
 * Callers:
 *     KiInitializeMTRR @ 0x140C2B8EC (KiInitializeMTRR.c)
 * Callees:
 *     RtlFindLeastSignificantBit @ 0x140450550 (RtlFindLeastSignificantBit.c)
 */

__int64 __fastcall KiMaskToLength(ULONGLONG a1)
{
  CCHAR LeastSignificantBit; // cl

  if ( a1 )
    LeastSignificantBit = RtlFindLeastSignificantBit(a1);
  else
    LeastSignificantBit = KiMtrrMaxRangeShift;
  return 1LL << LeastSignificantBit;
}
