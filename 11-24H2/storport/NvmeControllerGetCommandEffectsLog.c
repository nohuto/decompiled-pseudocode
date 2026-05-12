/*
 * XREFs of NvmeControllerGetCommandEffectsLog @ 0x1400C7A20
 * Callers:
 *     NvmeAdapterFirmwareUpdateIdentifyWorker @ 0x1400D3410 (NvmeAdapterFirmwareUpdateIdentifyWorker.c)
 *     NvmeControllerInitPhase3 @ 0x1400F0108 (NvmeControllerInitPhase3.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     BuildGetLogPageCommand @ 0x1400BE764 (BuildGetLogPageCommand.c)
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall NvmeControllerGetCommandEffectsLog(_QWORD *a1, char a2)
{
  __int64 *ExtendedCommand; // rsi
  __int64 v6; // r8
  int v7; // edi
  unsigned int v8; // r8d
  __int64 Pool; // rax
  void *v10; // rcx
  int v11; // r8d
  __int128 Src; // [rsp+50h] [rbp-28h] BYREF

  Src = 0LL;
  if ( (*(_BYTE *)(a1[74] + 261LL) & 2) == 0 )
    return 3221225659LL;
  ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  v7 = NvmeAllocateDmaBuffer(a1, 4096LL, v6, &Src, (char *)&Src + 8, 0);
  if ( v7 >= 0 )
  {
    if ( a1[154]
      || (Pool = RaidAllocatePool(64LL, 4096LL, 1380147538LL, *(_QWORD *)(a1[16] + 8LL)), (a1[154] = Pool) != 0LL) )
    {
      LOBYTE(v8) = 5;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
      *(_DWORD *)(*ExtendedCommand + 4256) ^= ((unsigned __int8)*(_DWORD *)(*ExtendedCommand + 4256) ^ (unsigned __int8)(a2 << 6)) & 0x40;
      *(_WORD *)(*ExtendedCommand + 4252) = 0;
      *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
      *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
      *(_OWORD *)(*ExtendedCommand + 4160) = Src;
      *(_DWORD *)(*ExtendedCommand + 4248) = 4096;
      BuildGetLogPageCommand(
        (__int64)a1,
        *ExtendedCommand + 4096,
        v8,
        0x1000u,
        *((__int64 *)&Src + 1),
        -1,
        0LL,
        0,
        *ExtendedCommand,
        ExtendedCommand[1]);
      v7 = NvmeControllerProcessCommandSync((__int64)a1, ExtendedCommand, a2);
    }
    else
    {
      v7 = -1073741670;
    }
  }
  v10 = (void *)a1[154];
  if ( v7 < 0 )
  {
    ExFreePoolWithTag(v10, 0x52436152u);
    a1[154] = 0LL;
  }
  else
  {
    memmove(v10, (const void *)Src, 0x1000uLL);
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer((_DWORD)a1, 4096, v11, Src, *((__int64 *)&Src + 1));
  return (unsigned int)v7;
}
