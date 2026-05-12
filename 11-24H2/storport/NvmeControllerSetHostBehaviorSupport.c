/*
 * XREFs of NvmeControllerSetHostBehaviorSupport @ 0x1400C985C
 * Callers:
 *     NvmeControllerInitPhase3 @ 0x1400F0108 (NvmeControllerInitPhase3.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerSetHostBehaviorSupport(__int64 a1, char a2)
{
  _QWORD *ExtendedCommand; // rdi
  __int64 v5; // r8
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // r8d
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v11 = 0LL;
  ExtendedCommand = (_QWORD *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  v7 = NvmeAllocateDmaBuffer(a1, 512LL, v5, &v11, (char *)&v11 + 8, 0);
  if ( v7 >= 0 )
  {
    v8 = v11;
    *(_WORD *)v11 = 256;
    *(_BYTE *)(v8 + 2) = 0;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 1u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 2u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*ExtendedCommand + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
    *(_WORD *)(*ExtendedCommand + 4252LL) = 0;
    *(_QWORD *)(*ExtendedCommand + 4184LL) = 0LL;
    *(_QWORD *)(*ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*ExtendedCommand + 4200LL) = ExtendedCommand;
    *(_OWORD *)(*ExtendedCommand + 4160LL) = v11;
    *(_DWORD *)(*ExtendedCommand + 4248LL) = 512;
    v9 = *ExtendedCommand;
    *(_QWORD *)(v9 + 4120) = *((_QWORD *)&v11 + 1);
    *(_BYTE *)(v9 + 4096) = 9;
    *(_BYTE *)(v9 + 4136) = 22;
    *(_DWORD *)(v9 + 4100) = 0;
    v7 = NvmeControllerProcessCommandSync(a1, ExtendedCommand, a2);
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer(a1, 512, v10, v11, *((__int64 *)&v11 + 1));
  return (unsigned int)v7;
}
