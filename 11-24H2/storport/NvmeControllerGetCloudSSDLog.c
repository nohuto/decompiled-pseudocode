/*
 * XREFs of NvmeControllerGetCloudSSDLog @ 0x1400C77C0
 * Callers:
 *     StorpTelemetrySendNvmeControllerHealthInfo @ 0x1400BA758 (StorpTelemetrySendNvmeControllerHealthInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     BuildGetLogPageCommand @ 0x1400BE764 (BuildGetLogPageCommand.c)
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerGetCloudSSDLog(_QWORD *a1)
{
  __int64 *ExtendedCommand; // rsi
  __int64 v3; // r8
  int v5; // edi
  unsigned int v6; // r8d
  __int64 Pool; // rax
  _OWORD *v8; // rax
  _OWORD *v9; // rcx
  __int64 v10; // r8
  __int128 v11; // xmm1
  int v12; // r8d
  __int128 v13; // [rsp+50h] [rbp-18h] BYREF

  v13 = 0LL;
  ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  v5 = NvmeAllocateDmaBuffer(a1, 512LL, v3, &v13, (char *)&v13 + 8, 0);
  if ( v5 >= 0 )
  {
    if ( a1[159]
      || (Pool = RaidAllocatePool(64LL, 512LL, 1380147538LL, *(_QWORD *)(a1[16] + 8LL)), (a1[159] = Pool) != 0LL) )
    {
      LOBYTE(v6) = -64;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 0x40u;
      *(_WORD *)(*ExtendedCommand + 4252) = 0;
      *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
      *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
      *(_OWORD *)(*ExtendedCommand + 4160) = v13;
      *(_DWORD *)(*ExtendedCommand + 4248) = 512;
      BuildGetLogPageCommand(
        (__int64)a1,
        *ExtendedCommand + 4096,
        v6,
        0x200u,
        *((__int64 *)&v13 + 1),
        -1,
        0LL,
        0,
        *ExtendedCommand,
        ExtendedCommand[1]);
      v5 = NvmeControllerProcessCommandSync((__int64)a1, ExtendedCommand, 1);
      if ( v5 >= 0 )
      {
        v8 = (_OWORD *)a1[159];
        v9 = (_OWORD *)v13;
        v10 = 4LL;
        do
        {
          *v8 = *v9;
          v8[1] = v9[1];
          v8[2] = v9[2];
          v8[3] = v9[3];
          v8[4] = v9[4];
          v8[5] = v9[5];
          v8[6] = v9[6];
          v8 += 8;
          v11 = v9[7];
          v9 += 8;
          *(v8 - 1) = v11;
          --v10;
        }
        while ( v10 );
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  a1[17] |= 0x4000000000uLL;
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer((_DWORD)a1, 512, v12, v13, *((__int64 *)&v13 + 1));
  return (unsigned int)v5;
}
