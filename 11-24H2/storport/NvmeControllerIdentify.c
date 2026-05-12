/*
 * XREFs of NvmeControllerIdentify @ 0x1400EF360
 * Callers:
 *     NvmeAdapterFirmwareUpdateIdentifyWorker @ 0x1400D3410 (NvmeAdapterFirmwareUpdateIdentifyWorker.c)
 *     NvmeControllerInitPhase1 @ 0x1400EF9D4 (NvmeControllerInitPhase1.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall NvmeControllerIdentify(__int64 a1)
{
  _QWORD *ExtendedCommand; // rsi
  __int64 v3; // r8
  int DmaBuffer; // edi
  void *v6; // rax
  __int64 v7; // rcx
  void *Pool; // rax
  int v9; // r8d
  void *Src[3]; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)Src = 0LL;
  ExtendedCommand = (_QWORD *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer(a1, 0x1000u, v3, Src, &Src[1], 0);
  if ( DmaBuffer >= 0 )
  {
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 1u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 2u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x40u;
    *(_WORD *)(*ExtendedCommand + 4252LL) = 0;
    *(_QWORD *)(*ExtendedCommand + 4184LL) = 0LL;
    *(_QWORD *)(*ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*ExtendedCommand + 4200LL) = ExtendedCommand;
    *(void **)(*ExtendedCommand + 4160LL) = Src[0];
    *(void **)(*ExtendedCommand + 4168LL) = Src[1];
    *(_DWORD *)(*ExtendedCommand + 4248LL) = 4096;
    v6 = Src[1];
    v7 = *ExtendedCommand + 4096LL;
    *(_BYTE *)v7 = 6;
    *(_DWORD *)(v7 + 4) = 0;
    *(_QWORD *)(v7 + 24) = v6;
    *(_BYTE *)(v7 + 40) = 1;
    DmaBuffer = NvmeControllerProcessCommandSync(a1, ExtendedCommand, 1);
    if ( DmaBuffer >= 0 )
    {
      Pool = *(void **)(a1 + 592);
      if ( Pool
        || (Pool = (void *)RaidAllocatePool(64LL, 4096LL, 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL)),
            (*(_QWORD *)(a1 + 592) = Pool) != 0LL) )
      {
        memmove(Pool, Src[0], 0x1000uLL);
      }
      else
      {
        DmaBuffer = -1073741670;
      }
    }
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer(a1, 4096, v9, Src[0], (__int64)Src[1]);
  return (unsigned int)DmaBuffer;
}
