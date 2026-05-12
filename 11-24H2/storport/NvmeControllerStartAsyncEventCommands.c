/*
 * XREFs of NvmeControllerStartAsyncEventCommands @ 0x1400F5140
 * Callers:
 *     NvmeControllerInitPhase3 @ 0x1400F0108 (NvmeControllerInitPhase3.c)
 * Callees:
 *     NvmeControllerGetAERExtendedCommand @ 0x1400EDE38 (NvmeControllerGetAERExtendedCommand.c)
 *     NvmeControllerSendAsyncEventCommand @ 0x1400F4F3C (NvmeControllerSendAsyncEventCommand.c)
 */

__int64 __fastcall NvmeControllerStartAsyncEventCommands(__int64 a1)
{
  _WORD *v1; // rax
  unsigned __int16 v3; // di
  _WORD *AERExtendedCommand; // rax
  __int64 v5; // rax

  v1 = *(_WORD **)(a1 + 1416);
  v3 = 0;
  if ( !v1 || !*v1 )
    return 0LL;
  while ( v3 < **(_WORD **)(a1 + 1416) )
  {
    AERExtendedCommand = (_WORD *)NvmeControllerGetAERExtendedCommand(a1);
    if ( (int)NvmeControllerSendAsyncEventCommand(a1, AERExtendedCommand) < 0 )
    {
      *(_QWORD *)(a1 + 136) |= 0x40000000uLL;
      break;
    }
    ++v3;
  }
  *(_WORD *)(*(_QWORD *)(a1 + 1416) + 2LL) = v3;
  v5 = *(_QWORD *)(a1 + 712);
  *(_BYTE *)(a1 + 742) = v3;
  *(_WORD *)(v5 + 150) = v3;
  return v3;
}
