/*
 * XREFs of ExUuidCreate @ 0x1408DB8F0
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1405D39C0 (PopPowerButtonWorkCallback.c)
 *     DifExUuidCreateWrapper @ 0x140615830 (DifExUuidCreateWrapper.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x140701F40 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 *     IoGetDeviceDirectory @ 0x140712DF0 (IoGetDeviceDirectory.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14071FD10 (PiDevCfgResolveVariableGenerateGuid.c)
 *     CmpCloneHwProfile @ 0x1407C391C (CmpCloneHwProfile.c)
 *     NtCreateJobObject @ 0x1408DB4B0 (NtCreateJobObject.c)
 *     BiCreateObject @ 0x140A262E4 (BiCreateObject.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 *     PipGenerateContainerID @ 0x140A6E420 (PipGenerateContainerID.c)
 *     CmpUuidCreate @ 0x140A9B448 (CmpUuidCreate.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExpUuidGetValues @ 0x1408DBA9C (ExpUuidGetValues.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x140A7CC9C (ExpUuidSaveSequenceNumberIf.c)
 */

NTSTATUS __stdcall ExUuidCreate(UUID *Uuid)
{
  struct _KTHREAD *CurrentThread; // r14
  NTSTATUS Values; // ebp
  __int64 v4; // rdi
  char v5; // cl
  int v6; // eax
  __int64 v7; // rdi
  __int64 *v9; // rax
  __int64 *v10; // r15

  CurrentThread = KeGetCurrentThread();
  Values = 0;
  while ( 1 )
  {
    do
    {
      v4 = ExpUuidCachedValues;
      v5 = HIBYTE(NlsMbOemCodePageTag);
      *(_DWORD *)Uuid->Data4 = dword_140FD722C;
      *(_DWORD *)&Uuid->Data4[4] = unk_140FD7230;
      v6 = _InterlockedDecrement(&dword_140FD7228);
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
      ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v9, (__int64)&ExpUuidLock);
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
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
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
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return Values;
}
