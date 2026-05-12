/*
 * XREFs of NvmeControllerSetHostIdentifier @ 0x1400C9A0C
 * Callers:
 *     NvmeControllerInitPhase3 @ 0x1400F0108 (NvmeControllerInitPhase3.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall NvmeControllerSetHostIdentifier(__int64 a1, char a2)
{
  char *v2; // r8
  int DmaBuffer; // esi
  _QWORD *ExtendedCommand; // rdi
  char v7; // dl
  __int64 v8; // r8
  __int64 v10; // rdx
  int v11; // eax
  char v12; // cl
  int v13; // r8d
  void *v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = *(char **)(a1 + 1280);
  DmaBuffer = -1073741823;
  ExtendedCommand = 0LL;
  *(_OWORD *)v14 = 0LL;
  if ( v2 )
  {
    v7 = *v2;
    if ( (*v2 & 1) != 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 592) + 96LL) & 1) != 0 && (v7 & 2) != 0 )
        *v2 = v7 | 8;
      ExtendedCommand = (_QWORD *)NvmeControllerGetExtendedCommand(a1);
      if ( !ExtendedCommand )
        return 3221225626LL;
      DmaBuffer = NvmeAllocateDmaBuffer(a1, 16LL, v8, v14, &v14[1], 0);
      if ( DmaBuffer >= 0 )
      {
        *(_DWORD *)(*ExtendedCommand + 4256LL) |= 1u;
        *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x20u;
        *(_DWORD *)(*ExtendedCommand + 4256LL) |= 2u;
        *(_DWORD *)(*ExtendedCommand + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*ExtendedCommand + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
        *(_WORD *)(*ExtendedCommand + 4252LL) = 0;
        *(_QWORD *)(*ExtendedCommand + 4184LL) = 0LL;
        *(_QWORD *)(*ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
        *(_QWORD *)(*ExtendedCommand + 4200LL) = ExtendedCommand;
        *(void **)(*ExtendedCommand + 4160LL) = v14[0];
        *(void **)(*ExtendedCommand + 4168LL) = v14[1];
        *(_DWORD *)(*ExtendedCommand + 4248LL) = 16;
        memmove(v14[0], (const void *)(*(_QWORD *)(a1 + 1280) + 1LL), (**(_BYTE **)(a1 + 1280) & 8) != 0 ? 16LL : 8LL);
        v10 = *ExtendedCommand;
        v11 = *(_DWORD *)(*ExtendedCommand + 4140LL);
        v12 = v11 ^ (**(_BYTE **)(a1 + 1280) >> 3);
        *(void **)(v10 + 4120) = v14[1];
        *(_BYTE *)(v10 + 4096) = 9;
        *(_BYTE *)(v10 + 4136) = -127;
        *(_DWORD *)(v10 + 4140) = v11 ^ v12 & 1;
        DmaBuffer = NvmeControllerProcessCommandSync(a1, ExtendedCommand, a2);
        if ( DmaBuffer >= 0 )
          **(_BYTE **)(a1 + 1280) |= 4u;
      }
    }
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer(a1, 16, v13, v14[0], (__int64)v14[1]);
  return (unsigned int)DmaBuffer;
}
