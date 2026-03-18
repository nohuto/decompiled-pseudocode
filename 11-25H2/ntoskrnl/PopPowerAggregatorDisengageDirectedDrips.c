/*
 * XREFs of PopPowerAggregatorDisengageDirectedDrips @ 0x1406EAE28
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x140A2BC28 (PopPowerAggregatorDisengageModernStandby.c)
 * Callees:
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407405E4 (PopDirectedDripsNotifyAppsAndServices.c)
 */

__int64 PopPowerAggregatorDisengageDirectedDrips()
{
  __int64 result; // rax
  int v1; // ett
  int v2; // ett

  _m_prefetchw(&PopDirectedDripsState);
  LODWORD(result) = PopDirectedDripsState.HandleAttributes;
  do
  {
    v1 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&PopDirectedDripsState,
                             result,
                             result);
  }
  while ( v1 != (_DWORD)result );
  if ( (result & 1) != 0 )
  {
    _m_prefetchw(&PopDirectedDripsState);
    LODWORD(result) = PopDirectedDripsState.HandleAttributes;
    do
    {
      v2 = result;
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&PopDirectedDripsState,
                               result,
                               result);
    }
    while ( v2 != (_DWORD)result );
    if ( (result & 0x800) != 0 )
      return PopDirectedDripsNotifyAppsAndServices(&PopDirectedDripsState, &dword_140F0D678, 0LL);
  }
  return result;
}
