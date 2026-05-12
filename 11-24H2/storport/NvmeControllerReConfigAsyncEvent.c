/*
 * XREFs of NvmeControllerReConfigAsyncEvent @ 0x1400C9230
 * Callers:
 *     NvmeControllerGetLogPageCompletionForAER @ 0x1400EE2B0 (NvmeControllerGetLogPageCompletionForAER.c)
 * Callees:
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerProcessCommand @ 0x140129520 (NvmeControllerProcessCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerReConfigAsyncEvent(__int64 a1)
{
  __int64 ExtendedCommand; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // esi

  if ( *(_QWORD *)(a1 + 1288) && **(_DWORD **)(a1 + 1288) )
    return 3221225860LL;
  ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
  v4 = ExtendedCommand;
  if ( !ExtendedCommand )
    return 3221225626LL;
  v5 = ExtendedCommand;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~0x40u;
  *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerReConfigAsyncEventCompletion;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
  v6 = *(_QWORD *)ExtendedCommand;
  *(_DWORD *)(v6 + 4140) = *(_DWORD *)(a1 + 1224);
  *(_BYTE *)(v6 + 4096) = 9;
  *(_BYTE *)(v6 + 4136) = 11;
  v7 = NvmeControllerProcessCommand(a1, v5);
  if ( v7 < 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)v4 + 4256LL), 3u);
    NvmeControllerReclaimExtendedCommand(a1, v4);
  }
  return (unsigned int)v7;
}
