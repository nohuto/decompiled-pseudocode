/*
 * XREFs of ??$Start@PEBGPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@SA?AV01@$$QEAPEBG0@Z @ 0x1803790B0
 * Callers:
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18037D1C0 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 *     ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1803AB7E0 (-Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shel.c)
 * Callees:
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802A48A4 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z @ 0x18037D960 (-StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z.c)
 */

CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *__fastcall CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::Start<unsigned short const *,unsigned short const *>(
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *this,
        const unsigned __int16 **a2,
        const unsigned __int16 **a3)
{
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"CortanaExperienceManager_ShowDocked");
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::StartActivity(this, *a2, *a3);
  return this;
}
