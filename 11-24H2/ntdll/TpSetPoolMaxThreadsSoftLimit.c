/*
 * XREFs of TpSetPoolMaxThreadsSoftLimit @ 0x180086C00
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x180047E60 (TppPoolpReferenceGlobalPool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800E9040 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 *     NtSetInformationWorkerFactory @ 0x180163660 (NtSetInformationWorkerFactory.c)
 */

NTSTATUS __fastcall TpSetPoolMaxThreadsSoftLimit(__int64 a1, int a2)
{
  int WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = a2;
  if ( !a1 || a2 < 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    return TppRaiseInvalidParameter(a1);
  else
    return NtSetInformationWorkerFactory(
             *(HANDLE *)(a1 + 56),
             WorkerFactoryThreadSoftMaximum,
             &WorkerFactoryInformation,
             4u);
}
