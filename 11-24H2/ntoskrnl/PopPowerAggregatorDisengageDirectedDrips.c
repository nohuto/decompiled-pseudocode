/*
 * XREFs of PopPowerAggregatorDisengageDirectedDrips @ 0x1406F668C
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x1409025F8 (PopPowerAggregatorDisengageModernStandby.c)
 * Callees:
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14074C6B4 (PopDirectedDripsNotifyAppsAndServices.c)
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
      return PopDirectedDripsNotifyAppsAndServices(&PopDirectedDripsState, &dword_140F0DD58, 0LL);
  }
  return result;
}
