/*
 * XREFs of NvmeIoPollingDpcRoutine @ 0x14011C900
 * Callers:
 *     <none>
 * Callees:
 *     IsOutstandingRequestInNvmeControllerQueue @ 0x1400CB764 (IsOutstandingRequestInNvmeControllerQueue.c)
 *     NvmeCompletionDpcRoutine @ 0x14011A4A0 (NvmeCompletionDpcRoutine.c)
 */

void __fastcall NvmeIoPollingDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        _QWORD *SystemArgument1,
        _BYTE *SystemArgument2)
{
  __int64 v4; // r14
  ULONG CurrentProcessorNumber; // eax
  char v9; // r8
  _QWORD *v10; // r13
  __int64 v11; // rbp
  unsigned __int64 v12; // rsi
  KIRQL v13; // bl
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  PRKDPC *v18; // rdx
  _BYTE ProcNumber[6]; // [rsp+60h] [rbp+18h] BYREF

  v4 = SystemArgument1[1];
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v9 = SystemArgument2[1228];
  v10 = g_CpuInfo;
  v11 = CurrentProcessorNumber;
  *(_DWORD *)ProcNumber = 0;
  if ( !v9 && !**((_DWORD **)SystemArgument2 + 161) )
  {
    v12 = *((_QWORD *)SystemArgument2 + 108) + ((unsigned __int64)*(unsigned __int16 *)(v4 + 138) << 7);
    if ( (*(_WORD *)(*(_QWORD *)(v12 - 128) + 16LL * *(unsigned __int16 *)(v12 - 94) + 14) & 1) != *(_WORD *)(v12 - 92) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)SystemArgument2 + 217) + 12LL) & 2) != 0 )
      {
        NvmeCompletionDpcRoutine(Dpc, DeferredContext, (volatile signed __int32 *)(v12 - 128), SystemArgument2);
      }
      else
      {
        v13 = KfRaiseIrql(2u);
        NvmeCompletionDpcRoutine(Dpc, DeferredContext, (volatile signed __int32 *)(v12 - 128), SystemArgument2);
        KeLowerIrql(v13);
      }
    }
    if ( IsOutstandingRequestInNvmeControllerQueue((__int64)SystemArgument2, v4) )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(v12 - 40) + 8 * v11);
      if ( *(_QWORD *)(v14 + 16) && (*(_DWORD *)(*((_QWORD *)SystemArgument2 + 131) + 76LL) & 0x200) != 0 )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)v14, 1, 0) )
          ExSetTimer(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 - 40) + 8 * v11) + 16LL), *(int *)(v12 - 44), 0LL, 0LL);
      }
      else
      {
        if ( (*(_DWORD *)(*((_QWORD *)SystemArgument2 + 217) + 12LL) & 0x10) != 0 )
        {
          v15 = v10[4];
          v16 = 56 * v11;
          if ( *(_QWORD *)(56 * v11 + v15 + 8) )
          {
            *(_WORD *)ProcNumber = *(_WORD *)(v16 + v15 + 16);
            _BitScanForward64(&v17, *(_QWORD *)(v16 + v10[4] + 8));
            *(_DWORD *)&ProcNumber[2] = v17;
            LODWORD(v11) = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)ProcNumber);
          }
        }
        v18 = *(PRKDPC **)(*(_QWORD *)(v12 - 40) + 8LL * (unsigned int)v11);
        KeInsertQueueDpc(v18[3], v18, SystemArgument2);
      }
    }
  }
}
