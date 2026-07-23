/*
 * XREFs of TpSetPoolMaxThreadsSoftLimit @ 0x18010B540
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x180048D80 (TppPoolpReferenceGlobalPool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180111770 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     NtSetInformationWorkerFactory @ 0x180166830 (NtSetInformationWorkerFactory.c)
 */

void __fastcall TpSetPoolMaxThreadsSoftLimit(__int64 a1, int a2)
{
  int WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = a2;
  if ( !a1 || a2 < 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  else
    NtSetInformationWorkerFactory(*(HANDLE *)(a1 + 56), WorkerFactoryThreadSoftMaximum, &WorkerFactoryInformation, 4u);
}
