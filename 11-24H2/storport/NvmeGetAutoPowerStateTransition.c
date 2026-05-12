/*
 * XREFs of NvmeGetAutoPowerStateTransition @ 0x1400CAB0C
 * Callers:
 *     NvmeControllerPowerInitialize @ 0x1400F2558 (NvmeControllerPowerInitialize.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeGetAutoPowerStateTransition(__int64 a1)
{
  _QWORD *ExtendedCommand; // rdi
  __int64 v3; // r8
  int v5; // esi
  __int64 v6; // rax
  int v7; // r8d
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0LL;
  ExtendedCommand = (_QWORD *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  v5 = NvmeAllocateDmaBuffer(a1, 256LL, v3, &v8, (char *)&v8 + 8, 0);
  if ( v5 >= 0 )
  {
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 1u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 2u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x40u;
    *(_WORD *)(*ExtendedCommand + 4252LL) = 0;
    *(_QWORD *)(*ExtendedCommand + 4184LL) = 0LL;
    *(_QWORD *)(*ExtendedCommand + 4192LL) = NvmeGetAutoPowerStateTransitionCompletion;
    *(_QWORD *)(*ExtendedCommand + 4200LL) = ExtendedCommand;
    *(_OWORD *)(*ExtendedCommand + 4160LL) = v8;
    *(_DWORD *)(*ExtendedCommand + 4248LL) = 256;
    v6 = *ExtendedCommand;
    *(_QWORD *)(v6 + 4120) = *((_QWORD *)&v8 + 1);
    *(_BYTE *)(v6 + 4096) = 10;
    *(_BYTE *)(v6 + 4136) = 12;
    v5 = NvmeControllerProcessCommandSync(a1, ExtendedCommand, 1);
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer(a1, 256, v7, v8, *((__int64 *)&v8 + 1));
  return (unsigned int)v5;
}
