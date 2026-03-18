/*
 * XREFs of ?ForceUpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEBAXXZ @ 0x140156EF8
 * Callers:
 *     ForceUpdatePointerDeviceSystemMetrics @ 0x140156ED0 (ForceUpdatePointerDeviceSystemMetrics.c)
 * Callees:
 *     ?WriteSystemMetricsKeyToAllHives@CInputSystemMetrics@@AEBAXK@Z @ 0x14014E0D8 (-WriteSystemMetricsKeyToAllHives@CInputSystemMetrics@@AEBAXK@Z.c)
 *     ?WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z @ 0x1402201D8 (-WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z.c)
 */

void __fastcall CInputSystemMetrics::ForceUpdatePointerDeviceSystemMetrics(CInputSystemMetrics *this)
{
  CInputSystemMetrics *v2; // rcx
  CInputSystemMetrics *v3; // rcx

  if ( !*(_DWORD *)(W32GetUserSessionState(this) + 356) )
  {
    CInputSystemMetrics::WriteSystemMetricsKeyToAllHives(v2, *(unsigned int *)this);
    CInputSystemMetrics::WritePointerDevicePresenceKey(v3, *((_DWORD *)this + 1));
  }
}
