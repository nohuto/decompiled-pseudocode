/*
 * XREFs of KeInitializeGuardedMutex @ 0x14045D660
 * Callers:
 *     PiDqObjectManagerInit @ 0x1407285B8 (PiDqObjectManagerInit.c)
 *     PfTInitialize @ 0x1407468B4 (PfTInitialize.c)
 *     EtwpInitializeProviderTraits @ 0x1407B1DC4 (EtwpInitializeProviderTraits.c)
 *     CmpInitSIDToHiveMapping @ 0x1407DBB4C (CmpInitSIDToHiveMapping.c)
 *     CmpInitializeDelayedCloseTable @ 0x1407DDB44 (CmpInitializeDelayedCloseTable.c)
 *     PiUEventInitClientRegistrationContext @ 0x14085C5EC (PiUEventInitClientRegistrationContext.c)
 *     PiUEventNotifyUserMode @ 0x1409EEFC4 (PiUEventNotifyUserMode.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  Mutex->Count = 1;
  Mutex->Owner = 0LL;
  Mutex->Contention = 0;
  Mutex->Event.Header.SignalState = 0;
  LOWORD(Mutex->Event.Header.Lock) = 1;
  Mutex->Event.Header.Size = 6;
  Mutex->Event.Header.WaitListHead.Blink = &Mutex->Event.Header.WaitListHead;
  Mutex->Event.Header.WaitListHead.Flink = &Mutex->Event.Header.WaitListHead;
}
