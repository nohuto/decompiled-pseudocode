/*
 * XREFs of NvmePendingIoDpcRoutine @ 0x14011DB10
 * Callers:
 *     <none>
 * Callees:
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x140122190 (NvmeProcessPendingIoInSpecifiedGroup.c)
 */

void __fastcall NvmePendingIoDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ULONG CurrentProcessorNumber; // eax
  __int64 v6; // rdi
  LARGE_INTEGER v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  char v10; // cl

  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v6 = 8LL * CurrentProcessorNumber;
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(DeferredContext[138] + v6) + 128LL), 0);
  if ( !*((_DWORD *)DeferredContext + 237) )
  {
    if ( (unsigned __int8)NvmeProcessPendingIoInSpecifiedGroup(DeferredContext, CurrentProcessorNumber) )
    {
      v7.QuadPart = -600LL;
    }
    else
    {
      v8 = *(_QWORD *)(v6 + DeferredContext[138]);
      v9 = 0LL;
      if ( !*(_DWORD *)(v8 + 4) )
        return;
      while ( 1 )
      {
        v10 = *(_BYTE *)(*(_QWORD *)(v8 + 8 * v9 + 264) + 72LL);
        *(_BYTE *)(*(_QWORD *)(v8 + 8 * v9 + 264) + 72LL) = 0;
        if ( v10 )
          break;
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 4) )
          return;
      }
      v7.QuadPart = -40LL;
    }
    if ( (!DeferredContext[161] || !*(_DWORD *)DeferredContext[161])
      && !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v6 + DeferredContext[138]) + 128LL), 1, 0) )
    {
      KeSetTimer(
        *(PKTIMER *)(*(_QWORD *)(v6 + DeferredContext[138]) + 16LL),
        v7,
        *(PKDPC *)(*(_QWORD *)(v6 + DeferredContext[138]) + 8LL));
    }
  }
}
