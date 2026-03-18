/*
 * XREFs of SleepstudyHelper_GenerateGuid @ 0x1400AB490
 * Callers:
 *     ?SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ @ 0x1400A7608 (-SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1400AB234 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SleepstudyHelper_GenerateGuid(
        _SleepstudyHelper_Namespace ComponentNamespace,
        unsigned __int64 ComponentUid,
        _GUID *pGuid)
{
  unsigned int v4; // ebx

  if ( SleepstudyHelperRoutineBlock.GenerateGuid )
    v4 = SleepstudyHelperRoutineBlock.GenerateGuid(ComponentNamespace, ComponentUid, pGuid);
  else
    v4 = -1073741637;
  if ( !Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() && v4 == -1073741637 )
  {
    v4 = 0;
    *pGuid = GUID_SLEEPSTUDY_LIBRARY_UNSUPPORTED;
  }
  return v4;
}
