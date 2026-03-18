/*
 * XREFs of NtUserGetProcessWindowStation @ 0x140114360
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionGetProcessWindowStationEntryPoint @ 0x140114388 (ApiSetEditionGetProcessWindowStationEntryPoint.c)
 */

__int64 NtUserGetProcessWindowStation()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  ApiSetEditionGetProcessWindowStationEntryPoint(&v1);
  return v1;
}
