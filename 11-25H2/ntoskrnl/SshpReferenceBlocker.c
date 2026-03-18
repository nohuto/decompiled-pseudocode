/*
 * XREFs of SshpReferenceBlocker @ 0x14048530C
 * Callers:
 *     SleepstudyHelperSetBlockerParentHandle @ 0x1404852A0 (SleepstudyHelperSetBlockerParentHandle.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A19C50 (SleepstudyHelperBuildBlocker.c)
 *     SshNotifySystemSessionChange @ 0x140A489D8 (SshNotifySystemSessionChange.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
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
