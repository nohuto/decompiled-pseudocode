/*
 * XREFs of PnpBusTypeGuidInitialize @ 0x140C25AB0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 PnpBusTypeGuidInitialize()
{
  __int64 result; // rax

  PnpBusTypeGuidCountMax = 16;
  PnpBusTypeGuidArray = (PVOID)ExAllocatePool2(0x100uLL, 0x100uLL, 0x75737050uLL);
  if ( PnpBusTypeGuidArray )
  {
    PnpBusTypeGuidCount = 0;
    PnpBusTypeGuidLock.Event.Header.WaitListHead.Blink = &PnpBusTypeGuidLock.Event.Header.WaitListHead;
    PnpBusTypeGuidLock.Event.Header.WaitListHead.Flink = &PnpBusTypeGuidLock.Event.Header.WaitListHead;
    result = 0LL;
    PnpBusTypeGuidLock.Count = 1;
    PnpBusTypeGuidLock.Owner = 0LL;
    PnpBusTypeGuidLock.Contention = 0;
    LOWORD(PnpBusTypeGuidLock.Event.Header.Lock) = 1;
    PnpBusTypeGuidLock.Event.Header.Size = 6;
    PnpBusTypeGuidLock.Event.Header.SignalState = 0;
  }
  else
  {
    PnpBusTypeGuidCountMax = 0;
    return 3221225626LL;
  }
  return result;
}
