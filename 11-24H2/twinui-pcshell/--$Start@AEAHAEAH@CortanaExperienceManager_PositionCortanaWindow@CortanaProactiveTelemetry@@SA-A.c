/*
 * XREFs of ??$Start@AEAHAEAH@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@SA?AV01@AEAH0@Z @ 0x1803CD4E8
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803D1EB0 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803DC1E0 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803794B0 (--0-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?StartActivity@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAAXHH@Z @ 0x1803D3828 (-StartActivity@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAAXHH.c)
 */

CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *__fastcall CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::Start<int &,int &>(
        CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *this,
        int *a2,
        int *a3)
{
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"CortanaExperienceManager_PositionCortanaWindow");
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::StartActivity(this, *a2, *a3);
  return this;
}
