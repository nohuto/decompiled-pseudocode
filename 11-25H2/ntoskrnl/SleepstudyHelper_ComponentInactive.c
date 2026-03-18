/*
 * XREFs of SleepstudyHelper_ComponentInactive @ 0x1404EB780
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     SshpSetBlockerActive @ 0x14044E320 (SshpSetBlockerActive.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1405D8688 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
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
