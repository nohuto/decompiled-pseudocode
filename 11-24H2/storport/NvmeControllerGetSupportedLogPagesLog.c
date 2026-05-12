/*
 * XREFs of NvmeControllerGetSupportedLogPagesLog @ 0x1400C81A8
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
 */

__int64 __fastcall NvmeControllerGetSupportedLogPagesLog(_QWORD *a1, char a2)
{
  __int64 *ExtendedCommand; // rsi
  __int64 v6; // r8
  int v7; // edi
  __int64 Pool; // rax
  _OWORD *v9; // rcx
  _OWORD *v10; // rax
  __int64 v11; // rdx
  __int128 v12; // xmm1
  int v13; // r8d
  __int128 v14; // [rsp+50h] [rbp-28h] BYREF

  v14 = 0LL;
  if ( (*(_BYTE *)(a1[74] + 261LL) & 0x20) == 0 )
    return 3221225659LL;
  ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  v7 = NvmeAllocateDmaBuffer(a1, 1024LL, v6, &v14, (char *)&v14 + 8, 0);
  if ( v7 >= 0 )
  {
    if ( a1[156]
      || (Pool = RaidAllocatePool(64LL, 1024LL, 1380147538LL, *(_QWORD *)(a1[16] + 8LL)), (a1[156] = Pool) != 0LL) )
    {
      *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
      *(_DWORD *)(*ExtendedCommand + 4256) ^= ((unsigned __int8)*(_DWORD *)(*ExtendedCommand + 4256) ^ (unsigned __int8)(a2 << 6)) & 0x40;
      *(_WORD *)(*ExtendedCommand + 4252) = 0;
      *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
      *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
      *(_OWORD *)(*ExtendedCommand + 4160) = v14;
      *(_DWORD *)(*ExtendedCommand + 4248) = 1024;
      BuildGetLogPageCommand(
        (__int64)a1,
        *ExtendedCommand + 4096,
        0,
        0x400u,
        *((__int64 *)&v14 + 1),
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
  v9 = (_OWORD *)a1[156];
  if ( v7 < 0 )
  {
    ExFreePoolWithTag(v9, 0x52436152u);
    a1[156] = 0LL;
  }
  else
  {
    v10 = (_OWORD *)v14;
    v11 = 8LL;
    do
    {
      *v9 = *v10;
      v9[1] = v10[1];
      v9[2] = v10[2];
      v9[3] = v10[3];
      v9[4] = v10[4];
      v9[5] = v10[5];
      v9[6] = v10[6];
      v9 += 8;
      v12 = v10[7];
      v10 += 8;
      *(v9 - 1) = v12;
      --v11;
    }
    while ( v11 );
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer((_DWORD)a1, 1024, v13, v14, *((__int64 *)&v14 + 1));
  return (unsigned int)v7;
}
