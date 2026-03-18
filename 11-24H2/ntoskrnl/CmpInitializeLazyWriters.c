/*
 * XREFs of CmpInitializeLazyWriters @ 0x1407DF164
 * Callers:
 *     CmpCmdInit @ 0x1407D5788 (CmpCmdInit.c)
 * Callees:
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     KeInitializeTimer @ 0x140455420 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     CmpCreateRegistryThread @ 0x1407D819C (CmpCreateRegistryThread.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     PoRegisterPowerSettingCallback @ 0x140A6B150 (PoRegisterPowerSettingCallback.c)
 */

NTSTATUS CmpInitializeLazyWriters()
{
  __int64 v0; // rsi
  __int64 v1; // rdx
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  dword_140E037A0 = CmpLazyFlushIntervalInSeconds;
  v0 = 0LL;
  dword_140E03860 = CmpLazyReconcileIntervalInSeconds;
  dword_140E03920 = CmpLazyLocalizeIntervalInSeconds;
  while ( (unsigned int)v0 < 3 )
  {
    KeInitializeTimer(&CmpLazyWriterData + 3 * v0);
    KeInitializeEvent((PRKEVENT)(&CmpLazyWriterData + 3 * v0 + 2), SynchronizationEvent, 0);
    KeInitializeDpc(
      (PRKDPC)&CmpLazyWriterData + 3 * v0 + 1,
      (PKDEFERRED_ROUTINE)CmpLazyFlushDpcRoutine,
      &CmpLazyWriterData + 3 * v0);
    *((_QWORD *)&CmpLazyWriterData + 24 * v0 + 19) = 0LL;
    if ( (int)CmpCreateRegistryThread(
                (__int64)&Handle,
                v1,
                (__int64)CmpLazyWriteWorker,
                (__int64)(&CmpLazyWriterData + 3 * v0)) < 0 )
      KeBugCheckEx(0x51u, 0x18uLL, (unsigned int)v0, 0LL, 0LL);
    NtClose(Handle);
    v0 = (unsigned int)(v0 + 1);
  }
  CmpUserPresent = 1;
  return PoRegisterPowerSettingCallback(
           0LL,
           &GUID_GLOBAL_USER_PRESENCE,
           (PPOWER_SETTING_CALLBACK)CmpUserPresenceCallback,
           0LL,
           0LL);
}
