/*
 * XREFs of TpCallbackMayRunLong @ 0x180043D00
 * Callers:
 *     RtlpTpWorkCallback @ 0x18003D6C0 (RtlpTpWorkCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x180043350 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x18007FCA0 (TppAlpcpExecuteCallback.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x180043E20 (TppFastAlpcAdjustConcurrencyCount.c)
 *     NtSetInformationWorkerFactory @ 0x180166830 (NtSetInformationWorkerFactory.c)
 */

NTSTATUS __cdecl TpCallbackMayRunLong(PTP_CALLBACK_INSTANCE Instance)
{
  _TPP_CLEANUP_GROUP_MEMBER *CleanupGroupMember; // rbx
  _TP_POOL *Pool; // rbx
  signed __int32 v4; // edi
  signed __int64 Exchange; // rax
  signed __int64 v6; // rtt
  _TP_ALPC *AlpcWorkItem; // rcx
  NTSTATUS result; // eax
  int v9; // edx
  NTSTATUS v10; // ecx
  int WorkerFactoryInformation; // [rsp+30h] [rbp+8h] BYREF
  signed __int64 v12; // [rsp+38h] [rbp+10h]

  if ( !Instance || Instance->CallbackRunType )
  {
    TppRaiseInvalidParameter();
LABEL_20:
    v10 = -1073741811;
    v9 = -1073741811;
    goto LABEL_15;
  }
  CleanupGroupMember = Instance->CleanupGroupMember;
  if ( CleanupGroupMember )
    Pool = CleanupGroupMember->Pool;
  else
    Pool = Instance->Pool;
  if ( !Pool )
    goto LABEL_20;
  if ( TppPoolpSerializedPool != Pool )
  {
    v4 = _InterlockedDecrement(&Pool->AvailableWorkerCount);
    _InterlockedIncrement(&Pool->LongRunningWorkerCount);
    _m_prefetchw((const void *)&Pool->QueueState);
    Exchange = Pool->QueueState.Exchange;
    v12 = Exchange;
    do
    {
      LODWORD(v12) = ((__int16)Exchange + 1) ^ (Exchange ^ ((__int16)Exchange + 1)) & 0xFFFF0000;
      v6 = Exchange;
      Exchange = _InterlockedCompareExchange64(&Pool->QueueState.Exchange, v12, Exchange);
      v12 = Exchange;
    }
    while ( v6 != Exchange );
    Instance->CallbackEpilogFlags |= 0x10u;
    AlpcWorkItem = Instance->AlpcWorkItem;
    Instance->CallbackRunType = TppCallbackRunTypeLong;
    if ( AlpcWorkItem )
      TppFastAlpcAdjustConcurrencyCount(AlpcWorkItem);
    result = 0;
    if ( !v4 )
    {
      WorkerFactoryInformation = 1;
      return NtSetInformationWorkerFactory(
               Pool->WorkerFactory,
               WorkerFactoryCallbackType,
               &WorkerFactoryInformation,
               4u);
    }
    return result;
  }
  v9 = -1073741637;
  v10 = -1073741637;
LABEL_15:
  result = 0;
  if ( v9 != -1073741637 )
    return v10;
  return result;
}
