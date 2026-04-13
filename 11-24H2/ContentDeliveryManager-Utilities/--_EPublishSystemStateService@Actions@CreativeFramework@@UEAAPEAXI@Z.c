/*
 * XREFs of ??_EPublishSystemStateService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800917C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1LaunchAppByIdService@Actions@CreativeFramework@@UEAA@XZ @ 0x180091750 (--1LaunchAppByIdService@Actions@CreativeFramework@@UEAA@XZ.c)
 */

CreativeFramework::Actions::PublishSystemStateService *__fastcall CreativeFramework::Actions::PublishSystemStateService::`vector deleting destructor'(
        CreativeFramework::Actions::PublishSystemStateService *this,
        char a2)
{
  CreativeFramework::Actions::LaunchAppByIdService::~LaunchAppByIdService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
