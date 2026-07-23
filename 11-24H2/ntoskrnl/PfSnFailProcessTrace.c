/*
 * XREFs of PfSnFailProcessTrace @ 0x14094A560
 * Callers:
 *     PfSnLogStreamCreate @ 0x140949D60 (PfSnLogStreamCreate.c)
 *     PfSnLogHelper @ 0x14094A3CC (PfSnLogHelper.c)
 *     PfSnNameRemoveAll @ 0x14094A440 (PfSnNameRemoveAll.c)
 *     PfSnVolumeKeyQuery @ 0x140A03E90 (PfSnVolumeKeyQuery.c)
 * Callees:
 *     PfSnEndProcessTrace @ 0x14094BF24 (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10LL, a1 + 24);
}
