/*
 * XREFs of ??_ECPerMonitorDesktopVisibilityService@@UEAAPEAXI@Z @ 0x1804E8EE8
 * Callers:
 *     ??_ECPerMonitorDesktopVisibilityService@@WCI@EAAPEAXI@Z @ 0x1804E8E90 (--_ECPerMonitorDesktopVisibilityService@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CPerMonitorDesktopVisibilityService@@UEAA@XZ @ 0x1801D6A54 (--1CPerMonitorDesktopVisibilityService@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CPerMonitorDesktopVisibilityService *__fastcall CPerMonitorDesktopVisibilityService::`vector deleting destructor'(
        CPerMonitorDesktopVisibilityService *this,
        char a2)
{
  CPerMonitorDesktopVisibilityService::~CPerMonitorDesktopVisibilityService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
