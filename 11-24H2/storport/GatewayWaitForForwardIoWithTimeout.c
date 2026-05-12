/*
 * XREFs of GatewayWaitForForwardIoWithTimeout @ 0x1400A5F18
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140010664 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140060974 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     GatewayWaitForForwardIo @ 0x1400A5ED0 (GatewayWaitForForwardIo.c)
 *     RaidAdapterStopDeviceIrp @ 0x140183020 (RaidAdapterStopDeviceIrp.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 * Callees:
 *     RaUnitCheckForwardIoOutstanding @ 0x140054AEC (RaUnitCheckForwardIoOutstanding.c)
 *     RaUnitWaitForForwardIoQuiescence @ 0x140056320 (RaUnitWaitForForwardIoQuiescence.c)
 */

__int64 __fastcall GatewayWaitForForwardIoWithTimeout(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  KSPIN_LOCK *v3; // r13
  _QWORD **v4; // r12
  int v5; // ebp
  __int64 v6; // rdi
  __int64 v7; // rbx
  _QWORD *i; // rsi
  __int64 v9; // r15
  unsigned int v10; // esi
  __int64 v11; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  v3 = (KSPIN_LOCK *)(a1 + 136);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = (_QWORD **)(a1 + 144);
  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000014];
  v7 = MEMORY[0xFFFFF78000000014];
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    v9 = (__int64)(i - 8);
    if ( RaUnitCheckForwardIoOutstanding((__int64)(i - 8)) )
    {
      v10 = 0;
      if ( (_DWORD)v2 )
      {
        v11 = (v7 - v6) / 10000;
        if ( v11 >= v2 )
        {
          v5 = 258;
          break;
        }
        v10 = v2 - v11;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v5 = RaUnitWaitForForwardIoQuiescence(v9, v10);
      v7 = MEMORY[0xFFFFF78000000014];
      KeAcquireInStackQueuedSpinLock(v3, &LockHandle);
      i = v4;
      if ( v5 < 0 )
        break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)v5;
}
