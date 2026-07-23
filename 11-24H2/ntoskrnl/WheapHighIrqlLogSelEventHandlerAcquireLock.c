/*
 * XREFs of WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x14065CB78
 * Callers:
 *     WheaHighIrqlLogSelEventHandlerRegister @ 0x14065C770 (WheaHighIrqlLogSelEventHandlerRegister.c)
 *     WheaHighIrqlLogSelEventHandlerUnregister @ 0x14065C7E0 (WheaHighIrqlLogSelEventHandlerUnregister.c)
 *     WheapLogIpmiSELEvent @ 0x14065CBA0 (WheapLogIpmiSELEvent.c)
 * Callees:
 *     <none>
 */

char __fastcall WheapHighIrqlLogSelEventHandlerAcquireLock(char a1)
{
  char v1; // dl

  v1 = 0;
  while ( _InterlockedCompareExchange(&WheapDispatchPtr.DeviceLock.Header.SignalState, 1, 0) )
  {
    if ( !a1 )
      return v1;
  }
  return 1;
}
