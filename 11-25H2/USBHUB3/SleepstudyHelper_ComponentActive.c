/*
 * XREFs of SleepstudyHelper_ComponentActive @ 0x140044F44
 * Callers:
 *     HUBFDO_EvtDeviceD0Entry @ 0x14000D440 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBFDO_LowPowerEpochCallback @ 0x14000E9B0 (HUBFDO_LowPowerEpochCallback.c)
 *     HUBFDO_PowerSettingCallback @ 0x14000EBE0 (HUBFDO_PowerSettingCallback.c)
 *     HUBPDO_EvtDeviceD0Entry @ 0x140015860 (HUBPDO_EvtDeviceD0Entry.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140044EF0 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SleepstudyHelper_ComponentActive(void *a1)
{
  unsigned int v2; // edi
  unsigned int v4; // eax

  v2 = 0;
  if ( (unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( qword_14006FDB0 )
      return (unsigned int)qword_14006FDB0(a1);
    else
      return (unsigned int)-1073741637;
  }
  else
  {
    if ( a1 != &SleepstudyHelperUnsupportedHandle )
    {
      if ( qword_14006FDB0 )
        v4 = qword_14006FDB0(a1);
      else
        v4 = -1073741637;
      if ( v4 != -1073741637 )
        return v4;
    }
    return v2;
  }
}
