/*
 * XREFs of ??_GKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18003A880
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x18003A76C (--1KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 */

Windows::Gaming::Preview::GamesEnumeration::KglDefaults *__fastcall Windows::Gaming::Preview::GamesEnumeration::KglDefaults::`scalar deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::KglDefaults *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::KglDefaults::~KglDefaults(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
