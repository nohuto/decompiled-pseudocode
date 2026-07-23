/*
 * XREFs of TpSetPoolMaxThreads @ 0x1800FA0A0
 * Callers:
 *     LdrpEnableParallelLoading @ 0x18003A1C4 (LdrpEnableParallelLoading.c)
 *     TppPoolpReferenceGlobalPool @ 0x180048D80 (TppPoolpReferenceGlobalPool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180111770 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppETWPoolThreadMax @ 0x18015DD54 (TppETWPoolThreadMax.c)
 *     NtSetInformationWorkerFactory @ 0x180166830 (NtSetInformationWorkerFactory.c)
 */

void __cdecl TpSetPoolMaxThreads(PTP_POOL Pool, ULONG MaxThreads)
{
  __int64 v3; // rcx
  ULONG WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = MaxThreads;
  if ( !Pool || (MaxThreads & 0x80000000) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
  }
  else
  {
    NtSetInformationWorkerFactory(Pool->WorkerFactory, WorkerFactoryThreadMaximum, &WorkerFactoryInformation, 4u);
    if ( RtlGetCurrentServiceSessionId() )
      v3 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v3 = 2147353478LL;
    if ( *(_BYTE *)v3 )
      TppETWPoolThreadMax(Pool, WorkerFactoryInformation);
  }
}
