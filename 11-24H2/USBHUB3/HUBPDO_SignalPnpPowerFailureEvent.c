/*
 * XREFs of HUBPDO_SignalPnpPowerFailureEvent @ 0x14001BB50
 * Callers:
 *     HUBDSM_FlushingPnpEventsWithPortOff @ 0x140022510 (HUBDSM_FlushingPnpEventsWithPortOff.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPDO_SignalPnpPowerFailureEvent(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 1584) = -1073741823;
  KeSetEvent((PRKEVENT)(a1 + 1592), 0, 0);
  result = *(unsigned int *)(a1 + 1644);
  if ( (result & 0x40) != 0 )
  {
    *(_OWORD *)(a1 + 1524) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1644), 0xFFFFFFBF);
  }
  return result;
}
