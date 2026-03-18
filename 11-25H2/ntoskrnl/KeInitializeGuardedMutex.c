/*
 * XREFs of KeInitializeGuardedMutex @ 0x14045E320
 * Callers:
 *     PiDqObjectManagerInit @ 0x14071C638 (PiDqObjectManagerInit.c)
 *     PfTInitialize @ 0x14073A894 (PfTInitialize.c)
 *     EtwpInitializeProviderTraits @ 0x1407A29F4 (EtwpInitializeProviderTraits.c)
 *     CmpInitSIDToHiveMapping @ 0x1407CC38C (CmpInitSIDToHiveMapping.c)
 *     CmpInitializeDelayedCloseTable @ 0x1407CE384 (CmpInitializeDelayedCloseTable.c)
 *     PiUEventInitClientRegistrationContext @ 0x140967DB0 (PiUEventInitClientRegistrationContext.c)
 *     PiUEventNotifyUserMode @ 0x14096D4D4 (PiUEventNotifyUserMode.c)
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
