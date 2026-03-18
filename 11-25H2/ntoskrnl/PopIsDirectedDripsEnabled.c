/*
 * XREFs of PopIsDirectedDripsEnabled @ 0x140A978A4
 * Callers:
 *     PopDripsWatchdogInitialize @ 0x140C224E0 (PopDripsWatchdogInitialize.c)
 * Callees:
 *     <none>
 */

char PopIsDirectedDripsEnabled()
{
  ULONG HandleAttributes; // eax
  ULONG v1; // ett

  _m_prefetchw(&PopDirectedDripsState);
  HandleAttributes = PopDirectedDripsState.HandleAttributes;
  do
  {
    v1 = HandleAttributes;
    HandleAttributes = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&PopDirectedDripsState,
                         HandleAttributes,
                         HandleAttributes);
  }
  while ( v1 != HandleAttributes );
  return HandleAttributes & 1;
}
