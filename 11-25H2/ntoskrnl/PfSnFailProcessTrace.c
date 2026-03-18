/*
 * XREFs of PfSnFailProcessTrace @ 0x1406EEF78
 * Callers:
 *     PfSnLogStreamCreate @ 0x140827B20 (PfSnLogStreamCreate.c)
 *     PfSnLogHelper @ 0x140828184 (PfSnLogHelper.c)
 *     PfSnNameRemoveAll @ 0x1408281F8 (PfSnNameRemoveAll.c)
 *     PfSnVolumeKeyQuery @ 0x140A05864 (PfSnVolumeKeyQuery.c)
 * Callees:
 *     PfSnEndProcessTrace @ 0x14091D474 (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10LL, a1 + 24);
}
