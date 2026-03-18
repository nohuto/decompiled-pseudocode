/*
 * XREFs of WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x14065E3A8
 * Callers:
 *     WheaHighIrqlLogSelEventHandlerRegister @ 0x14065DFA0 (WheaHighIrqlLogSelEventHandlerRegister.c)
 *     WheaHighIrqlLogSelEventHandlerUnregister @ 0x14065E010 (WheaHighIrqlLogSelEventHandlerUnregister.c)
 *     WheapLogIpmiSELEvent @ 0x14065E3D0 (WheapLogIpmiSELEvent.c)
 * Callees:
 *     <none>
 */

char __fastcall WheapHighIrqlLogSelEventHandlerAcquireLock(char a1)
{
  char v1; // dl

  v1 = 0;
  while ( _InterlockedCompareExchange((_DWORD *)&WheapHighIrqlLogSelHandler + 1, 1, 0) )
  {
    if ( !a1 )
      return v1;
  }
  return 1;
}
