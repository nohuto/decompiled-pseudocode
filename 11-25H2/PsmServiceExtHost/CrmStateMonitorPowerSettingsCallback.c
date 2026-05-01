/*
 * XREFs of CrmStateMonitorPowerSettingsCallback @ 0x1800688A0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002D2A0 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorPowerSettingsCallback(unsigned int *a1, __int64 a2, __int64 a3)
{
  CrmStateMonitorStateSet(a1, (const void *)(a3 + 20), *(unsigned int *)(a3 + 16), 0);
  return 0LL;
}
