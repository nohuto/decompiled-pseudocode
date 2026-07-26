/*
 * XREFs of NdisMQueueDpc @ 0x140067190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall NdisMQueueDpc(
        NDIS_HANDLE NdisInterruptHandle,
        ULONG MessageId,
        ULONG TargetProcessors,
        PVOID MiniportDpcContext)
{
  __int64 v4; // rax
  unsigned int Number; // ebp
  void *v7; // r13
  unsigned __int64 v8; // rbx
  int v9; // esi
  int v10; // r12d
  unsigned __int64 v11; // r14
  ULONG v12; // edi
  int v13; // r12d
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v15; // r8
  unsigned int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-48h]
  int v19; // [rsp+70h] [rbp+8h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+80h] [rbp+18h] BYREF
  PVOID SystemArgument2; // [rsp+88h] [rbp+20h]

  SystemArgument2 = MiniportDpcContext;
  v4 = *((_QWORD *)NdisInterruptHandle + 12);
  Number = 0;
  v7 = (void *)MessageId;
  v8 = TargetProcessors;
  v9 = 1;
  v18 = 0LL;
  v10 = 0;
  v19 = -1;
  if ( *(_DWORD *)(v4 + 48) || *(_DWORD *)(v4 + 80) )
  {
    v10 = *(_DWORD *)(v4 + 48);
    v18 = *(_QWORD *)(v4 + 40);
    if ( !v18 )
      v18 = *(_QWORD *)(v4 + 40);
  }
  if ( *((_BYTE *)NdisInterruptHandle + 193) )
    v11 = *((_QWORD *)NdisInterruptHandle + 28) + ((unsigned __int64)(MessageId * (ndisMaxNumberOfProcessors + 1)) << 6);
  else
    v11 = *((_QWORD *)NdisInterruptHandle + 14);
  ProcNumber = 0;
  v12 = 0;
  v13 = v10 & 0x1000000;
  if ( v13 )
    Number = KeGetPcr()->Prcb.Number;
  if ( TargetProcessors )
  {
    do
    {
      if ( (v8 & 1) != 0 )
      {
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
        v15 = ProcessorIndexFromNumber;
        if ( ProcessorIndexFromNumber != -1 )
        {
          if ( ProcessorIndexFromNumber != Number && v13 )
          {
            v17 = v19;
            if ( v19 == -1 )
            {
              v17 = KeGetPcr()->Prcb.Number;
              v19 = v17;
            }
            ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * v17 + v18 + 96);
          }
          _InterlockedIncrement((volatile signed __int32 *)NdisInterruptHandle + 26);
          if ( KeInsertQueueDpc((PRKDPC)(v11 + (v15 << 6)), v7, SystemArgument2) )
            v12 |= v9;
          else
            _InterlockedDecrement((volatile signed __int32 *)NdisInterruptHandle + 26);
        }
      }
      ++ProcNumber.Number;
      v9 *= 2;
      v8 >>= 1;
    }
    while ( v8 );
  }
  return v12;
}
