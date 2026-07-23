/*
 * XREFs of TpSetPoolWorkerThreadIdleTimeout @ 0x180086310
 * Callers:
 *     LdrpEnableParallelLoading @ 0x180085804 (LdrpEnableParallelLoading.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 *     NtSetInformationWorkerFactory @ 0x180163660 (NtSetInformationWorkerFactory.c)
 */

NTSTATUS __fastcall TpSetPoolWorkerThreadIdleTimeout(__int64 a1, __int64 a2)
{
  __int64 WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = a2;
  if ( a1 && a2 < 0 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return NtSetInformationWorkerFactory(*(HANDLE *)(a1 + 56), WorkerFactoryIdleTimeout, &WorkerFactoryInformation, 8u);
  TppRaiseInvalidParameter(a1);
  return -1073741811;
}
