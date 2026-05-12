/*
 * XREFs of RaidPauseAdapterQueue @ 0x1400078E0
 * Callers:
 *     RaidAdapterPowerDownDevice @ 0x1400075B0 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140010664 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterResetBus @ 0x14002F998 (RaidAdapterResetBus.c)
 *     RaidAdapterDeviceReset @ 0x140059DAC (RaidAdapterDeviceReset.c)
 *     RaidAdapterResetBusNoLock @ 0x14005E034 (RaidAdapterResetBusNoLock.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140060974 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortCompleteRequest @ 0x140073760 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x140074390 (StorPortPause.c)
 *     RaUnitStartResetIo @ 0x14009942C (RaUnitStartResetIo.c)
 *     RaidUnitTestDeviceQueue @ 0x1400A0F68 (RaidUnitTestDeviceQueue.c)
 *     RaidAdapterStopDeviceIrp @ 0x140183020 (RaidAdapterStopDeviceIrp.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 * Callees:
 *     RaUnitLockForwardIo @ 0x1400301C0 (RaUnitLockForwardIo.c)
 */

__int64 __fastcall RaidPauseAdapterQueue(__int64 a1)
{
  signed __int32 v2; // edi
  __int64 v3; // r9
  unsigned int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // rdx
  _QWORD *i; // r14
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 988));
  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
    for ( i = *(_QWORD **)(a1 + 144); i != (_QWORD *)(a1 + 144); i = (_QWORD *)*i )
      RaUnitLockForwardIo(i - 8, 4LL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( (qword_140170460 & 0x200) != 0 )
  {
    v3 = *(unsigned int *)(a1 + 56);
    if ( *(_DWORD *)a1 != 1314275652 )
    {
      v4 = *(_DWORD *)(a1 + 4932);
      if ( v4 )
      {
        v5 = *(_QWORD *)(a1 + 4936);
        if ( v5 )
        {
          v6 = v5 + 48LL * (_InterlockedIncrement((volatile signed __int32 *)(a1 + 4928)) % v4);
          *(_DWORD *)v6 = 6;
          *(_QWORD *)(v6 + 40) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(v6 + 8) = retaddr;
          *(_QWORD *)(v6 + 16) = v2;
          *(_QWORD *)(v6 + 24) = a1;
          *(_QWORD *)(v6 + 32) = v3;
        }
      }
    }
  }
  return (unsigned int)v2;
}
