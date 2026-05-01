/*
 * XREFs of _dynamic_initializer_for__StartupAppMonitor::s_showNotificationMap__ @ 0x18021B6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

int dynamic_initializer_for__StartupAppMonitor::s_showNotificationMap__()
{
  _QWORD *v0; // rax

  v0 = operator new(0xF8uLL);
  *v0 = v0;
  v0[1] = v0;
  v0[2] = v0;
  *((_WORD *)v0 + 12) = 257;
  StartupAppMonitor::s_showNotificationMap = (__int64)v0;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__StartupAppMonitor::s_showNotificationMap__);
}
