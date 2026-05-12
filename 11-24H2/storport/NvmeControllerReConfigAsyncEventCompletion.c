/*
 * XREFs of NvmeControllerReConfigAsyncEventCompletion @ 0x1400C9390
 * Callers:
 *     <none>
 * Callees:
 *     NvmeControllerGetAERExtendedCommand @ 0x1400EDE38 (NvmeControllerGetAERExtendedCommand.c)
 *     NvmeControllerSendAsyncEventCommand @ 0x1400F4F3C (NvmeControllerSendAsyncEventCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

void __fastcall NvmeControllerReConfigAsyncEventCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 AERExtendedCommand; // rax

  if ( a2 )
  {
    if ( !*(_QWORD *)(a1 + 1288) || !**(_DWORD **)(a1 + 1288) )
    {
      if ( a3 )
        *(_WORD *)(*(_QWORD *)a2 + 4260LL) = *(_WORD *)(a3 + 14);
      AERExtendedCommand = NvmeControllerGetAERExtendedCommand(a1);
      if ( (int)NvmeControllerSendAsyncEventCommand(a1, AERExtendedCommand) < 0 )
        *(_QWORD *)(a1 + 136) |= 0x40000000uLL;
    }
    _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
    NvmeControllerReclaimExtendedCommand(a1, a2);
  }
}
