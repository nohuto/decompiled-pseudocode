/*
 * XREFs of PopQueryPowerButtonBugcheckEnabled @ 0x140AAD190
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1405D39C0 (PopPowerButtonWorkCallback.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 */

__int64 PopQueryPowerButtonBugcheckEnabled()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rbx
  unsigned int v2; // edi
  int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&PopPowerButtonBugcheckLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPowerButtonBugcheckLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PopPowerButtonBugcheckLock,
      0,
      v1,
      (unsigned __int64)&PopPowerButtonBugcheckLock);
  v2 = 0;
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  v3 = PopPowerButtonBugcheckConfig;
  v4 = PopPowerButtonLiveDumpConfig;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPowerButtonBugcheckLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPowerButtonBugcheckLock);
  KeAbPostRelease((ULONG_PTR)&PopPowerButtonBugcheckLock);
  KeLeaveCriticalRegion();
  if ( v3 == 2 )
    v2 = 1;
  LOBYTE(word_140F071F8) = v2;
  if ( (v4 & 1) != 0 )
  {
    v5 = v4 & 0xF0;
    if ( v5 > 0x60 || v5 < 0x20 )
    {
      v4 = v4 & 0xFFFFFF0F | 0x50;
      DbgPrintEx(
        0x92u,
        2u,
        "PopQueryPowerButtonBugcheckEnabled: PowerButtonLiveDump Timeout value is invalid or not specified. Set it to default.\n");
    }
  }
  HIDWORD(qword_140F07204) = v4;
  DbgPrintEx(
    0x92u,
    2u,
    "PopQueryPowerButtonBugcheckEnabled completed with BugcheckEnabled: %d, BugcheckConfig: %08x, LiveDumpConfig: %08x\n",
    v2,
    v3,
    v4);
  return v2;
}
