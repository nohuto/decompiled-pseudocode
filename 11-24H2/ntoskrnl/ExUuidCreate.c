/*
 * XREFs of ExUuidCreate @ 0x1408EA880
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1405D83A0 (PopPowerButtonWorkCallback.c)
 *     DifExUuidCreateWrapper @ 0x1406217F0 (DifExUuidCreateWrapper.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x14070DE20 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 *     IoGetDeviceDirectory @ 0x14071EEF0 (IoGetDeviceDirectory.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14072BC90 (PiDevCfgResolveVariableGenerateGuid.c)
 *     CmpCloneHwProfile @ 0x1407D305C (CmpCloneHwProfile.c)
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 *     BiCreateObject @ 0x14085E04C (BiCreateObject.c)
 *     NtCreateJobObject @ 0x1408EAB60 (NtCreateJobObject.c)
 *     PipGenerateContainerID @ 0x140A7063C (PipGenerateContainerID.c)
 *     CmpUuidCreate @ 0x140AA1208 (CmpUuidCreate.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExpUuidGetValues @ 0x1408EAA2C (ExpUuidGetValues.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x140A8B754 (ExpUuidSaveSequenceNumberIf.c)
 */

NTSTATUS __stdcall ExUuidCreate(UUID *Uuid)
{
  struct _KTHREAD *CurrentThread; // r14
  NTSTATUS Values; // ebp
  __int64 v4; // rdi
  char v5; // cl
  int v6; // eax
  __int64 v7; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // r15

  CurrentThread = KeGetCurrentThread();
  Values = 0;
  while ( 1 )
  {
    do
    {
      v4 = ExpUuidCachedValues;
      v5 = HIBYTE(NlsMbOemCodePageTag);
      *(_DWORD *)Uuid->Data4 = dword_140FD7254;
      *(_DWORD *)&Uuid->Data4[4] = unk_140FD7258;
      v6 = _InterlockedDecrement(&dword_140FD7250);
    }
    while ( v4 != ExpUuidCachedValues );
    if ( v6 >= 0 )
    {
      v7 = v4 - v6;
      Uuid->Data1 = v7;
      Uuid->Data2 = WORD2(v7);
      Uuid->Data3 = HIWORD(v7) & 0xFFF | 0x1000;
      if ( !v5 )
        return 1073872982;
      return Values;
    }
    --CurrentThread->KernelApcDisable;
    v9 = KeAbPreAcquire((__int64)&ExpUuidLock, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpUuidLock, (__int64)v9, (__int64)&ExpUuidLock);
    if ( v10 )
      *((_BYTE *)v10 + 10) = 1;
    if ( v4 == ExpUuidCachedValues )
      break;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      goto LABEL_17;
LABEL_19:
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
LABEL_17:
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KeLeaveCriticalRegionThread();
  }
  Values = ExpUuidGetValues(&ExpUuidCachedValues);
  if ( !Values )
  {
    ExpUuidSaveSequenceNumberIf();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      goto LABEL_17;
    goto LABEL_19;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
  KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
  KeLeaveCriticalRegionThread();
  return Values;
}
