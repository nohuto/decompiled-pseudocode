/*
 * XREFs of NtUserUserPowerCalloutWorker @ 0x1C009CDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserUserPowerCalloutWorker()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  EnterCrit(0LL, 0LL);
  v0 = (int)xxxUserPowerCalloutWorker();
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v0;
}
