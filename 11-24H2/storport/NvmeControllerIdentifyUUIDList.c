/*
 * XREFs of NvmeControllerIdentifyUUIDList @ 0x1400EF538
 * Callers:
 *     NvmeControllerInitPhase1 @ 0x1400EF9D4 (NvmeControllerInitPhase1.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     BuildIdentifyCommandGeneric @ 0x1400BE880 (BuildIdentifyCommandGeneric.c)
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerSupportsUUIDList @ 0x1400BF638 (NvmeControllerSupportsUUIDList.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall NvmeControllerIdentifyUUIDList(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *ExtendedCommand; // rsi
  __int64 v5; // r8
  int DmaBuffer; // edi
  __int64 v7; // r9
  const void *v8; // rbp
  void *Pool; // rax
  int v10; // r8d
  int v11; // [rsp+20h] [rbp-58h]
  __int128 Src; // [rsp+50h] [rbp-28h] BYREF

  Src = 0LL;
  if ( !NvmeControllerSupportsUUIDList(a1) )
    return 3221225659LL;
  ExtendedCommand = (_QWORD *)NvmeControllerGetExtendedCommand(v2);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer(a1, 0x1000u, v5, (void **)&Src, (_QWORD *)&Src + 1, 0);
  if ( DmaBuffer >= 0 )
  {
    v8 = (const void *)Src;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 1u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 2u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x40u;
    *(_WORD *)(*ExtendedCommand + 4252LL) = 0;
    *(_QWORD *)(*ExtendedCommand + 4184LL) = 0LL;
    *(_OWORD *)(*ExtendedCommand + 4160LL) = __PAIR128__(*((unsigned __int64 *)&Src + 1), (unsigned __int64)v8);
    *(_DWORD *)(*ExtendedCommand + 4248LL) = 4096;
    *(_QWORD *)(*ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*ExtendedCommand + 4200LL) = ExtendedCommand;
    BuildIdentifyCommandGeneric(a1, *ExtendedCommand + 4096LL, 23, v7, v11, 0, *((__int64 *)&Src + 1), 0, 0);
    DmaBuffer = NvmeControllerProcessCommandSync(a1, ExtendedCommand, 1);
    if ( DmaBuffer >= 0 )
    {
      Pool = *(void **)(a1 + 1056);
      if ( Pool
        || (Pool = (void *)RaidAllocatePool(64LL, 4096LL, 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL)),
            (*(_QWORD *)(a1 + 1056) = Pool) != 0LL) )
      {
        memmove(Pool, v8, 0x1000uLL);
      }
      else
      {
        DmaBuffer = -1073741670;
      }
    }
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer(a1, 4096, v10, Src, *((__int64 *)&Src + 1));
  return (unsigned int)DmaBuffer;
}
