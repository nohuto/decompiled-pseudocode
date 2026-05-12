/*
 * XREFs of NvmeControllerGetIoCommandSetIdentify @ 0x1400EE0A8
 * Callers:
 *     NvmeAdapterFirmwareUpdateIdentifyWorker @ 0x1400D3410 (NvmeAdapterFirmwareUpdateIdentifyWorker.c)
 *     NvmeControllerInitPhase1 @ 0x1400EF9D4 (NvmeControllerInitPhase1.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     BuildIdentifyCommandGeneric @ 0x1400BE880 (BuildIdentifyCommandGeneric.c)
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerGetIoCommandSetIdentify(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  _QWORD *ExtendedCommand; // r14
  int DmaBuffer; // esi
  __int64 v7; // r9
  unsigned __int64 v8; // rbp
  __int64 Pool; // rax
  int v10; // r8d
  int v11; // [rsp+20h] [rbp-58h]
  __int128 v12; // [rsp+50h] [rbp-28h] BYREF

  v12 = 0LL;
  v2 = 0LL;
  ExtendedCommand = (_QWORD *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer(a1, 0x1000u, v3, (void **)&v12, (_QWORD *)&v12 + 1, 0);
  if ( DmaBuffer >= 0 )
  {
    v8 = v12;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 1u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 2u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x40u;
    *(_WORD *)(*ExtendedCommand + 4252LL) = 0;
    *(_QWORD *)(*ExtendedCommand + 4184LL) = 0LL;
    *(_OWORD *)(*ExtendedCommand + 4160LL) = __PAIR128__(*((unsigned __int64 *)&v12 + 1), v8);
    *(_DWORD *)(*ExtendedCommand + 4248LL) = 4096;
    *(_QWORD *)(*ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*ExtendedCommand + 4200LL) = ExtendedCommand;
    BuildIdentifyCommandGeneric(a1, *ExtendedCommand + 4096LL, 6, v7, v11, 0, *((__int64 *)&v12 + 1), -1, 0);
    DmaBuffer = NvmeControllerProcessCommandSync(a1, ExtendedCommand, 1);
    if ( DmaBuffer >= 0 )
    {
      if ( *(_QWORD *)(a1 + 600)
        || (Pool = RaidAllocatePool(64LL, 4096LL, 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL)),
            (*(_QWORD *)(a1 + 600) = Pool) != 0LL) )
      {
        do
        {
          *(_BYTE *)(v2 + *(_QWORD *)(a1 + 600)) = *(_BYTE *)(v2 + v8);
          ++v2;
        }
        while ( v2 < 4 );
        *(_DWORD *)(*(_QWORD *)(a1 + 600) + 4LL) = *(_DWORD *)(v8 + 4);
        *(_QWORD *)(*(_QWORD *)(a1 + 600) + 8LL) = *(_QWORD *)(v8 + 8);
      }
      else
      {
        DmaBuffer = -1073741670;
      }
    }
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer(a1, 4096, v10, v12, *((__int64 *)&v12 + 1));
  return (unsigned int)DmaBuffer;
}
