/*
 * XREFs of KeInitializeGuardedMutex @ 0x140452720
 * Callers:
 *     PiDqObjectManagerInit @ 0x140726148 (PiDqObjectManagerInit.c)
 *     PfTInitialize @ 0x140744BA4 (PfTInitialize.c)
 *     EtwpInitializeProviderTraits @ 0x1407B2214 (EtwpInitializeProviderTraits.c)
 *     CmpInitSIDToHiveMapping @ 0x1407DC09C (CmpInitSIDToHiveMapping.c)
 *     CmpInitializeDelayedCloseTable @ 0x1407DE094 (CmpInitializeDelayedCloseTable.c)
 *     PiUEventInitClientRegistrationContext @ 0x14085835C (PiUEventInitClientRegistrationContext.c)
 *     PiUEventNotifyUserMode @ 0x1409ECA04 (PiUEventNotifyUserMode.c)
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
