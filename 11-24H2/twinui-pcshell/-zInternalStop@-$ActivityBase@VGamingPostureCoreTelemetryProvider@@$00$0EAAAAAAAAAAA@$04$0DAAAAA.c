/*
 * XREFs of ?zInternalStop@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1803387D0
 * Callers:
 *     ?StopActivity@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@MEAAXXZ @ 0x1803343D0 (-StopActivity@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@MEAAXXZ.c)
 *     ?StopActivity@SystemDialogActivity@GamingPostureUXTelemetryProvider@@MEAAXXZ @ 0x180334610 (-StopActivity@SystemDialogActivity@GamingPostureUXTelemetryProvider@@MEAAXXZ.c)
 *     ??$Stop@K@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXK_N@Z @ 0x180339814 (--$Stop@K@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXK_N@Z.c)
 *     ??$Stop@PEBG@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG_N@Z @ 0x180339AA4 (--$Stop@PEBG@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG_N@Z.c)
 *     ?StopActivity@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@MEAAXXZ @ 0x18033B960 (-StopActivity@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@MEAAXXZ.c)
 *     ?StopActivity@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@MEAAXXZ @ 0x18033BBA0 (-StopActivity@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@MEAAXXZ.c)
 *     ?Stop@SystemDialogActivity@GamingPostureUXTelemetryProvider@@QEAAX_NIH0@Z @ 0x18033F554 (-Stop@SystemDialogActivity@GamingPostureUXTelemetryProvider@@QEAAX_NIH0@Z.c)
 *     ?Stop@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAAX_N000@Z @ 0x1803C0440 (-Stop@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceMan.c)
 *     ?StopActivity@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@MEAAXXZ @ 0x1803C09E0 (-StopActivity@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExper.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180331650 (-LockExclusive@-$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgRefle.c)
 */

void __fastcall wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v2);
  **(_DWORD **)(a1 + 272) = 2;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v2);
}
