/*
 * XREFs of SleepstudyHelper_ComponentInactive @ 0x1404EE6E0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     SshpSetBlockerActive @ 0x14044DE60 (SshpSetBlockerActive.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1405E45D8 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall SleepstudyHelper_ComponentInactive(PKSPIN_LOCK SpinLock)
{
  unsigned int v1; // edi
  KIRQL v3; // al
  int v4; // ecx
  KIRQL v5; // si
  bool v6; // zf

  v1 = 0;
  if ( SpinLock )
  {
    if ( !(unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline()
      || SpinLock != (PKSPIN_LOCK)&SleepstudyHelperUnsupportedHandle )
    {
      v3 = KeAcquireSpinLockRaiseToDpc(SpinLock);
      v4 = *((_DWORD *)SpinLock + 2);
      v5 = v3;
      if ( (v4 & 0x10) != 0 )
      {
        v6 = (*((_DWORD *)SpinLock + 5))-- == 1;
        *((_DWORD *)SpinLock + 2) = v4 & 0xFFFFFFEF;
        if ( v6 )
          SshpSetBlockerActive((__int64)SpinLock, 0LL);
      }
      KeReleaseSpinLock(SpinLock, v5);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
