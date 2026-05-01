/*
 * XREFs of ?Create@?$CDSA_Base@U_AdapterInfo@@@@QEAAHH@Z @ 0x1805BDA88
 * Callers:
 *     ?BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ @ 0x1805BD6C8 (-BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ.c)
 * Callees:
 *     DSA_Create @ 0x1806836C0 (DSA_Create.c)
 */

_BOOL8 __fastcall CDSA_Base<_AdapterInfo>::Create(HDSA *a1)
{
  HDSA v2; // rax

  v2 = g_pfn_DSA_Create(32, 3);
  *a1 = v2;
  return v2 != 0LL;
}
