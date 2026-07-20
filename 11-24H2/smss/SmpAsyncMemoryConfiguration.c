/*
 * XREFs of SmpAsyncMemoryConfiguration @ 0x14000F110
 * Callers:
 *     <none>
 * Callees:
 *     SmpNtSerializeBoot @ 0x14000D628 (SmpNtSerializeBoot.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpCheckMemoryCoolingCompatibility @ 0x14000D9C4 (SmpCheckMemoryCoolingCompatibility.c)
 *     SmpCreatePagingFiles @ 0x1400100F4 (SmpCreatePagingFiles.c)
 *     SmpEnableCachingOnDedicatedMemoryWorker @ 0x140010D7C (SmpEnableCachingOnDedicatedMemoryWorker.c)
 *     SmpIsRamdiskBoot @ 0x140011184 (SmpIsRamdiskBoot.c)
 *     SmpPagefileInitialize @ 0x140011310 (SmpPagefileInitialize.c)
 */

char SmpAsyncMemoryConfiguration()
{
  char v0; // bl
  int IsRamdiskBoot; // eax
  _DWORD SystemInformation[6]; // [rsp+40h] [rbp-18h] BYREF
  char v4; // [rsp+78h] [rbp+20h] BYREF

  SystemInformation[0] = 0;
  v0 = 1;
  IsRamdiskBoot = SmpPagefileInitialize();
  if ( IsRamdiskBoot >= 0 )
  {
    IsRamdiskBoot = SmpNtSerializeBoot();
    if ( IsRamdiskBoot < 0 )
      LOBYTE(IsRamdiskBoot) = (unsigned __int8)SmpLogFailure(
                                                 (__int64)"SmpAsyncMemoryConfiguration",
                                                 4716,
                                                 IsRamdiskBoot);
    if ( !SmpHostSmss )
      goto LABEL_9;
    if ( !SmpUseDedicatedDumpFile )
    {
      IsRamdiskBoot = NtSetSystemInformation(SystemCrashDumpStateInformation, SystemInformation, 4u);
      if ( IsRamdiskBoot < 0 )
        LOBYTE(IsRamdiskBoot) = (unsigned __int8)SmpLogFailure(
                                                   (__int64)"SmpAsyncMemoryConfiguration",
                                                   4735,
                                                   IsRamdiskBoot);
    }
    if ( !SmpHostSmss )
    {
LABEL_9:
      v0 = 0;
      SmpPagefileOnOsVolume = 0;
    }
    if ( SmpMiniNTBoot == 1 )
    {
      v4 = 0;
      IsRamdiskBoot = SmpIsRamdiskBoot(&v4);
      if ( IsRamdiskBoot < 0 )
        LOBYTE(IsRamdiskBoot) = (unsigned __int8)SmpLogFailure(
                                                   (__int64)"SmpAsyncMemoryConfiguration",
                                                   4767,
                                                   IsRamdiskBoot);
      if ( v4 == 1 )
        v0 = 0;
      else
        SmpPagefileOnOsVolume = 1;
    }
    if ( !SmpMiniNTBoot )
      LOBYTE(IsRamdiskBoot) = SmpCheckMemoryCoolingCompatibility();
    if ( v0 == 1 )
    {
      if ( !SmpMiniNTBoot )
      {
        SmpEnableCachingOnDedicatedMemoryWorker();
        RtlSubscribeWnfStateChangeNotification(
          &SmpPhysicalMemoryChangeSubscription,
          WNF_MM_PHYSICAL_MEMORY_CHANGE,
          0LL,
          SmpDedicatedMemoryCachingCallback,
          0LL,
          0LL,
          0,
          1);
      }
      SmpCreatePagingFiles();
      LOBYTE(IsRamdiskBoot) = NtInitializeRegistry(2u);
    }
    if ( SmpCrashDumpKey )
      LOBYTE(IsRamdiskBoot) = NtClose(SmpCrashDumpKey);
  }
  return IsRamdiskBoot;
}
