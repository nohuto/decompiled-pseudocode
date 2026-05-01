/*
 * XREFs of ??_GRecentAppsCache@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x1803EED90
 * Callers:
 *     <none>
 * Callees:
 *     ??1RecentAppsCache@Discover@PenWorkspace@@UEAA@XZ @ 0x1801AEBA0 (--1RecentAppsCache@Discover@PenWorkspace@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

PenWorkspace::Discover::RecentAppsCache *__fastcall PenWorkspace::Discover::RecentAppsCache::`scalar deleting destructor'(
        PenWorkspace::Discover::RecentAppsCache *this,
        char a2)
{
  PenWorkspace::Discover::RecentAppsCache::~RecentAppsCache(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
