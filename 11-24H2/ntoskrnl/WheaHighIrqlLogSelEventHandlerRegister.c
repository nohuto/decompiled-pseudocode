/*
 * XREFs of WheaHighIrqlLogSelEventHandlerRegister @ 0x14065C770
 * Callers:
 *     <none>
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x14065CB78 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

char __fastcall WheaHighIrqlLogSelEventHandlerRegister(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v1; // rbx
  __int32 v2; // r9d
  LONG v3; // r10d
  struct _LIST_ENTRY *v4; // r11

  v1 = a1;
  if ( WheapDispatchPtr.DeviceLock.Header.LockNV )
  {
    LOBYTE(v3) = 0;
  }
  else
  {
    LOBYTE(a1) = 1;
    WheapHighIrqlLogSelEventHandlerAcquireLock(a1);
    if ( WheapDispatchPtr.DeviceLock.Header.LockNV == v2 )
    {
      WheapDispatchPtr.DeviceLock.Header.WaitListHead.Flink = v1;
      WheapDispatchPtr.DeviceLock.Header.WaitListHead.Blink = v4;
      WheapDispatchPtr.DeviceLock.Header.LockNV = v3;
    }
    else
    {
      LOBYTE(v3) = v2;
    }
    _InterlockedExchange(&WheapDispatchPtr.DeviceLock.Header.SignalState, v2);
  }
  return v3;
}
