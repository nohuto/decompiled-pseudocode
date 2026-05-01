/*
 * XREFs of ??$Start@$$V@CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@SA?AV01@XZ @ 0x1803CD440
 * Callers:
 *     ?Hide@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1803D02E0 (-Hide@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?Hide@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1803D9E60 (-Hide@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802A48A4 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?StartActivity@CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1803D36F8 (-StartActivity@CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@QEAAXXZ.c)
 */

CortanaProactiveTelemetry::CortanaExperienceManager_Hide *__fastcall CortanaProactiveTelemetry::CortanaExperienceManager_Hide::Start<>(
        CortanaProactiveTelemetry::CortanaExperienceManager_Hide *this)
{
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"CortanaExperienceManager_Hide");
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_Hide::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_Hide::StartActivity(this);
  return this;
}
