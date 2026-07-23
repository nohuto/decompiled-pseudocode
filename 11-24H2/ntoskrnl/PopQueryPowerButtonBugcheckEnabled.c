/*
 * XREFs of PopQueryPowerButtonBugcheckEnabled @ 0x140AAD370
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1405D58C0 (PopPowerButtonWorkCallback.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 PopQueryPowerButtonBugcheckEnabled()
{
  struct _KTHREAD *CurrentThread; // rax
  char *v1; // rbx
  unsigned int v2; // edi
  int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&PopPowerButtonBugcheckLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPowerButtonBugcheckLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PopPowerButtonBugcheckLock,
      0,
      v1,
      (__int64)&PopPowerButtonBugcheckLock);
  v2 = 0;
  if ( v1 )
    v1[10] = 1;
  v3 = PopPowerButtonBugcheckConfig;
  v4 = PopPowerButtonLiveDumpConfig;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPowerButtonBugcheckLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPowerButtonBugcheckLock);
  KeAbPostRelease((ULONG_PTR)&PopPowerButtonBugcheckLock);
  KeLeaveCriticalRegion();
  if ( v3 == 2 )
    v2 = 1;
  LOBYTE(word_140F07BB8) = v2;
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
  HIDWORD(qword_140F07BC4) = v4;
  DbgPrintEx(
    0x92u,
    2u,
    "PopQueryPowerButtonBugcheckEnabled completed with BugcheckEnabled: %d, BugcheckConfig: %08x, LiveDumpConfig: %08x\n",
    v2,
    v3,
    v4);
  return v2;
}
