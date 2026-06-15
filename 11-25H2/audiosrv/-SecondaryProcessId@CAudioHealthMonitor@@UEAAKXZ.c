/*
 * XREFs of ?SecondaryProcessId@CAudioHealthMonitor@@UEAAKXZ @ 0x1800B5650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioHealthMonitor::SecondaryProcessId(CAudioHealthMonitor *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( g_ADGProcess )
    return LODWORD(g_ADGProcess[2].OwningThread);
  return result;
}
