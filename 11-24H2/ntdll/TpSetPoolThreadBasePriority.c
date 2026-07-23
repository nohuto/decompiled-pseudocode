/*
 * XREFs of TpSetPoolThreadBasePriority @ 0x180107A10
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x180163660 (NtSetInformationWorkerFactory.c)
 */

NTSTATUS __cdecl TpSetPoolThreadBasePriority(PTP_POOL Pool, ULONG BasePriority)
{
  ULONG WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = BasePriority;
  if ( !Pool )
    return -1073741811;
  if ( (int)BasePriority < 15 )
  {
    if ( (int)BasePriority <= -15 )
      WorkerFactoryInformation = -16;
  }
  else
  {
    WorkerFactoryInformation = 16;
  }
  return NtSetInformationWorkerFactory(
           Pool->WorkerFactory,
           WorkerFactoryThreadBasePriority,
           &WorkerFactoryInformation,
           4u);
}
