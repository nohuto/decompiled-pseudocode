/*
 * XREFs of ??_G?$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@UEAAPEAXI@Z @ 0x180185260
 * Callers:
 *     ??_E?$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@W7EAAPEAXI@Z @ 0x1804A2950 (--_E-$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1VirtualDestopSwitcherViewChangeNotificationProxy@@UEAA@XZ @ 0x18018529C (--1VirtualDestopSwitcherViewChangeNotificationProxy@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

VirtualDestopSwitcherViewChangeNotificationProxy *__fastcall winrt::impl::heap_implements<VirtualDestopSwitcherViewChangeNotificationProxy>::`scalar deleting destructor'(
        VirtualDestopSwitcherViewChangeNotificationProxy *a1,
        char a2)
{
  VirtualDestopSwitcherViewChangeNotificationProxy::~VirtualDestopSwitcherViewChangeNotificationProxy(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xE0);
  return a1;
}
