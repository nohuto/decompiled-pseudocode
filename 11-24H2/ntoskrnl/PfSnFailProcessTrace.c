/*
 * XREFs of PfSnFailProcessTrace @ 0x140962AA0
 * Callers:
 *     PfSnLogStreamCreate @ 0x1409622A0 (PfSnLogStreamCreate.c)
 *     PfSnLogHelper @ 0x14096290C (PfSnLogHelper.c)
 *     PfSnNameRemoveAll @ 0x140962980 (PfSnNameRemoveAll.c)
 *     PfSnVolumeKeyQuery @ 0x140A07960 (PfSnVolumeKeyQuery.c)
 * Callees:
 *     PfSnEndProcessTrace @ 0x140939A40 (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, a1 + 24);
}
