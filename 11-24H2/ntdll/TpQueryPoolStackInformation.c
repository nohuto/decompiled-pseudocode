/*
 * XREFs of TpQueryPoolStackInformation @ 0x18015A8C0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationWorkerFactory @ 0x180162BA0 (ZwQueryInformationWorkerFactory.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl TpQueryPoolStackInformation(PTP_POOL Pool, PTP_POOL_STACK_INFORMATION PoolStackInformation)
{
  NTSTATUS result; // eax
  _BYTE WorkerFactoryInformation[96]; // [rsp+30h] [rbp-88h] BYREF
  SIZE_T v6; // [rsp+90h] [rbp-28h]
  SIZE_T v7; // [rsp+98h] [rbp-20h]

  memset_thunk_772440563353939046(WorkerFactoryInformation, 0, 0x78uLL);
  if ( !Pool || !PoolStackInformation )
    return -1073741811;
  result = ZwQueryInformationWorkerFactory(
             Pool->WorkerFactory,
             WorkerFactoryBasicInformation,
             WorkerFactoryInformation,
             0x78u,
             0LL);
  if ( result >= 0 )
  {
    PoolStackInformation->StackCommit = v7;
    PoolStackInformation->StackReserve = v6;
  }
  return result;
}
