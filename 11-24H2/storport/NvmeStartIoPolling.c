/*
 * XREFs of NvmeStartIoPolling @ 0x140125F10
 * Callers:
 *     NvmeSendSplitIo @ 0x140124340 (NvmeSendSplitIo.c)
 *     NvmeSubmitIoToSQ @ 0x140126050 (NvmeSubmitIoToSQ.c)
 *     NvmeControllerSubmitCommandToSQ @ 0x140129E50 (NvmeControllerSubmitCommandToSQ.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeStartIoPolling(_QWORD *SystemArgument2, __int64 a2, ULONG ProcessorIndexFromNumber)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  PRKDPC *v8; // rdx
  _BYTE ProcNumber[6]; // [rsp+30h] [rbp+8h] BYREF

  v4 = SystemArgument2[108] + ((unsigned __int64)*(unsigned __int16 *)(a2 + 138) << 7);
  *(_DWORD *)ProcNumber = 0;
  if ( *(_BYTE *)(v4 - 48) && !*((_BYTE *)SystemArgument2 + 1228) && !*(_DWORD *)SystemArgument2[161] )
  {
    if ( *(_DWORD *)(SystemArgument2[131] + 36LL)
      && (v5 = *(_QWORD *)(8LL * ProcessorIndexFromNumber + *(_QWORD *)(v4 - 40)), *(_QWORD *)(v5 + 16)) )
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)v5, 1, 0) )
        ExSetTimer(
          *(_QWORD *)(*(_QWORD *)(8LL * ProcessorIndexFromNumber + *(_QWORD *)(v4 - 40)) + 16LL),
          *(int *)(v4 - 44),
          0LL,
          0LL);
    }
    else
    {
      if ( (*(_DWORD *)(SystemArgument2[217] + 12LL) & 0x10) != 0 )
      {
        v6 = *((_QWORD *)g_CpuInfo + 4) + 56LL * ProcessorIndexFromNumber;
        if ( *(_QWORD *)(v6 + 8) )
        {
          *(_WORD *)ProcNumber = *(_WORD *)(v6 + 16);
          _BitScanForward64(&v7, *(_QWORD *)(v6 + 8));
          *(_DWORD *)&ProcNumber[2] = v7;
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)ProcNumber);
        }
      }
      v8 = *(PRKDPC **)(*(_QWORD *)(v4 - 40) + 8LL * ProcessorIndexFromNumber);
      KeInsertQueueDpc(v8[3], v8, SystemArgument2);
    }
  }
}
