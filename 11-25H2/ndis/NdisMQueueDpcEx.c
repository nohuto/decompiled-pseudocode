/*
 * XREFs of NdisMQueueDpcEx @ 0x140062990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall NdisMQueueDpcEx(
        NDIS_HANDLE NdisInterruptHandle,
        ULONG MessageId,
        PGROUP_AFFINITY TargetProcessors,
        PVOID MiniportDpcContext)
{
  __int64 v4; // rax
  unsigned int Number; // ebp
  void *v7; // r13
  __int64 v8; // rdi
  int v9; // r12d
  unsigned __int64 v10; // r15
  KAFFINITY v11; // rsi
  unsigned __int64 Mask; // rbx
  int v13; // r12d
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v15; // r8
  unsigned int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-48h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+70h] [rbp+8h] BYREF
  int v20; // [rsp+80h] [rbp+18h]
  PVOID SystemArgument2; // [rsp+88h] [rbp+20h]

  SystemArgument2 = MiniportDpcContext;
  v4 = *((_QWORD *)NdisInterruptHandle + 12);
  Number = 0;
  v7 = (void *)MessageId;
  v8 = 1LL;
  v18 = 0LL;
  v9 = 0;
  v20 = -1;
  if ( *(_DWORD *)(v4 + 48) || *(_DWORD *)(v4 + 80) )
  {
    v9 = *(_DWORD *)(v4 + 48);
    v18 = *(_QWORD *)(v4 + 40);
    if ( !v18 )
      v18 = *(_QWORD *)(v4 + 40);
  }
  if ( *((_BYTE *)NdisInterruptHandle + 193) )
    v10 = *((_QWORD *)NdisInterruptHandle + 28) + ((unsigned __int64)(MessageId * (ndisMaxNumberOfProcessors + 1)) << 6);
  else
    v10 = *((_QWORD *)NdisInterruptHandle + 14);
  v11 = 0LL;
  Mask = TargetProcessors->Mask;
  ProcNumber.Group = TargetProcessors->Group;
  *(_WORD *)&ProcNumber.Number = 0;
  v13 = v9 & 0x1000000;
  if ( v13 )
    Number = KeGetPcr()->Prcb.Number;
  for ( ; Mask; Mask >>= 1 )
  {
    if ( (Mask & 1) != 0 )
    {
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      v15 = ProcessorIndexFromNumber;
      if ( ProcessorIndexFromNumber != -1 )
      {
        if ( ProcessorIndexFromNumber != Number && v13 )
        {
          v17 = v20;
          if ( v20 == -1 )
          {
            v17 = KeGetPcr()->Prcb.Number;
            v20 = v17;
          }
          ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * v17 + v18 + 96);
        }
        _InterlockedIncrement((volatile signed __int32 *)NdisInterruptHandle + 26);
        if ( KeInsertQueueDpc((PRKDPC)(v10 + (v15 << 6)), v7, SystemArgument2) )
          v11 |= v8;
        else
          _InterlockedDecrement((volatile signed __int32 *)NdisInterruptHandle + 26);
      }
    }
    ++ProcNumber.Number;
    v8 *= 2LL;
  }
  return v11;
}
