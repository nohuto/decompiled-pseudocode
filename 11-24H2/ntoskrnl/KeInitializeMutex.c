/*
 * XREFs of KeInitializeMutex @ 0x140476AE0
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x14078D95C (Pdcv2ActivationClientRegister.c)
 *     EtwpPreInitializeSiloState @ 0x1407A8DDC (EtwpPreInitializeSiloState.c)
 *     EtwpInitLoggerContext @ 0x1408309D4 (EtwpInitLoggerContext.c)
 *     KeAllocateCalloutStackEx @ 0x140A67B60 (KeAllocateCalloutStackEx.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140B4E208 (HalpInitGenericErrorSourcePollingRoutine.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  *(_OWORD *)&Mutex->Header.Lock = 0LL;
  *(_OWORD *)&Mutex->Header.WaitListHead.Blink = 0LL;
  *(_OWORD *)&Mutex->MutantListEntry.Blink = 0LL;
  *(_QWORD *)&Mutex->MutantFlags = 0LL;
  Mutex->Header.Type = 2;
  Mutex->Header.SignalState = 1;
  Mutex->Header.WaitListHead.Blink = &Mutex->Header.WaitListHead;
  Mutex->Header.WaitListHead.Flink = &Mutex->Header.WaitListHead;
  Mutex->MutantFlags &= ~1u;
  Mutex->ApcDisable = 1;
}
