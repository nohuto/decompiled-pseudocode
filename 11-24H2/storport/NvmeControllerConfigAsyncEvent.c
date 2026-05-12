/*
 * XREFs of NvmeControllerConfigAsyncEvent @ 0x1400C8A10
 * Callers:
 *     NvmeControllerInitPhase3 @ 0x1400F0108 (NvmeControllerInitPhase3.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerConfigAsyncEvent(__int64 a1)
{
  __int64 v1; // rbp
  __int64 ExtendedCommand; // rax
  __int64 *v4; // rdi
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rax
  int v9; // ebp

  v1 = *(_QWORD *)(a1 + 592);
  ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
  v4 = (__int64 *)ExtendedCommand;
  if ( !ExtendedCommand )
    return 3221225626LL;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x40u;
  *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
  v6 = *(_QWORD *)(a1 + 1048);
  v7 = *(_DWORD *)(v1 + 92) & 0x300 | ((*(_BYTE *)(v1 + 261) & 8) << 7) | 0x1F;
  if ( v6 )
    v7 &= *(_DWORD *)(v6 + 28);
  v8 = *v4;
  *(_BYTE *)(v8 + 4096) = 9;
  *(_BYTE *)(v8 + 4136) = 11;
  *(_DWORD *)(v8 + 4140) = v7;
  v9 = NvmeControllerProcessCommandSync(a1, v4, 1);
  if ( v9 >= 0 )
    *(_DWORD *)(a1 + 1224) = v7;
  NvmeControllerReclaimExtendedCommand(a1, v4);
  return (unsigned int)v9;
}
