/*
 * XREFs of SshpReferenceBlocker @ 0x140485B6C
 * Callers:
 *     SleepstudyHelperSetBlockerParentHandle @ 0x140485B00 (SleepstudyHelperSetBlockerParentHandle.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A24F30 (SleepstudyHelperBuildBlocker.c)
 *     SshNotifySystemSessionChange @ 0x140A4B418 (SshNotifySystemSessionChange.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall SshpReferenceBlocker(PKSPIN_LOCK SpinLock, int a2)
{
  KIRQL v4; // cl
  int v5; // edx
  int v6; // eax

  v4 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  if ( a2 || (++*((_DWORD *)SpinLock + 3), *((_DWORD *)SpinLock + 3) == 1) )
  {
    v5 = *((_DWORD *)SpinLock + 4);
    *((_DWORD *)SpinLock + 4) = v5 + 1;
    v6 = *((_DWORD *)SpinLock + 2);
    if ( (v6 & 8) != 0 )
    {
      *((_DWORD *)SpinLock + 4) = v5;
      *((_DWORD *)SpinLock + 2) = v6 & 0xFFFFFFF7;
    }
  }
  KeReleaseSpinLock(SpinLock, v4);
}
