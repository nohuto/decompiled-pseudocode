/*
 * XREFs of PopDirectedDripsSendSessionData @ 0x140A629B8
 * Callers:
 *     PopDirectedDripsNotify @ 0x140A627B0 (PopDirectedDripsNotify.c)
 * Callees:
 *     PopDirectedDripsDiagNotifySessionStop @ 0x140A62A2C (PopDirectedDripsDiagNotifySessionStop.c)
 */

__int64 PopDirectedDripsSendSessionData()
{
  ULONG HandleAttributes; // eax
  ULONG v1; // ett
  __int64 v2; // rcx
  unsigned int v3; // r9d
  __int64 v4; // r8
  __int64 v5; // rdx

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
  v2 = dword_140F0DFF0 & 1;
  if ( (dword_140F0DFF0 & 2) != 0 )
    v2 = (unsigned int)v2 | 2;
  v3 = (HandleAttributes >> 12) & 1;
  v4 = (HandleAttributes >> 10) & 1 | 2;
  if ( (HandleAttributes & 0x800) == 0 )
    v4 = (HandleAttributes >> 10) & 1;
  v5 = v3 | 2;
  if ( (HandleAttributes & 0x2000) == 0 )
    v5 = v3;
  return PopDirectedDripsDiagNotifySessionStop(v2, v5, v4);
}
