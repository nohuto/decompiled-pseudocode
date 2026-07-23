/*
 * XREFs of WheaHighIrqlLogSelEventHandlerUnregister @ 0x14065C7E0
 * Callers:
 *     <none>
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x14065CB78 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

__int64 __fastcall WheaHighIrqlLogSelEventHandlerUnregister(__int64 a1)
{
  __int64 result; // rax
  struct _LIST_ENTRY *v2; // r9

  if ( WheapDispatchPtr.DeviceLock.Header.LockNV )
  {
    LOBYTE(a1) = 1;
    result = WheapHighIrqlLogSelEventHandlerAcquireLock(a1);
    WheapDispatchPtr.DeviceLock.Header.WaitListHead.Flink = v2;
    WheapDispatchPtr.DeviceLock.Header.WaitListHead.Blink = v2;
    WheapDispatchPtr.DeviceLock.Header.LockNV = (int)v2;
    _InterlockedExchange(&WheapDispatchPtr.DeviceLock.Header.SignalState, (__int32)v2);
  }
  return result;
}
