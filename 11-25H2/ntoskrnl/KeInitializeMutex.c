/*
 * XREFs of KeInitializeMutex @ 0x140476A80
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x14077E6A8 (Pdcv2ActivationClientRegister.c)
 *     EtwpPreInitializeSiloState @ 0x140799A0C (EtwpPreInitializeSiloState.c)
 *     EtwpInitLoggerContext @ 0x140A388E4 (EtwpInitLoggerContext.c)
 *     KeAllocateCalloutStackEx @ 0x140A65040 (KeAllocateCalloutStackEx.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140B3E208 (HalpInitGenericErrorSourcePollingRoutine.c)
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
