/*
 * XREFs of NvmeControllerGetFeatureIdentifiersSupportedLog @ 0x1400C7C64
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

__int64 __fastcall NvmeControllerGetFeatureIdentifiersSupportedLog(_QWORD *a1, char a2)
{
  __int64 *ExtendedCommand; // rsi
  __int64 v6; // r8
  int v7; // edi
  unsigned int v8; // r8d
  __int64 Pool; // rax
  _OWORD *v10; // rcx
  _OWORD *v11; // rax
  __int64 v12; // rdx
  __int128 v13; // xmm1
  int v14; // r8d
  __int128 v15; // [rsp+50h] [rbp-28h] BYREF

  v15 = 0LL;
  if ( (*(_BYTE *)(a1[74] + 261LL) & 0x20) == 0 )
    return 3221225659LL;
  ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  v7 = NvmeAllocateDmaBuffer(a1, 1024LL, v6, &v15, (char *)&v15 + 8, 0);
  if ( v7 >= 0 )
  {
    if ( a1[157]
      || (Pool = RaidAllocatePool(64LL, 1024LL, 1380147538LL, *(_QWORD *)(a1[16] + 8LL)), (a1[157] = Pool) != 0LL) )
    {
      LOBYTE(v8) = 18;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
      *(_DWORD *)(*ExtendedCommand + 4256) ^= ((unsigned __int8)*(_DWORD *)(*ExtendedCommand + 4256) ^ (unsigned __int8)(a2 << 6)) & 0x40;
      *(_WORD *)(*ExtendedCommand + 4252) = 0;
      *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
      *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
      *(_OWORD *)(*ExtendedCommand + 4160) = v15;
      *(_DWORD *)(*ExtendedCommand + 4248) = 1024;
      BuildGetLogPageCommand(
        (__int64)a1,
        *ExtendedCommand + 4096,
        v8,
        0x400u,
        *((__int64 *)&v15 + 1),
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
  v10 = (_OWORD *)a1[157];
  if ( v7 < 0 )
  {
    ExFreePoolWithTag(v10, 0x52436152u);
    a1[157] = 0LL;
  }
  else
  {
    v11 = (_OWORD *)v15;
    v12 = 8LL;
    do
    {
      *v10 = *v11;
      v10[1] = v11[1];
      v10[2] = v11[2];
      v10[3] = v11[3];
      v10[4] = v11[4];
      v10[5] = v11[5];
      v10[6] = v11[6];
      v10 += 8;
      v13 = v11[7];
      v11 += 8;
      *(v10 - 1) = v13;
      --v12;
    }
    while ( v12 );
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer((_DWORD)a1, 1024, v14, v15, *((__int64 *)&v15 + 1));
  return (unsigned int)v7;
}
