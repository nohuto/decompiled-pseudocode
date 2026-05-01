/*
 * XREFs of ??1CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180379E18
 * Callers:
 *     ?_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x18037EDE4 (-_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z.c)
 *     ?_GetCortanaEntryPointAndArgs@SearchAppExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x1803AC0EC (-_GetCortanaEntryPointAndArgs@SearchAppExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18037AAE4 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::~CortanaExperienceManager_GetCortanaEntryPointAndArgs(
        CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
