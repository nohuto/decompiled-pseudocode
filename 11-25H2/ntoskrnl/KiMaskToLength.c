/*
 * XREFs of KiMaskToLength @ 0x140B479F0
 * Callers:
 *     KiInitializeMTRR @ 0x140C1873C (KiInitializeMTRR.c)
 * Callees:
 *     RtlFindLeastSignificantBit @ 0x14045BBB0 (RtlFindLeastSignificantBit.c)
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
