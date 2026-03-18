/*
 * XREFs of PopSessionConnectionChange @ 0x140A226D0
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     PopPrintEx @ 0x1403A9514 (PopPrintEx.c)
 *     PopReleaseAdaptiveLock @ 0x1409635F4 (PopReleaseAdaptiveLock.c)
 *     PopSessionConnected @ 0x140A227C8 (PopSessionConnected.c)
 *     PopSessionDisconnected @ 0x140A22878 (PopSessionDisconnected.c)
 */

void __fastcall PopSessionConnectionChange(unsigned int a1, char *a2, __int64 a3)
{
  char v3; // di
  char v4; // bl
  struct _KTHREAD *CurrentThread; // rax
  const char *v9; // r8
  const char *v10; // rax

  v3 = *a2;
  v4 = a2[1];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  PopAdpmLockThread = (__int64)KeGetCurrentThread();
  v9 = "Console";
  PopAdaptiveContext = 0;
  v10 = "Connected";
  if ( !v3 )
    v10 = "Disconnected";
  if ( !v4 )
    v9 = "Remote";
  PopPrintEx(3, (int)"PopAdaptive:>>>>>%s session %u is %s\n", v9, a1, v10);
  if ( v3 )
    PopSessionConnected(a1, a2, a3);
  else
    PopSessionDisconnected(a1, a3);
  PopReleaseAdaptiveLock();
}
