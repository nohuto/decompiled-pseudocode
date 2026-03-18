/*
 * XREFs of SleepstudyHelper_GetPdoFriendlyName @ 0x1400DAFB4
 * Callers:
 *     ?SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ @ 0x1400A7608 (-SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x14009A018 (RtlUnicodeStringCopy.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1400AB234 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SleepstudyHelper_GetPdoFriendlyName(_DEVICE_OBJECT *Pdo, _UNICODE_STRING *FriendlyName)
{
  unsigned int v3; // ebx
  __int64 v4; // r8
  unsigned __int64 *v5; // r9

  if ( SleepstudyHelperRoutineBlock.GetPdoFriendlyName )
    v3 = SleepstudyHelperRoutineBlock.GetPdoFriendlyName(Pdo, FriendlyName);
  else
    v3 = -1073741637;
  if ( !Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() && v3 == -1073741637 )
  {
    if ( FriendlyName )
      return (unsigned int)RtlUnicodeStringCopy(FriendlyName, &SleepstudyHelperUnsupportedFriendlyName, v4, v5);
    else
      return (unsigned int)-1073741811;
  }
  return v3;
}
