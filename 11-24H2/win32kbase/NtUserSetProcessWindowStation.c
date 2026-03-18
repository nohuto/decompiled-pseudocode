/*
 * XREFs of NtUserSetProcessWindowStation @ 0x1401459D0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionSetProcessWindowStationEntryPoint @ 0x1401459E8 (ApiSetEditionSetProcessWindowStationEntryPoint.c)
 */

__int64 NtUserSetProcessWindowStation()
{
  return (int)ApiSetEditionSetProcessWindowStationEntryPoint();
}
