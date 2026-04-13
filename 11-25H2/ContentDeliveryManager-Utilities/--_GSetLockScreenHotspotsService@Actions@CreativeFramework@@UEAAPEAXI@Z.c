/*
 * XREFs of ??_GSetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800A1370
 * Callers:
 *     <none>
 * Callees:
 *     ??1SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800A1310 (--1SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAA@XZ.c)
 */

CreativeFramework::Actions::SetLockScreenHotspotsService *__fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::`scalar deleting destructor'(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this,
        char a2)
{
  CreativeFramework::Actions::SetLockScreenHotspotsService::~SetLockScreenHotspotsService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
