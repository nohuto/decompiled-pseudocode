/*
 * XREFs of SleepstudyHelper_ComponentActiveLocked @ 0x1404EB710
 * Callers:
 *     SleepstudyHelper_ComponentActive @ 0x1404EB6A0 (SleepstudyHelper_ComponentActive.c)
 * Callees:
 *     SshpSetBlockerActive @ 0x14044E320 (SshpSetBlockerActive.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1405D8688 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall SleepstudyHelper_ComponentActiveLocked(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdx
  int v4; // eax
  bool v5; // zf

  v1 = 0;
  if ( a1 )
  {
    if ( !(unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline()
      || (_UNKNOWN *)a1 != &SleepstudyHelperUnsupportedHandle )
    {
      v4 = *(_DWORD *)(a1 + 8);
      if ( (v4 & 0x10) == 0 )
      {
        v5 = ++*(_DWORD *)(a1 + 20) == 1;
        *(_DWORD *)(a1 + 8) = v4 | 0x10;
        if ( v5 )
        {
          LOBYTE(v3) = 1;
          SshpSetBlockerActive(a1, v3);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
