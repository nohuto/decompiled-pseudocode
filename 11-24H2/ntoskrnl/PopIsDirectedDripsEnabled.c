/*
 * XREFs of PopIsDirectedDripsEnabled @ 0x140A98944
 * Callers:
 *     PopDripsWatchdogInitialize @ 0x140C3585C (PopDripsWatchdogInitialize.c)
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
